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

# Utility rule file for InstallNameToolOptsTableGen.

# Include the progress variables for this target.
include tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/progress.make

tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen: tools/llvm-objcopy/ObjcopyOpts.inc
tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen: tools/llvm-objcopy/InstallNameToolOpts.inc


tools/llvm-objcopy/ObjcopyOpts.inc: bin/llvm-tblgen
tools/llvm-objcopy/ObjcopyOpts.inc: bin/llvm-tblgen
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/BitcodeStripOpts.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/CommonOpts.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/InstallNameToolOpts.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/ObjcopyOpts.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/StripOpts.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/CodeGen/SDNodeProperties.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/CodeGen/ValueTypes.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Frontend/Directive/DirectiveBase.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Frontend/OpenACC/ACC.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Frontend/OpenMP/OMP.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/Attributes.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/Intrinsics.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsAArch64.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsAMDGPU.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsARM.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsBPF.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsDirectX.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsHexagon.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsHexagonDep.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsLoongArch.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsMips.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsNVVM.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsPowerPC.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsRISCV.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsRISCVXTHead.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsSPIRV.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsSystemZ.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsVE.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsVEVL.gen.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsWebAssembly.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsX86.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsXCore.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Option/OptParser.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/TableGen/Automaton.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/TableGen/SearchableTable.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GenericOpcodes.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GlobalISel/Combine.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GlobalISel/RegisterBank.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GlobalISel/SelectionDAGCompat.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GlobalISel/Target.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/Target.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetCallingConv.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetInstrPredicate.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetItinerary.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetPfmCounters.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetSchedule.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetSelectionDAG.td
tools/llvm-objcopy/ObjcopyOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/ObjcopyOpts.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building ObjcopyOpts.inc..."
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-objcopy && ../../bin/llvm-tblgen -gen-opt-parser-defs -I /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy -I/home/user/Desktop/KK-projekat/llvm-project/build/include -I/home/user/Desktop/KK-projekat/llvm-project/llvm/include /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/ObjcopyOpts.td --write-if-changed -o /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-objcopy/ObjcopyOpts.inc

tools/llvm-objcopy/InstallNameToolOpts.inc: bin/llvm-tblgen
tools/llvm-objcopy/InstallNameToolOpts.inc: bin/llvm-tblgen
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/BitcodeStripOpts.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/CommonOpts.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/InstallNameToolOpts.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/ObjcopyOpts.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/StripOpts.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/CodeGen/SDNodeProperties.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/CodeGen/ValueTypes.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Frontend/Directive/DirectiveBase.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Frontend/OpenACC/ACC.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Frontend/OpenMP/OMP.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/Attributes.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/Intrinsics.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsAArch64.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsAMDGPU.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsARM.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsBPF.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsDirectX.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsHexagon.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsHexagonDep.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsLoongArch.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsMips.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsNVVM.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsPowerPC.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsRISCV.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsRISCVXTHead.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsSPIRV.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsSystemZ.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsVE.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsVEVL.gen.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsWebAssembly.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsX86.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/IR/IntrinsicsXCore.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Option/OptParser.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/TableGen/Automaton.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/TableGen/SearchableTable.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GenericOpcodes.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GlobalISel/Combine.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GlobalISel/RegisterBank.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GlobalISel/SelectionDAGCompat.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/GlobalISel/Target.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/Target.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetCallingConv.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetInstrPredicate.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetItinerary.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetPfmCounters.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetSchedule.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/include/llvm/Target/TargetSelectionDAG.td
tools/llvm-objcopy/InstallNameToolOpts.inc: /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/InstallNameToolOpts.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building InstallNameToolOpts.inc..."
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-objcopy && ../../bin/llvm-tblgen -gen-opt-parser-defs -I /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy -I/home/user/Desktop/KK-projekat/llvm-project/build/include -I/home/user/Desktop/KK-projekat/llvm-project/llvm/include /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy/InstallNameToolOpts.td --write-if-changed -o /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-objcopy/InstallNameToolOpts.inc

InstallNameToolOptsTableGen: tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen
InstallNameToolOptsTableGen: tools/llvm-objcopy/ObjcopyOpts.inc
InstallNameToolOptsTableGen: tools/llvm-objcopy/InstallNameToolOpts.inc
InstallNameToolOptsTableGen: tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/build.make

.PHONY : InstallNameToolOptsTableGen

# Rule to build all files generated by this target.
tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/build: InstallNameToolOptsTableGen

.PHONY : tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/build

tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-objcopy && $(CMAKE_COMMAND) -P CMakeFiles/InstallNameToolOptsTableGen.dir/cmake_clean.cmake
.PHONY : tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/clean

tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/tools/llvm-objcopy /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-objcopy /home/user/Desktop/KK-projekat/llvm-project/build/tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-objcopy/CMakeFiles/InstallNameToolOptsTableGen.dir/depend
