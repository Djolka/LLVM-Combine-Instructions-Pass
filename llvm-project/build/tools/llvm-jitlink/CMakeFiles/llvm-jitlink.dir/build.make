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
include tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/flags.make

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.o: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/flags.make
tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink.cpp

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink.cpp > CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.i

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink.cpp -o CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.s

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.o: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/flags.make
tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-coff.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-coff.cpp

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-coff.cpp > CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.i

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-coff.cpp -o CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.s

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.o: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/flags.make
tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-elf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-elf.cpp

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-elf.cpp > CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.i

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-elf.cpp -o CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.s

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.o: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/flags.make
tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-macho.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-macho.cpp

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-macho.cpp > CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.i

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink/llvm-jitlink-macho.cpp -o CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.s

# Object files for target llvm-jitlink
llvm__jitlink_OBJECTS = \
"CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.o" \
"CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.o" \
"CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.o" \
"CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.o"

# External object files for target llvm-jitlink
llvm__jitlink_EXTERNAL_OBJECTS =

bin/llvm-jitlink: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink.cpp.o
bin/llvm-jitlink: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-coff.cpp.o
bin/llvm-jitlink: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-elf.cpp.o
bin/llvm-jitlink: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/llvm-jitlink-macho.cpp.o
bin/llvm-jitlink: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/build.make
bin/llvm-jitlink: lib/libLLVMAVRDesc.so.17git
bin/llvm-jitlink: lib/libLLVMBPFDesc.so.17git
bin/llvm-jitlink: lib/libLLVMMipsDesc.so.17git
bin/llvm-jitlink: lib/libLLVMMSP430Desc.so.17git
bin/llvm-jitlink: lib/libLLVMNVPTXDesc.so.17git
bin/llvm-jitlink: lib/libLLVMPowerPCDesc.so.17git
bin/llvm-jitlink: lib/libLLVMSparcDesc.so.17git
bin/llvm-jitlink: lib/libLLVMVEDesc.so.17git
bin/llvm-jitlink: lib/libLLVMX86Desc.so.17git
bin/llvm-jitlink: lib/libLLVMXCoreDesc.so.17git
bin/llvm-jitlink: lib/libLLVMAArch64Disassembler.so.17git
bin/llvm-jitlink: lib/libLLVMAMDGPUDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMARMDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMAVRDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMBPFDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMHexagonDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMLanaiDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMLoongArchDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMMipsDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMMSP430Disassembler.so.17git
bin/llvm-jitlink: lib/libLLVMPowerPCDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMRISCVDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMSparcDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMSystemZDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMVEDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMWebAssemblyDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMX86Disassembler.so.17git
bin/llvm-jitlink: lib/libLLVMXCoreDisassembler.so.17git
bin/llvm-jitlink: lib/libLLVMAVRInfo.so.17git
bin/llvm-jitlink: lib/libLLVMBPFInfo.so.17git
bin/llvm-jitlink: lib/libLLVMMipsInfo.so.17git
bin/llvm-jitlink: lib/libLLVMMSP430Info.so.17git
bin/llvm-jitlink: lib/libLLVMNVPTXInfo.so.17git
bin/llvm-jitlink: lib/libLLVMPowerPCInfo.so.17git
bin/llvm-jitlink: lib/libLLVMSparcInfo.so.17git
bin/llvm-jitlink: lib/libLLVMVEInfo.so.17git
bin/llvm-jitlink: lib/libLLVMX86Info.so.17git
bin/llvm-jitlink: lib/libLLVMXCoreInfo.so.17git
bin/llvm-jitlink: lib/libLLVMOrcJIT.so.17git
bin/llvm-jitlink: lib/libLLVMAArch64Desc.so.17git
bin/llvm-jitlink: lib/libLLVMAArch64Info.so.17git
bin/llvm-jitlink: lib/libLLVMAMDGPUDesc.so.17git
bin/llvm-jitlink: lib/libLLVMAMDGPUInfo.so.17git
bin/llvm-jitlink: lib/libLLVMARMDesc.so.17git
bin/llvm-jitlink: lib/libLLVMARMInfo.so.17git
bin/llvm-jitlink: lib/libLLVMHexagonDesc.so.17git
bin/llvm-jitlink: lib/libLLVMHexagonInfo.so.17git
bin/llvm-jitlink: lib/libLLVMLanaiDesc.so.17git
bin/llvm-jitlink: lib/libLLVMLanaiInfo.so.17git
bin/llvm-jitlink: lib/libLLVMLoongArchDesc.so.17git
bin/llvm-jitlink: lib/libLLVMLoongArchInfo.so.17git
bin/llvm-jitlink: lib/libLLVMRISCVDesc.so.17git
bin/llvm-jitlink: lib/libLLVMRISCVInfo.so.17git
bin/llvm-jitlink: lib/libLLVMSystemZDesc.so.17git
bin/llvm-jitlink: lib/libLLVMSystemZInfo.so.17git
bin/llvm-jitlink: lib/libLLVMWebAssemblyDesc.so.17git
bin/llvm-jitlink: lib/libLLVMWebAssemblyInfo.so.17git
bin/llvm-jitlink: lib/libLLVMExecutionEngine.so.17git
bin/llvm-jitlink: lib/libLLVMJITLink.so.17git
bin/llvm-jitlink: lib/libLLVMOrcTargetProcess.so.17git
bin/llvm-jitlink: lib/libLLVMOrcShared.so.17git
bin/llvm-jitlink: lib/libLLVMRuntimeDyld.so.17git
bin/llvm-jitlink: lib/libLLVMObject.so.17git
bin/llvm-jitlink: lib/libLLVMMC.so.17git
bin/llvm-jitlink: lib/libLLVMBinaryFormat.so.17git
bin/llvm-jitlink: lib/libLLVMTargetParser.so.17git
bin/llvm-jitlink: lib/libLLVMSupport.so.17git
bin/llvm-jitlink: tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../bin/llvm-jitlink"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-jitlink.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/build: bin/llvm-jitlink

.PHONY : tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/build

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink && $(CMAKE_COMMAND) -P CMakeFiles/llvm-jitlink.dir/cmake_clean.cmake
.PHONY : tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/clean

tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-jitlink /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-jitlink/CMakeFiles/llvm-jitlink.dir/depend
