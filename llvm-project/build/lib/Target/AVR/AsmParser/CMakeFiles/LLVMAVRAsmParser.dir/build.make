# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Desktop/KK-projekat/llvm-project/llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Desktop/KK-projekat/llvm-project/build

# Include any dependencies generated for this target.
include lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/depend.make

# Include the progress variables for this target.
include lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/flags.make

lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.o: lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/flags.make
lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/AVR/AsmParser/AVRAsmParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/AVR/AsmParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/AVR/AsmParser/AVRAsmParser.cpp

lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/AVR/AsmParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/AVR/AsmParser/AVRAsmParser.cpp > CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.i

lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/AVR/AsmParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/AVR/AsmParser/AVRAsmParser.cpp -o CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.s

# Object files for target LLVMAVRAsmParser
LLVMAVRAsmParser_OBJECTS = \
"CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.o"

# External object files for target LLVMAVRAsmParser
LLVMAVRAsmParser_EXTERNAL_OBJECTS =

lib/libLLVMAVRAsmParser.so.17git: lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/AVRAsmParser.cpp.o
lib/libLLVMAVRAsmParser.so.17git: lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/build.make
lib/libLLVMAVRAsmParser.so.17git: lib/libLLVMMCParser.so.17git
lib/libLLVMAVRAsmParser.so.17git: lib/libLLVMAVRDesc.so.17git
lib/libLLVMAVRAsmParser.so.17git: lib/libLLVMAVRInfo.so.17git
lib/libLLVMAVRAsmParser.so.17git: lib/libLLVMMC.so.17git
lib/libLLVMAVRAsmParser.so.17git: lib/libLLVMSupport.so.17git
lib/libLLVMAVRAsmParser.so.17git: lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../../libLLVMAVRAsmParser.so"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/AVR/AsmParser && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMAVRAsmParser.dir/link.txt --verbose=$(VERBOSE)
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/AVR/AsmParser && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../libLLVMAVRAsmParser.so.17git ../../../libLLVMAVRAsmParser.so.17git ../../../libLLVMAVRAsmParser.so

lib/libLLVMAVRAsmParser.so: lib/libLLVMAVRAsmParser.so.17git
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libLLVMAVRAsmParser.so

# Rule to build all files generated by this target.
lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/build: lib/libLLVMAVRAsmParser.so

.PHONY : lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/build

lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/AVR/AsmParser && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAVRAsmParser.dir/cmake_clean.cmake
.PHONY : lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/clean

lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/AVR/AsmParser /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/AVR/AsmParser /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/AVR/AsmParser/CMakeFiles/LLVMAVRAsmParser.dir/depend
