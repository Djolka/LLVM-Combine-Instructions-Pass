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
include unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/depend.make

# Include the progress variables for this target.
include unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/flags.make

unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.o: unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/flags.make
unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/tools/llvm-profdata/OutputSizeLimitTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/tools/llvm-profdata && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/tools/llvm-profdata/OutputSizeLimitTest.cpp

unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/tools/llvm-profdata && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/tools/llvm-profdata/OutputSizeLimitTest.cpp > CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.i

unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/tools/llvm-profdata && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/tools/llvm-profdata/OutputSizeLimitTest.cpp -o CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.s

# Object files for target LLVMProfdataTests
LLVMProfdataTests_OBJECTS = \
"CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.o"

# External object files for target LLVMProfdataTests
LLVMProfdataTests_EXTERNAL_OBJECTS =

unittests/tools/llvm-profdata/LLVMProfdataTests: unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/OutputSizeLimitTest.cpp.o
unittests/tools/llvm-profdata/LLVMProfdataTests: unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/build.make
unittests/tools/llvm-profdata/LLVMProfdataTests: lib/libLLVMProfileData.so.17git
unittests/tools/llvm-profdata/LLVMProfdataTests: lib/libllvm_gtest_main.so.17git
unittests/tools/llvm-profdata/LLVMProfdataTests: lib/libLLVMTestingSupport.so.17git
unittests/tools/llvm-profdata/LLVMProfdataTests: lib/libLLVMCore.so.17git
unittests/tools/llvm-profdata/LLVMProfdataTests: lib/libllvm_gtest.so.17git
unittests/tools/llvm-profdata/LLVMProfdataTests: lib/libLLVMSupport.so.17git
unittests/tools/llvm-profdata/LLVMProfdataTests: unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LLVMProfdataTests"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/tools/llvm-profdata && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMProfdataTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/build: unittests/tools/llvm-profdata/LLVMProfdataTests

.PHONY : unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/build

unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/tools/llvm-profdata && $(CMAKE_COMMAND) -P CMakeFiles/LLVMProfdataTests.dir/cmake_clean.cmake
.PHONY : unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/clean

unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/tools/llvm-profdata /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/unittests/tools/llvm-profdata /home/user/Desktop/KK-projekat/llvm-project/build/unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/tools/llvm-profdata/CMakeFiles/LLVMProfdataTests.dir/depend
