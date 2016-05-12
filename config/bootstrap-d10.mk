
# bootstrap for Darwin10 host, on any system
CFLAGS += -mmacosx-version-min=10.6
CXXFLAGS += -mmacosx-version-min=10.6
LDFLAGS += -mmacosx-version-min=10.6

BOOT_CFLAGS += -mmacosx-version-min=10.6
BOOT_LDFLAGS += -mmacosx-version-min=10.6

# Similarly, for cross-compilation.
STAGE1_CFLAGS += -mmacosx-version-min=10.6
STAGE1_CXXFLAGS += -mmacosx-version-min=10.6
STAGE1_LDFLAGS += -mmacosx-version-min=10.6

CFLAGS_FOR_TARGET += -mmacosx-version-min=10.6
CXXFLAGS_FOR_TARGET += -mmacosx-version-min=10.6
LDFLAGS_FOR_TARGET += -mmacosx-version-min=10.6
