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
include lib/Target/CMakeFiles/LLVMTarget.dir/depend.make

# Include the progress variables for this target.
include lib/Target/CMakeFiles/LLVMTarget.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/CMakeFiles/LLVMTarget.dir/flags.make

lib/Target/CMakeFiles/LLVMTarget.dir/Target.cpp.o: lib/Target/CMakeFiles/LLVMTarget.dir/flags.make
lib/Target/CMakeFiles/LLVMTarget.dir/Target.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/Target.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/CMakeFiles/LLVMTarget.dir/Target.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTarget.dir/Target.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/Target.cpp

lib/Target/CMakeFiles/LLVMTarget.dir/Target.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTarget.dir/Target.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/Target.cpp > CMakeFiles/LLVMTarget.dir/Target.cpp.i

lib/Target/CMakeFiles/LLVMTarget.dir/Target.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTarget.dir/Target.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/Target.cpp -o CMakeFiles/LLVMTarget.dir/Target.cpp.s

lib/Target/CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.o: lib/Target/CMakeFiles/LLVMTarget.dir/flags.make
lib/Target/CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetIntrinsicInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetIntrinsicInfo.cpp

lib/Target/CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetIntrinsicInfo.cpp > CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.i

lib/Target/CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetIntrinsicInfo.cpp -o CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.s

lib/Target/CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.o: lib/Target/CMakeFiles/LLVMTarget.dir/flags.make
lib/Target/CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetLoweringObjectFile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Target/CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetLoweringObjectFile.cpp

lib/Target/CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetLoweringObjectFile.cpp > CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.i

lib/Target/CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetLoweringObjectFile.cpp -o CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.s

lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.o: lib/Target/CMakeFiles/LLVMTarget.dir/flags.make
lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetMachine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetMachine.cpp

lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetMachine.cpp > CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.i

lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetMachine.cpp -o CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.s

lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.o: lib/Target/CMakeFiles/LLVMTarget.dir/flags.make
lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetMachineC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetMachineC.cpp

lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetMachineC.cpp > CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.i

lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/TargetMachineC.cpp -o CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.s

# Object files for target LLVMTarget
LLVMTarget_OBJECTS = \
"CMakeFiles/LLVMTarget.dir/Target.cpp.o" \
"CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.o" \
"CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.o" \
"CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.o" \
"CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.o"

# External object files for target LLVMTarget
LLVMTarget_EXTERNAL_OBJECTS =

lib/libLLVMTarget.so.17git: lib/Target/CMakeFiles/LLVMTarget.dir/Target.cpp.o
lib/libLLVMTarget.so.17git: lib/Target/CMakeFiles/LLVMTarget.dir/TargetIntrinsicInfo.cpp.o
lib/libLLVMTarget.so.17git: lib/Target/CMakeFiles/LLVMTarget.dir/TargetLoweringObjectFile.cpp.o
lib/libLLVMTarget.so.17git: lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachine.cpp.o
lib/libLLVMTarget.so.17git: lib/Target/CMakeFiles/LLVMTarget.dir/TargetMachineC.cpp.o
lib/libLLVMTarget.so.17git: lib/Target/CMakeFiles/LLVMTarget.dir/build.make
lib/libLLVMTarget.so.17git: lib/libLLVMAnalysis.so.17git
lib/libLLVMTarget.so.17git: lib/libLLVMCore.so.17git
lib/libLLVMTarget.so.17git: lib/libLLVMMC.so.17git
lib/libLLVMTarget.so.17git: lib/libLLVMTargetParser.so.17git
lib/libLLVMTarget.so.17git: lib/libLLVMSupport.so.17git
lib/libLLVMTarget.so.17git: lib/Target/CMakeFiles/LLVMTarget.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../libLLVMTarget.so"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMTarget.dir/link.txt --verbose=$(VERBOSE)
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && $(CMAKE_COMMAND) -E cmake_symlink_library ../libLLVMTarget.so.17git ../libLLVMTarget.so.17git ../libLLVMTarget.so

lib/libLLVMTarget.so: lib/libLLVMTarget.so.17git
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libLLVMTarget.so

# Rule to build all files generated by this target.
lib/Target/CMakeFiles/LLVMTarget.dir/build: lib/libLLVMTarget.so

.PHONY : lib/Target/CMakeFiles/LLVMTarget.dir/build

lib/Target/CMakeFiles/LLVMTarget.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target && $(CMAKE_COMMAND) -P CMakeFiles/LLVMTarget.dir/cmake_clean.cmake
.PHONY : lib/Target/CMakeFiles/LLVMTarget.dir/clean

lib/Target/CMakeFiles/LLVMTarget.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/CMakeFiles/LLVMTarget.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/CMakeFiles/LLVMTarget.dir/depend
