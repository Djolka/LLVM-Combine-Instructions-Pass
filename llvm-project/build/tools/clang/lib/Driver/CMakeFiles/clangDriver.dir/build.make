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
include tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/depend.make

# Include the progress variables for this target.
include tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/flags.make

# Object files for target clangDriver
clangDriver_OBJECTS =

# External object files for target clangDriver
clangDriver_EXTERNAL_OBJECTS = \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Action.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Compilation.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Distro.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Driver.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/DriverOptions.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Job.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Multilib.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/MultilibBuilder.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/OffloadBundler.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/OptionUtils.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Phases.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/SanitizerArgs.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Tool.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChain.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/AArch64.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/ARM.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/CSKY.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/LoongArch.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/M68k.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/Mips.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/PPC.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/RISCV.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/Sparc.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/SystemZ.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/VE.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/X86.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/AIX.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Ananas.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/AMDGPU.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/AMDGPUOpenMP.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/AVR.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/BareMetal.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Clang.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/CloudABI.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/CommonArgs.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Contiki.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/CrossWindows.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/CSKYToolChain.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Cuda.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Darwin.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/DragonFly.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Flang.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/FreeBSD.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Fuchsia.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Gnu.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Haiku.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/HIPUtility.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/HIPAMD.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/HIPSPV.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Hexagon.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/HLSL.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Hurd.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Linux.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/MipsLinux.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/MinGW.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Minix.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/MSP430.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/MSVC.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Myriad.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/NaCl.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/NetBSD.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/OpenBSD.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/PS4CPU.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/RISCVToolchain.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Solaris.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/SPIRV.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/TCE.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/VEToolchain.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/WebAssembly.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/XCore.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/PPCLinux.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/PPCFreeBSD.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/InterfaceStubs.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/ZOS.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Types.cpp.o" \
"/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/XRayArgs.cpp.o"

lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Action.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Compilation.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Distro.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Driver.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/DriverOptions.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Job.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Multilib.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/MultilibBuilder.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/OffloadBundler.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/OptionUtils.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Phases.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/SanitizerArgs.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Tool.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChain.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/AArch64.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/ARM.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/CSKY.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/LoongArch.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/M68k.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/Mips.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/PPC.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/RISCV.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/Sparc.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/SystemZ.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/VE.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Arch/X86.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/AIX.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Ananas.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/AMDGPU.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/AMDGPUOpenMP.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/AVR.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/BareMetal.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Clang.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/CloudABI.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/CommonArgs.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Contiki.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/CrossWindows.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/CSKYToolChain.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Cuda.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Darwin.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/DragonFly.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Flang.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/FreeBSD.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Fuchsia.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Gnu.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Haiku.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/HIPUtility.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/HIPAMD.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/HIPSPV.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Hexagon.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/HLSL.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Hurd.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Linux.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/MipsLinux.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/MinGW.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Minix.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/MSP430.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/MSVC.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Myriad.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/NaCl.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/NetBSD.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/OpenBSD.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/PS4CPU.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/RISCVToolchain.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/Solaris.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/SPIRV.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/TCE.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/VEToolchain.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/WebAssembly.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/XCore.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/PPCLinux.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/PPCFreeBSD.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/InterfaceStubs.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/ToolChains/ZOS.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/Types.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/obj.clangDriver.dir/XRayArgs.cpp.o
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/build.make
lib/libclangDriver.so.17git: lib/libclangBasic.so.17git
lib/libclangDriver.so.17git: lib/libLLVMProfileData.so.17git
lib/libclangDriver.so.17git: lib/libLLVMWindowsDriver.so.17git
lib/libclangDriver.so.17git: lib/libLLVMObject.so.17git
lib/libclangDriver.so.17git: lib/libLLVMMC.so.17git
lib/libclangDriver.so.17git: lib/libLLVMBinaryFormat.so.17git
lib/libclangDriver.so.17git: lib/libLLVMOption.so.17git
lib/libclangDriver.so.17git: lib/libLLVMTargetParser.so.17git
lib/libclangDriver.so.17git: lib/libLLVMSupport.so.17git
lib/libclangDriver.so.17git: tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX shared library ../../../../lib/libclangDriver.so"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clangDriver.dir/link.txt --verbose=$(VERBOSE)
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../../lib/libclangDriver.so.17git ../../../../lib/libclangDriver.so.17git ../../../../lib/libclangDriver.so

lib/libclangDriver.so: lib/libclangDriver.so.17git
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libclangDriver.so

# Rule to build all files generated by this target.
tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/build: lib/libclangDriver.so

.PHONY : tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/build

tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver && $(CMAKE_COMMAND) -P CMakeFiles/clangDriver.dir/cmake_clean.cmake
.PHONY : tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/clean

tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/clang/lib/Driver /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver /home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/lib/Driver/CMakeFiles/clangDriver.dir/depend
