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
include unittests/MC/X86/CMakeFiles/X86MCTests.dir/depend.make

# Include the progress variables for this target.
include unittests/MC/X86/CMakeFiles/X86MCTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/MC/X86/CMakeFiles/X86MCTests.dir/flags.make

unittests/MC/X86/CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.o: unittests/MC/X86/CMakeFiles/X86MCTests.dir/flags.make
unittests/MC/X86/CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/MC/X86/X86MCDisassemblerTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/MC/X86/CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/MC/X86 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/MC/X86/X86MCDisassemblerTest.cpp

unittests/MC/X86/CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/MC/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/MC/X86/X86MCDisassemblerTest.cpp > CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.i

unittests/MC/X86/CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/MC/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/MC/X86/X86MCDisassemblerTest.cpp -o CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.s

# Object files for target X86MCTests
X86MCTests_OBJECTS = \
"CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.o"

# External object files for target X86MCTests
X86MCTests_EXTERNAL_OBJECTS =

unittests/MC/X86/X86MCTests: unittests/MC/X86/CMakeFiles/X86MCTests.dir/X86MCDisassemblerTest.cpp.o
unittests/MC/X86/X86MCTests: unittests/MC/X86/CMakeFiles/X86MCTests.dir/build.make
unittests/MC/X86/X86MCTests: lib/libLLVMTarget.so.17git
unittests/MC/X86/X86MCTests: lib/libLLVMX86Desc.so.17git
unittests/MC/X86/X86MCTests: lib/libLLVMX86Disassembler.so.17git
unittests/MC/X86/X86MCTests: lib/libLLVMX86Info.so.17git
unittests/MC/X86/X86MCTests: lib/libllvm_gtest_main.so.17git
unittests/MC/X86/X86MCTests: lib/libllvm_gtest.so.17git
unittests/MC/X86/X86MCTests: lib/libLLVMMCDisassembler.so.17git
unittests/MC/X86/X86MCTests: lib/libLLVMMC.so.17git
unittests/MC/X86/X86MCTests: lib/libLLVMTargetParser.so.17git
unittests/MC/X86/X86MCTests: lib/libLLVMSupport.so.17git
unittests/MC/X86/X86MCTests: unittests/MC/X86/CMakeFiles/X86MCTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable X86MCTests"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/MC/X86 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/X86MCTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/MC/X86/CMakeFiles/X86MCTests.dir/build: unittests/MC/X86/X86MCTests

.PHONY : unittests/MC/X86/CMakeFiles/X86MCTests.dir/build

unittests/MC/X86/CMakeFiles/X86MCTests.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/MC/X86 && $(CMAKE_COMMAND) -P CMakeFiles/X86MCTests.dir/cmake_clean.cmake
.PHONY : unittests/MC/X86/CMakeFiles/X86MCTests.dir/clean

unittests/MC/X86/CMakeFiles/X86MCTests.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/MC/X86 /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/unittests/MC/X86 /home/user/Desktop/KK-projekat/llvm-project/build/unittests/MC/X86/CMakeFiles/X86MCTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/MC/X86/CMakeFiles/X86MCTests.dir/depend
