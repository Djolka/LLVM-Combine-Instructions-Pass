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

# Utility rule file for check-llvm-tools-llvm-mca-systemz.

# Include the progress variables for this target.
include test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/progress.make

test/CMakeFiles/check-llvm-tools-llvm-mca-systemz:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running lit suite /home/user/Desktop/KK-projekat/llvm-project/llvm/test/tools/llvm-mca/SystemZ"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/test && /usr/bin/python3.8 /home/user/Desktop/KK-projekat/llvm-project/build/./bin/llvm-lit -sv /home/user/Desktop/KK-projekat/llvm-project/llvm/test/tools/llvm-mca/SystemZ

check-llvm-tools-llvm-mca-systemz: test/CMakeFiles/check-llvm-tools-llvm-mca-systemz
check-llvm-tools-llvm-mca-systemz: test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/build.make

.PHONY : check-llvm-tools-llvm-mca-systemz

# Rule to build all files generated by this target.
test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/build: check-llvm-tools-llvm-mca-systemz

.PHONY : test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/build

test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/test && $(CMAKE_COMMAND) -P CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/clean

test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/test /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/test /home/user/Desktop/KK-projekat/llvm-project/build/test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/check-llvm-tools-llvm-mca-systemz.dir/depend
