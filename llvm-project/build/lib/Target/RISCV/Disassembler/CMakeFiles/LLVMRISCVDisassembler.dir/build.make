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
include lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/depend.make

# Include the progress variables for this target.
include lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/flags.make

lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.o: lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/flags.make
lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/RISCV/Disassembler/RISCVDisassembler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/RISCV/Disassembler && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/RISCV/Disassembler/RISCVDisassembler.cpp

lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/RISCV/Disassembler && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/RISCV/Disassembler/RISCVDisassembler.cpp > CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.i

lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/RISCV/Disassembler && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/RISCV/Disassembler/RISCVDisassembler.cpp -o CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.s

# Object files for target LLVMRISCVDisassembler
LLVMRISCVDisassembler_OBJECTS = \
"CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.o"

# External object files for target LLVMRISCVDisassembler
LLVMRISCVDisassembler_EXTERNAL_OBJECTS =

lib/libLLVMRISCVDisassembler.so.17git: lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/RISCVDisassembler.cpp.o
lib/libLLVMRISCVDisassembler.so.17git: lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/build.make
lib/libLLVMRISCVDisassembler.so.17git: lib/libLLVMMCDisassembler.so.17git
lib/libLLVMRISCVDisassembler.so.17git: lib/libLLVMRISCVDesc.so.17git
lib/libLLVMRISCVDisassembler.so.17git: lib/libLLVMRISCVInfo.so.17git
lib/libLLVMRISCVDisassembler.so.17git: lib/libLLVMMC.so.17git
lib/libLLVMRISCVDisassembler.so.17git: lib/libLLVMSupport.so.17git
lib/libLLVMRISCVDisassembler.so.17git: lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../../libLLVMRISCVDisassembler.so"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/RISCV/Disassembler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMRISCVDisassembler.dir/link.txt --verbose=$(VERBOSE)
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/RISCV/Disassembler && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../libLLVMRISCVDisassembler.so.17git ../../../libLLVMRISCVDisassembler.so.17git ../../../libLLVMRISCVDisassembler.so

lib/libLLVMRISCVDisassembler.so: lib/libLLVMRISCVDisassembler.so.17git
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libLLVMRISCVDisassembler.so

# Rule to build all files generated by this target.
lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/build: lib/libLLVMRISCVDisassembler.so

.PHONY : lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/build

lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/RISCV/Disassembler && $(CMAKE_COMMAND) -P CMakeFiles/LLVMRISCVDisassembler.dir/cmake_clean.cmake
.PHONY : lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/clean

lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/lib/Target/RISCV/Disassembler /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/RISCV/Disassembler /home/user/Desktop/KK-projekat/llvm-project/build/lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/RISCV/Disassembler/CMakeFiles/LLVMRISCVDisassembler.dir/depend
