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
include tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/flags.make

tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.o: tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/flags.make
tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-remark-size-diff/RemarkSizeDiff.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-remark-size-diff && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-remark-size-diff/RemarkSizeDiff.cpp

tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-remark-size-diff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-remark-size-diff/RemarkSizeDiff.cpp > CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.i

tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-remark-size-diff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-remark-size-diff/RemarkSizeDiff.cpp -o CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.s

# Object files for target llvm-remark-size-diff
llvm__remark__size__diff_OBJECTS = \
"CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.o"

# External object files for target llvm-remark-size-diff
llvm__remark__size__diff_EXTERNAL_OBJECTS =

bin/llvm-remark-size-diff: tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/RemarkSizeDiff.cpp.o
bin/llvm-remark-size-diff: tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/build.make
bin/llvm-remark-size-diff: lib/libLLVMObject.so.17git
bin/llvm-remark-size-diff: lib/libLLVMCore.so.17git
bin/llvm-remark-size-diff: lib/libLLVMRemarks.so.17git
bin/llvm-remark-size-diff: lib/libLLVMSupport.so.17git
bin/llvm-remark-size-diff: lib/libLLVMDemangle.so.17git
bin/llvm-remark-size-diff: tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-remark-size-diff"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-remark-size-diff && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-remark-size-diff.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/build: bin/llvm-remark-size-diff

.PHONY : tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/build

tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-remark-size-diff && $(CMAKE_COMMAND) -P CMakeFiles/llvm-remark-size-diff.dir/cmake_clean.cmake
.PHONY : tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/clean

tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-remark-size-diff /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-remark-size-diff /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-remark-size-diff/CMakeFiles/llvm-remark-size-diff.dir/depend
