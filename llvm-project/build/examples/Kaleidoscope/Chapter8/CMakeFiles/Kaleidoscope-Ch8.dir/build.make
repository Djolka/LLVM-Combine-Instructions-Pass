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
include examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/depend.make

# Include the progress variables for this target.
include examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/progress.make

# Include the compile flags for this target's objects.
include examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/flags.make

examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.o: examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/flags.make
examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.o: /home/user/Desktop/KK-projekat/llvm-project/llvm/examples/Kaleidoscope/Chapter8/toy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.o"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/examples/Kaleidoscope/Chapter8 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.o -c /home/user/Desktop/KK-projekat/llvm-project/llvm/examples/Kaleidoscope/Chapter8/toy.cpp

examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.i"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/examples/Kaleidoscope/Chapter8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Desktop/KK-projekat/llvm-project/llvm/examples/Kaleidoscope/Chapter8/toy.cpp > CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.i

examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.s"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/examples/Kaleidoscope/Chapter8 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Desktop/KK-projekat/llvm-project/llvm/examples/Kaleidoscope/Chapter8/toy.cpp -o CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.s

# Object files for target Kaleidoscope-Ch8
Kaleidoscope__Ch8_OBJECTS = \
"CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.o"

# External object files for target Kaleidoscope-Ch8
Kaleidoscope__Ch8_EXTERNAL_OBJECTS =

bin/Kaleidoscope-Ch8: examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/toy.cpp.o
bin/Kaleidoscope-Ch8: examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/build.make
bin/Kaleidoscope-Ch8: lib/libLLVMTableGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMFuzzerCLI.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMFuzzMutate.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMFileCheck.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMInterfaceStub.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDWARFLinker.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDWARFLinkerParallel.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMFrontendHLSL.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMFrontendOpenACC.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLTO.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMObjCopy.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMObjectYAML.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDebugInfoGSYM.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDebugInfoLogicalView.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDWP.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMInterpreter.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMCJIT.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMOrcJIT.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAArch64CodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAArch64AsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAArch64Disassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAArch64Desc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAArch64Info.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAArch64Utils.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAMDGPUCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAMDGPUAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAMDGPUDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAMDGPUTargetMCA.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAMDGPUDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAMDGPUInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAMDGPUUtils.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMARMCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMARMAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMARMDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMARMDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMARMInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMARMUtils.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAVRCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAVRAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAVRDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAVRDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAVRInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBPFCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBPFAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBPFDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBPFDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBPFInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMHexagonCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMHexagonAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMHexagonDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMHexagonDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMHexagonInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLanaiCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLanaiAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLanaiDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLanaiDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLanaiInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLoongArchCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLoongArchAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLoongArchDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLoongArchDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLoongArchInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMipsCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMipsAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMipsDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMipsDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMipsInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMSP430CodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMSP430AsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMSP430Disassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMNVPTXCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMNVPTXDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMNVPTXInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMPowerPCCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMPowerPCAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMPowerPCDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMPowerPCDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMPowerPCInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMRISCVCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMRISCVAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMRISCVDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMRISCVTargetMCA.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSparcCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSparcAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSparcDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSparcDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSparcInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSystemZCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSystemZAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSystemZDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSystemZDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSystemZInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMVECodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMVEAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMVEDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMVEDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMWebAssemblyCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMWebAssemblyAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMWebAssemblyDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMWebAssemblyUtils.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMX86CodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMX86AsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMX86Disassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMX86TargetMCA.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMX86Desc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMX86Info.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMXCoreCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMXCoreDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMXCoreDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMXCoreInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLineEditor.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMCoverage.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMPasses.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDlltoolDriver.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLibDriver.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMXRay.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMWindowsDriver.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMWindowsManifest.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMExtensions.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMExecutionEngine.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMJITLink.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMOrcTargetProcess.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMOrcShared.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMRuntimeDyld.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMIRParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMIRPrinter.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMCoroutines.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMSP430Desc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMSP430Info.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMipo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMFrontendOpenMP.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMVectorize.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMLinker.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMRISCVDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMRISCVInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMVEInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMWebAssemblyDesc.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMWebAssemblyInfo.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMGlobalISel.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMInstrumentation.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMCFGuard.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMCA.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSelectionDAG.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAsmPrinter.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMCodeGen.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBitWriter.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMScalarOpts.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAggressiveInstCombine.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMInstCombine.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMObjCARCOpts.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMTransformUtils.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMTarget.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAnalysis.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMCDisassembler.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMProfileData.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSymbolize.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDebugInfoDWARF.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDebugInfoPDB.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDebugInfoMSF.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMOption.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMObject.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMIRReader.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMAsmParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBitReader.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMCore.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMRemarks.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBitstreamReader.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMCParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMMC.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDebugInfoCodeView.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMTextAPI.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMBinaryFormat.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMTargetParser.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMSupport.so.17git
bin/Kaleidoscope-Ch8: lib/libLLVMDemangle.so.17git
bin/Kaleidoscope-Ch8: examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Desktop/KK-projekat/llvm-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/Kaleidoscope-Ch8"
	cd /home/user/Desktop/KK-projekat/llvm-project/build/examples/Kaleidoscope/Chapter8 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Kaleidoscope-Ch8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/build: bin/Kaleidoscope-Ch8

.PHONY : examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/build

examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/clean:
	cd /home/user/Desktop/KK-projekat/llvm-project/build/examples/Kaleidoscope/Chapter8 && $(CMAKE_COMMAND) -P CMakeFiles/Kaleidoscope-Ch8.dir/cmake_clean.cmake
.PHONY : examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/clean

examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/depend:
	cd /home/user/Desktop/KK-projekat/llvm-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Desktop/KK-projekat/llvm-project/llvm /home/user/Desktop/KK-projekat/llvm-project/llvm/examples/Kaleidoscope/Chapter8 /home/user/Desktop/KK-projekat/llvm-project/build /home/user/Desktop/KK-projekat/llvm-project/build/examples/Kaleidoscope/Chapter8 /home/user/Desktop/KK-projekat/llvm-project/build/examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/Kaleidoscope/Chapter8/CMakeFiles/Kaleidoscope-Ch8.dir/depend
