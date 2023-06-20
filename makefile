# Functions

# This function takes a list of directory paths as an argument and prefixes each path with the -I flag.
define add_include_flag
$(addprefix -I,$1)
endef

# Determine the operating system
UNAME := $(shell uname)

# Arduino and Arduino-Makefile directories
ARDUINO_DIR = C:/'Program Files (x86)'/Arduino
ARDMK_DIR = makefiles/arduino

ifeq ($(UNAME), Linux)
	ARDUINO_DIR = /mnt/c/'Program Files (x86)'/Arduino
endif

ifeq ($(UNAME), Windows_NT)
	ARDUINO_DIR = C:/'Program Files (x86)'/Arduino
endif

# Compiler and flags
CC = gcc
CXX = g++

CFLAGS = -Wall -Werror
CXXFLAGS = -Wall -Werror

# Linker flags and libraries
LDFLAGS = -Llibs/sdl2_w64_mingw32/lib -Wl,-rpath,.

# Preprocessor defines
DEFINES = \
	-DSIMULATOR=1 \
	-DSIMULATOR=1 \
	-DUSE_SDL=1 \
	-DSDL_HOR_RES=320 \
	-DSDL_VER_RES=240 \
	-DSDL_ZOOM=1

# Directory paths
SRCDIR = src
INCDIR = include libs/sdl2_w64_mingw32/include
LIBDIR = libs

# Build directory and target
BUILD = build
TARGET = simulator

# Find all C source files
C_FILES := $(wildcard $(SRCDIR)/*.c)
C_OBJECTS := $(patsubst $(SRCDIR)/%.c, $(BUILD)/%.o, $(C_FILES))

# Find all C++ source files
CPP_FILES := $(wildcard $(SRCDIR)/*.cpp)
CPP_OBJECTS := $(patsubst $(SRCDIR)/%.cpp, $(BUILD)/%.o, $(CPP_FILES))

# Include flags
INCLUDE_FLAGS = $(call add_include_flag,$(INCDIR))

# Default target
all: $(BUILD) $(TARGET)

# Target for linking the executable
$(TARGET): $(C_OBJECTS) $(CPP_OBJECTS)
	$(CXX) $(LDFLAGS) $(DEFINES) $^ $(LDLIBS) -o $@

# Target for compiling C files
$(BUILD)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(DEFINES) $(INCLUDE_FLAGS) -c $< -o $@

# Target for compiling C++ files
$(BUILD)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(DEFINES) $(INCLUDE_FLAGS) -c $< -o $@

# Clean target
clean:
	rm -rf $(BUILD)/*.o $(TARGET)

.PHONY: all clean

# Target for creating the build directory
$(BUILD):
	mkdir -p $(BUILD)
