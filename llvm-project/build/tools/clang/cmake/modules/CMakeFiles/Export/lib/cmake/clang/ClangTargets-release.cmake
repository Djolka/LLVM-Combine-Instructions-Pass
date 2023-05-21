#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "clang-tblgen" for configuration "Release"
set_property(TARGET clang-tblgen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-tblgen PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-tblgen"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-tblgen )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-tblgen "${_IMPORT_PREFIX}/bin/clang-tblgen" )

# Import target "clangBasic" for configuration "Release"
set_property(TARGET clangBasic APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangBasic PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangBasic.so.17git"
  IMPORTED_SONAME_RELEASE "libclangBasic.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangBasic )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangBasic "${_IMPORT_PREFIX}/lib/libclangBasic.so.17git" )

# Import target "clangAPINotes" for configuration "Release"
set_property(TARGET clangAPINotes APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAPINotes PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangAPINotes.so.17git"
  IMPORTED_SONAME_RELEASE "libclangAPINotes.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAPINotes )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAPINotes "${_IMPORT_PREFIX}/lib/libclangAPINotes.so.17git" )

# Import target "clangLex" for configuration "Release"
set_property(TARGET clangLex APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangLex PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangLex.so.17git"
  IMPORTED_SONAME_RELEASE "libclangLex.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangLex )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangLex "${_IMPORT_PREFIX}/lib/libclangLex.so.17git" )

# Import target "clangParse" for configuration "Release"
set_property(TARGET clangParse APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangParse PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangLex;clangSema;LLVMFrontendOpenMP;LLVMMC;LLVMMCParser;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangParse.so.17git"
  IMPORTED_SONAME_RELEASE "libclangParse.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangParse )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangParse "${_IMPORT_PREFIX}/lib/libclangParse.so.17git" )

# Import target "clangAST" for configuration "Release"
set_property(TARGET clangAST APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAST PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;clangLex;LLVMBinaryFormat;LLVMCore;LLVMFrontendOpenMP;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangAST.so.17git"
  IMPORTED_SONAME_RELEASE "libclangAST.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAST )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAST "${_IMPORT_PREFIX}/lib/libclangAST.so.17git" )

# Import target "clangDynamicASTMatchers" for configuration "Release"
set_property(TARGET clangDynamicASTMatchers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDynamicASTMatchers PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangASTMatchers;clangBasic;LLVMFrontendOpenMP;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangDynamicASTMatchers.so.17git"
  IMPORTED_SONAME_RELEASE "libclangDynamicASTMatchers.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDynamicASTMatchers )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDynamicASTMatchers "${_IMPORT_PREFIX}/lib/libclangDynamicASTMatchers.so.17git" )

# Import target "clangASTMatchers" for configuration "Release"
set_property(TARGET clangASTMatchers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangASTMatchers PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangLex;LLVMFrontendOpenMP;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangASTMatchers.so.17git"
  IMPORTED_SONAME_RELEASE "libclangASTMatchers.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangASTMatchers )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangASTMatchers "${_IMPORT_PREFIX}/lib/libclangASTMatchers.so.17git" )

# Import target "clangCrossTU" for configuration "Release"
set_property(TARGET clangCrossTU APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangCrossTU PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangFrontend;clangIndex;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangCrossTU.so.17git"
  IMPORTED_SONAME_RELEASE "libclangCrossTU.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangCrossTU )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangCrossTU "${_IMPORT_PREFIX}/lib/libclangCrossTU.so.17git" )

# Import target "clangSema" for configuration "Release"
set_property(TARGET clangSema APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangSema PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangAnalysis;clangBasic;clangEdit;clangLex;clangSupport;LLVMCore;LLVMFrontendHLSL;LLVMFrontendOpenMP;LLVMMC;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangSema.so.17git"
  IMPORTED_SONAME_RELEASE "libclangSema.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangSema )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangSema "${_IMPORT_PREFIX}/lib/libclangSema.so.17git" )

# Import target "clangCodeGen" for configuration "Release"
set_property(TARGET clangCodeGen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangCodeGen PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAnalysis;clangAST;clangBasic;clangFrontend;clangLex;clangSerialization;LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCore;LLVMCoroutines;LLVMCoverage;LLVMDemangle;LLVMExtensions;LLVMFrontendHLSL;LLVMFrontendOpenMP;LLVMipo;LLVMIRPrinter;LLVMIRReader;LLVMAggressiveInstCombine;LLVMInstCombine;LLVMInstrumentation;LLVMLTO;LLVMLinker;LLVMMC;LLVMObjCARCOpts;LLVMObject;LLVMPasses;LLVMProfileData;LLVMRemarks;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTargetParser;LLVMTransformUtils"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangCodeGen.so.17git"
  IMPORTED_SONAME_RELEASE "libclangCodeGen.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangCodeGen )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangCodeGen "${_IMPORT_PREFIX}/lib/libclangCodeGen.so.17git" )

# Import target "clangAnalysis" for configuration "Release"
set_property(TARGET clangAnalysis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAnalysis PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangASTMatchers;clangBasic;clangLex;LLVMFrontendOpenMP;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangAnalysis.so.17git"
  IMPORTED_SONAME_RELEASE "libclangAnalysis.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAnalysis )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAnalysis "${_IMPORT_PREFIX}/lib/libclangAnalysis.so.17git" )

# Import target "clangAnalysisFlowSensitive" for configuration "Release"
set_property(TARGET clangAnalysisFlowSensitive APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAnalysisFlowSensitive PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAnalysis;clangAST;clangBasic;LLVMFrontendOpenMP;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangAnalysisFlowSensitive.so.17git"
  IMPORTED_SONAME_RELEASE "libclangAnalysisFlowSensitive.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAnalysisFlowSensitive )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAnalysisFlowSensitive "${_IMPORT_PREFIX}/lib/libclangAnalysisFlowSensitive.so.17git" )

# Import target "clangAnalysisFlowSensitiveModels" for configuration "Release"
set_property(TARGET clangAnalysisFlowSensitiveModels APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangAnalysisFlowSensitiveModels PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAnalysis;clangAnalysisFlowSensitive;clangAST;clangASTMatchers;clangBasic;LLVMFrontendOpenMP;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangAnalysisFlowSensitiveModels.so.17git"
  IMPORTED_SONAME_RELEASE "libclangAnalysisFlowSensitiveModels.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangAnalysisFlowSensitiveModels )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangAnalysisFlowSensitiveModels "${_IMPORT_PREFIX}/lib/libclangAnalysisFlowSensitiveModels.so.17git" )

# Import target "clangEdit" for configuration "Release"
set_property(TARGET clangEdit APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangEdit PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangLex;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangEdit.so.17git"
  IMPORTED_SONAME_RELEASE "libclangEdit.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangEdit )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangEdit "${_IMPORT_PREFIX}/lib/libclangEdit.so.17git" )

# Import target "clangExtractAPI" for configuration "Release"
set_property(TARGET clangExtractAPI APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangExtractAPI PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangFrontend;clangIndex;clangLex;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangExtractAPI.so.17git"
  IMPORTED_SONAME_RELEASE "libclangExtractAPI.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangExtractAPI )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangExtractAPI "${_IMPORT_PREFIX}/lib/libclangExtractAPI.so.17git" )

# Import target "clangRewrite" for configuration "Release"
set_property(TARGET clangRewrite APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangRewrite PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;clangLex;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangRewrite.so.17git"
  IMPORTED_SONAME_RELEASE "libclangRewrite.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangRewrite )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangRewrite "${_IMPORT_PREFIX}/lib/libclangRewrite.so.17git" )

# Import target "clangARCMigrate" for configuration "Release"
set_property(TARGET clangARCMigrate APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangARCMigrate PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangAnalysis;clangBasic;clangEdit;clangFrontend;clangLex;clangRewrite;clangSema;clangSerialization;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangARCMigrate.so.17git"
  IMPORTED_SONAME_RELEASE "libclangARCMigrate.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangARCMigrate )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangARCMigrate "${_IMPORT_PREFIX}/lib/libclangARCMigrate.so.17git" )

# Import target "clangDriver" for configuration "Release"
set_property(TARGET clangDriver APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDriver PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;LLVMBinaryFormat;LLVMMC;LLVMObject;LLVMOption;LLVMProfileData;LLVMSupport;LLVMTargetParser;LLVMWindowsDriver"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangDriver.so.17git"
  IMPORTED_SONAME_RELEASE "libclangDriver.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDriver )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDriver "${_IMPORT_PREFIX}/lib/libclangDriver.so.17git" )

# Import target "clangSerialization" for configuration "Release"
set_property(TARGET clangSerialization APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangSerialization PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangLex;clangSema;LLVMBitReader;LLVMBitstreamReader;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangSerialization.so.17git"
  IMPORTED_SONAME_RELEASE "libclangSerialization.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangSerialization )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangSerialization "${_IMPORT_PREFIX}/lib/libclangSerialization.so.17git" )

# Import target "clangRewriteFrontend" for configuration "Release"
set_property(TARGET clangRewriteFrontend APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangRewriteFrontend PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangEdit;clangFrontend;clangLex;clangRewrite;clangSerialization;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangRewriteFrontend.so.17git"
  IMPORTED_SONAME_RELEASE "libclangRewriteFrontend.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangRewriteFrontend )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangRewriteFrontend "${_IMPORT_PREFIX}/lib/libclangRewriteFrontend.so.17git" )

# Import target "clangFrontend" for configuration "Release"
set_property(TARGET clangFrontend APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangFrontend PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangDriver;clangEdit;clangLex;clangParse;clangSema;clangSerialization;LLVMBitReader;LLVMBitstreamReader;LLVMOption;LLVMProfileData;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangFrontend.so.17git"
  IMPORTED_SONAME_RELEASE "libclangFrontend.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangFrontend )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangFrontend "${_IMPORT_PREFIX}/lib/libclangFrontend.so.17git" )

# Import target "clangFrontendTool" for configuration "Release"
set_property(TARGET clangFrontendTool APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangFrontendTool PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;clangCodeGen;clangDriver;clangExtractAPI;clangFrontend;clangRewriteFrontend;clangARCMigrate;clangStaticAnalyzerFrontend;LLVMOption;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangFrontendTool.so.17git"
  IMPORTED_SONAME_RELEASE "libclangFrontendTool.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangFrontendTool )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangFrontendTool "${_IMPORT_PREFIX}/lib/libclangFrontendTool.so.17git" )

# Import target "clangToolingCore" for configuration "Release"
set_property(TARGET clangToolingCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingCore PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;clangLex;clangRewrite;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangToolingCore.so.17git"
  IMPORTED_SONAME_RELEASE "libclangToolingCore.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingCore "${_IMPORT_PREFIX}/lib/libclangToolingCore.so.17git" )

# Import target "clangToolingInclusions" for configuration "Release"
set_property(TARGET clangToolingInclusions APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingInclusions PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;clangLex;clangRewrite;clangToolingCore;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangToolingInclusions.so.17git"
  IMPORTED_SONAME_RELEASE "libclangToolingInclusions.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingInclusions )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingInclusions "${_IMPORT_PREFIX}/lib/libclangToolingInclusions.so.17git" )

# Import target "clangToolingInclusionsStdlib" for configuration "Release"
set_property(TARGET clangToolingInclusionsStdlib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingInclusionsStdlib PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangToolingInclusionsStdlib.so.17git"
  IMPORTED_SONAME_RELEASE "libclangToolingInclusionsStdlib.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingInclusionsStdlib )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingInclusionsStdlib "${_IMPORT_PREFIX}/lib/libclangToolingInclusionsStdlib.so.17git" )

# Import target "clangToolingRefactoring" for configuration "Release"
set_property(TARGET clangToolingRefactoring APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingRefactoring PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangASTMatchers;clangBasic;clangFormat;clangIndex;clangLex;clangRewrite;clangToolingCore;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangToolingRefactoring.so.17git"
  IMPORTED_SONAME_RELEASE "libclangToolingRefactoring.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingRefactoring )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingRefactoring "${_IMPORT_PREFIX}/lib/libclangToolingRefactoring.so.17git" )

# Import target "clangToolingASTDiff" for configuration "Release"
set_property(TARGET clangToolingASTDiff APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingASTDiff PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;clangAST;clangLex;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangToolingASTDiff.so.17git"
  IMPORTED_SONAME_RELEASE "libclangToolingASTDiff.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingASTDiff )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingASTDiff "${_IMPORT_PREFIX}/lib/libclangToolingASTDiff.so.17git" )

# Import target "clangToolingSyntax" for configuration "Release"
set_property(TARGET clangToolingSyntax APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangToolingSyntax PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangFrontend;clangLex;clangToolingCore;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangToolingSyntax.so.17git"
  IMPORTED_SONAME_RELEASE "libclangToolingSyntax.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangToolingSyntax )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangToolingSyntax "${_IMPORT_PREFIX}/lib/libclangToolingSyntax.so.17git" )

# Import target "clangDependencyScanning" for configuration "Release"
set_property(TARGET clangDependencyScanning APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDependencyScanning PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangCodeGen;clangDriver;clangFrontend;clangFrontendTool;clangLex;clangParse;clangSerialization;clangTooling;LLVMAArch64CodeGen;LLVMAArch64AsmParser;LLVMAArch64Desc;LLVMAArch64Disassembler;LLVMAArch64Info;LLVMAArch64Utils;LLVMAMDGPUCodeGen;LLVMAMDGPUAsmParser;LLVMAMDGPUDesc;LLVMAMDGPUDisassembler;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMARMCodeGen;LLVMARMAsmParser;LLVMARMDesc;LLVMARMDisassembler;LLVMARMInfo;LLVMARMUtils;LLVMAVRCodeGen;LLVMAVRAsmParser;LLVMAVRDesc;LLVMAVRDisassembler;LLVMAVRInfo;LLVMBPFCodeGen;LLVMBPFAsmParser;LLVMBPFDesc;LLVMBPFDisassembler;LLVMBPFInfo;LLVMHexagonCodeGen;LLVMHexagonAsmParser;LLVMHexagonDesc;LLVMHexagonDisassembler;LLVMHexagonInfo;LLVMLanaiCodeGen;LLVMLanaiAsmParser;LLVMLanaiDesc;LLVMLanaiDisassembler;LLVMLanaiInfo;LLVMLoongArchCodeGen;LLVMLoongArchAsmParser;LLVMLoongArchDesc;LLVMLoongArchDisassembler;LLVMLoongArchInfo;LLVMMipsCodeGen;LLVMMipsAsmParser;LLVMMipsDesc;LLVMMipsDisassembler;LLVMMipsInfo;LLVMMSP430CodeGen;LLVMMSP430AsmParser;LLVMMSP430Desc;LLVMMSP430Disassembler;LLVMMSP430Info;LLVMNVPTXCodeGen;LLVMNVPTXDesc;LLVMNVPTXInfo;LLVMPowerPCCodeGen;LLVMPowerPCAsmParser;LLVMPowerPCDesc;LLVMPowerPCDisassembler;LLVMPowerPCInfo;LLVMRISCVCodeGen;LLVMRISCVAsmParser;LLVMRISCVDesc;LLVMRISCVDisassembler;LLVMRISCVInfo;LLVMSparcCodeGen;LLVMSparcAsmParser;LLVMSparcDesc;LLVMSparcDisassembler;LLVMSparcInfo;LLVMSystemZCodeGen;LLVMSystemZAsmParser;LLVMSystemZDesc;LLVMSystemZDisassembler;LLVMSystemZInfo;LLVMVECodeGen;LLVMVEAsmParser;LLVMVEDesc;LLVMVEDisassembler;LLVMVEInfo;LLVMWebAssemblyCodeGen;LLVMWebAssemblyAsmParser;LLVMWebAssemblyDesc;LLVMWebAssemblyDisassembler;LLVMWebAssemblyInfo;LLVMWebAssemblyUtils;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Desc;LLVMX86Disassembler;LLVMX86Info;LLVMXCoreCodeGen;LLVMXCoreDesc;LLVMXCoreDisassembler;LLVMXCoreInfo;LLVMCore;LLVMOption;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangDependencyScanning.so.17git"
  IMPORTED_SONAME_RELEASE "libclangDependencyScanning.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDependencyScanning )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDependencyScanning "${_IMPORT_PREFIX}/lib/libclangDependencyScanning.so.17git" )

# Import target "clangTransformer" for configuration "Release"
set_property(TARGET clangTransformer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTransformer PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangASTMatchers;clangBasic;clangLex;clangToolingCore;clangToolingRefactoring;LLVMFrontendOpenMP;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangTransformer.so.17git"
  IMPORTED_SONAME_RELEASE "libclangTransformer.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTransformer )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTransformer "${_IMPORT_PREFIX}/lib/libclangTransformer.so.17git" )

# Import target "clangTooling" for configuration "Release"
set_property(TARGET clangTooling APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangTooling PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangASTMatchers;clangBasic;clangDriver;clangFormat;clangFrontend;clangLex;clangRewrite;clangSerialization;clangToolingCore;LLVMOption;LLVMFrontendOpenMP;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangTooling.so.17git"
  IMPORTED_SONAME_RELEASE "libclangTooling.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangTooling )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangTooling "${_IMPORT_PREFIX}/lib/libclangTooling.so.17git" )

# Import target "clangDirectoryWatcher" for configuration "Release"
set_property(TARGET clangDirectoryWatcher APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangDirectoryWatcher PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangDirectoryWatcher.so.17git"
  IMPORTED_SONAME_RELEASE "libclangDirectoryWatcher.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangDirectoryWatcher )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangDirectoryWatcher "${_IMPORT_PREFIX}/lib/libclangDirectoryWatcher.so.17git" )

# Import target "clangIndex" for configuration "Release"
set_property(TARGET clangIndex APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangIndex PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangFormat;clangFrontend;clangLex;clangRewrite;clangSerialization;clangToolingCore;LLVMCore;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangIndex.so.17git"
  IMPORTED_SONAME_RELEASE "libclangIndex.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangIndex )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangIndex "${_IMPORT_PREFIX}/lib/libclangIndex.so.17git" )

# Import target "clangIndexSerialization" for configuration "Release"
set_property(TARGET clangIndexSerialization APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangIndexSerialization PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangIndexSerialization.so.17git"
  IMPORTED_SONAME_RELEASE "libclangIndexSerialization.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangIndexSerialization )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangIndexSerialization "${_IMPORT_PREFIX}/lib/libclangIndexSerialization.so.17git" )

# Import target "clangStaticAnalyzerCore" for configuration "Release"
set_property(TARGET clangStaticAnalyzerCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangStaticAnalyzerCore PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangASTMatchers;clangAnalysis;clangBasic;clangCrossTU;clangFrontend;clangLex;clangRewrite;clangToolingCore;LLVMFrontendOpenMP;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangStaticAnalyzerCore.so.17git"
  IMPORTED_SONAME_RELEASE "libclangStaticAnalyzerCore.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangStaticAnalyzerCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangStaticAnalyzerCore "${_IMPORT_PREFIX}/lib/libclangStaticAnalyzerCore.so.17git" )

# Import target "clangStaticAnalyzerCheckers" for configuration "Release"
set_property(TARGET clangStaticAnalyzerCheckers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangStaticAnalyzerCheckers PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangASTMatchers;clangAnalysis;clangBasic;clangLex;clangStaticAnalyzerCore;LLVMFrontendOpenMP;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangStaticAnalyzerCheckers.so.17git"
  IMPORTED_SONAME_RELEASE "libclangStaticAnalyzerCheckers.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangStaticAnalyzerCheckers )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangStaticAnalyzerCheckers "${_IMPORT_PREFIX}/lib/libclangStaticAnalyzerCheckers.so.17git" )

# Import target "clangStaticAnalyzerFrontend" for configuration "Release"
set_property(TARGET clangStaticAnalyzerFrontend APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangStaticAnalyzerFrontend PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangASTMatchers;clangAnalysis;clangBasic;clangCrossTU;clangFrontend;clangLex;clangStaticAnalyzerCheckers;clangStaticAnalyzerCore;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangStaticAnalyzerFrontend.so.17git"
  IMPORTED_SONAME_RELEASE "libclangStaticAnalyzerFrontend.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangStaticAnalyzerFrontend )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangStaticAnalyzerFrontend "${_IMPORT_PREFIX}/lib/libclangStaticAnalyzerFrontend.so.17git" )

# Import target "clangFormat" for configuration "Release"
set_property(TARGET clangFormat APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangFormat PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;clangLex;clangToolingCore;clangToolingInclusions;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangFormat.so.17git"
  IMPORTED_SONAME_RELEASE "libclangFormat.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangFormat )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangFormat "${_IMPORT_PREFIX}/lib/libclangFormat.so.17git" )

# Import target "clangInterpreter" for configuration "Release"
set_property(TARGET clangInterpreter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangInterpreter PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangAnalysis;clangBasic;clangDriver;clangEdit;clangFrontend;clangLex;clangParse;clangSema;clangSerialization;clangCodeGen;clangFrontendTool;LLVMCore;LLVMOption;LLVMOrcJIT;LLVMSupport;LLVMTarget;LLVMTargetParser;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Desc;LLVMX86Disassembler;LLVMX86Info"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangInterpreter.so.17git"
  IMPORTED_SONAME_RELEASE "libclangInterpreter.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangInterpreter )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangInterpreter "${_IMPORT_PREFIX}/lib/libclangInterpreter.so.17git" )

# Import target "clangSupport" for configuration "Release"
set_property(TARGET clangSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangSupport PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangSupport.so.17git"
  IMPORTED_SONAME_RELEASE "libclangSupport.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangSupport )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangSupport "${_IMPORT_PREFIX}/lib/libclangSupport.so.17git" )

# Import target "diagtool" for configuration "Release"
set_property(TARGET diagtool APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(diagtool PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/diagtool"
  )

list(APPEND _IMPORT_CHECK_TARGETS diagtool )
list(APPEND _IMPORT_CHECK_FILES_FOR_diagtool "${_IMPORT_PREFIX}/bin/diagtool" )

# Import target "clang" for configuration "Release"
set_property(TARGET clang APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-17"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang "${_IMPORT_PREFIX}/bin/clang-17" )

# Import target "clang-format" for configuration "Release"
set_property(TARGET clang-format APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-format PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-format"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-format )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-format "${_IMPORT_PREFIX}/bin/clang-format" )

# Import target "clangHandleCXX" for configuration "Release"
set_property(TARGET clangHandleCXX APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangHandleCXX PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangBasic;clangCodeGen;clangFrontend;clangLex;clangSerialization;clangTooling;LLVMAArch64CodeGen;LLVMAArch64AsmParser;LLVMAArch64Desc;LLVMAArch64Disassembler;LLVMAArch64Info;LLVMAArch64Utils;LLVMAMDGPUCodeGen;LLVMAMDGPUAsmParser;LLVMAMDGPUDesc;LLVMAMDGPUDisassembler;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMARMCodeGen;LLVMARMAsmParser;LLVMARMDesc;LLVMARMDisassembler;LLVMARMInfo;LLVMARMUtils;LLVMAVRCodeGen;LLVMAVRAsmParser;LLVMAVRDesc;LLVMAVRDisassembler;LLVMAVRInfo;LLVMBPFCodeGen;LLVMBPFAsmParser;LLVMBPFDesc;LLVMBPFDisassembler;LLVMBPFInfo;LLVMHexagonCodeGen;LLVMHexagonAsmParser;LLVMHexagonDesc;LLVMHexagonDisassembler;LLVMHexagonInfo;LLVMLanaiCodeGen;LLVMLanaiAsmParser;LLVMLanaiDesc;LLVMLanaiDisassembler;LLVMLanaiInfo;LLVMLoongArchCodeGen;LLVMLoongArchAsmParser;LLVMLoongArchDesc;LLVMLoongArchDisassembler;LLVMLoongArchInfo;LLVMMipsCodeGen;LLVMMipsAsmParser;LLVMMipsDesc;LLVMMipsDisassembler;LLVMMipsInfo;LLVMMSP430CodeGen;LLVMMSP430AsmParser;LLVMMSP430Desc;LLVMMSP430Disassembler;LLVMMSP430Info;LLVMNVPTXCodeGen;LLVMNVPTXDesc;LLVMNVPTXInfo;LLVMPowerPCCodeGen;LLVMPowerPCAsmParser;LLVMPowerPCDesc;LLVMPowerPCDisassembler;LLVMPowerPCInfo;LLVMRISCVCodeGen;LLVMRISCVAsmParser;LLVMRISCVDesc;LLVMRISCVDisassembler;LLVMRISCVInfo;LLVMSparcCodeGen;LLVMSparcAsmParser;LLVMSparcDesc;LLVMSparcDisassembler;LLVMSparcInfo;LLVMSystemZCodeGen;LLVMSystemZAsmParser;LLVMSystemZDesc;LLVMSystemZDisassembler;LLVMSystemZInfo;LLVMVECodeGen;LLVMVEAsmParser;LLVMVEDesc;LLVMVEDisassembler;LLVMVEInfo;LLVMWebAssemblyCodeGen;LLVMWebAssemblyAsmParser;LLVMWebAssemblyDesc;LLVMWebAssemblyDisassembler;LLVMWebAssemblyInfo;LLVMWebAssemblyUtils;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Desc;LLVMX86Disassembler;LLVMX86Info;LLVMXCoreCodeGen;LLVMXCoreDesc;LLVMXCoreDisassembler;LLVMXCoreInfo;LLVMSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangHandleCXX.so.17git"
  IMPORTED_SONAME_RELEASE "libclangHandleCXX.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangHandleCXX )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangHandleCXX "${_IMPORT_PREFIX}/lib/libclangHandleCXX.so.17git" )

# Import target "clangHandleLLVM" for configuration "Release"
set_property(TARGET clangHandleLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clangHandleLLVM PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "LLVMAnalysis;LLVMCodeGen;LLVMCore;LLVMExecutionEngine;LLVMipo;LLVMIRPrinter;LLVMIRReader;LLVMMC;LLVMMCJIT;LLVMObject;LLVMPasses;LLVMRuntimeDyld;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTargetParser;LLVMTransformUtils;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Desc;LLVMX86Disassembler;LLVMX86Info"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclangHandleLLVM.so.17git"
  IMPORTED_SONAME_RELEASE "libclangHandleLLVM.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clangHandleLLVM )
list(APPEND _IMPORT_CHECK_FILES_FOR_clangHandleLLVM "${_IMPORT_PREFIX}/lib/libclangHandleLLVM.so.17git" )

# Import target "clang-offload-packager" for configuration "Release"
set_property(TARGET clang-offload-packager APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-offload-packager PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-offload-packager"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-offload-packager )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-offload-packager "${_IMPORT_PREFIX}/bin/clang-offload-packager" )

# Import target "clang-offload-bundler" for configuration "Release"
set_property(TARGET clang-offload-bundler APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-offload-bundler PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-offload-bundler"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-offload-bundler )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-offload-bundler "${_IMPORT_PREFIX}/bin/clang-offload-bundler" )

# Import target "clang-scan-deps" for configuration "Release"
set_property(TARGET clang-scan-deps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-scan-deps PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-scan-deps"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-scan-deps )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-scan-deps "${_IMPORT_PREFIX}/bin/clang-scan-deps" )

# Import target "clang-repl" for configuration "Release"
set_property(TARGET clang-repl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-repl PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-repl"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-repl )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-repl "${_IMPORT_PREFIX}/bin/clang-repl" )

# Import target "clang-rename" for configuration "Release"
set_property(TARGET clang-rename APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-rename PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-rename"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-rename )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-rename "${_IMPORT_PREFIX}/bin/clang-rename" )

# Import target "clang-refactor" for configuration "Release"
set_property(TARGET clang-refactor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-refactor PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-refactor"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-refactor )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-refactor "${_IMPORT_PREFIX}/bin/clang-refactor" )

# Import target "clang-cpp" for configuration "Release"
set_property(TARGET clang-cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "LLVMSupport;LLVMTargetParser;LLVMFrontendOpenMP;LLVMMC;LLVMMCParser;LLVMBinaryFormat;LLVMCore;LLVMFrontendHLSL;LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCoroutines;LLVMCoverage;LLVMDemangle;LLVMExtensions;LLVMipo;LLVMIRPrinter;LLVMIRReader;LLVMAggressiveInstCombine;LLVMInstCombine;LLVMInstrumentation;LLVMLTO;LLVMLinker;LLVMObjCARCOpts;LLVMObject;LLVMPasses;LLVMProfileData;LLVMRemarks;LLVMScalarOpts;LLVMTarget;LLVMTransformUtils;LLVMOption;LLVMWindowsDriver;LLVMBitstreamReader;LLVMAArch64CodeGen;LLVMAArch64AsmParser;LLVMAArch64Desc;LLVMAArch64Disassembler;LLVMAArch64Info;LLVMAArch64Utils;LLVMAMDGPUCodeGen;LLVMAMDGPUAsmParser;LLVMAMDGPUDesc;LLVMAMDGPUDisassembler;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMARMCodeGen;LLVMARMAsmParser;LLVMARMDesc;LLVMARMDisassembler;LLVMARMInfo;LLVMARMUtils;LLVMAVRCodeGen;LLVMAVRAsmParser;LLVMAVRDesc;LLVMAVRDisassembler;LLVMAVRInfo;LLVMBPFCodeGen;LLVMBPFAsmParser;LLVMBPFDesc;LLVMBPFDisassembler;LLVMBPFInfo;LLVMHexagonCodeGen;LLVMHexagonAsmParser;LLVMHexagonDesc;LLVMHexagonDisassembler;LLVMHexagonInfo;LLVMLanaiCodeGen;LLVMLanaiAsmParser;LLVMLanaiDesc;LLVMLanaiDisassembler;LLVMLanaiInfo;LLVMLoongArchCodeGen;LLVMLoongArchAsmParser;LLVMLoongArchDesc;LLVMLoongArchDisassembler;LLVMLoongArchInfo;LLVMMipsCodeGen;LLVMMipsAsmParser;LLVMMipsDesc;LLVMMipsDisassembler;LLVMMipsInfo;LLVMMSP430CodeGen;LLVMMSP430AsmParser;LLVMMSP430Desc;LLVMMSP430Disassembler;LLVMMSP430Info;LLVMNVPTXCodeGen;LLVMNVPTXDesc;LLVMNVPTXInfo;LLVMPowerPCCodeGen;LLVMPowerPCAsmParser;LLVMPowerPCDesc;LLVMPowerPCDisassembler;LLVMPowerPCInfo;LLVMRISCVCodeGen;LLVMRISCVAsmParser;LLVMRISCVDesc;LLVMRISCVDisassembler;LLVMRISCVInfo;LLVMSparcCodeGen;LLVMSparcAsmParser;LLVMSparcDesc;LLVMSparcDisassembler;LLVMSparcInfo;LLVMSystemZCodeGen;LLVMSystemZAsmParser;LLVMSystemZDesc;LLVMSystemZDisassembler;LLVMSystemZInfo;LLVMVECodeGen;LLVMVEAsmParser;LLVMVEDesc;LLVMVEDisassembler;LLVMVEInfo;LLVMWebAssemblyCodeGen;LLVMWebAssemblyAsmParser;LLVMWebAssemblyDesc;LLVMWebAssemblyDisassembler;LLVMWebAssemblyInfo;LLVMWebAssemblyUtils;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Desc;LLVMX86Disassembler;LLVMX86Info;LLVMXCoreCodeGen;LLVMXCoreDesc;LLVMXCoreDisassembler;LLVMXCoreInfo;LLVMOrcJIT;LLVMCodeGen;LLVMExecutionEngine;LLVMMCJIT;LLVMRuntimeDyld;LLVMSelectionDAG"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclang-cpp.so.17git"
  IMPORTED_SONAME_RELEASE "libclang-cpp.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-cpp "${_IMPORT_PREFIX}/lib/libclang-cpp.so.17git" )

# Import target "clang-check" for configuration "Release"
set_property(TARGET clang-check APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-check PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-check"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-check )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-check "${_IMPORT_PREFIX}/bin/clang-check" )

# Import target "clang-extdef-mapping" for configuration "Release"
set_property(TARGET clang-extdef-mapping APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clang-extdef-mapping PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/clang-extdef-mapping"
  )

list(APPEND _IMPORT_CHECK_TARGETS clang-extdef-mapping )
list(APPEND _IMPORT_CHECK_FILES_FOR_clang-extdef-mapping "${_IMPORT_PREFIX}/bin/clang-extdef-mapping" )

# Import target "libclang" for configuration "Release"
set_property(TARGET libclang APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(libclang PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "clangAST;clangBasic;clangDriver;clangExtractAPI;clangFrontend;clangIndex;clangLex;clangRewrite;clangSema;clangSerialization;clangTooling;clangARCMigrate;LLVMAArch64CodeGen;LLVMAArch64AsmParser;LLVMAArch64Desc;LLVMAArch64Disassembler;LLVMAArch64Info;LLVMAArch64Utils;LLVMAMDGPUCodeGen;LLVMAMDGPUAsmParser;LLVMAMDGPUDesc;LLVMAMDGPUDisassembler;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMARMCodeGen;LLVMARMAsmParser;LLVMARMDesc;LLVMARMDisassembler;LLVMARMInfo;LLVMARMUtils;LLVMAVRCodeGen;LLVMAVRAsmParser;LLVMAVRDesc;LLVMAVRDisassembler;LLVMAVRInfo;LLVMBPFCodeGen;LLVMBPFAsmParser;LLVMBPFDesc;LLVMBPFDisassembler;LLVMBPFInfo;LLVMHexagonCodeGen;LLVMHexagonAsmParser;LLVMHexagonDesc;LLVMHexagonDisassembler;LLVMHexagonInfo;LLVMLanaiCodeGen;LLVMLanaiAsmParser;LLVMLanaiDesc;LLVMLanaiDisassembler;LLVMLanaiInfo;LLVMLoongArchCodeGen;LLVMLoongArchAsmParser;LLVMLoongArchDesc;LLVMLoongArchDisassembler;LLVMLoongArchInfo;LLVMMipsCodeGen;LLVMMipsAsmParser;LLVMMipsDesc;LLVMMipsDisassembler;LLVMMipsInfo;LLVMMSP430CodeGen;LLVMMSP430AsmParser;LLVMMSP430Desc;LLVMMSP430Disassembler;LLVMMSP430Info;LLVMNVPTXCodeGen;LLVMNVPTXDesc;LLVMNVPTXInfo;LLVMPowerPCCodeGen;LLVMPowerPCAsmParser;LLVMPowerPCDesc;LLVMPowerPCDisassembler;LLVMPowerPCInfo;LLVMRISCVCodeGen;LLVMRISCVAsmParser;LLVMRISCVDesc;LLVMRISCVDisassembler;LLVMRISCVInfo;LLVMSparcCodeGen;LLVMSparcAsmParser;LLVMSparcDesc;LLVMSparcDisassembler;LLVMSparcInfo;LLVMSystemZCodeGen;LLVMSystemZAsmParser;LLVMSystemZDesc;LLVMSystemZDisassembler;LLVMSystemZInfo;LLVMVECodeGen;LLVMVEAsmParser;LLVMVEDesc;LLVMVEDisassembler;LLVMVEInfo;LLVMWebAssemblyCodeGen;LLVMWebAssemblyAsmParser;LLVMWebAssemblyDesc;LLVMWebAssemblyDisassembler;LLVMWebAssemblyInfo;LLVMWebAssemblyUtils;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Desc;LLVMX86Disassembler;LLVMX86Info;LLVMXCoreCodeGen;LLVMXCoreDesc;LLVMXCoreDisassembler;LLVMXCoreInfo;LLVMCore;LLVMSupport;LLVMTargetParser"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libclang.so.17.0.0git"
  IMPORTED_SONAME_RELEASE "libclang.so.17git"
  )

list(APPEND _IMPORT_CHECK_TARGETS libclang )
list(APPEND _IMPORT_CHECK_FILES_FOR_libclang "${_IMPORT_PREFIX}/lib/libclang.so.17.0.0git" )

# Import target "amdgpu-arch" for configuration "Release"
set_property(TARGET amdgpu-arch APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(amdgpu-arch PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/amdgpu-arch"
  )

list(APPEND _IMPORT_CHECK_TARGETS amdgpu-arch )
list(APPEND _IMPORT_CHECK_FILES_FOR_amdgpu-arch "${_IMPORT_PREFIX}/bin/amdgpu-arch" )

# Import target "nvptx-arch" for configuration "Release"
set_property(TARGET nvptx-arch APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nvptx-arch PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/nvptx-arch"
  )

list(APPEND _IMPORT_CHECK_TARGETS nvptx-arch )
list(APPEND _IMPORT_CHECK_FILES_FOR_nvptx-arch "${_IMPORT_PREFIX}/bin/nvptx-arch" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
