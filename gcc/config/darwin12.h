/* Target definitions for Darwin (Mac OS X) systems.
   Copyright (C) 2009-2015 Free Software Foundation, Inc.
   Contributed by Jack Howarth <howarth.at.gcc@gmail.com>.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#undef  DARWIN_PRE_SYSLIB_SPEC
#define DARWIN_PRE_SYSLIB_SPEC \
"%:version-compare(>= 10.6 mmacosx-version-min= -no_compact_unwind) \
 %{fno-pic|fno-PIC|fno-pie|fno-PIE|fapple-kext|mkernel|static|mdynamic-no-pic: \
   %:version-compare(>= 10.7 mmacosx-version-min= -no_pie) } \
  %{rdynamic:-export_dynamic} %<rdynamic "

#undef  LINK_GCC_C_SEQUENCE_SPEC
#define LINK_GCC_C_SEQUENCE_SPEC \
 "%{!nostdlib:%:version-compare(>< 10.6 10.7 mmacosx-version-min= -ld10-uwfef.o)} \
  %L "

#undef DEF_MIN_OSX_VERSION
#define DEF_MIN_OSX_VERSION "10.8"
