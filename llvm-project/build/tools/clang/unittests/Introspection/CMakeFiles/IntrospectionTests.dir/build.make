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
include tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/depend.make

# Include the progress variables for this target.
include tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/flags.make

tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.o: tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/flags.make
tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/Introspection/IntrospectionTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/Introspection && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/Introspection/IntrospectionTest.cpp

tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/Introspection && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/Introspection/IntrospectionTest.cpp > CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.i

tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/Introspection && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/Introspection/IntrospectionTest.cpp -o CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.s

# Object files for target IntrospectionTests
IntrospectionTests_OBJECTS = \
"CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.o"

# External object files for target IntrospectionTests
IntrospectionTests_EXTERNAL_OBJECTS =

tools/clang/unittests/Introspection/IntrospectionTests: tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/IntrospectionTest.cpp.o
tools/clang/unittests/Introspection/IntrospectionTests: tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/build.make
tools/clang/unittests/Introspection/IntrospectionTests: lib/libllvm_gtest_main.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libclangTooling.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libclangFrontend.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libLLVMTestingSupport.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libclangSerialization.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libclangASTMatchers.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libclangAST.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libLLVMFrontendOpenMP.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libclangBasic.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libllvm_gtest.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: lib/libLLVMSupport.so.17git
tools/clang/unittests/Introspection/IntrospectionTests: tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IntrospectionTests"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/Introspection && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IntrospectionTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/build: tools/clang/unittests/Introspection/IntrospectionTests

.PHONY : tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/build

tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/Introspection && $(CMAKE_COMMAND) -P CMakeFiles/IntrospectionTests.dir/cmake_clean.cmake
.PHONY : tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/clean

tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/Introspection /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/Introspection /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/unittests/Introspection/CMakeFiles/IntrospectionTests.dir/depend
