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
include tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/flags.make

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.o: tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/flags.make
tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/SectionSizes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/SectionSizes.cpp

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/SectionSizes.cpp > CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.i

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/SectionSizes.cpp -o CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.s

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.o: tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/flags.make
tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/Statistics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/Statistics.cpp

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/Statistics.cpp > CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.i

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/Statistics.cpp -o CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.s

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.o: tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/flags.make
tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/llvm-dwarfdump.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/llvm-dwarfdump.cpp

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/llvm-dwarfdump.cpp > CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.i

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump/llvm-dwarfdump.cpp -o CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.s

# Object files for target llvm-dwarfdump
llvm__dwarfdump_OBJECTS = \
"CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.o" \
"CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.o" \
"CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.o"

# External object files for target llvm-dwarfdump
llvm__dwarfdump_EXTERNAL_OBJECTS =

bin/llvm-dwarfdump: tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/SectionSizes.cpp.o
bin/llvm-dwarfdump: tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/Statistics.cpp.o
bin/llvm-dwarfdump: tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/llvm-dwarfdump.cpp.o
bin/llvm-dwarfdump: tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/build.make
bin/llvm-dwarfdump: lib/libLLVMAArch64Desc.so.17git
bin/llvm-dwarfdump: lib/libLLVMAMDGPUDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMARMDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMAVRDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMBPFDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMHexagonDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMLanaiDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMLoongArchDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMMipsDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMMSP430Desc.so.17git
bin/llvm-dwarfdump: lib/libLLVMNVPTXDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMPowerPCDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMRISCVDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMSparcDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMSystemZDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMVEDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMWebAssemblyDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMX86Desc.so.17git
bin/llvm-dwarfdump: lib/libLLVMXCoreDesc.so.17git
bin/llvm-dwarfdump: lib/libLLVMAArch64Info.so.17git
bin/llvm-dwarfdump: lib/libLLVMAMDGPUInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMARMInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMAVRInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMBPFInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMHexagonInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMLanaiInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMLoongArchInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMMipsInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMMSP430Info.so.17git
bin/llvm-dwarfdump: lib/libLLVMNVPTXInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMPowerPCInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMRISCVInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMSparcInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMSystemZInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMVEInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMWebAssemblyInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMX86Info.so.17git
bin/llvm-dwarfdump: lib/libLLVMXCoreInfo.so.17git
bin/llvm-dwarfdump: lib/libLLVMDebugInfoDWARF.so.17git
bin/llvm-dwarfdump: lib/libLLVMObject.so.17git
bin/llvm-dwarfdump: lib/libLLVMMC.so.17git
bin/llvm-dwarfdump: lib/libLLVMTargetParser.so.17git
bin/llvm-dwarfdump: lib/libLLVMSupport.so.17git
bin/llvm-dwarfdump: tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../bin/llvm-dwarfdump"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-dwarfdump.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/build: bin/llvm-dwarfdump

.PHONY : tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/build

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump && $(CMAKE_COMMAND) -P CMakeFiles/llvm-dwarfdump.dir/cmake_clean.cmake
.PHONY : tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/clean

tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-dwarfdump /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-dwarfdump/CMakeFiles/llvm-dwarfdump.dir/depend
