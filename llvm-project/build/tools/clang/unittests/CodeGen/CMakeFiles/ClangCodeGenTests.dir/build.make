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
include tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/depend.make

# Include the progress variables for this target.
include tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/flags.make

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.o: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/flags.make
tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/BufferSourceTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/BufferSourceTest.cpp

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/BufferSourceTest.cpp > CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.i

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/BufferSourceTest.cpp -o CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.s

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.o: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/flags.make
tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/CodeGenExternalTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/CodeGenExternalTest.cpp

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/CodeGenExternalTest.cpp > CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.i

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/CodeGenExternalTest.cpp -o CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.s

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.o: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/flags.make
tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/TBAAMetadataTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/TBAAMetadataTest.cpp

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/TBAAMetadataTest.cpp > CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.i

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/TBAAMetadataTest.cpp -o CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.s

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.o: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/flags.make
tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/CheckTargetFeaturesTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/CheckTargetFeaturesTest.cpp

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/CheckTargetFeaturesTest.cpp > CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.i

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen/CheckTargetFeaturesTest.cpp -o CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.s

# Object files for target ClangCodeGenTests
ClangCodeGenTests_OBJECTS = \
"CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.o" \
"CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.o" \
"CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.o" \
"CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.o"

# External object files for target ClangCodeGenTests
ClangCodeGenTests_EXTERNAL_OBJECTS =

tools/clang/unittests/CodeGen/ClangCodeGenTests: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/BufferSourceTest.cpp.o
tools/clang/unittests/CodeGen/ClangCodeGenTests: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CodeGenExternalTest.cpp.o
tools/clang/unittests/CodeGen/ClangCodeGenTests: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/TBAAMetadataTest.cpp.o
tools/clang/unittests/CodeGen/ClangCodeGenTests: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/CheckTargetFeaturesTest.cpp.o
tools/clang/unittests/CodeGen/ClangCodeGenTests: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/build.make
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libllvm_gtest_main.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libllvm_gtest.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libclangInterpreter.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libclangCodeGen.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libclangFrontend.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libclangParse.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libclangSerialization.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libclangAST.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libclangLex.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libclangBasic.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libLLVMCore.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libLLVMTargetParser.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: lib/libLLVMSupport.so.17git
tools/clang/unittests/CodeGen/ClangCodeGenTests: tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ClangCodeGenTests"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClangCodeGenTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/build: tools/clang/unittests/CodeGen/ClangCodeGenTests

.PHONY : tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/build

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen && $(CMAKE_COMMAND) -P CMakeFiles/ClangCodeGenTests.dir/cmake_clean.cmake
.PHONY : tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/clean

tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/clang/unittests/CodeGen /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/unittests/CodeGen/CMakeFiles/ClangCodeGenTests.dir/depend
