
WHAT
====

This branch is the current release of my changes for Darwin from the GCC 5.3 branch.

It contains a number of back-ports for fixes on the GCC trunk and some changes/additions that would not be appropriate for application to the upstream GCC-5 branch.

Release : gcc-darwin-5-3r2

NOTE: configuration changes/improvements are being trialled here, but intended for submission to trunk at some stage.

Changes
=======

5.3r1
Allowed for a build of powerpc-apple-darwin10 (strictly ppc7400 is only supported by Rosetta).

Back-ported the proposed fix for PR57438 to avoid empty function bodies;
This was preventing optimised builds of some code that contained asserts resulting in function bodies containing only unreachable code.

5.3r2

 Fix up libatomic configury to save the CFLAGS properly (previously, they were being overwritten by other configuration macros).  This causes configure fails for 32b targets supporting an m64 multilib, where the 32b cpu is incorrectly presented in the configuration of the 64b multilib (and can't do 64b insns, obviously).
  
 Fixed a problem with gnu-objc headers that only shows up when using sysroots.
 
 The LTO wrappers for ar, nm and ranlib are built and installed regardless of whether the target supports an LTO plugin.  This causes --version and --help to fail on those (since the liblto_plugin.so is not present).  Changed the code to skip looking for the pluign (and reporting it to the called tools) when there's no plugin built.
 
 Most of the remaining changes here are related to building stand-alone toolchains (including their own set of 'binutils' and SDK) that make no assumption that there are headers installed in '/' or even that XCode is installed at all.
 
 - Remove -apple- from some of the configuration triples to allow (for example) i686-none-darwin.  Useful, to be able to build co-installed toolchains with different properties.
 
 - Re-work the configuration and target headers to better support building "<arch>-apple-darwin".  I.E. removed configuration dependency on NN in darwinNN (mostly by doing configury checks for linker features).
 
 - Provide a --with-default-mmacosx-version-min configuration parameter, so that a toolchain may be configured to host on DarwinNN but will always default to targeting the defined version.  Unless this is used; the default target will == host, and thus change depending on where the toolchain is deployed.  This was fine when '/' is the "sysroot" and one is only targeting the same machine; however the trend is to move away from that and thus toolchains need to refer to a sysroot/SDK installed in a defined place/manner.

 - Provide an example config fragment (bootstrap-d10.mk) that will cause the toolchain to be built to host on minimum OS X 10.6 (Darwin10), regardless of the build host.
 
 - Default x86_64 to Darwin10;


Differences from "upstream"
===========================


There are a number of significant differences to the "upstream" (which is the 'master' branch in this repository).

1. Back-ports
 - improved '-arch' flag handling
 - handling for sysroots, and system version detection.
 - correct support for handling _environ.
 - PR67963
 - proposed fix for PR67710

2. Splitting of Hot/Cold partitioning code.
 - ld64 (the Darwin static linker) splits up code into so-called 'atoms' based on symbols that it can identify.  Hot/cold partitioning produces cases where blobs of code might start without a ld-visible symbol.  This patch modifies the emission scheme to avoid that (and makes the asm a bit more tidy in the process).
 
3. Draft of libatomic for Darwin.
 - This uses Darwin-specific idioms in place of the generic pthread-based posix ones.

4. Revise libgcc and emulated TLS extension.

 - currently we are forced to provide a shared "extension" libgcc library for Darwin which contains the emulated TLS support (and updated library implementations for built-ins).
 - This creates both packaging and testing issues.

 a) Split out the handler for emulated TLS.
  - This is now provided as a crt in two forms:
   ( i) weak - for shared libraries and bundles
   (ii) strong - for the main executable.

 b) Don't build the unwinder for Darwin >= 10 (OS X 10.6).
  - These systems no longer use the unwinder in shared libgcc  (it is now in /usr/lib/system/libunwind.dylib)
  - the presence of a second unwinder in libgcc extension is problematic in testing.

 c) Don't build a shared extension lib any more.
  - It's not needed now and only makes packaging harder.

 d) Provide the special X86-Darwin10 Unwinder add on (used by Java) as a crt.

4. Support -static-libstdc++
  - It makes packaging easier when providing build objects for folks who won't typically have GCC installed.  Of course, it's still possible to package a shared lib into an application bundle too.

5. Better detection of 'as' capabilites (including the ability to detect if we are using GAS - the subject of a parallel work)

6. Various other tweaks to improve behaviour or source-level compatability
 - see the commit notes.

PRE-REQUISITES
==============

The pre-requisites are the same as for "upstream" GCC
(see https://gcc.gnu.org/install/prerequisites.html)

Apart from the dependent libs, all Darwin versions >= 9 (OS X 10.5) have adequate tools to bootstrap the compiler. NOTE: I use gcc-4.2/g++-4.2 as the native bootstrap compiler on Darwin9/10.  For Darwin8 (OS X 10.4), it might be necessary to build this (gcc-4.2) and odcctools to support enough modern idioms.

Testing has been done with:
  gmp 6.1.0
  mpfr 3.1.3
  mpc 1.0.3
  
I recommend building the pre-req libraries as "static" convenience libs, so that the resulting toolchain doesn't have shared library deps.

To test you will need
 - dejagnu (recommend 1.5.3) 

You might well find testing more stable (especially on darwin9) if you re-build expect (see https://github.com/iains/darwin-expect) and use tcl8.6 which has a better stack usage.

HOW TO BUILD
============

No special requirements (see https://gcc.gnu.org/install/) 
(just the recommendation to use static versions of the pre-req libs).

