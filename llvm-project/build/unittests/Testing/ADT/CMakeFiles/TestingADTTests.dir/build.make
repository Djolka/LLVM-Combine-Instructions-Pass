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
include unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/depend.make

# Include the progress variables for this target.
include unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/flags.make

unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.o: unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/flags.make
unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT/StringMapEntryTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT/StringMapEntryTest.cpp

unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT/StringMapEntryTest.cpp > CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.i

unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT/StringMapEntryTest.cpp -o CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.s

unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.o: unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/flags.make
unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT/StringMapTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT/StringMapTest.cpp

unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT/StringMapTest.cpp > CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.i

unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT/StringMapTest.cpp -o CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.s

# Object files for target TestingADTTests
TestingADTTests_OBJECTS = \
"CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.o" \
"CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.o"

# External object files for target TestingADTTests
TestingADTTests_EXTERNAL_OBJECTS =

unittests/Testing/ADT/TestingADTTests: unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapEntryTest.cpp.o
unittests/Testing/ADT/TestingADTTests: unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/StringMapTest.cpp.o
unittests/Testing/ADT/TestingADTTests: unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/build.make
unittests/Testing/ADT/TestingADTTests: lib/libllvm_gtest_main.so.17git
unittests/Testing/ADT/TestingADTTests: lib/libllvm_gtest.so.17git
unittests/Testing/ADT/TestingADTTests: lib/libLLVMSupport.so.17git
unittests/Testing/ADT/TestingADTTests: unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TestingADTTests"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestingADTTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/build: unittests/Testing/ADT/TestingADTTests

.PHONY : unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/build

unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT && $(CMAKE_COMMAND) -P CMakeFiles/TestingADTTests.dir/cmake_clean.cmake
.PHONY : unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/clean

unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/unittests/Testing/ADT /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT /home/user/Desktop/KK-projekat/llvm-project/build/unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/Testing/ADT/CMakeFiles/TestingADTTests.dir/depend
