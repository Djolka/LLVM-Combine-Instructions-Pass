/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  FeatureBitset ComputeAvailableFeatures(const FeatureBitset &FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                FeatureBitset &MissingFeatures,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0) {
    FeatureBitset MissingFeatures;
    return MatchInstructionImpl(Operands, Inst, ErrorInfo, MissingFeatures,
                                matchingInlineAsm, VariantID);
  }

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_ModernAsBit = 0,
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_ModernAsBit: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, const FeatureBitset &Features, unsigned VariantID) {
  switch (VariantID) {
  case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "cntlz", 5) != 0)
          break;
        Mnemonic = "cntlzw";	 // "cntlz"
        return;
      case 6:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "cntlz.", 6) != 0)
          break;
        Mnemonic = "cntlzw.";	 // "cntlz."
        return;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "cntlz", 5) != 0)
      break;
    Mnemonic = "cntlzw";	 // "cntlz"
    return;
  case 6:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "cntlz.", 6) != 0)
      break;
    Mnemonic = "cntlzw.";	 // "cntlz."
    return;
  }
}

enum {
  Tie0_1_1,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_1_1 */ { 0, 1, 1 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegG8RCOperands,
  CVT_95_addTLSRegOperands,
  CVT_95_addRegGPRCOperands,
  CVT_95_addImmOperands,
  CVT_95_addRegGPRCNoR0Operands,
  CVT_95_addS16ImmOperands,
  CVT_95_addU16ImmOperands,
  CVT_95_addBranchTargetOperands,
  CVT_95_addRegCRBITRCOperands,
  CVT_imm_95_3,
  CVT_imm_95_2,
  CVT_imm_95_0,
  CVT_95_addRegVRRCOperands,
  CVT_imm_95_8,
  CVT_imm_95_10,
  CVT_imm_95_76,
  CVT_regCR0,
  CVT_95_addRegCRRCOperands,
  CVT_imm_95_79,
  CVT_imm_95_78,
  CVT_imm_95_4,
  CVT_imm_95_7,
  CVT_imm_95_6,
  CVT_imm_95_44,
  CVT_imm_95_47,
  CVT_imm_95_46,
  CVT_imm_95_36,
  CVT_imm_95_39,
  CVT_imm_95_38,
  CVT_imm_95_12,
  CVT_imm_95_15,
  CVT_imm_95_14,
  CVT_imm_95_68,
  CVT_imm_95_71,
  CVT_imm_95_70,
  CVT_imm_95_100,
  CVT_imm_95_103,
  CVT_imm_95_102,
  CVT_imm_95_108,
  CVT_imm_95_111,
  CVT_imm_95_110,
  CVT_imm_95_31,
  CVT_95_addRegGxRCNoR0Operands,
  CVT_95_addRegGxRCOperands,
  CVT_regR0,
  CVT_95_addRegDMRRCOperands,
  CVT_95_addRegVSRpRCOperands,
  CVT_95_addRegDMRROWpRCOperands,
  CVT_95_addRegACCRCOperands,
  CVT_95_addRegSPERCOperands,
  CVT_95_addRegSPE4RCOperands,
  CVT_95_addRegF4RCOperands,
  CVT_95_addRegF8RCOperands,
  CVT_95_addRegG8RCNoX0Operands,
  CVT_regCR0EQ,
  CVT_regCR0GT,
  CVT_regCR0LT,
  CVT_regZERO8,
  CVT_regZERO,
  CVT_95_addRegG8pRCOperands,
  CVT_imm_95_1,
  CVT_95_addRegVFRCOperands,
  CVT_95_addRegVSFRCOperands,
  CVT_95_addRegVSSRCOperands,
  CVT_95_addRegVSRCOperands,
  CVT_imm_95_29,
  CVT_imm_95_280,
  CVT_imm_95_128,
  CVT_imm_95_129,
  CVT_imm_95_130,
  CVT_imm_95_131,
  CVT_imm_95_132,
  CVT_imm_95_133,
  CVT_imm_95_134,
  CVT_imm_95_135,
  CVT_imm_95_28,
  CVT_imm_95_9,
  CVT_imm_95_19,
  CVT_imm_95_537,
  CVT_imm_95_539,
  CVT_imm_95_541,
  CVT_imm_95_543,
  CVT_imm_95_536,
  CVT_imm_95_538,
  CVT_imm_95_540,
  CVT_imm_95_542,
  CVT_imm_95_1018,
  CVT_imm_95_981,
  CVT_imm_95_22,
  CVT_imm_95_17,
  CVT_imm_95_18,
  CVT_imm_95_980,
  CVT_imm_95_529,
  CVT_imm_95_531,
  CVT_imm_95_533,
  CVT_imm_95_535,
  CVT_imm_95_528,
  CVT_imm_95_530,
  CVT_imm_95_532,
  CVT_imm_95_534,
  CVT_imm_95_1019,
  CVT_95_addCRBitMaskOperands,
  CVT_imm_95_48,
  CVT_imm_95_896,
  CVT_imm_95_287,
  CVT_imm_95_5,
  CVT_imm_95_25,
  CVT_imm_95_512,
  CVT_imm_95_272,
  CVT_imm_95_273,
  CVT_imm_95_274,
  CVT_imm_95_275,
  CVT_imm_95_260,
  CVT_imm_95_261,
  CVT_imm_95_262,
  CVT_imm_95_263,
  CVT_imm_95_26,
  CVT_imm_95_27,
  CVT_imm_95_990,
  CVT_imm_95_991,
  CVT_imm_95_268,
  CVT_imm_95_988,
  CVT_imm_95_989,
  CVT_imm_95_269,
  CVT_imm_95_986,
  CVT_imm_95_13,
  CVT_imm_95_255,
  CVT_imm_95_284,
  CVT_imm_95_285,
  CVT_regX0,
  CVT_95_addRegVSRpEvenRCOperands,
  CVT_imm_95_20,
  CVT_imm_95_16,
  CVT_imm_95_24,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U2Imm1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1,
  Convert__RegGPRC1_1__RegGPRC1_2,
  Convert__RegG8RC1_0__Imm1_1,
  Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3,
  Convert_NoOperands,
  Convert__DirectBr1_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3,
  Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4,
  Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_1__RegVRRC1_2,
  Convert__CondBr1_0,
  Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_0__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_8__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_2__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_10__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_76__regCR0__CondBr1_0,
  Convert__imm_95_76__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_79__regCR0__CondBr1_0,
  Convert__imm_95_79__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_78__regCR0__CondBr1_0,
  Convert__imm_95_78__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_76__regCR0,
  Convert__imm_95_76__RegCRRC1_0,
  Convert__imm_95_79__regCR0,
  Convert__imm_95_79__RegCRRC1_0,
  Convert__imm_95_78__regCR0,
  Convert__imm_95_78__RegCRRC1_0,
  Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_4__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_7__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_6__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_4__regCR0__CondBr1_0,
  Convert__imm_95_4__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_7__regCR0__CondBr1_0,
  Convert__imm_95_7__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_6__regCR0__CondBr1_0,
  Convert__imm_95_6__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_4__regCR0,
  Convert__imm_95_4__RegCRRC1_0,
  Convert__imm_95_7__regCR0,
  Convert__imm_95_7__RegCRRC1_0,
  Convert__imm_95_6__regCR0,
  Convert__imm_95_6__RegCRRC1_0,
  Convert__imm_95_44__regCR0__CondBr1_0,
  Convert__imm_95_44__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_47__regCR0__CondBr1_0,
  Convert__imm_95_47__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_46__regCR0__CondBr1_0,
  Convert__imm_95_46__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_44__regCR0,
  Convert__imm_95_44__RegCRRC1_0,
  Convert__imm_95_47__regCR0,
  Convert__imm_95_47__RegCRRC1_0,
  Convert__imm_95_46__regCR0,
  Convert__imm_95_46__RegCRRC1_0,
  Convert__DirectBr1_0__Imm1_1,
  Convert__imm_95_36__regCR0__CondBr1_0,
  Convert__imm_95_36__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_39__regCR0__CondBr1_0,
  Convert__imm_95_39__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_38__regCR0__CondBr1_0,
  Convert__imm_95_38__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_36__regCR0,
  Convert__imm_95_36__RegCRRC1_0,
  Convert__imm_95_39__regCR0,
  Convert__imm_95_39__RegCRRC1_0,
  Convert__imm_95_38__regCR0,
  Convert__imm_95_38__RegCRRC1_0,
  Convert__imm_95_12__regCR0__CondBr1_0,
  Convert__imm_95_12__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_15__regCR0__CondBr1_0,
  Convert__imm_95_15__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_14__regCR0__CondBr1_0,
  Convert__imm_95_14__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_12__regCR0,
  Convert__imm_95_12__RegCRRC1_0,
  Convert__imm_95_15__regCR0,
  Convert__imm_95_15__RegCRRC1_0,
  Convert__imm_95_14__regCR0,
  Convert__imm_95_14__RegCRRC1_0,
  Convert__imm_95_68__regCR0__CondBr1_0,
  Convert__imm_95_68__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_71__regCR0__CondBr1_0,
  Convert__imm_95_71__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_70__regCR0__CondBr1_0,
  Convert__imm_95_70__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_68__regCR0,
  Convert__imm_95_68__RegCRRC1_0,
  Convert__imm_95_71__regCR0,
  Convert__imm_95_71__RegCRRC1_0,
  Convert__imm_95_70__regCR0,
  Convert__imm_95_70__RegCRRC1_0,
  Convert__imm_95_100__regCR0__CondBr1_0,
  Convert__imm_95_100__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_103__regCR0__CondBr1_0,
  Convert__imm_95_103__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_102__regCR0__CondBr1_0,
  Convert__imm_95_102__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_100__regCR0,
  Convert__imm_95_100__RegCRRC1_0,
  Convert__imm_95_103__regCR0,
  Convert__imm_95_103__RegCRRC1_0,
  Convert__imm_95_102__regCR0,
  Convert__imm_95_102__RegCRRC1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_108__regCR0__CondBr1_0,
  Convert__imm_95_108__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_111__regCR0__CondBr1_0,
  Convert__imm_95_111__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_110__regCR0__CondBr1_0,
  Convert__imm_95_110__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_108__regCR0,
  Convert__imm_95_108__RegCRRC1_0,
  Convert__imm_95_111__regCR0,
  Convert__imm_95_111__RegCRRC1_0,
  Convert__imm_95_110__regCR0,
  Convert__imm_95_110__RegCRRC1_0,
  Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_12__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_15__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_14__RegCRBITRC1_0__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2,
  Convert__RegG8RC1_0__RegGPRC1_1__imm_95_0__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U5Imm1_2__imm_95_31,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31,
  Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U5Imm1_3__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3,
  Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3,
  Convert__regCR0__RegG8RC1_0__RegG8RC1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__regCR0__RegG8RC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3,
  Convert__regCR0__RegG8RC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3,
  Convert__regCR0__RegGPRC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__regCR0__RegGPRC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__U1Imm1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__regCR0__RegGPRC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1,
  Convert__RegG8RC1_0__U2Imm1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__U3Imm1_2__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2,
  Convert__RegGxRCNoR01_1__RegGxRC1_2__U5Imm1_0,
  Convert__regR0__regR0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__RegDMRRC1_0__RegDMRRC1_1,
  Convert__RegDMRRC1_0,
  Convert__RegDMRRC1_0__Tie0_1_1__RegDMRRC1_1,
  Convert__RegVSRpRC1_1__RegDMRROWpRC1_0__U2Imm1_2,
  Convert__RegVSRpRC1_1__RegVSRpRC1_2__RegACCRC1_0,
  Convert__RegDMRROWpRC1_0__RegVSRpRC1_1__U2Imm1_2,
  Convert__RegACCRC1_0__RegVSRpRC1_1__RegVSRpRC1_2,
  Convert__U5Imm1_0,
  Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1,
  Convert__RegSPERC1_0__RegSPERC1_1,
  Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2,
  Convert__RegSPERC1_0__RegSPE4RC1_1,
  Convert__RegSPERC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2,
  Convert__RegGPRC1_0__RegSPERC1_1,
  Convert__RegSPE4RC1_0__RegSPE4RC1_1,
  Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2,
  Convert__RegSPE4RC1_0__RegSPERC1_1,
  Convert__RegSPE4RC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2,
  Convert__RegGPRC1_0__RegSPE4RC1_1,
  Convert__RegSPERC1_0__RegSPERC1_2__U5Imm1_1,
  Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2,
  Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2,
  Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2,
  Convert__RegSPERC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2,
  Convert__RegSPERC1_1__RegSPERC1_2__RegSPERC1_3__imm_95_0,
  Convert__RegSPERC1_0__S5Imm1_1,
  Convert__RegSPERC1_0__U5Imm1_1__RegSPERC1_2,
  Convert__RegF4RC1_0__RegF4RC1_1,
  Convert__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF8RC1_0__RegF8RC1_1,
  Convert__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF4RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF8RC1_1,
  Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2,
  Convert__imm_95_0,
  Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__U4Imm1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0EQ,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0EQ,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0GT,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0GT,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0LT,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0LT,
  Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2,
  Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2,
  Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__regZERO8__S16Imm1_1,
  Convert__RegGPRC1_0__S16Imm1_1,
  Convert__RegGPRC1_0__regZERO__S16Imm1_1,
  Convert__RegG8RC1_0__regZERO8__S17Imm1_1,
  Convert__RegGPRC1_0__S17Imm1_1,
  Convert__RegGPRC1_0__regZERO__S17Imm1_1,
  Convert__RegG8RC1_0__imm_95_0,
  Convert__RegG8pRC1_0__DispRIX161_1__RegGxRCNoR01_2,
  Convert__RegG8pRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_1,
  Convert__RegSPE4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegSPE4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2,
  Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSRC1_0__U5Imm1_1,
  Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2,
  Convert__RegVSRpRC1_0__DispRIX161_1__RegGxRCNoR01_2,
  Convert__RegVSRpRC1_0__Imm1_1__RegG8RC1_2,
  Convert__RegVSRpRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegCRRC1_0__RegCRRC1_1,
  Convert__RegCRRC1_0,
  Convert__RegG8RC1_0__imm_95_29,
  Convert__RegGPRC1_0__imm_95_29,
  Convert__RegG8RC1_0__imm_95_280,
  Convert__RegGPRC1_0__imm_95_280,
  Convert__RegGPRC1_0__U10Imm1_1__imm_95_0,
  Convert__RegGPRC1_0__imm_95_128,
  Convert__RegGPRC1_0__imm_95_129,
  Convert__RegGPRC1_0__imm_95_130,
  Convert__RegGPRC1_0__imm_95_131,
  Convert__RegGPRC1_0__imm_95_132,
  Convert__RegGPRC1_0__imm_95_133,
  Convert__RegGPRC1_0__imm_95_134,
  Convert__RegGPRC1_0__imm_95_135,
  Convert__RegG8RC1_0__imm_95_28,
  Convert__RegGPRC1_0__imm_95_28,
  Convert__RegGPRC1_0,
  Convert__RegG8RC1_0__imm_95_9,
  Convert__RegGPRC1_0__imm_95_9,
  Convert__RegG8RC1_0__imm_95_19,
  Convert__RegGPRC1_0__imm_95_19,
  Convert__RegGPRC1_0__imm_95_537,
  Convert__RegGPRC1_0__imm_95_539,
  Convert__RegGPRC1_0__imm_95_541,
  Convert__RegGPRC1_0__imm_95_543,
  Convert__RegGPRC1_0__imm_95_536,
  Convert__RegGPRC1_0__imm_95_538,
  Convert__RegGPRC1_0__imm_95_540,
  Convert__RegGPRC1_0__imm_95_542,
  Convert__RegGPRC1_0__imm_95_1018,
  Convert__RegGPRC1_0__Imm1_1,
  Convert__RegGPRC1_0__imm_95_981,
  Convert__RegG8RC1_0__imm_95_22,
  Convert__RegGPRC1_0__imm_95_22,
  Convert__RegG8RC1_0__imm_95_17,
  Convert__RegGPRC1_0__imm_95_17,
  Convert__RegG8RC1_0__imm_95_18,
  Convert__RegGPRC1_0__imm_95_18,
  Convert__RegGPRC1_0__imm_95_980,
  Convert__RegG8RC1_0__RegF8RC1_1,
  Convert__RegGPRC1_0__RegF8RC1_1,
  Convert__RegF8RC1_0,
  Convert__RegF8RC1_1,
  Convert__RegF8RC1_0__U3Imm1_1,
  Convert__RegF8RC1_0__U2Imm1_1,
  Convert__RegGPRC1_0__imm_95_529,
  Convert__RegGPRC1_0__imm_95_531,
  Convert__RegGPRC1_0__imm_95_533,
  Convert__RegGPRC1_0__imm_95_535,
  Convert__RegGPRC1_0__imm_95_528,
  Convert__RegGPRC1_0__imm_95_530,
  Convert__RegGPRC1_0__imm_95_532,
  Convert__RegGPRC1_0__imm_95_534,
  Convert__RegGPRC1_0__imm_95_1019,
  Convert__RegG8RC1_0__imm_95_8,
  Convert__RegGPRC1_0__imm_95_8,
  Convert__RegGPRC1_0__CRBitMask1_1,
  Convert__RegGPRC1_0__imm_95_48,
  Convert__RegGPRC1_0__imm_95_896,
  Convert__RegG8RC1_0__imm_95_287,
  Convert__RegGPRC1_0__imm_95_287,
  Convert__RegG8RC1_0__imm_95_5,
  Convert__RegGPRC1_0__imm_95_5,
  Convert__RegG8RC1_0__imm_95_4,
  Convert__RegGPRC1_0__imm_95_4,
  Convert__RegG8RC1_0__imm_95_25,
  Convert__RegGPRC1_0__imm_95_25,
  Convert__RegG8RC1_0__imm_95_512,
  Convert__RegGPRC1_0__imm_95_512,
  Convert__RegG8RC1_0__imm_95_272,
  Convert__RegG8RC1_0__imm_95_273,
  Convert__RegG8RC1_0__imm_95_274,
  Convert__RegG8RC1_0__imm_95_275,
  Convert__RegGPRC1_0__imm_95_272,
  Convert__RegGPRC1_0__imm_95_273,
  Convert__RegGPRC1_0__imm_95_274,
  Convert__RegGPRC1_0__imm_95_275,
  Convert__RegGPRC1_0__imm_95_260,
  Convert__RegGPRC1_0__imm_95_261,
  Convert__RegGPRC1_0__imm_95_262,
  Convert__RegGPRC1_0__imm_95_263,
  Convert__RegGPRC1_0__U4Imm1_1,
  Convert__RegG8RC1_0__imm_95_26,
  Convert__RegGPRC1_0__imm_95_26,
  Convert__RegG8RC1_0__imm_95_27,
  Convert__RegGPRC1_0__imm_95_27,
  Convert__RegGPRC1_0__imm_95_990,
  Convert__RegGPRC1_0__imm_95_991,
  Convert__RegGPRC1_0__imm_95_268,
  Convert__RegGPRC1_0__imm_95_988,
  Convert__RegGPRC1_0__imm_95_989,
  Convert__RegGPRC1_0__imm_95_269,
  Convert__RegGPRC1_0__imm_95_986,
  Convert__RegG8RC1_0__imm_95_13,
  Convert__RegGPRC1_0__imm_95_13,
  Convert__RegG8RC1_0__imm_95_3,
  Convert__RegGPRC1_0__imm_95_3,
  Convert__RegG8RC1_0__RegVRRC1_1,
  Convert__RegGPRC1_0__RegVRRC1_1,
  Convert__RegVRRC1_0,
  Convert__RegG8RC1_0__RegVSFRC1_1,
  Convert__RegG8RC1_0__RegVSRC1_1,
  Convert__RegGPRC1_0__RegVSFRC1_1,
  Convert__RegG8RC1_0__imm_95_1,
  Convert__RegGPRC1_0__imm_95_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_2,
  Convert__imm_95_29__RegG8RC1_0,
  Convert__imm_95_29__RegGPRC1_0,
  Convert__imm_95_280__RegG8RC1_0,
  Convert__imm_95_280__RegGPRC1_0,
  Convert__imm_95_28__RegG8RC1_0,
  Convert__imm_95_28__RegGPRC1_0,
  Convert__imm_95_255__RegG8RC1_0,
  Convert__imm_95_255__RegGPRC1_0,
  Convert__Imm1_0__RegGPRC1_1,
  Convert__imm_95_9__RegG8RC1_0,
  Convert__imm_95_9__RegGPRC1_0,
  Convert__imm_95_19__RegG8RC1_0,
  Convert__imm_95_19__RegGPRC1_0,
  Convert__imm_95_537__RegGPRC1_1,
  Convert__imm_95_539__RegGPRC1_1,
  Convert__imm_95_541__RegGPRC1_1,
  Convert__imm_95_543__RegGPRC1_1,
  Convert__imm_95_536__RegGPRC1_1,
  Convert__imm_95_538__RegGPRC1_1,
  Convert__imm_95_540__RegGPRC1_1,
  Convert__imm_95_542__RegGPRC1_1,
  Convert__imm_95_1018__RegGPRC1_0,
  Convert__RegGPRC1_1__Imm1_0,
  Convert__imm_95_981__RegGPRC1_0,
  Convert__imm_95_22__RegG8RC1_0,
  Convert__imm_95_22__RegGPRC1_0,
  Convert__imm_95_17__RegG8RC1_0,
  Convert__imm_95_17__RegGPRC1_0,
  Convert__imm_95_18__RegG8RC1_0,
  Convert__imm_95_18__RegGPRC1_0,
  Convert__imm_95_980__RegGPRC1_0,
  Convert__RegF8RC1_0__RegG8RC1_1,
  Convert__RegF8RC1_0__RegGPRC1_1,
  Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0,
  Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0,
  Convert__Imm1_0__RegF8RC1_1__U1Imm1_2__Imm1_3,
  Convert__Imm1_1__RegF8RC1_2__U1Imm1_3__Imm1_4,
  Convert__U3Imm1_0__U4Imm1_1__imm_95_0,
  Convert__U3Imm1_1__U4Imm1_2__imm_95_0,
  Convert__U3Imm1_0__U4Imm1_1__Imm1_2,
  Convert__U3Imm1_1__U4Imm1_2__U1Imm1_3,
  Convert__imm_95_529__RegGPRC1_1,
  Convert__imm_95_531__RegGPRC1_1,
  Convert__imm_95_533__RegGPRC1_1,
  Convert__imm_95_535__RegGPRC1_1,
  Convert__imm_95_528__RegGPRC1_1,
  Convert__imm_95_530__RegGPRC1_1,
  Convert__imm_95_532__RegGPRC1_1,
  Convert__imm_95_534__RegGPRC1_1,
  Convert__imm_95_1019__RegGPRC1_0,
  Convert__imm_95_8__RegG8RC1_0,
  Convert__imm_95_8__RegGPRC1_0,
  Convert__RegGPRC1_0__imm_95_0,
  Convert__RegGPRC1_0__U1Imm1_1,
  Convert__CRBitMask1_0__RegGPRC1_1,
  Convert__imm_95_48__RegGPRC1_0,
  Convert__imm_95_896__RegGPRC1_0,
  Convert__imm_95_25__RegG8RC1_0,
  Convert__imm_95_25__RegGPRC1_0,
  Convert__imm_95_512__RegG8RC1_0,
  Convert__imm_95_512__RegGPRC1_0,
  Convert__RegGPRC1_1,
  Convert__imm_95_272__RegG8RC1_1,
  Convert__imm_95_272__RegGPRC1_1,
  Convert__imm_95_273__RegG8RC1_1,
  Convert__imm_95_273__RegGPRC1_1,
  Convert__imm_95_274__RegG8RC1_1,
  Convert__imm_95_274__RegGPRC1_1,
  Convert__imm_95_275__RegG8RC1_1,
  Convert__imm_95_275__RegGPRC1_1,
  Convert__imm_95_260__RegGPRC1_1,
  Convert__imm_95_261__RegGPRC1_1,
  Convert__imm_95_262__RegGPRC1_1,
  Convert__imm_95_263__RegGPRC1_1,
  Convert__imm_95_272__RegG8RC1_0,
  Convert__imm_95_272__RegGPRC1_0,
  Convert__imm_95_273__RegG8RC1_0,
  Convert__imm_95_273__RegGPRC1_0,
  Convert__imm_95_274__RegG8RC1_0,
  Convert__imm_95_274__RegGPRC1_0,
  Convert__imm_95_275__RegG8RC1_0,
  Convert__imm_95_275__RegGPRC1_0,
  Convert__imm_95_260__RegGPRC1_0,
  Convert__imm_95_261__RegGPRC1_0,
  Convert__imm_95_262__RegGPRC1_0,
  Convert__imm_95_263__RegGPRC1_0,
  Convert__RegGPRC1_1__U4Imm1_0,
  Convert__imm_95_26__RegG8RC1_0,
  Convert__imm_95_26__RegGPRC1_0,
  Convert__imm_95_27__RegG8RC1_0,
  Convert__imm_95_27__RegGPRC1_0,
  Convert__imm_95_990__RegGPRC1_0,
  Convert__imm_95_991__RegGPRC1_0,
  Convert__imm_95_988__RegGPRC1_0,
  Convert__imm_95_284__RegG8RC1_0,
  Convert__imm_95_284__RegGPRC1_0,
  Convert__imm_95_989__RegGPRC1_0,
  Convert__imm_95_285__RegG8RC1_0,
  Convert__imm_95_285__RegGPRC1_0,
  Convert__imm_95_986__RegGPRC1_0,
  Convert__imm_95_13__RegG8RC1_0,
  Convert__imm_95_13__RegGPRC1_0,
  Convert__imm_95_3__RegG8RC1_0,
  Convert__imm_95_3__RegGPRC1_0,
  Convert__RegVRRC1_0__RegG8RC1_1,
  Convert__RegVRRC1_0__RegGPRC1_1,
  Convert__RegVRRC1_0__U16Imm1_1,
  Convert__RegVSFRC1_0__RegG8RC1_1,
  Convert__RegVSRC1_0__RegG8RCNoX01_1__RegG8RC1_2,
  Convert__RegVSFRC1_0__RegGPRC1_1,
  Convert__RegVSRC1_0__RegGPRC1_1,
  Convert__imm_95_1__RegG8RC1_0,
  Convert__imm_95_1__RegGPRC1_0,
  Convert__regR0__regR0__imm_95_0,
  Convert__regX0__regX0__imm_95_0,
  Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__RegGPRC1_0__ImmZero1_1__S34Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S34Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__imm_95_1,
  Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3,
  Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegG8RC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegF8RC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegF4RC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__S34Imm1_1,
  Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegVSRC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegVSRC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegVSRpRC1_0__DispRI341_1__ImmZero1_2,
  Convert__RegVSRpRC1_0__DispRI341_1__RegGxRCNoR01_2,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4,
  Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5,
  Convert__imm_95_2,
  Convert__U1Imm1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4,
  Convert__RegG8RC1_0__Tie0_1_1__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__Tie0_1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4,
  Convert__RegGPRC1_0__Tie0_1_1__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__Tie0_1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0,
  Convert__RegG8RC1_0__RegGPRC1_1__U6Imm1_2__imm_95_0,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__imm_95_0__imm_95_31,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3__imm_95_0__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__imm_95_0__imm_95_31,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31,
  Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__imm_95_0__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31,
  Convert__Imm1_0,
  Convert__RegGPRC1_0__RegCRRC1_1,
  Convert__RegGPRC1_0__RegCRBITRC1_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3,
  Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8pRC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8pRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1,
  Convert__RegGPRC1_0__RegGPRC1_2__RegGPRC1_1,
  Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2,
  Convert__RegGPRC1_1__RegGPRC1_3__RegGPRC1_2,
  Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_3__U1Imm1_1,
  Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_4__U1Imm1_2,
  Convert__RegG8RC1_0__S16Imm1_1,
  Convert__U2Imm1_0,
  Convert__U5Imm1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__U5Imm1_1__RegGPRC1_2__U5Imm1_3,
  Convert__U1Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_4__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_12__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_8__RegG8RC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2,
  Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_20__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_5__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_1__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_6__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_2__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_16__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_24__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_31__RegG8RC1_0__S16Imm1_1,
  Convert__regR0__RegGPRC1_0,
  Convert__RegGPRC1_1__RegGPRC1_0,
  Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1,
  Convert__imm_95_31__regR0__regR0,
  Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_4__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_12__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_8__RegGPRC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2,
  Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_20__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_5__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_1__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_6__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_2__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_16__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_24__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_31__RegGPRC1_0__S16Imm1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegGPRC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1,
  Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3,
  Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2,
  Convert__RegG8RC1_0__RegVRRC1_1__U3Imm1_2,
  Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2,
  Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegG8RC1_1,
  Convert__RegVRRC1_0__Tie0_1_1__RegG8RC1_1__RegG8RC1_2,
  Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegGPRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U3Imm1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U4Imm1_3,
  Convert__RegVRRC1_0__S5Imm1_1,
  Convert__RegVSFRC1_0__RegVSFRC1_1,
  Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2,
  Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVRRC1_0__RegVFRC1_1,
  Convert__RegVSRC1_0__RegVSSRC1_1,
  Convert__RegVFRC1_0__RegVRRC1_1,
  Convert__RegVSSRC1_0__RegVSRC1_1,
  Convert__RegVSSRC1_0__RegVSFRC1_1,
  Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2,
  Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2,
  Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVSSRC1_0__RegVSSRC1_1,
  Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3,
  Convert__RegCRRC1_0__RegVSFRC1_1,
  Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1,
  Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2,
  Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1,
  Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegCRRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U8Imm1_4,
  Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2,
  Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2,
  Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__U4Imm1_2,
  Convert__RegACCRC1_0__Tie0_1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3,
  Convert__RegVSRC1_0__RegVSRC1_1__Tie0_1_1__RegVSRC1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U3Imm1_4,
  Convert__RegACCRC1_0,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3,
  Convert__RegVSRC1_0__Tie0_1_1__U1Imm1_1__Imm1_2,
  Convert__RegVSRC1_0__U8Imm1_1,
  Convert__RegVSRC1_0__Imm1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][15] = {
  // Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addTLSRegOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U2Imm1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__DirectBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 3, CVT_95_addBranchTargetOperands, 4, CVT_Done },
  // Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__CondBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_0__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_10__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_76__regCR0__CondBr1_0
  { CVT_imm_95_76, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_76__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_79__regCR0__CondBr1_0
  { CVT_imm_95_79, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_79__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_78__regCR0__CondBr1_0
  { CVT_imm_95_78, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_78__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_76__regCR0
  { CVT_imm_95_76, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_76__RegCRRC1_0
  { CVT_imm_95_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_79__regCR0
  { CVT_imm_95_79, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_79__RegCRRC1_0
  { CVT_imm_95_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_78__regCR0
  { CVT_imm_95_78, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_78__RegCRRC1_0
  { CVT_imm_95_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_7__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_6__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_4__regCR0__CondBr1_0
  { CVT_imm_95_4, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_4__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_7__regCR0__CondBr1_0
  { CVT_imm_95_7, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_7__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_6__regCR0__CondBr1_0
  { CVT_imm_95_6, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_6__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_4__regCR0
  { CVT_imm_95_4, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_4__RegCRRC1_0
  { CVT_imm_95_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_7__regCR0
  { CVT_imm_95_7, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_7__RegCRRC1_0
  { CVT_imm_95_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_6__regCR0
  { CVT_imm_95_6, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_6__RegCRRC1_0
  { CVT_imm_95_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_44__regCR0__CondBr1_0
  { CVT_imm_95_44, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_44__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_47__regCR0__CondBr1_0
  { CVT_imm_95_47, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_47__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_46__regCR0__CondBr1_0
  { CVT_imm_95_46, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_46__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_44__regCR0
  { CVT_imm_95_44, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_44__RegCRRC1_0
  { CVT_imm_95_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_47__regCR0
  { CVT_imm_95_47, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_47__RegCRRC1_0
  { CVT_imm_95_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_46__regCR0
  { CVT_imm_95_46, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_46__RegCRRC1_0
  { CVT_imm_95_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__DirectBr1_0__Imm1_1
  { CVT_95_addBranchTargetOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_36__regCR0__CondBr1_0
  { CVT_imm_95_36, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_36__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_39__regCR0__CondBr1_0
  { CVT_imm_95_39, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_39__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_38__regCR0__CondBr1_0
  { CVT_imm_95_38, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_38__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_36__regCR0
  { CVT_imm_95_36, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_36__RegCRRC1_0
  { CVT_imm_95_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_39__regCR0
  { CVT_imm_95_39, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_39__RegCRRC1_0
  { CVT_imm_95_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_38__regCR0
  { CVT_imm_95_38, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_38__RegCRRC1_0
  { CVT_imm_95_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_12__regCR0__CondBr1_0
  { CVT_imm_95_12, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_12__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_15__regCR0__CondBr1_0
  { CVT_imm_95_15, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_15__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_14__regCR0__CondBr1_0
  { CVT_imm_95_14, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_14__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_12__regCR0
  { CVT_imm_95_12, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_12__RegCRRC1_0
  { CVT_imm_95_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_15__regCR0
  { CVT_imm_95_15, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_15__RegCRRC1_0
  { CVT_imm_95_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_14__regCR0
  { CVT_imm_95_14, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_14__RegCRRC1_0
  { CVT_imm_95_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_68__regCR0__CondBr1_0
  { CVT_imm_95_68, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_68__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_71__regCR0__CondBr1_0
  { CVT_imm_95_71, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_71__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_70__regCR0__CondBr1_0
  { CVT_imm_95_70, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_70__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_68__regCR0
  { CVT_imm_95_68, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_68__RegCRRC1_0
  { CVT_imm_95_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_71__regCR0
  { CVT_imm_95_71, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_71__RegCRRC1_0
  { CVT_imm_95_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_70__regCR0
  { CVT_imm_95_70, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_70__RegCRRC1_0
  { CVT_imm_95_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_100__regCR0__CondBr1_0
  { CVT_imm_95_100, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_100__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_103__regCR0__CondBr1_0
  { CVT_imm_95_103, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_103__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_102__regCR0__CondBr1_0
  { CVT_imm_95_102, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_102__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_100__regCR0
  { CVT_imm_95_100, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_100__RegCRRC1_0
  { CVT_imm_95_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_103__regCR0
  { CVT_imm_95_103, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_103__RegCRRC1_0
  { CVT_imm_95_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_102__regCR0
  { CVT_imm_95_102, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_102__RegCRRC1_0
  { CVT_imm_95_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_108__regCR0__CondBr1_0
  { CVT_imm_95_108, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_108__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_111__regCR0__CondBr1_0
  { CVT_imm_95_111, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_111__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_110__regCR0__CondBr1_0
  { CVT_imm_95_110, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_110__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_108__regCR0
  { CVT_imm_95_108, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_108__RegCRRC1_0
  { CVT_imm_95_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_111__regCR0
  { CVT_imm_95_111, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_111__RegCRRC1_0
  { CVT_imm_95_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_110__regCR0
  { CVT_imm_95_110, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_110__RegCRRC1_0
  { CVT_imm_95_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_15__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_14__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGPRC1_1__imm_95_0__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U5Imm1_2__imm_95_31
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U5Imm1_3__imm_95_31
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__RegG8RC1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__RegGPRC1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__U1Imm1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__U2Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__U3Imm1_2__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGxRCNoR01_1__RegGxRC1_2__U5Imm1_0
  { CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regR0__regR0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__RegDMRRC1_0__RegDMRRC1_1
  { CVT_95_addRegDMRRCOperands, 1, CVT_95_addRegDMRRCOperands, 2, CVT_Done },
  // Convert__RegDMRRC1_0
  { CVT_95_addRegDMRRCOperands, 1, CVT_Done },
  // Convert__RegDMRRC1_0__Tie0_1_1__RegDMRRC1_1
  { CVT_95_addRegDMRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegDMRRCOperands, 2, CVT_Done },
  // Convert__RegVSRpRC1_1__RegDMRROWpRC1_0__U2Imm1_2
  { CVT_95_addRegVSRpRCOperands, 2, CVT_95_addRegDMRROWpRCOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRpRC1_1__RegVSRpRC1_2__RegACCRC1_0
  { CVT_95_addRegVSRpRCOperands, 2, CVT_95_addRegVSRpRCOperands, 3, CVT_95_addRegACCRCOperands, 1, CVT_Done },
  // Convert__RegDMRROWpRC1_0__RegVSRpRC1_1__U2Imm1_2
  { CVT_95_addRegDMRROWpRCOperands, 1, CVT_95_addRegVSRpRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRpRC1_1__RegVSRpRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRpRCOperands, 2, CVT_95_addRegVSRpRCOperands, 3, CVT_Done },
  // Convert__U5Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__RegSPERC1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_95_addRegSPERCOperands, 3, CVT_Done },
  // Convert__RegSPERC1_0__RegSPE4RC1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__RegGPRC1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_95_addRegSPERCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegSPERC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_Done },
  // Convert__RegSPE4RC1_0__RegSPE4RC1_1
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_Done },
  // Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_95_addRegSPE4RCOperands, 3, CVT_Done },
  // Convert__RegSPE4RC1_0__RegSPERC1_1
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_Done },
  // Convert__RegSPE4RC1_0__RegGPRC1_1
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_95_addRegSPE4RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegSPE4RC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegSPE4RCOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__RegSPERC1_2__U5Imm1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPERCOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegSPERC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addRegSPERCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegSPERC1_1__RegSPERC1_2__RegSPERC1_3__imm_95_0
  { CVT_95_addRegSPERCOperands, 2, CVT_95_addRegSPERCOperands, 3, CVT_95_addRegSPERCOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegSPERC1_0__S5Imm1_1
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegSPERC1_0__U5Imm1_1__RegSPERC1_2
  { CVT_95_addRegSPERCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegSPERCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_95_addRegF8RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF8RC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__U4Imm1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0EQ
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_regCR0EQ, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0EQ
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_regCR0EQ, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0GT
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_regCR0GT, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0GT
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_regCR0GT, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0LT
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_regCR0LT, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0LT
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_regCR0LT, 0, CVT_Done },
  // Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addTLSRegOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__regZERO8__S16Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_regZERO8, 0, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__regZERO__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_regZERO, 0, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__regZERO8__S17Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_regZERO8, 0, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S17Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__regZERO__S17Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_regZERO, 0, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8pRC1_0__DispRIX161_1__RegGxRCNoR01_2
  { CVT_95_addRegG8pRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8pRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8pRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_1
  { CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegSPE4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegSPE4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegSPE4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__U5Imm1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__DispRIX161_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__Imm1_1__RegG8RC1_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegCRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0
  { CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_29
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_29, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_29
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_29, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_280
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_280, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_280
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_280, 0, CVT_Done },
  // Convert__RegGPRC1_0__U10Imm1_1__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_128
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_128, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_129
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_129, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_130
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_130, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_131
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_131, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_132
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_132, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_133
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_133, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_134
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_134, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_135
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_135, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_28
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_28, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_28
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_28, 0, CVT_Done },
  // Convert__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_9
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_9
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_19
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_19, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_19
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_19, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_537
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_537, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_539
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_539, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_541
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_541, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_543
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_543, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_536
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_536, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_538
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_538, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_540
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_540, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_542
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_542, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1018
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1018, 0, CVT_Done },
  // Convert__RegGPRC1_0__Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_981
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_981, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_22
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_22, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_22
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_22, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_17
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_17, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_17
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_17, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_18
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_18, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_18
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_18, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_980
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_980, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegF8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegF8RC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0
  { CVT_95_addRegF8RCOperands, 1, CVT_Done },
  // Convert__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0__U3Imm1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0__U2Imm1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_529
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_529, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_531
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_531, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_533
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_533, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_535
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_535, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_528
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_528, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_530
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_530, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_532
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_532, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_534
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_534, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1019
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1019, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_8
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_8
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__RegGPRC1_0__CRBitMask1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addCRBitMaskOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_48
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_48, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_896
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_896, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_287
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_287, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_287
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_287, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_5
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_5
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_4
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_4
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_25
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_25, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_25
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_25, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_512
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_512, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_512
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_512, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_272
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_272, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_273
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_273, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_274
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_274, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_275
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_275, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_272
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_272, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_273
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_273, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_274
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_274, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_275
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_275, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_260
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_260, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_261
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_261, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_262
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_262, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_263
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_263, 0, CVT_Done },
  // Convert__RegGPRC1_0__U4Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_26
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_26, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_26
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_26, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_27
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_27, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_27
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_27, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_990
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_990, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_991
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_991, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_268
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_268, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_988
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_988, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_989
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_989, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_269
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_269, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_986
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_986, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_13
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_13
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_3
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_3
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegVRRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegVRRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0
  { CVT_95_addRegVRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegVSFRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegVSRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegVSFRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_1
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__imm_95_29__RegG8RC1_0
  { CVT_imm_95_29, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_29__RegGPRC1_0
  { CVT_imm_95_29, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_280__RegG8RC1_0
  { CVT_imm_95_280, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_280__RegGPRC1_0
  { CVT_imm_95_280, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_28__RegG8RC1_0
  { CVT_imm_95_28, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_28__RegGPRC1_0
  { CVT_imm_95_28, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_255__RegG8RC1_0
  { CVT_imm_95_255, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_255__RegGPRC1_0
  { CVT_imm_95_255, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_9__RegG8RC1_0
  { CVT_imm_95_9, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_9__RegGPRC1_0
  { CVT_imm_95_9, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_19__RegG8RC1_0
  { CVT_imm_95_19, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_19__RegGPRC1_0
  { CVT_imm_95_19, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_537__RegGPRC1_1
  { CVT_imm_95_537, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_539__RegGPRC1_1
  { CVT_imm_95_539, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_541__RegGPRC1_1
  { CVT_imm_95_541, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_543__RegGPRC1_1
  { CVT_imm_95_543, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_536__RegGPRC1_1
  { CVT_imm_95_536, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_538__RegGPRC1_1
  { CVT_imm_95_538, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_540__RegGPRC1_1
  { CVT_imm_95_540, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_542__RegGPRC1_1
  { CVT_imm_95_542, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1018__RegGPRC1_0
  { CVT_imm_95_1018, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_981__RegGPRC1_0
  { CVT_imm_95_981, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_22__RegG8RC1_0
  { CVT_imm_95_22, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_22__RegGPRC1_0
  { CVT_imm_95_22, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_17__RegG8RC1_0
  { CVT_imm_95_17, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_17__RegGPRC1_0
  { CVT_imm_95_17, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_18__RegG8RC1_0
  { CVT_imm_95_18, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_18__RegGPRC1_0
  { CVT_imm_95_18, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_980__RegGPRC1_0
  { CVT_imm_95_980, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegF8RC1_0__RegG8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0__RegGPRC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1__U1Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_1__RegF8RC1_2__U1Imm1_3__Imm1_4
  { CVT_95_addImmOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__U3Imm1_0__U4Imm1_1__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__U3Imm1_1__U4Imm1_2__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__U3Imm1_0__U4Imm1_1__Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__U3Imm1_1__U4Imm1_2__U1Imm1_3
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__imm_95_529__RegGPRC1_1
  { CVT_imm_95_529, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_531__RegGPRC1_1
  { CVT_imm_95_531, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_533__RegGPRC1_1
  { CVT_imm_95_533, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_535__RegGPRC1_1
  { CVT_imm_95_535, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_528__RegGPRC1_1
  { CVT_imm_95_528, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_530__RegGPRC1_1
  { CVT_imm_95_530, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_532__RegGPRC1_1
  { CVT_imm_95_532, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_534__RegGPRC1_1
  { CVT_imm_95_534, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1019__RegGPRC1_0
  { CVT_imm_95_1019, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__U1Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__CRBitMask1_0__RegGPRC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_48__RegGPRC1_0
  { CVT_imm_95_48, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_896__RegGPRC1_0
  { CVT_imm_95_896, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_25__RegG8RC1_0
  { CVT_imm_95_25, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_25__RegGPRC1_0
  { CVT_imm_95_25, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_512__RegG8RC1_0
  { CVT_imm_95_512, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_512__RegGPRC1_0
  { CVT_imm_95_512, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_272__RegG8RC1_1
  { CVT_imm_95_272, 0, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_272__RegGPRC1_1
  { CVT_imm_95_272, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_273__RegG8RC1_1
  { CVT_imm_95_273, 0, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_273__RegGPRC1_1
  { CVT_imm_95_273, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_274__RegG8RC1_1
  { CVT_imm_95_274, 0, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_274__RegGPRC1_1
  { CVT_imm_95_274, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_275__RegG8RC1_1
  { CVT_imm_95_275, 0, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_275__RegGPRC1_1
  { CVT_imm_95_275, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_260__RegGPRC1_1
  { CVT_imm_95_260, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_261__RegGPRC1_1
  { CVT_imm_95_261, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_262__RegGPRC1_1
  { CVT_imm_95_262, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_263__RegGPRC1_1
  { CVT_imm_95_263, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_272__RegG8RC1_0
  { CVT_imm_95_272, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_272__RegGPRC1_0
  { CVT_imm_95_272, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_273__RegG8RC1_0
  { CVT_imm_95_273, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_273__RegGPRC1_0
  { CVT_imm_95_273, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_274__RegG8RC1_0
  { CVT_imm_95_274, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_274__RegGPRC1_0
  { CVT_imm_95_274, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_275__RegG8RC1_0
  { CVT_imm_95_275, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_275__RegGPRC1_0
  { CVT_imm_95_275, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_260__RegGPRC1_0
  { CVT_imm_95_260, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_261__RegGPRC1_0
  { CVT_imm_95_261, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_262__RegGPRC1_0
  { CVT_imm_95_262, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_263__RegGPRC1_0
  { CVT_imm_95_263, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__U4Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_26__RegG8RC1_0
  { CVT_imm_95_26, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_26__RegGPRC1_0
  { CVT_imm_95_26, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_27__RegG8RC1_0
  { CVT_imm_95_27, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_27__RegGPRC1_0
  { CVT_imm_95_27, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_990__RegGPRC1_0
  { CVT_imm_95_990, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_991__RegGPRC1_0
  { CVT_imm_95_991, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_988__RegGPRC1_0
  { CVT_imm_95_988, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_284__RegG8RC1_0
  { CVT_imm_95_284, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_284__RegGPRC1_0
  { CVT_imm_95_284, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_989__RegGPRC1_0
  { CVT_imm_95_989, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_285__RegG8RC1_0
  { CVT_imm_95_285, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_285__RegGPRC1_0
  { CVT_imm_95_285, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_986__RegGPRC1_0
  { CVT_imm_95_986, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_13__RegG8RC1_0
  { CVT_imm_95_13, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_13__RegGPRC1_0
  { CVT_imm_95_13, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_3__RegG8RC1_0
  { CVT_imm_95_3, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_3__RegGPRC1_0
  { CVT_imm_95_3, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegVRRC1_0__RegG8RC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegGPRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__U16Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegG8RC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegG8RCNoX01_1__RegG8RC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__RegGPRC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegGPRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__regR0__regR0__imm_95_0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__regX0__imm_95_0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__ImmZero1_1__S34Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S34Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__imm_95_1
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__S34Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__DispRI341_1__ImmZero1_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRpRC1_0__DispRI341_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRpRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRpEvenRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRpEvenRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__imm_95_2
  { CVT_imm_95_2, 0, CVT_Done },
  // Convert__U1Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__Tie0_1_1__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__Tie0_1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__Tie0_1_1__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__Tie0_1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegGPRC1_1__U6Imm1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__imm_95_0__imm_95_31
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3__imm_95_0__imm_95_31
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__imm_95_0__imm_95_31
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__imm_95_0__imm_95_31
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegCRRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegCRBITRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8pRC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8pRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8pRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8pRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_2__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 4, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_3__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 4, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_3__U1Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_4__U1Imm1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 4, CVT_95_addRegG8RCOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__S16Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U2Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__U5Imm1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__U5Imm1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__U1Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_20__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__regR0__RegGPRC1_0
  { CVT_regR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__imm_95_31__regR0__regR0
  { CVT_imm_95_31, 0, CVT_regR0, 0, CVT_regR0, 0, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_20__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegGPRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegVRRC1_1__U3Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegG8RC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 3, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegGPRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 3, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U3Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U4Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__S5Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_95_addRegVSSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVFRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVFRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_Done },
  // Convert__RegVFRC1_0__RegVRRC1_1
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSFRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSSRCOperands, 2, CVT_95_addRegVSSRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSSRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_95_addRegVSRpEvenRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRpEvenRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U8Imm1_4
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__U4Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegACCRC1_0__Tie0_1_1
  { CVT_95_addRegACCRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__Tie0_1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U3Imm1_4
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegACCRC1_0
  { CVT_95_addRegACCRCOperands, 1, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__Tie0_1_1__U1Imm1_1__Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__U8Imm1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__Imm1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_2, 0, CVT_Done },
};

void PPCAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p += 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied: {
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned TiedResOpnd = TiedAsmOperandTable[OpIdx][0];
      if (TiedResOpnd != (uint8_t)-1)
        Inst.addOperand(Inst.getOperand(TiedResOpnd));
      break;
    }
    case CVT_95_addRegG8RCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegG8RCOperands(Inst, 1);
      break;
    case CVT_95_addTLSRegOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addTLSRegOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegGPRCOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegGPRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addS16ImmOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addS16ImmOperands(Inst, 1);
      break;
    case CVT_95_addU16ImmOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addU16ImmOperands(Inst, 1);
      break;
    case CVT_95_addBranchTargetOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addBranchTargetOperands(Inst, 1);
      break;
    case CVT_95_addRegCRBITRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegCRBITRCOperands(Inst, 1);
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addRegVRRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVRRCOperands(Inst, 1);
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_10:
      Inst.addOperand(MCOperand::createImm(10));
      break;
    case CVT_imm_95_76:
      Inst.addOperand(MCOperand::createImm(76));
      break;
    case CVT_regCR0:
      Inst.addOperand(MCOperand::createReg(PPC::CR0));
      break;
    case CVT_95_addRegCRRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegCRRCOperands(Inst, 1);
      break;
    case CVT_imm_95_79:
      Inst.addOperand(MCOperand::createImm(79));
      break;
    case CVT_imm_95_78:
      Inst.addOperand(MCOperand::createImm(78));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_44:
      Inst.addOperand(MCOperand::createImm(44));
      break;
    case CVT_imm_95_47:
      Inst.addOperand(MCOperand::createImm(47));
      break;
    case CVT_imm_95_46:
      Inst.addOperand(MCOperand::createImm(46));
      break;
    case CVT_imm_95_36:
      Inst.addOperand(MCOperand::createImm(36));
      break;
    case CVT_imm_95_39:
      Inst.addOperand(MCOperand::createImm(39));
      break;
    case CVT_imm_95_38:
      Inst.addOperand(MCOperand::createImm(38));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_imm_95_68:
      Inst.addOperand(MCOperand::createImm(68));
      break;
    case CVT_imm_95_71:
      Inst.addOperand(MCOperand::createImm(71));
      break;
    case CVT_imm_95_70:
      Inst.addOperand(MCOperand::createImm(70));
      break;
    case CVT_imm_95_100:
      Inst.addOperand(MCOperand::createImm(100));
      break;
    case CVT_imm_95_103:
      Inst.addOperand(MCOperand::createImm(103));
      break;
    case CVT_imm_95_102:
      Inst.addOperand(MCOperand::createImm(102));
      break;
    case CVT_imm_95_108:
      Inst.addOperand(MCOperand::createImm(108));
      break;
    case CVT_imm_95_111:
      Inst.addOperand(MCOperand::createImm(111));
      break;
    case CVT_imm_95_110:
      Inst.addOperand(MCOperand::createImm(110));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::createImm(31));
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegGxRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addRegGxRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegGxRCOperands(Inst, 1);
      break;
    case CVT_regR0:
      Inst.addOperand(MCOperand::createReg(PPC::R0));
      break;
    case CVT_95_addRegDMRRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegDMRRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSRpRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSRpRCOperands(Inst, 1);
      break;
    case CVT_95_addRegDMRROWpRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegDMRROWpRCOperands(Inst, 1);
      break;
    case CVT_95_addRegACCRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegACCRCOperands(Inst, 1);
      break;
    case CVT_95_addRegSPERCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegSPERCOperands(Inst, 1);
      break;
    case CVT_95_addRegSPE4RCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegSPE4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF4RCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegF4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF8RCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegF8RCOperands(Inst, 1);
      break;
    case CVT_95_addRegG8RCNoX0Operands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegG8RCNoX0Operands(Inst, 1);
      break;
    case CVT_regCR0EQ:
      Inst.addOperand(MCOperand::createReg(PPC::CR0EQ));
      break;
    case CVT_regCR0GT:
      Inst.addOperand(MCOperand::createReg(PPC::CR0GT));
      break;
    case CVT_regCR0LT:
      Inst.addOperand(MCOperand::createReg(PPC::CR0LT));
      break;
    case CVT_regZERO8:
      Inst.addOperand(MCOperand::createReg(PPC::ZERO8));
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::createReg(PPC::ZERO));
      break;
    case CVT_95_addRegG8pRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegG8pRCOperands(Inst, 1);
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_95_addRegVFRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSFRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSSRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSSRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSRCOperands(Inst, 1);
      break;
    case CVT_imm_95_29:
      Inst.addOperand(MCOperand::createImm(29));
      break;
    case CVT_imm_95_280:
      Inst.addOperand(MCOperand::createImm(280));
      break;
    case CVT_imm_95_128:
      Inst.addOperand(MCOperand::createImm(128));
      break;
    case CVT_imm_95_129:
      Inst.addOperand(MCOperand::createImm(129));
      break;
    case CVT_imm_95_130:
      Inst.addOperand(MCOperand::createImm(130));
      break;
    case CVT_imm_95_131:
      Inst.addOperand(MCOperand::createImm(131));
      break;
    case CVT_imm_95_132:
      Inst.addOperand(MCOperand::createImm(132));
      break;
    case CVT_imm_95_133:
      Inst.addOperand(MCOperand::createImm(133));
      break;
    case CVT_imm_95_134:
      Inst.addOperand(MCOperand::createImm(134));
      break;
    case CVT_imm_95_135:
      Inst.addOperand(MCOperand::createImm(135));
      break;
    case CVT_imm_95_28:
      Inst.addOperand(MCOperand::createImm(28));
      break;
    case CVT_imm_95_9:
      Inst.addOperand(MCOperand::createImm(9));
      break;
    case CVT_imm_95_19:
      Inst.addOperand(MCOperand::createImm(19));
      break;
    case CVT_imm_95_537:
      Inst.addOperand(MCOperand::createImm(537));
      break;
    case CVT_imm_95_539:
      Inst.addOperand(MCOperand::createImm(539));
      break;
    case CVT_imm_95_541:
      Inst.addOperand(MCOperand::createImm(541));
      break;
    case CVT_imm_95_543:
      Inst.addOperand(MCOperand::createImm(543));
      break;
    case CVT_imm_95_536:
      Inst.addOperand(MCOperand::createImm(536));
      break;
    case CVT_imm_95_538:
      Inst.addOperand(MCOperand::createImm(538));
      break;
    case CVT_imm_95_540:
      Inst.addOperand(MCOperand::createImm(540));
      break;
    case CVT_imm_95_542:
      Inst.addOperand(MCOperand::createImm(542));
      break;
    case CVT_imm_95_1018:
      Inst.addOperand(MCOperand::createImm(1018));
      break;
    case CVT_imm_95_981:
      Inst.addOperand(MCOperand::createImm(981));
      break;
    case CVT_imm_95_22:
      Inst.addOperand(MCOperand::createImm(22));
      break;
    case CVT_imm_95_17:
      Inst.addOperand(MCOperand::createImm(17));
      break;
    case CVT_imm_95_18:
      Inst.addOperand(MCOperand::createImm(18));
      break;
    case CVT_imm_95_980:
      Inst.addOperand(MCOperand::createImm(980));
      break;
    case CVT_imm_95_529:
      Inst.addOperand(MCOperand::createImm(529));
      break;
    case CVT_imm_95_531:
      Inst.addOperand(MCOperand::createImm(531));
      break;
    case CVT_imm_95_533:
      Inst.addOperand(MCOperand::createImm(533));
      break;
    case CVT_imm_95_535:
      Inst.addOperand(MCOperand::createImm(535));
      break;
    case CVT_imm_95_528:
      Inst.addOperand(MCOperand::createImm(528));
      break;
    case CVT_imm_95_530:
      Inst.addOperand(MCOperand::createImm(530));
      break;
    case CVT_imm_95_532:
      Inst.addOperand(MCOperand::createImm(532));
      break;
    case CVT_imm_95_534:
      Inst.addOperand(MCOperand::createImm(534));
      break;
    case CVT_imm_95_1019:
      Inst.addOperand(MCOperand::createImm(1019));
      break;
    case CVT_95_addCRBitMaskOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addCRBitMaskOperands(Inst, 1);
      break;
    case CVT_imm_95_48:
      Inst.addOperand(MCOperand::createImm(48));
      break;
    case CVT_imm_95_896:
      Inst.addOperand(MCOperand::createImm(896));
      break;
    case CVT_imm_95_287:
      Inst.addOperand(MCOperand::createImm(287));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_25:
      Inst.addOperand(MCOperand::createImm(25));
      break;
    case CVT_imm_95_512:
      Inst.addOperand(MCOperand::createImm(512));
      break;
    case CVT_imm_95_272:
      Inst.addOperand(MCOperand::createImm(272));
      break;
    case CVT_imm_95_273:
      Inst.addOperand(MCOperand::createImm(273));
      break;
    case CVT_imm_95_274:
      Inst.addOperand(MCOperand::createImm(274));
      break;
    case CVT_imm_95_275:
      Inst.addOperand(MCOperand::createImm(275));
      break;
    case CVT_imm_95_260:
      Inst.addOperand(MCOperand::createImm(260));
      break;
    case CVT_imm_95_261:
      Inst.addOperand(MCOperand::createImm(261));
      break;
    case CVT_imm_95_262:
      Inst.addOperand(MCOperand::createImm(262));
      break;
    case CVT_imm_95_263:
      Inst.addOperand(MCOperand::createImm(263));
      break;
    case CVT_imm_95_26:
      Inst.addOperand(MCOperand::createImm(26));
      break;
    case CVT_imm_95_27:
      Inst.addOperand(MCOperand::createImm(27));
      break;
    case CVT_imm_95_990:
      Inst.addOperand(MCOperand::createImm(990));
      break;
    case CVT_imm_95_991:
      Inst.addOperand(MCOperand::createImm(991));
      break;
    case CVT_imm_95_268:
      Inst.addOperand(MCOperand::createImm(268));
      break;
    case CVT_imm_95_988:
      Inst.addOperand(MCOperand::createImm(988));
      break;
    case CVT_imm_95_989:
      Inst.addOperand(MCOperand::createImm(989));
      break;
    case CVT_imm_95_269:
      Inst.addOperand(MCOperand::createImm(269));
      break;
    case CVT_imm_95_986:
      Inst.addOperand(MCOperand::createImm(986));
      break;
    case CVT_imm_95_13:
      Inst.addOperand(MCOperand::createImm(13));
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::createImm(255));
      break;
    case CVT_imm_95_284:
      Inst.addOperand(MCOperand::createImm(284));
      break;
    case CVT_imm_95_285:
      Inst.addOperand(MCOperand::createImm(285));
      break;
    case CVT_regX0:
      Inst.addOperand(MCOperand::createReg(PPC::X0));
      break;
    case CVT_95_addRegVSRpEvenRCOperands:
      static_cast<PPCOperand &>(*Operands[OpIdx]).addRegVSRpEvenRCOperands(Inst, 1);
      break;
    case CVT_imm_95_20:
      Inst.addOperand(MCOperand::createImm(20));
      break;
    case CVT_imm_95_16:
      Inst.addOperand(MCOperand::createImm(16));
      break;
    case CVT_imm_95_24:
      Inst.addOperand(MCOperand::createImm(24));
      break;
    }
  }
}

void PPCAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p += 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegG8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addTLSRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addS16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addU16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBranchTargetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegCRBITRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_76:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regCR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegCRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_79:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_78:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_44:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_47:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_46:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_36:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_39:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_38:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_68:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_71:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_70:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_100:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_103:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_102:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_108:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_111:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_110:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGxRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegDMRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSRpRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegDMRROWpRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegACCRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegSPERCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegSPE4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegG8RCNoX0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regCR0EQ:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regCR0GT:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regCR0LT:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regZERO8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegG8pRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_29:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_280:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_128:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_129:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_130:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_131:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_132:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_133:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_134:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_135:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_28:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_9:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_19:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_537:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_539:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_541:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_543:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_536:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_538:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_540:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_542:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1018:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_981:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_22:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_17:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_18:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_980:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_529:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_531:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_533:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_535:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_528:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_530:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_532:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_534:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1019:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCRBitMaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_48:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_896:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_287:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_25:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_512:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_272:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_273:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_274:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_275:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_260:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_261:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_262:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_263:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_26:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_27:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_990:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_991:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_268:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_988:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_989:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_269:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_986:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_13:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_284:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_285:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regX0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVSRpEvenRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_20:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK__DOT_, // '.'
  MCK_0, // '0'
  MCK_1, // '1'
  MCK_2, // '2'
  MCK_3, // '3'
  MCK_4, // '4'
  MCK_5, // '5'
  MCK_6, // '6'
  MCK_7, // '7'
  MCK_crD, // 'crD'
  MCK_LAST_TOKEN = MCK_crD,
  MCK_CTRRC, // register class 'CTRRC'
  MCK_CTRRC8, // register class 'CTRRC8'
  MCK_LR8RC, // register class 'LR8RC'
  MCK_LRRC, // register class 'LRRC'
  MCK_VRSAVERC, // register class 'VRSAVERC'
  MCK_CARRYRC, // register class 'CARRYRC'
  MCK_Reg40, // derived register class
  MCK_Reg37, // derived register class
  MCK_Reg41, // derived register class
  MCK_Reg38, // derived register class
  MCK_DMRpRC, // register class 'DMRpRC'
  MCK_Reg21, // derived register class
  MCK_ACCRC, // register class 'ACCRC'
  MCK_CRRC, // register class 'CRRC'
  MCK_DMRRC, // register class 'DMRRC'
  MCK_UACCRC, // register class 'UACCRC'
  MCK_WACCRC, // register class 'WACCRC'
  MCK_WACC_HIRC, // register class 'WACC_HIRC'
  MCK_Reg25, // derived register class
  MCK_Reg19, // derived register class
  MCK_Reg9, // derived register class
  MCK_Reg28, // derived register class
  MCK_Reg26, // derived register class
  MCK_Reg22, // derived register class
  MCK_G8pRC, // register class 'G8pRC'
  MCK_Reg24, // derived register class
  MCK_Reg15, // derived register class
  MCK_Reg13, // derived register class
  MCK_Reg8, // derived register class
  MCK_CRBITRC, // register class 'CRBITRC'
  MCK_DMRROWpRC, // register class 'DMRROWpRC'
  MCK_F4RC, // register class 'F4RC,F8RC'
  MCK_SPERC, // register class 'SPERC'
  MCK_VFRC, // register class 'VFRC'
  MCK_VRRC, // register class 'VRRC'
  MCK_VSLRC, // register class 'VSLRC'
  MCK_VSRpRC, // register class 'VSRpRC'
  MCK_Reg6, // derived register class
  MCK_Reg2, // derived register class
  MCK_Reg18, // derived register class
  MCK_Reg12, // derived register class
  MCK_G8RC, // register class 'G8RC'
  MCK_G8RC_NOX0, // register class 'G8RC_NOX0'
  MCK_GPRC, // register class 'GPRC'
  MCK_GPRC_NOR0, // register class 'GPRC_NOR0'
  MCK_DMRROWRC, // register class 'DMRROWRC'
  MCK_VSRC, // register class 'VSRC'
  MCK_VSSRC, // register class 'VSSRC,VSFRC'
  MCK_SPILLTOVSRRC, // register class 'SPILLTOVSRRC'
  MCK_LAST_REGISTER = MCK_SPILLTOVSRRC,
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_ATBitsAsHint, // user defined class 'PPCATBitsAsHintAsmOperand'
  MCK_CRBitMask, // user defined class 'PPCCRBitMaskOperand'
  MCK_CondBr, // user defined class 'PPCCondBrAsmOperand'
  MCK_DirectBr, // user defined class 'PPCDirectBrAsmOperand'
  MCK_DispRI34, // user defined class 'PPCDispRI34Operand'
  MCK_DispRIHash, // user defined class 'PPCDispRIHashOperand'
  MCK_DispRI, // user defined class 'PPCDispRIOperand'
  MCK_DispRIX16, // user defined class 'PPCDispRIX16Operand'
  MCK_DispRIX, // user defined class 'PPCDispRIXOperand'
  MCK_DispSPE2, // user defined class 'PPCDispSPE2Operand'
  MCK_DispSPE4, // user defined class 'PPCDispSPE4Operand'
  MCK_DispSPE8, // user defined class 'PPCDispSPE8Operand'
  MCK_ImmZero, // user defined class 'PPCImmZeroAsmOperand'
  MCK_RegACCRC, // user defined class 'PPCRegACCRCAsmOperand'
  MCK_RegCRBITRC, // user defined class 'PPCRegCRBITRCAsmOperand'
  MCK_RegCRRC, // user defined class 'PPCRegCRRCAsmOperand'
  MCK_RegDMRRC, // user defined class 'PPCRegDMRRCAsmOperand'
  MCK_RegDMRROWRC, // user defined class 'PPCRegDMRROWRCAsmOperand'
  MCK_RegDMRROWpRC, // user defined class 'PPCRegDMRROWpRCAsmOperand'
  MCK_RegDMRpRC, // user defined class 'PPCRegDMRpRCAsmOperand'
  MCK_RegF4RC, // user defined class 'PPCRegF4RCAsmOperand'
  MCK_RegF8RC, // user defined class 'PPCRegF8RCAsmOperand'
  MCK_RegG8RC, // user defined class 'PPCRegG8RCAsmOperand'
  MCK_RegG8RCNoX0, // user defined class 'PPCRegG8RCNoX0AsmOperand'
  MCK_RegG8pRC, // user defined class 'PPCRegG8pRCAsmOperand'
  MCK_RegGPRC, // user defined class 'PPCRegGPRCAsmOperand'
  MCK_RegGPRCNoR0, // user defined class 'PPCRegGPRCNoR0AsmOperand'
  MCK_RegGxRCNoR0, // user defined class 'PPCRegGxRCNoR0Operand'
  MCK_RegGxRC, // user defined class 'PPCRegGxRCOperand'
  MCK_RegSPE4RC, // user defined class 'PPCRegSPE4RCAsmOperand'
  MCK_RegSPERC, // user defined class 'PPCRegSPERCAsmOperand'
  MCK_RegSPILLTOVSRRC, // user defined class 'PPCRegSPILLTOVSRRCAsmOperand'
  MCK_RegVFRC, // user defined class 'PPCRegVFRCAsmOperand'
  MCK_RegVRRC, // user defined class 'PPCRegVRRCAsmOperand'
  MCK_RegVSFRC, // user defined class 'PPCRegVSFRCAsmOperand'
  MCK_RegVSRC, // user defined class 'PPCRegVSRCAsmOperand'
  MCK_RegVSRpEvenRC, // user defined class 'PPCRegVSRpEvenRCAsmOperand'
  MCK_RegVSRpRC, // user defined class 'PPCRegVSRpRCAsmOperand'
  MCK_RegVSSRC, // user defined class 'PPCRegVSSRCAsmOperand'
  MCK_S16Imm, // user defined class 'PPCS16ImmAsmOperand'
  MCK_S17Imm, // user defined class 'PPCS17ImmAsmOperand'
  MCK_S34Imm, // user defined class 'PPCS34ImmAsmOperand'
  MCK_S5Imm, // user defined class 'PPCS5ImmAsmOperand'
  MCK_TLSReg, // user defined class 'PPCTLSRegOperand'
  MCK_U10Imm, // user defined class 'PPCU10ImmAsmOperand'
  MCK_U12Imm, // user defined class 'PPCU12ImmAsmOperand'
  MCK_U16Imm, // user defined class 'PPCU16ImmAsmOperand'
  MCK_U1Imm, // user defined class 'PPCU1ImmAsmOperand'
  MCK_U2Imm, // user defined class 'PPCU2ImmAsmOperand'
  MCK_U3Imm, // user defined class 'PPCU3ImmAsmOperand'
  MCK_U4Imm, // user defined class 'PPCU4ImmAsmOperand'
  MCK_U5Imm, // user defined class 'PPCU5ImmAsmOperand'
  MCK_U6Imm, // user defined class 'PPCU6ImmAsmOperand'
  MCK_U7Imm, // user defined class 'PPCU7ImmAsmOperand'
  MCK_U8Imm, // user defined class 'PPCU8ImmAsmOperand'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    case '2':	 // 1 string to match.
      return MCK_2;	 // "2"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '4':	 // 1 string to match.
      return MCK_4;	 // "4"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '6':	 // 1 string to match.
      return MCK_6;	 // "6"
    case '7':	 // 1 string to match.
      return MCK_7;	 // "7"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "crD", 3) != 0)
      break;
    return MCK_crD;	 // "crD"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg40:
    switch (B) {
    default: return false;
    case MCK_Reg41: return true;
    case MCK_UACCRC: return true;
    }

  case MCK_Reg37:
    switch (B) {
    default: return false;
    case MCK_Reg38: return true;
    case MCK_ACCRC: return true;
    }

  case MCK_Reg41:
    return B == MCK_UACCRC;

  case MCK_Reg38:
    return B == MCK_ACCRC;

  case MCK_Reg21:
    switch (B) {
    default: return false;
    case MCK_Reg22: return true;
    case MCK_Reg24: return true;
    case MCK_VSRpRC: return true;
    }

  case MCK_Reg25:
    switch (B) {
    default: return false;
    case MCK_Reg26: return true;
    case MCK_Reg24: return true;
    case MCK_VSRpRC: return true;
    }

  case MCK_Reg19:
    switch (B) {
    default: return false;
    case MCK_VSLRC: return true;
    case MCK_Reg18: return true;
    case MCK_VSRC: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_F4RC: return true;
    case MCK_Reg12: return true;
    case MCK_VSSRC: return true;
    case MCK_SPILLTOVSRRC: return true;
    }

  case MCK_Reg28:
    return B == MCK_G8pRC;

  case MCK_Reg26:
    return B == MCK_VSRpRC;

  case MCK_Reg22:
    return B == MCK_VSRpRC;

  case MCK_Reg24:
    return B == MCK_VSRpRC;

  case MCK_Reg15:
    switch (B) {
    default: return false;
    case MCK_VRRC: return true;
    case MCK_Reg18: return true;
    case MCK_VSRC: return true;
    }

  case MCK_Reg13:
    switch (B) {
    default: return false;
    case MCK_VFRC: return true;
    case MCK_Reg12: return true;
    case MCK_VSSRC: return true;
    case MCK_SPILLTOVSRRC: return true;
    }

  case MCK_Reg8:
    return B == MCK_SPERC;

  case MCK_F4RC:
    return B == MCK_VSSRC;

  case MCK_VFRC:
    return B == MCK_VSSRC;

  case MCK_VRRC:
    return B == MCK_VSRC;

  case MCK_VSLRC:
    return B == MCK_VSRC;

  case MCK_Reg6:
    switch (B) {
    default: return false;
    case MCK_G8RC: return true;
    case MCK_G8RC_NOX0: return true;
    case MCK_SPILLTOVSRRC: return true;
    }

  case MCK_Reg2:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRC_NOR0: return true;
    }

  case MCK_Reg18:
    return B == MCK_VSRC;

  case MCK_Reg12:
    switch (B) {
    default: return false;
    case MCK_VSSRC: return true;
    case MCK_SPILLTOVSRRC: return true;
    }

  case MCK_G8RC:
    return B == MCK_SPILLTOVSRRC;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  PPCOperand &Operand = (PPCOperand &)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ATBitsAsHint' class
  case MCK_ATBitsAsHint: {
    DiagnosticPredicate DP(Operand.isATBitsAsHint());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'CRBitMask' class
  case MCK_CRBitMask: {
    DiagnosticPredicate DP(Operand.isCRBitMask());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'CondBr' class
  case MCK_CondBr: {
    DiagnosticPredicate DP(Operand.isCondBr());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DirectBr' class
  case MCK_DirectBr: {
    DiagnosticPredicate DP(Operand.isDirectBr());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRI34' class
  case MCK_DispRI34: {
    DiagnosticPredicate DP(Operand.isS34Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRIHash' class
  case MCK_DispRIHash: {
    DiagnosticPredicate DP(Operand.isHashImmX8());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRI' class
  case MCK_DispRI: {
    DiagnosticPredicate DP(Operand.isS16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRIX16' class
  case MCK_DispRIX16: {
    DiagnosticPredicate DP(Operand.isS16ImmX16());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispRIX' class
  case MCK_DispRIX: {
    DiagnosticPredicate DP(Operand.isS16ImmX4());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispSPE2' class
  case MCK_DispSPE2: {
    DiagnosticPredicate DP(Operand.isU6ImmX2());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispSPE4' class
  case MCK_DispSPE4: {
    DiagnosticPredicate DP(Operand.isU7ImmX4());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'DispSPE8' class
  case MCK_DispSPE8: {
    DiagnosticPredicate DP(Operand.isU8ImmX8());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ImmZero' class
  case MCK_ImmZero: {
    DiagnosticPredicate DP(Operand.isImmZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegACCRC' class
  case MCK_RegACCRC: {
    DiagnosticPredicate DP(Operand.isACCRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegCRBITRC' class
  case MCK_RegCRBITRC: {
    DiagnosticPredicate DP(Operand.isCRBitNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegCRRC' class
  case MCK_RegCRRC: {
    DiagnosticPredicate DP(Operand.isCCRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegDMRRC' class
  case MCK_RegDMRRC: {
    DiagnosticPredicate DP(Operand.isDMRRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegDMRROWRC' class
  case MCK_RegDMRROWRC: {
    DiagnosticPredicate DP(Operand.isDMRROWRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegDMRROWpRC' class
  case MCK_RegDMRROWpRC: {
    DiagnosticPredicate DP(Operand.isDMRROWpRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegDMRpRC' class
  case MCK_RegDMRpRC: {
    DiagnosticPredicate DP(Operand.isDMRpRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegF4RC' class
  case MCK_RegF4RC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegF8RC' class
  case MCK_RegF8RC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegG8RC' class
  case MCK_RegG8RC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegG8RCNoX0' class
  case MCK_RegG8RCNoX0: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegG8pRC' class
  case MCK_RegG8pRC: {
    DiagnosticPredicate DP(Operand.isEvenRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegGPRC' class
  case MCK_RegGPRC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegGPRCNoR0' class
  case MCK_RegGPRCNoR0: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegGxRCNoR0' class
  case MCK_RegGxRCNoR0: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegGxRC' class
  case MCK_RegGxRC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegSPE4RC' class
  case MCK_RegSPE4RC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegSPERC' class
  case MCK_RegSPERC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegSPILLTOVSRRC' class
  case MCK_RegSPILLTOVSRRC: {
    DiagnosticPredicate DP(Operand.isVSRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVFRC' class
  case MCK_RegVFRC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVRRC' class
  case MCK_RegVRRC: {
    DiagnosticPredicate DP(Operand.isRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSFRC' class
  case MCK_RegVSFRC: {
    DiagnosticPredicate DP(Operand.isVSRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSRC' class
  case MCK_RegVSRC: {
    DiagnosticPredicate DP(Operand.isVSRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSRpEvenRC' class
  case MCK_RegVSRpEvenRC: {
    DiagnosticPredicate DP(Operand.isVSRpEvenRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSRpRC' class
  case MCK_RegVSRpRC: {
    DiagnosticPredicate DP(Operand.isVSRpEvenRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'RegVSSRC' class
  case MCK_RegVSSRC: {
    DiagnosticPredicate DP(Operand.isVSRegNumber());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S16Imm' class
  case MCK_S16Imm: {
    DiagnosticPredicate DP(Operand.isS16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S17Imm' class
  case MCK_S17Imm: {
    DiagnosticPredicate DP(Operand.isS17Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S34Imm' class
  case MCK_S34Imm: {
    DiagnosticPredicate DP(Operand.isS34Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S5Imm' class
  case MCK_S5Imm: {
    DiagnosticPredicate DP(Operand.isS5Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'TLSReg' class
  case MCK_TLSReg: {
    DiagnosticPredicate DP(Operand.isTLSReg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U10Imm' class
  case MCK_U10Imm: {
    DiagnosticPredicate DP(Operand.isU10Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U12Imm' class
  case MCK_U12Imm: {
    DiagnosticPredicate DP(Operand.isU12Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U16Imm' class
  case MCK_U16Imm: {
    DiagnosticPredicate DP(Operand.isU16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U1Imm' class
  case MCK_U1Imm: {
    DiagnosticPredicate DP(Operand.isU1Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U2Imm' class
  case MCK_U2Imm: {
    DiagnosticPredicate DP(Operand.isU2Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U3Imm' class
  case MCK_U3Imm: {
    DiagnosticPredicate DP(Operand.isU3Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U4Imm' class
  case MCK_U4Imm: {
    DiagnosticPredicate DP(Operand.isU4Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U5Imm' class
  case MCK_U5Imm: {
    DiagnosticPredicate DP(Operand.isU5Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U6Imm' class
  case MCK_U6Imm: {
    DiagnosticPredicate DP(Operand.isU6Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U7Imm' class
  case MCK_U7Imm: {
    DiagnosticPredicate DP(Operand.isU7Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U8Imm' class
  case MCK_U8Imm: {
    DiagnosticPredicate DP(Operand.isU8Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case PPC::R0: OpKind = MCK_GPRC; break;
    case PPC::R1: OpKind = MCK_Reg2; break;
    case PPC::R2: OpKind = MCK_Reg2; break;
    case PPC::R3: OpKind = MCK_Reg2; break;
    case PPC::R4: OpKind = MCK_Reg2; break;
    case PPC::R5: OpKind = MCK_Reg2; break;
    case PPC::R6: OpKind = MCK_Reg2; break;
    case PPC::R7: OpKind = MCK_Reg2; break;
    case PPC::R8: OpKind = MCK_Reg2; break;
    case PPC::R9: OpKind = MCK_Reg2; break;
    case PPC::R10: OpKind = MCK_Reg2; break;
    case PPC::R11: OpKind = MCK_Reg2; break;
    case PPC::R12: OpKind = MCK_Reg2; break;
    case PPC::R13: OpKind = MCK_Reg2; break;
    case PPC::R14: OpKind = MCK_Reg2; break;
    case PPC::R15: OpKind = MCK_Reg2; break;
    case PPC::R16: OpKind = MCK_Reg2; break;
    case PPC::R17: OpKind = MCK_Reg2; break;
    case PPC::R18: OpKind = MCK_Reg2; break;
    case PPC::R19: OpKind = MCK_Reg2; break;
    case PPC::R20: OpKind = MCK_Reg2; break;
    case PPC::R21: OpKind = MCK_Reg2; break;
    case PPC::R22: OpKind = MCK_Reg2; break;
    case PPC::R23: OpKind = MCK_Reg2; break;
    case PPC::R24: OpKind = MCK_Reg2; break;
    case PPC::R25: OpKind = MCK_Reg2; break;
    case PPC::R26: OpKind = MCK_Reg2; break;
    case PPC::R27: OpKind = MCK_Reg2; break;
    case PPC::R28: OpKind = MCK_Reg2; break;
    case PPC::R29: OpKind = MCK_Reg2; break;
    case PPC::R30: OpKind = MCK_Reg2; break;
    case PPC::R31: OpKind = MCK_Reg2; break;
    case PPC::X0: OpKind = MCK_G8RC; break;
    case PPC::X1: OpKind = MCK_Reg6; break;
    case PPC::X2: OpKind = MCK_Reg6; break;
    case PPC::X3: OpKind = MCK_Reg6; break;
    case PPC::X4: OpKind = MCK_Reg6; break;
    case PPC::X5: OpKind = MCK_Reg6; break;
    case PPC::X6: OpKind = MCK_Reg6; break;
    case PPC::X7: OpKind = MCK_Reg6; break;
    case PPC::X8: OpKind = MCK_Reg6; break;
    case PPC::X9: OpKind = MCK_Reg6; break;
    case PPC::X10: OpKind = MCK_Reg6; break;
    case PPC::X11: OpKind = MCK_Reg6; break;
    case PPC::X12: OpKind = MCK_Reg6; break;
    case PPC::X13: OpKind = MCK_Reg6; break;
    case PPC::X14: OpKind = MCK_Reg6; break;
    case PPC::X15: OpKind = MCK_Reg6; break;
    case PPC::X16: OpKind = MCK_Reg6; break;
    case PPC::X17: OpKind = MCK_Reg6; break;
    case PPC::X18: OpKind = MCK_Reg6; break;
    case PPC::X19: OpKind = MCK_Reg6; break;
    case PPC::X20: OpKind = MCK_Reg6; break;
    case PPC::X21: OpKind = MCK_Reg6; break;
    case PPC::X22: OpKind = MCK_Reg6; break;
    case PPC::X23: OpKind = MCK_Reg6; break;
    case PPC::X24: OpKind = MCK_Reg6; break;
    case PPC::X25: OpKind = MCK_Reg6; break;
    case PPC::X26: OpKind = MCK_Reg6; break;
    case PPC::X27: OpKind = MCK_Reg6; break;
    case PPC::X28: OpKind = MCK_Reg6; break;
    case PPC::X29: OpKind = MCK_Reg6; break;
    case PPC::X30: OpKind = MCK_Reg6; break;
    case PPC::X31: OpKind = MCK_Reg6; break;
    case PPC::S0: OpKind = MCK_SPERC; break;
    case PPC::S1: OpKind = MCK_Reg8; break;
    case PPC::S2: OpKind = MCK_Reg8; break;
    case PPC::S3: OpKind = MCK_Reg8; break;
    case PPC::S4: OpKind = MCK_Reg8; break;
    case PPC::S5: OpKind = MCK_Reg8; break;
    case PPC::S6: OpKind = MCK_Reg8; break;
    case PPC::S7: OpKind = MCK_Reg8; break;
    case PPC::S8: OpKind = MCK_Reg8; break;
    case PPC::S9: OpKind = MCK_Reg8; break;
    case PPC::S10: OpKind = MCK_Reg8; break;
    case PPC::S11: OpKind = MCK_Reg8; break;
    case PPC::S12: OpKind = MCK_Reg8; break;
    case PPC::S13: OpKind = MCK_Reg8; break;
    case PPC::S14: OpKind = MCK_Reg8; break;
    case PPC::S15: OpKind = MCK_Reg8; break;
    case PPC::S16: OpKind = MCK_Reg8; break;
    case PPC::S17: OpKind = MCK_Reg8; break;
    case PPC::S18: OpKind = MCK_Reg8; break;
    case PPC::S19: OpKind = MCK_Reg8; break;
    case PPC::S20: OpKind = MCK_Reg8; break;
    case PPC::S21: OpKind = MCK_Reg8; break;
    case PPC::S22: OpKind = MCK_Reg8; break;
    case PPC::S23: OpKind = MCK_Reg8; break;
    case PPC::S24: OpKind = MCK_Reg8; break;
    case PPC::S25: OpKind = MCK_Reg8; break;
    case PPC::S26: OpKind = MCK_Reg8; break;
    case PPC::S27: OpKind = MCK_Reg8; break;
    case PPC::S28: OpKind = MCK_Reg8; break;
    case PPC::S29: OpKind = MCK_Reg8; break;
    case PPC::S30: OpKind = MCK_Reg8; break;
    case PPC::S31: OpKind = MCK_Reg8; break;
    case PPC::F0: OpKind = MCK_Reg9; break;
    case PPC::F1: OpKind = MCK_Reg9; break;
    case PPC::F2: OpKind = MCK_Reg9; break;
    case PPC::F3: OpKind = MCK_Reg9; break;
    case PPC::F4: OpKind = MCK_Reg9; break;
    case PPC::F5: OpKind = MCK_Reg9; break;
    case PPC::F6: OpKind = MCK_Reg9; break;
    case PPC::F7: OpKind = MCK_Reg9; break;
    case PPC::F8: OpKind = MCK_Reg9; break;
    case PPC::F9: OpKind = MCK_Reg9; break;
    case PPC::F10: OpKind = MCK_Reg9; break;
    case PPC::F11: OpKind = MCK_Reg9; break;
    case PPC::F12: OpKind = MCK_Reg9; break;
    case PPC::F13: OpKind = MCK_Reg9; break;
    case PPC::F14: OpKind = MCK_F4RC; break;
    case PPC::F15: OpKind = MCK_F4RC; break;
    case PPC::F16: OpKind = MCK_F4RC; break;
    case PPC::F17: OpKind = MCK_F4RC; break;
    case PPC::F18: OpKind = MCK_F4RC; break;
    case PPC::F19: OpKind = MCK_F4RC; break;
    case PPC::F20: OpKind = MCK_F4RC; break;
    case PPC::F21: OpKind = MCK_F4RC; break;
    case PPC::F22: OpKind = MCK_F4RC; break;
    case PPC::F23: OpKind = MCK_F4RC; break;
    case PPC::F24: OpKind = MCK_F4RC; break;
    case PPC::F25: OpKind = MCK_F4RC; break;
    case PPC::F26: OpKind = MCK_F4RC; break;
    case PPC::F27: OpKind = MCK_F4RC; break;
    case PPC::F28: OpKind = MCK_F4RC; break;
    case PPC::F29: OpKind = MCK_F4RC; break;
    case PPC::F30: OpKind = MCK_F4RC; break;
    case PPC::F31: OpKind = MCK_F4RC; break;
    case PPC::VF0: OpKind = MCK_Reg13; break;
    case PPC::VF1: OpKind = MCK_Reg13; break;
    case PPC::VF2: OpKind = MCK_Reg13; break;
    case PPC::VF3: OpKind = MCK_Reg13; break;
    case PPC::VF4: OpKind = MCK_Reg13; break;
    case PPC::VF5: OpKind = MCK_Reg13; break;
    case PPC::VF6: OpKind = MCK_Reg13; break;
    case PPC::VF7: OpKind = MCK_Reg13; break;
    case PPC::VF8: OpKind = MCK_Reg13; break;
    case PPC::VF9: OpKind = MCK_Reg13; break;
    case PPC::VF10: OpKind = MCK_Reg13; break;
    case PPC::VF11: OpKind = MCK_Reg13; break;
    case PPC::VF12: OpKind = MCK_Reg13; break;
    case PPC::VF13: OpKind = MCK_Reg13; break;
    case PPC::VF14: OpKind = MCK_Reg13; break;
    case PPC::VF15: OpKind = MCK_Reg13; break;
    case PPC::VF16: OpKind = MCK_Reg13; break;
    case PPC::VF17: OpKind = MCK_Reg13; break;
    case PPC::VF18: OpKind = MCK_Reg13; break;
    case PPC::VF19: OpKind = MCK_Reg13; break;
    case PPC::VF20: OpKind = MCK_VFRC; break;
    case PPC::VF21: OpKind = MCK_VFRC; break;
    case PPC::VF22: OpKind = MCK_VFRC; break;
    case PPC::VF23: OpKind = MCK_VFRC; break;
    case PPC::VF24: OpKind = MCK_VFRC; break;
    case PPC::VF25: OpKind = MCK_VFRC; break;
    case PPC::VF26: OpKind = MCK_VFRC; break;
    case PPC::VF27: OpKind = MCK_VFRC; break;
    case PPC::VF28: OpKind = MCK_VFRC; break;
    case PPC::VF29: OpKind = MCK_VFRC; break;
    case PPC::VF30: OpKind = MCK_VFRC; break;
    case PPC::VF31: OpKind = MCK_VFRC; break;
    case PPC::V0: OpKind = MCK_Reg15; break;
    case PPC::V1: OpKind = MCK_Reg15; break;
    case PPC::V2: OpKind = MCK_Reg15; break;
    case PPC::V3: OpKind = MCK_Reg15; break;
    case PPC::V4: OpKind = MCK_Reg15; break;
    case PPC::V5: OpKind = MCK_Reg15; break;
    case PPC::V6: OpKind = MCK_Reg15; break;
    case PPC::V7: OpKind = MCK_Reg15; break;
    case PPC::V8: OpKind = MCK_Reg15; break;
    case PPC::V9: OpKind = MCK_Reg15; break;
    case PPC::V10: OpKind = MCK_Reg15; break;
    case PPC::V11: OpKind = MCK_Reg15; break;
    case PPC::V12: OpKind = MCK_Reg15; break;
    case PPC::V13: OpKind = MCK_Reg15; break;
    case PPC::V14: OpKind = MCK_Reg15; break;
    case PPC::V15: OpKind = MCK_Reg15; break;
    case PPC::V16: OpKind = MCK_Reg15; break;
    case PPC::V17: OpKind = MCK_Reg15; break;
    case PPC::V18: OpKind = MCK_Reg15; break;
    case PPC::V19: OpKind = MCK_Reg15; break;
    case PPC::V20: OpKind = MCK_VRRC; break;
    case PPC::V21: OpKind = MCK_VRRC; break;
    case PPC::V22: OpKind = MCK_VRRC; break;
    case PPC::V23: OpKind = MCK_VRRC; break;
    case PPC::V24: OpKind = MCK_VRRC; break;
    case PPC::V25: OpKind = MCK_VRRC; break;
    case PPC::V26: OpKind = MCK_VRRC; break;
    case PPC::V27: OpKind = MCK_VRRC; break;
    case PPC::V28: OpKind = MCK_VRRC; break;
    case PPC::V29: OpKind = MCK_VRRC; break;
    case PPC::V30: OpKind = MCK_VRRC; break;
    case PPC::V31: OpKind = MCK_VRRC; break;
    case PPC::VSL0: OpKind = MCK_Reg19; break;
    case PPC::VSL1: OpKind = MCK_Reg19; break;
    case PPC::VSL2: OpKind = MCK_Reg19; break;
    case PPC::VSL3: OpKind = MCK_Reg19; break;
    case PPC::VSL4: OpKind = MCK_Reg19; break;
    case PPC::VSL5: OpKind = MCK_Reg19; break;
    case PPC::VSL6: OpKind = MCK_Reg19; break;
    case PPC::VSL7: OpKind = MCK_Reg19; break;
    case PPC::VSL8: OpKind = MCK_Reg19; break;
    case PPC::VSL9: OpKind = MCK_Reg19; break;
    case PPC::VSL10: OpKind = MCK_Reg19; break;
    case PPC::VSL11: OpKind = MCK_Reg19; break;
    case PPC::VSL12: OpKind = MCK_Reg19; break;
    case PPC::VSL13: OpKind = MCK_Reg19; break;
    case PPC::VSL14: OpKind = MCK_VSLRC; break;
    case PPC::VSL15: OpKind = MCK_VSLRC; break;
    case PPC::VSL16: OpKind = MCK_VSLRC; break;
    case PPC::VSL17: OpKind = MCK_VSLRC; break;
    case PPC::VSL18: OpKind = MCK_VSLRC; break;
    case PPC::VSL19: OpKind = MCK_VSLRC; break;
    case PPC::VSL20: OpKind = MCK_VSLRC; break;
    case PPC::VSL21: OpKind = MCK_VSLRC; break;
    case PPC::VSL22: OpKind = MCK_VSLRC; break;
    case PPC::VSL23: OpKind = MCK_VSLRC; break;
    case PPC::VSL24: OpKind = MCK_VSLRC; break;
    case PPC::VSL25: OpKind = MCK_VSLRC; break;
    case PPC::VSL26: OpKind = MCK_VSLRC; break;
    case PPC::VSL27: OpKind = MCK_VSLRC; break;
    case PPC::VSL28: OpKind = MCK_VSLRC; break;
    case PPC::VSL29: OpKind = MCK_VSLRC; break;
    case PPC::VSL30: OpKind = MCK_VSLRC; break;
    case PPC::VSL31: OpKind = MCK_VSLRC; break;
    case PPC::VSRp0: OpKind = MCK_Reg21; break;
    case PPC::VSRp1: OpKind = MCK_Reg21; break;
    case PPC::VSRp2: OpKind = MCK_Reg21; break;
    case PPC::VSRp3: OpKind = MCK_Reg21; break;
    case PPC::VSRp4: OpKind = MCK_Reg21; break;
    case PPC::VSRp5: OpKind = MCK_Reg21; break;
    case PPC::VSRp6: OpKind = MCK_Reg21; break;
    case PPC::VSRp7: OpKind = MCK_Reg22; break;
    case PPC::VSRp8: OpKind = MCK_Reg22; break;
    case PPC::VSRp9: OpKind = MCK_Reg22; break;
    case PPC::VSRp10: OpKind = MCK_Reg22; break;
    case PPC::VSRp11: OpKind = MCK_Reg22; break;
    case PPC::VSRp12: OpKind = MCK_Reg22; break;
    case PPC::VSRp13: OpKind = MCK_Reg22; break;
    case PPC::VSRp14: OpKind = MCK_Reg22; break;
    case PPC::VSRp15: OpKind = MCK_Reg22; break;
    case PPC::VSRp16: OpKind = MCK_Reg25; break;
    case PPC::VSRp17: OpKind = MCK_Reg25; break;
    case PPC::VSRp18: OpKind = MCK_Reg25; break;
    case PPC::VSRp19: OpKind = MCK_Reg25; break;
    case PPC::VSRp20: OpKind = MCK_Reg25; break;
    case PPC::VSRp21: OpKind = MCK_Reg25; break;
    case PPC::VSRp22: OpKind = MCK_Reg25; break;
    case PPC::VSRp23: OpKind = MCK_Reg25; break;
    case PPC::VSRp24: OpKind = MCK_Reg25; break;
    case PPC::VSRp25: OpKind = MCK_Reg25; break;
    case PPC::VSRp26: OpKind = MCK_Reg26; break;
    case PPC::VSRp27: OpKind = MCK_Reg26; break;
    case PPC::VSRp28: OpKind = MCK_Reg26; break;
    case PPC::VSRp29: OpKind = MCK_Reg26; break;
    case PPC::VSRp30: OpKind = MCK_Reg26; break;
    case PPC::VSRp31: OpKind = MCK_Reg26; break;
    case PPC::G8p0: OpKind = MCK_G8pRC; break;
    case PPC::G8p1: OpKind = MCK_Reg28; break;
    case PPC::G8p2: OpKind = MCK_Reg28; break;
    case PPC::G8p3: OpKind = MCK_Reg28; break;
    case PPC::G8p4: OpKind = MCK_Reg28; break;
    case PPC::G8p5: OpKind = MCK_Reg28; break;
    case PPC::G8p6: OpKind = MCK_Reg28; break;
    case PPC::G8p7: OpKind = MCK_Reg28; break;
    case PPC::G8p8: OpKind = MCK_Reg28; break;
    case PPC::G8p9: OpKind = MCK_Reg28; break;
    case PPC::G8p10: OpKind = MCK_Reg28; break;
    case PPC::G8p11: OpKind = MCK_Reg28; break;
    case PPC::G8p12: OpKind = MCK_Reg28; break;
    case PPC::G8p13: OpKind = MCK_Reg28; break;
    case PPC::G8p14: OpKind = MCK_Reg28; break;
    case PPC::G8p15: OpKind = MCK_Reg28; break;
    case PPC::ZERO: OpKind = MCK_GPRC_NOR0; break;
    case PPC::ZERO8: OpKind = MCK_G8RC_NOX0; break;
    case PPC::FP: OpKind = MCK_Reg2; break;
    case PPC::FP8: OpKind = MCK_Reg6; break;
    case PPC::BP: OpKind = MCK_Reg2; break;
    case PPC::BP8: OpKind = MCK_Reg6; break;
    case PPC::CR0LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR0UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR1LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR1UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR2LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR2UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR3LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR3UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR4LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR4UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR5LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR5UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR6LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR6UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR7LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR7UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR0: OpKind = MCK_CRRC; break;
    case PPC::CR1: OpKind = MCK_CRRC; break;
    case PPC::CR2: OpKind = MCK_CRRC; break;
    case PPC::CR3: OpKind = MCK_CRRC; break;
    case PPC::CR4: OpKind = MCK_CRRC; break;
    case PPC::CR5: OpKind = MCK_CRRC; break;
    case PPC::CR6: OpKind = MCK_CRRC; break;
    case PPC::CR7: OpKind = MCK_CRRC; break;
    case PPC::LR: OpKind = MCK_LRRC; break;
    case PPC::LR8: OpKind = MCK_LR8RC; break;
    case PPC::CTR: OpKind = MCK_CTRRC; break;
    case PPC::CTR8: OpKind = MCK_CTRRC8; break;
    case PPC::VRSAVE: OpKind = MCK_VRSAVERC; break;
    case PPC::XER: OpKind = MCK_CARRYRC; break;
    case PPC::CARRY: OpKind = MCK_CARRYRC; break;
    case PPC::ACC0: OpKind = MCK_Reg37; break;
    case PPC::ACC1: OpKind = MCK_Reg37; break;
    case PPC::ACC2: OpKind = MCK_Reg37; break;
    case PPC::ACC3: OpKind = MCK_Reg38; break;
    case PPC::ACC4: OpKind = MCK_ACCRC; break;
    case PPC::ACC5: OpKind = MCK_ACCRC; break;
    case PPC::ACC6: OpKind = MCK_ACCRC; break;
    case PPC::ACC7: OpKind = MCK_ACCRC; break;
    case PPC::UACC0: OpKind = MCK_Reg40; break;
    case PPC::UACC1: OpKind = MCK_Reg40; break;
    case PPC::UACC2: OpKind = MCK_Reg40; break;
    case PPC::UACC3: OpKind = MCK_Reg41; break;
    case PPC::UACC4: OpKind = MCK_UACCRC; break;
    case PPC::UACC5: OpKind = MCK_UACCRC; break;
    case PPC::UACC6: OpKind = MCK_UACCRC; break;
    case PPC::UACC7: OpKind = MCK_UACCRC; break;
    case PPC::DMRROW0: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW1: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW2: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW3: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW4: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW5: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW6: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW7: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW8: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW9: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW10: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW11: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW12: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW13: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW14: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW15: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW16: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW17: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW18: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW19: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW20: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW21: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW22: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW23: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW24: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW25: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW26: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW27: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW28: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW29: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW30: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW31: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW32: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW33: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW34: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW35: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW36: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW37: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW38: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW39: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW40: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW41: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW42: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW43: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW44: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW45: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW46: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW47: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW48: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW49: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW50: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW51: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW52: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW53: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW54: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW55: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW56: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW57: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW58: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW59: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW60: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW61: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW62: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROW63: OpKind = MCK_DMRROWRC; break;
    case PPC::DMRROWp0: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp1: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp2: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp3: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp4: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp5: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp6: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp7: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp8: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp9: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp10: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp11: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp12: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp13: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp14: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp15: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp16: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp17: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp18: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp19: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp20: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp21: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp22: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp23: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp24: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp25: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp26: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp27: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp28: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp29: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp30: OpKind = MCK_DMRROWpRC; break;
    case PPC::DMRROWp31: OpKind = MCK_DMRROWpRC; break;
    case PPC::WACC0: OpKind = MCK_WACCRC; break;
    case PPC::WACC1: OpKind = MCK_WACCRC; break;
    case PPC::WACC2: OpKind = MCK_WACCRC; break;
    case PPC::WACC3: OpKind = MCK_WACCRC; break;
    case PPC::WACC4: OpKind = MCK_WACCRC; break;
    case PPC::WACC5: OpKind = MCK_WACCRC; break;
    case PPC::WACC6: OpKind = MCK_WACCRC; break;
    case PPC::WACC7: OpKind = MCK_WACCRC; break;
    case PPC::WACC_HI0: OpKind = MCK_WACC_HIRC; break;
    case PPC::WACC_HI1: OpKind = MCK_WACC_HIRC; break;
    case PPC::WACC_HI2: OpKind = MCK_WACC_HIRC; break;
    case PPC::WACC_HI3: OpKind = MCK_WACC_HIRC; break;
    case PPC::WACC_HI4: OpKind = MCK_WACC_HIRC; break;
    case PPC::WACC_HI5: OpKind = MCK_WACC_HIRC; break;
    case PPC::WACC_HI6: OpKind = MCK_WACC_HIRC; break;
    case PPC::WACC_HI7: OpKind = MCK_WACC_HIRC; break;
    case PPC::DMR0: OpKind = MCK_DMRRC; break;
    case PPC::DMR1: OpKind = MCK_DMRRC; break;
    case PPC::DMR2: OpKind = MCK_DMRRC; break;
    case PPC::DMR3: OpKind = MCK_DMRRC; break;
    case PPC::DMR4: OpKind = MCK_DMRRC; break;
    case PPC::DMR5: OpKind = MCK_DMRRC; break;
    case PPC::DMR6: OpKind = MCK_DMRRC; break;
    case PPC::DMR7: OpKind = MCK_DMRRC; break;
    case PPC::DMRp0: OpKind = MCK_DMRpRC; break;
    case PPC::DMRp1: OpKind = MCK_DMRpRC; break;
    case PPC::DMRp2: OpKind = MCK_DMRpRC; break;
    case PPC::DMRp3: OpKind = MCK_DMRpRC; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK__DOT_: return "MCK__DOT_";
  case MCK_0: return "MCK_0";
  case MCK_1: return "MCK_1";
  case MCK_2: return "MCK_2";
  case MCK_3: return "MCK_3";
  case MCK_4: return "MCK_4";
  case MCK_5: return "MCK_5";
  case MCK_6: return "MCK_6";
  case MCK_7: return "MCK_7";
  case MCK_crD: return "MCK_crD";
  case MCK_CTRRC: return "MCK_CTRRC";
  case MCK_CTRRC8: return "MCK_CTRRC8";
  case MCK_LR8RC: return "MCK_LR8RC";
  case MCK_LRRC: return "MCK_LRRC";
  case MCK_VRSAVERC: return "MCK_VRSAVERC";
  case MCK_CARRYRC: return "MCK_CARRYRC";
  case MCK_Reg40: return "MCK_Reg40";
  case MCK_Reg37: return "MCK_Reg37";
  case MCK_Reg41: return "MCK_Reg41";
  case MCK_Reg38: return "MCK_Reg38";
  case MCK_DMRpRC: return "MCK_DMRpRC";
  case MCK_Reg21: return "MCK_Reg21";
  case MCK_ACCRC: return "MCK_ACCRC";
  case MCK_CRRC: return "MCK_CRRC";
  case MCK_DMRRC: return "MCK_DMRRC";
  case MCK_UACCRC: return "MCK_UACCRC";
  case MCK_WACCRC: return "MCK_WACCRC";
  case MCK_WACC_HIRC: return "MCK_WACC_HIRC";
  case MCK_Reg25: return "MCK_Reg25";
  case MCK_Reg19: return "MCK_Reg19";
  case MCK_Reg9: return "MCK_Reg9";
  case MCK_Reg28: return "MCK_Reg28";
  case MCK_Reg26: return "MCK_Reg26";
  case MCK_Reg22: return "MCK_Reg22";
  case MCK_G8pRC: return "MCK_G8pRC";
  case MCK_Reg24: return "MCK_Reg24";
  case MCK_Reg15: return "MCK_Reg15";
  case MCK_Reg13: return "MCK_Reg13";
  case MCK_Reg8: return "MCK_Reg8";
  case MCK_CRBITRC: return "MCK_CRBITRC";
  case MCK_DMRROWpRC: return "MCK_DMRROWpRC";
  case MCK_F4RC: return "MCK_F4RC";
  case MCK_SPERC: return "MCK_SPERC";
  case MCK_VFRC: return "MCK_VFRC";
  case MCK_VRRC: return "MCK_VRRC";
  case MCK_VSLRC: return "MCK_VSLRC";
  case MCK_VSRpRC: return "MCK_VSRpRC";
  case MCK_Reg6: return "MCK_Reg6";
  case MCK_Reg2: return "MCK_Reg2";
  case MCK_Reg18: return "MCK_Reg18";
  case MCK_Reg12: return "MCK_Reg12";
  case MCK_G8RC: return "MCK_G8RC";
  case MCK_G8RC_NOX0: return "MCK_G8RC_NOX0";
  case MCK_GPRC: return "MCK_GPRC";
  case MCK_GPRC_NOR0: return "MCK_GPRC_NOR0";
  case MCK_DMRROWRC: return "MCK_DMRROWRC";
  case MCK_VSRC: return "MCK_VSRC";
  case MCK_VSSRC: return "MCK_VSSRC";
  case MCK_SPILLTOVSRRC: return "MCK_SPILLTOVSRRC";
  case MCK_Imm: return "MCK_Imm";
  case MCK_ATBitsAsHint: return "MCK_ATBitsAsHint";
  case MCK_CRBitMask: return "MCK_CRBitMask";
  case MCK_CondBr: return "MCK_CondBr";
  case MCK_DirectBr: return "MCK_DirectBr";
  case MCK_DispRI34: return "MCK_DispRI34";
  case MCK_DispRIHash: return "MCK_DispRIHash";
  case MCK_DispRI: return "MCK_DispRI";
  case MCK_DispRIX16: return "MCK_DispRIX16";
  case MCK_DispRIX: return "MCK_DispRIX";
  case MCK_DispSPE2: return "MCK_DispSPE2";
  case MCK_DispSPE4: return "MCK_DispSPE4";
  case MCK_DispSPE8: return "MCK_DispSPE8";
  case MCK_ImmZero: return "MCK_ImmZero";
  case MCK_RegACCRC: return "MCK_RegACCRC";
  case MCK_RegCRBITRC: return "MCK_RegCRBITRC";
  case MCK_RegCRRC: return "MCK_RegCRRC";
  case MCK_RegDMRRC: return "MCK_RegDMRRC";
  case MCK_RegDMRROWRC: return "MCK_RegDMRROWRC";
  case MCK_RegDMRROWpRC: return "MCK_RegDMRROWpRC";
  case MCK_RegDMRpRC: return "MCK_RegDMRpRC";
  case MCK_RegF4RC: return "MCK_RegF4RC";
  case MCK_RegF8RC: return "MCK_RegF8RC";
  case MCK_RegG8RC: return "MCK_RegG8RC";
  case MCK_RegG8RCNoX0: return "MCK_RegG8RCNoX0";
  case MCK_RegG8pRC: return "MCK_RegG8pRC";
  case MCK_RegGPRC: return "MCK_RegGPRC";
  case MCK_RegGPRCNoR0: return "MCK_RegGPRCNoR0";
  case MCK_RegGxRCNoR0: return "MCK_RegGxRCNoR0";
  case MCK_RegGxRC: return "MCK_RegGxRC";
  case MCK_RegSPE4RC: return "MCK_RegSPE4RC";
  case MCK_RegSPERC: return "MCK_RegSPERC";
  case MCK_RegSPILLTOVSRRC: return "MCK_RegSPILLTOVSRRC";
  case MCK_RegVFRC: return "MCK_RegVFRC";
  case MCK_RegVRRC: return "MCK_RegVRRC";
  case MCK_RegVSFRC: return "MCK_RegVSFRC";
  case MCK_RegVSRC: return "MCK_RegVSRC";
  case MCK_RegVSRpEvenRC: return "MCK_RegVSRpEvenRC";
  case MCK_RegVSRpRC: return "MCK_RegVSRpRC";
  case MCK_RegVSSRC: return "MCK_RegVSSRC";
  case MCK_S16Imm: return "MCK_S16Imm";
  case MCK_S17Imm: return "MCK_S17Imm";
  case MCK_S34Imm: return "MCK_S34Imm";
  case MCK_S5Imm: return "MCK_S5Imm";
  case MCK_TLSReg: return "MCK_TLSReg";
  case MCK_U10Imm: return "MCK_U10Imm";
  case MCK_U12Imm: return "MCK_U12Imm";
  case MCK_U16Imm: return "MCK_U16Imm";
  case MCK_U1Imm: return "MCK_U1Imm";
  case MCK_U2Imm: return "MCK_U2Imm";
  case MCK_U3Imm: return "MCK_U3Imm";
  case MCK_U4Imm: return "MCK_U4Imm";
  case MCK_U5Imm: return "MCK_U5Imm";
  case MCK_U6Imm: return "MCK_U6Imm";
  case MCK_U7Imm: return "MCK_U7Imm";
  case MCK_U8Imm: return "MCK_U8Imm";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset PPCAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (!FB[PPC::AIXOS] || FB[PPC::FeatureModernAIXAs])
    Features.set(Feature_ModernAsBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const PPCAsmParser&AsmParser,
                               unsigned Kind,
                               const OperandVector &Operands,
                               uint64_t &ErrorInfo) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p += 2) {
    switch (*p) {
    case CVT_Tied: {
      unsigned OpIdx = *(p + 1);
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned OpndNum1 = TiedAsmOperandTable[OpIdx][1];
      unsigned OpndNum2 = TiedAsmOperandTable[OpIdx][2];
      if (OpndNum1 != OpndNum2) {
        auto &SrcOp1 = Operands[OpndNum1];
        auto &SrcOp2 = Operands[OpndNum2];
        if (!AsmParser.areEqualRegs(*SrcOp1, *SrcOp2)) {
          ErrorInfo = OpndNum2;
          return false;
        }
      }
      break;
    }
    default:
      break;
    }
  }
  return true;
}

static const char MnemonicTable[] =
    "\003add\004addc\005addco\004adde\005addeo\005addex\006addg6s\004addi\005"
    "addic\005addis\005addme\006addmeo\004addo\007addpcis\005addze\006addzeo"
    "\003and\004andc\004andi\005andis\004attn\001b\002ba\002bc\003bc+\003bc-"
    "\003bca\004bca+\004bca-\005bcctr\006bcctrl\006bcdadd\006bcdcfn\007bcdcf"
    "sq\006bcdcfz\010bcdcpsgn\006bcdctn\007bcdctsq\006bcdctz\004bcds\tbcdset"
    "sgn\005bcdsr\006bcdsub\010bcdtrunc\005bcdus\tbcdutrunc\003bcl\004bcl+\004"
    "bcl-\004bcla\005bcla+\005bcla-\004bclr\005bclrl\004bctr\005bctrl\004bdn"
    "z\005bdnz+\005bdnz-\005bdnza\006bdnza+\006bdnza-\005bdnzf\006bdnzfa\006"
    "bdnzfl\007bdnzfla\007bdnzflr\010bdnzflrl\005bdnzl\006bdnzl+\006bdnzl-\006"
    "bdnzla\007bdnzla+\007bdnzla-\006bdnzlr\007bdnzlr+\007bdnzlr-\007bdnzlrl"
    "\010bdnzlrl+\010bdnzlrl-\005bdnzt\006bdnzta\006bdnztl\007bdnztla\007bdn"
    "ztlr\010bdnztlrl\003bdz\004bdz+\004bdz-\004bdza\005bdza+\005bdza-\004bd"
    "zf\005bdzfa\005bdzfl\006bdzfla\006bdzflr\007bdzflrl\004bdzl\005bdzl+\005"
    "bdzl-\005bdzla\006bdzla+\006bdzla-\005bdzlr\006bdzlr+\006bdzlr-\006bdzl"
    "rl\007bdzlrl+\007bdzlrl-\004bdzt\005bdzta\005bdztl\006bdztla\006bdztlr\007"
    "bdztlrl\003beq\004beq+\004beq-\004beqa\005beqa+\005beqa-\006beqctr\007b"
    "eqctr+\007beqctr-\007beqctrl\010beqctrl+\010beqctrl-\004beql\005beql+\005"
    "beql-\005beqla\006beqla+\006beqla-\005beqlr\006beqlr+\006beqlr-\006beql"
    "rl\007beqlrl+\007beqlrl-\002bf\003bf+\003bf-\003bfa\004bfa+\004bfa-\005"
    "bfctr\006bfctr+\006bfctr-\006bfctrl\007bfctrl+\007bfctrl-\003bfl\004bfl"
    "+\004bfl-\004bfla\005bfla+\005bfla-\004bflr\005bflr+\005bflr-\005bflrl\006"
    "bflrl+\006bflrl-\003bge\004bge+\004bge-\004bgea\005bgea+\005bgea-\006bg"
    "ectr\007bgectr+\007bgectr-\007bgectrl\010bgectrl+\010bgectrl-\004bgel\005"
    "bgel+\005bgel-\005bgela\006bgela+\006bgela-\005bgelr\006bgelr+\006bgelr"
    "-\006bgelrl\007bgelrl+\007bgelrl-\003bgt\004bgt+\004bgt-\004bgta\005bgt"
    "a+\005bgta-\006bgtctr\007bgtctr+\007bgtctr-\007bgtctrl\010bgtctrl+\010b"
    "gtctrl-\004bgtl\005bgtl+\005bgtl-\005bgtla\006bgtla+\006bgtla-\005bgtlr"
    "\006bgtlr+\006bgtlr-\006bgtlrl\007bgtlrl+\007bgtlrl-\002bl\003bla\003bl"
    "e\004ble+\004ble-\004blea\005blea+\005blea-\006blectr\007blectr+\007ble"
    "ctr-\007blectrl\010blectrl+\010blectrl-\004blel\005blel+\005blel-\005bl"
    "ela\006blela+\006blela-\005blelr\006blelr+\006blelr-\006blelrl\007blelr"
    "l+\007blelrl-\003blr\004blrl\003blt\004blt+\004blt-\004blta\005blta+\005"
    "blta-\006bltctr\007bltctr+\007bltctr-\007bltctrl\010bltctrl+\010bltctrl"
    "-\004bltl\005bltl+\005bltl-\005bltla\006bltla+\006bltla-\005bltlr\006bl"
    "tlr+\006bltlr-\006bltlrl\007bltlrl+\007bltlrl-\003bne\004bne+\004bne-\004"
    "bnea\005bnea+\005bnea-\006bnectr\007bnectr+\007bnectr-\007bnectrl\010bn"
    "ectrl+\010bnectrl-\004bnel\005bnel+\005bnel-\005bnela\006bnela+\006bnel"
    "a-\005bnelr\006bnelr+\006bnelr-\006bnelrl\007bnelrl+\007bnelrl-\003bng\004"
    "bng+\004bng-\004bnga\005bnga+\005bnga-\006bngctr\007bngctr+\007bngctr-\007"
    "bngctrl\010bngctrl+\010bngctrl-\004bngl\005bngl+\005bngl-\005bngla\006b"
    "ngla+\006bngla-\005bnglr\006bnglr+\006bnglr-\006bnglrl\007bnglrl+\007bn"
    "glrl-\003bnl\004bnl+\004bnl-\004bnla\005bnla+\005bnla-\006bnlctr\007bnl"
    "ctr+\007bnlctr-\007bnlctrl\010bnlctrl+\010bnlctrl-\004bnll\005bnll+\005"
    "bnll-\005bnlla\006bnlla+\006bnlla-\005bnllr\006bnllr+\006bnllr-\006bnll"
    "rl\007bnllrl+\007bnllrl-\003bns\004bns+\004bns-\004bnsa\005bnsa+\005bns"
    "a-\006bnsctr\007bnsctr+\007bnsctr-\007bnsctrl\010bnsctrl+\010bnsctrl-\004"
    "bnsl\005bnsl+\005bnsl-\005bnsla\006bnsla+\006bnsla-\005bnslr\006bnslr+\006"
    "bnslr-\006bnslrl\007bnslrl+\007bnslrl-\003bnu\004bnu+\004bnu-\004bnua\005"
    "bnua+\005bnua-\006bnuctr\007bnuctr+\007bnuctr-\007bnuctrl\010bnuctrl+\010"
    "bnuctrl-\004bnul\005bnul+\005bnul-\005bnula\006bnula+\006bnula-\005bnul"
    "r\006bnulr+\006bnulr-\006bnulrl\007bnulrl+\007bnulrl-\006bpermd\003brd\003"
    "brh\005brinc\003brw\003bso\004bso+\004bso-\004bsoa\005bsoa+\005bsoa-\006"
    "bsoctr\007bsoctr+\007bsoctr-\007bsoctrl\010bsoctrl+\010bsoctrl-\004bsol"
    "\005bsol+\005bsol-\005bsola\006bsola+\006bsola-\005bsolr\006bsolr+\006b"
    "solr-\006bsolrl\007bsolrl+\007bsolrl-\002bt\003bt+\003bt-\003bta\004bta"
    "+\004bta-\005btctr\006btctr+\006btctr-\006btctrl\007btctrl+\007btctrl-\003"
    "btl\004btl+\004btl-\004btla\005btla+\005btla-\004btlr\005btlr+\005btlr-"
    "\005btlrl\006btlrl+\006btlrl-\003bun\004bun+\004bun-\004buna\005buna+\005"
    "buna-\006bunctr\007bunctr+\007bunctr-\007bunctrl\010bunctrl+\010bunctrl"
    "-\004bunl\005bunl+\005bunl-\005bunla\006bunla+\006bunla-\005bunlr\006bu"
    "nlr+\006bunlr-\006bunlrl\007bunlrl+\007bunlrl-\006cbcdtd\006cdtbcd\006c"
    "fuged\007clrbhrb\006clrldi\010clrlsldi\010clrlslwi\006clrlwi\006clrrdi\006"
    "clrrwi\003cmp\004cmpb\004cmpd\005cmpdi\006cmpeqb\004cmpi\004cmpl\005cmp"
    "ld\006cmpldi\005cmpli\005cmplw\006cmplwi\005cmprb\004cmpw\005cmpwi\006c"
    "ntlzd\007cntlzdm\006cntlzw\006cnttzd\007cnttzdm\006cnttzw\004copy\007cp"
    "abort\005crand\006crandc\005crclr\005creqv\006crmove\006crnand\005crnor"
    "\005crnot\004cror\005crorc\005crset\005crxor\004darn\004dcba\004dcbf\006"
    "dcbfep\005dcbfl\006dcbflp\006dcbfps\004dcbi\005dcbst\007dcbstep\007dcbs"
    "tps\004dcbt\006dcbtct\006dcbtds\006dcbtep\006dcbtst\010dcbtstct\010dcbt"
    "stds\010dcbtstep\007dcbtstt\005dcbtt\004dcbz\006dcbzep\005dcbzl\007dcbz"
    "lep\005dccci\003dci\004divd\005divde\006divdeo\006divdeu\007divdeuo\005"
    "divdo\005divdu\006divduo\004divw\005divwe\006divweo\006divweu\007divweu"
    "o\005divwo\005divwu\006divwuo\004dmmr\tdmsetdmrz\005dmxor\016dmxxextfdm"
    "r256\016dmxxextfdmr512\017dmxxinstfdmr256\017dmxxinstfdmr512\003dss\006"
    "dssall\003dst\005dstst\006dststt\004dstt\006efdabs\006efdadd\006efdcfs\007"
    "efdcfsf\007efdcfsi\010efdcfsid\007efdcfuf\007efdcfui\010efdcfuid\010efd"
    "cmpeq\010efdcmpgt\010efdcmplt\007efdctsf\007efdctsi\tefdctsidz\010efdct"
    "siz\007efdctuf\007efdctui\tefdctuidz\010efdctuiz\006efddiv\006efdmul\007"
    "efdnabs\006efdneg\006efdsub\010efdtsteq\010efdtstgt\010efdtstlt\006efsa"
    "bs\006efsadd\006efscfd\007efscfsf\007efscfsi\007efscfuf\007efscfui\010e"
    "fscmpeq\010efscmpgt\010efscmplt\007efsctsf\007efsctsi\010efsctsiz\007ef"
    "sctuf\007efsctui\010efsctuiz\006efsdiv\006efsmul\007efsnabs\006efsneg\006"
    "efssub\010efststeq\010efststgt\010efststlt\005eieio\003eqv\005evabs\007"
    "evaddiw\013evaddsmiaaw\013evaddssiaaw\013evaddumiaaw\013evaddusiaaw\006"
    "evaddw\005evand\006evandc\007evcmpeq\010evcmpgts\010evcmpgtu\010evcmplt"
    "s\010evcmpltu\010evcntlsw\010evcntlzw\007evdivws\007evdivwu\005eveqv\007"
    "evextsb\007evextsh\007evfsabs\007evfsadd\010evfscfsf\010evfscfsi\010evf"
    "scfuf\010evfscfui\tevfscmpeq\tevfscmpgt\tevfscmplt\010evfsctsf\010evfsc"
    "tsi\tevfsctsiz\010evfsctui\007evfsdiv\007evfsmul\010evfsnabs\007evfsneg"
    "\007evfssub\tevfststeq\tevfststgt\tevfststlt\005evldd\006evlddx\005evld"
    "h\006evldhx\005evldw\006evldwx\013evlhhesplat\014evlhhesplatx\014evlhho"
    "ssplat\015evlhhossplatx\014evlhhousplat\015evlhhousplatx\006evlwhe\007e"
    "vlwhex\007evlwhos\010evlwhosx\007evlwhou\010evlwhoux\nevlwhsplat\013evl"
    "whsplatx\nevlwwsplat\013evlwwsplatx\tevmergehi\013evmergehilo\tevmergel"
    "o\013evmergelohi\013evmhegsmfaa\013evmhegsmfan\013evmhegsmiaa\013evmheg"
    "smian\013evmhegumiaa\013evmhegumian\010evmhesmf\tevmhesmfa\013evmhesmfa"
    "aw\013evmhesmfanw\010evmhesmi\tevmhesmia\013evmhesmiaaw\013evmhesmianw\010"
    "evmhessf\tevmhessfa\013evmhessfaaw\013evmhessfanw\013evmhessiaaw\013evm"
    "hessianw\010evmheumi\tevmheumia\013evmheumiaaw\013evmheumianw\013evmheu"
    "siaaw\013evmheusianw\013evmhogsmfaa\013evmhogsmfan\013evmhogsmiaa\013ev"
    "mhogsmian\013evmhogumiaa\013evmhogumian\010evmhosmf\tevmhosmfa\013evmho"
    "smfaaw\013evmhosmfanw\010evmhosmi\tevmhosmia\013evmhosmiaaw\013evmhosmi"
    "anw\010evmhossf\tevmhossfa\013evmhossfaaw\013evmhossfanw\013evmhossiaaw"
    "\013evmhossianw\010evmhoumi\tevmhoumia\013evmhoumiaaw\013evmhoumianw\013"
    "evmhousiaaw\013evmhousianw\005evmra\010evmwhsmf\tevmwhsmfa\010evmwhsmi\t"
    "evmwhsmia\010evmwhssf\tevmwhssfa\010evmwhumi\tevmwhumia\013evmwlsmiaaw\013"
    "evmwlsmianw\013evmwlssiaaw\013evmwlssianw\010evmwlumi\tevmwlumia\013evm"
    "wlumiaaw\013evmwlumianw\013evmwlusiaaw\013evmwlusianw\007evmwsmf\010evm"
    "wsmfa\tevmwsmfaa\tevmwsmfan\007evmwsmi\010evmwsmia\tevmwsmiaa\tevmwsmia"
    "n\007evmwssf\010evmwssfa\tevmwssfaa\tevmwssfan\007evmwumi\010evmwumia\t"
    "evmwumiaa\tevmwumian\006evnand\005evneg\005evnor\004evor\005evorc\005ev"
    "rlw\006evrlwi\006evrndw\005evsel\005evslw\006evslwi\tevsplatfi\010evspl"
    "ati\007evsrwis\007evsrwiu\006evsrws\006evsrwu\006evstdd\007evstddx\006e"
    "vstdh\007evstdhx\006evstdw\007evstdwx\007evstwhe\010evstwhex\007evstwho"
    "\010evstwhox\007evstwwe\010evstwwex\007evstwwo\010evstwwox\014evsubfsmi"
    "aaw\014evsubfssiaaw\014evsubfumiaaw\014evsubfusiaaw\007evsubfw\010evsub"
    "ifw\005evxor\006extldi\006extlwi\006extrdi\006extrwi\005extsb\005extsh\005"
    "extsw\010extswsli\004fabs\004fadd\005fadds\005fcfid\006fcfids\006fcfidu"
    "\007fcfidus\005fcmpo\005fcmpu\006fcpsgn\005fctid\006fctidu\007fctiduz\006"
    "fctidz\005fctiw\006fctiwu\007fctiwuz\006fctiwz\004fdiv\005fdivs\005fmad"
    "d\006fmadds\003fmr\005fmsub\006fmsubs\004fmul\005fmuls\005fnabs\004fneg"
    "\006fnmadd\007fnmadds\006fnmsub\007fnmsubs\003fre\004fres\004frim\004fr"
    "in\004frip\004friz\004frsp\007frsqrte\010frsqrtes\004fsel\005fsqrt\006f"
    "sqrts\004fsub\005fsubs\005ftdiv\006ftsqrt\007hashchk\010hashchkp\006has"
    "hst\007hashstp\005hrfid\006hwsync\004icbi\006icbiep\005icblc\005icblq\004"
    "icbt\006icbtls\005iccci\003ici\006inslwi\006insrdi\006insrwi\004isel\006"
    "iseleq\006iselgt\006isellt\005isync\002la\005lbarx\005lbepx\003lbz\006l"
    "bzcix\004lbzu\005lbzux\004lbzx\002ld\005ldarx\004ldat\005ldbrx\005ldcix"
    "\003ldu\004ldux\003ldx\003lfd\006lfdepx\004lfdu\005lfdux\004lfdx\006lfi"
    "wax\006lfiwzx\003lfs\004lfsu\005lfsux\004lfsx\003lha\005lharx\004lhau\005"
    "lhaux\004lhax\005lhbrx\005lhepx\003lhz\006lhzcix\004lhzu\005lhzux\004lh"
    "zx\002li\003lis\003lmw\004lnia\002lq\005lqarx\004lswi\005lvebx\005lvehx"
    "\005lvewx\004lvsl\004lvsr\003lvx\004lvxl\003lwa\005lwarx\004lwat\005lwa"
    "ux\004lwax\005lwbrx\005lwepx\006lwsync\003lwz\006lwzcix\004lwzu\005lwzu"
    "x\004lwzx\004lxsd\005lxsdx\007lxsibzx\007lxsihzx\007lxsiwax\007lxsiwzx\005"
    "lxssp\006lxsspx\003lxv\007lxvb16x\006lxvd2x\006lxvdsx\006lxvh8x\005lxvk"
    "q\004lxvl\005lxvll\004lxvp\006lxvprl\007lxvprll\005lxvpx\006lxvrbx\006l"
    "xvrdx\006lxvrhx\005lxvrl\006lxvrll\006lxvrwx\006lxvw4x\006lxvwsx\004lxv"
    "x\006maddhd\007maddhdu\006maddld\004mbar\004mcrf\005mcrfs\006mcrxrx\005"
    "mfamr\005mfasr\007mfbhrbe\005mfbr0\005mfbr1\005mfbr2\005mfbr3\005mfbr4\005"
    "mfbr5\005mfbr6\005mfbr7\006mfcfar\004mfcr\005mfctr\005mfdar\007mfdbatl\007"
    "mfdbatu\006mfdccr\005mfdcr\006mfdear\005mfdec\006mfdscr\007mfdsisr\005m"
    "fesr\006mffprd\007mffprwz\004mffs\010mffscdrn\tmffscdrni\006mffsce\007m"
    "ffscrn\010mffscrni\005mffsl\007mfibatl\007mfibatu\006mficcr\004mflr\005"
    "mfmsr\006mfocrf\005mfpid\005mfpmr\005mfppr\005mfpvr\006mfrtcl\006mfrtcu"
    "\006mfsdr1\tmfspefscr\005mfspr\006mfsprg\007mfsprg0\007mfsprg1\007mfspr"
    "g2\007mfsprg3\007mfsprg4\007mfsprg5\007mfsprg6\007mfsprg7\004mfsr\006mf"
    "srin\006mfsrr0\006mfsrr1\006mfsrr2\006mfsrr3\004mftb\006mftbhi\005mftbl"
    "\006mftblo\005mftbu\005mftcr\006mfuamr\007mfudscr\005mfvrd\010mfvrsave\006"
    "mfvrwz\006mfvscr\006mfvsrd\007mfvsrld\007mfvsrwz\005mfxer\005modsd\005m"
    "odsw\005modud\005moduw\002mr\007msgsync\005msync\005mtamr\005mtasr\005m"
    "tbr0\005mtbr1\005mtbr2\005mtbr3\005mtbr4\005mtbr5\005mtbr6\005mtbr7\006"
    "mtcfar\004mtcr\005mtcrf\005mtctr\005mtdar\007mtdbatl\007mtdbatu\006mtdc"
    "cr\005mtdcr\006mtdear\005mtdec\006mtdscr\007mtdsisr\005mtesr\006mtfprd\007"
    "mtfprwa\007mtfprwz\006mtfsb0\006mtfsb1\005mtfsf\006mtfsfi\007mtibatl\007"
    "mtibatu\006mticcr\004mtlr\005mtmsr\006mtmsrd\006mtocrf\005mtpid\005mtpm"
    "r\005mtppr\006mtsdr1\tmtspefscr\005mtspr\006mtsprg\007mtsprg0\007mtsprg"
    "1\007mtsprg2\007mtsprg3\007mtsprg4\007mtsprg5\007mtsprg6\007mtsprg7\004"
    "mtsr\006mtsrin\006mtsrr0\006mtsrr1\006mtsrr2\006mtsrr3\006mttbhi\005mtt"
    "bl\006mttblo\005mttbu\005mttcr\006mtuamr\007mtudscr\005mtvrd\010mtvrsav"
    "e\006mtvrwa\006mtvrwz\006mtvscr\007mtvsrbm\010mtvsrbmi\006mtvsrd\007mtv"
    "srdd\007mtvsrdm\007mtvsrhm\007mtvsrqm\007mtvsrwa\007mtvsrwm\007mtvsrws\007"
    "mtvsrwz\005mtxer\005mulhd\006mulhdu\005mulhw\006mulhwu\005mulld\006mull"
    "do\005mulli\005mullw\006mullwo\004nand\003nap\003neg\004nego\003nop\003"
    "nor\003not\002or\003orc\003ori\004oris\005paddi\005paste\005pdepd\005pe"
    "xtd\004plbz\003pld\004plfd\004plfs\004plha\004plhz\003pli\004plwa\004pl"
    "wz\005plxsd\006plxssp\004plxv\005plxvp\014pmxvbf16ger2\016pmxvbf16ger2n"
    "n\016pmxvbf16ger2np\016pmxvbf16ger2pn\016pmxvbf16ger2pp\013pmxvf16ger2\015"
    "pmxvf16ger2nn\015pmxvf16ger2np\015pmxvf16ger2pn\015pmxvf16ger2pp\npmxvf"
    "32ger\014pmxvf32gernn\014pmxvf32gernp\014pmxvf32gerpn\014pmxvf32gerpp\n"
    "pmxvf64ger\014pmxvf64gernn\014pmxvf64gernp\014pmxvf64gerpn\014pmxvf64ge"
    "rpp\013pmxvi16ger2\015pmxvi16ger2pp\014pmxvi16ger2s\016pmxvi16ger2spp\n"
    "pmxvi4ger8\014pmxvi4ger8pp\npmxvi8ger4\014pmxvi8ger4pp\015pmxvi8ger4spp"
    "\007popcntb\007popcntd\007popcntw\004pstb\004pstd\005pstfd\005pstfs\004"
    "psth\004pstw\006pstxsd\007pstxssp\005pstxv\006pstxvp\007ptesync\004rfci"
    "\004rfdi\005rfebb\003rfi\004rfid\005rfmci\005rldcl\005rldcr\005rldic\006"
    "rldicl\006rldicr\006rldimi\006rlwimi\006rlwinm\005rlwnm\005rotld\006rot"
    "ldi\005rotlw\006rotlwi\006rotrdi\006rotrwi\002sc\004setb\005setbc\006se"
    "tbcr\006setnbc\007setnbcr\006slbfee\005slbia\005slbie\006slbieg\007slbm"
    "fee\007slbmfev\006slbmte\007slbsync\003sld\004sldi\003slw\004slwi\004sr"
    "ad\005sradi\004sraw\005srawi\003srd\004srdi\003srw\004srwi\003stb\006st"
    "bcix\005stbcx\006stbepx\004stbu\005stbux\004stbx\003std\005stdat\006std"
    "brx\006stdcix\005stdcx\004stdu\005stdux\004stdx\004stfd\007stfdepx\005s"
    "tfdu\006stfdux\005stfdx\006stfiwx\004stfs\005stfsu\006stfsux\005stfsx\003"
    "sth\006sthbrx\006sthcix\005sthcx\006sthepx\004sthu\005sthux\004sthx\004"
    "stmw\004stop\003stq\005stqcx\005stswi\006stvebx\006stvehx\006stvewx\004"
    "stvx\005stvxl\003stw\005stwat\006stwbrx\006stwcix\005stwcx\006stwepx\004"
    "stwu\005stwux\004stwx\005stxsd\006stxsdx\007stxsibx\007stxsihx\007stxsi"
    "wx\006stxssp\007stxsspx\004stxv\010stxvb16x\007stxvd2x\007stxvh8x\005st"
    "xvl\006stxvll\005stxvp\007stxvprl\010stxvprll\006stxvpx\007stxvrbx\007s"
    "txvrdx\007stxvrhx\006stxvrl\007stxvrll\007stxvrwx\007stxvw4x\005stxvx\003"
    "sub\004subc\004subf\005subfc\006subfco\005subfe\006subfeo\006subfic\006"
    "subfme\007subfmeo\005subfo\006subfus\006subfze\007subfzeo\004subi\005su"
    "bic\005subis\007subpcis\004sync\006tabort\010tabortdc\ttabortdci\010tab"
    "ortwc\ttabortwci\006tbegin\006tcheck\002td\004tdeq\005tdeqi\004tdge\005"
    "tdgei\004tdgt\005tdgti\003tdi\004tdle\005tdlei\005tdlge\006tdlgei\005td"
    "lgt\006tdlgti\005tdlle\006tdllei\005tdllt\006tdllti\005tdlng\006tdlngi\005"
    "tdlnl\006tdlnli\004tdlt\005tdlti\004tdne\005tdnei\004tdng\005tdngi\004t"
    "dnl\005tdnli\003tdu\004tdui\004tend\007tendall\005tlbia\005tlbie\006tlb"
    "iel\007tlbivax\005tlbld\005tlbli\005tlbre\007tlbrehi\007tlbrelo\005tlbs"
    "x\007tlbsync\005tlbwe\007tlbwehi\007tlbwelo\004trap\010trechkpt\010trec"
    "laim\007tresume\003tsr\010tsuspend\002tw\004tweq\005tweqi\004twge\005tw"
    "gei\004twgt\005twgti\003twi\004twle\005twlei\005twlge\006twlgei\005twlg"
    "t\006twlgti\005twlle\006twllei\005twllt\006twllti\005twlng\006twlngi\005"
    "twlnl\006twlnli\004twlt\005twlti\004twne\005twnei\004twng\005twngi\004t"
    "wnl\005twnli\003twu\004twui\007vabsdub\007vabsduh\007vabsduw\007vaddcuq"
    "\007vaddcuw\010vaddecuq\010vaddeuqm\006vaddfp\007vaddsbs\007vaddshs\007"
    "vaddsws\007vaddubm\007vaddubs\007vaddudm\007vadduhm\007vadduhs\007vaddu"
    "qm\007vadduwm\007vadduws\004vand\005vandc\006vavgsb\006vavgsh\006vavgsw"
    "\006vavgub\006vavguh\006vavguw\007vbpermd\007vbpermq\005vcfsx\007vcfuge"
    "d\005vcfux\007vcipher\013vcipherlast\006vclrlb\006vclrrb\005vclzb\005vc"
    "lzd\006vclzdm\005vclzh\010vclzlsbb\005vclzw\007vcmpbfp\010vcmpeqfp\010v"
    "cmpequb\010vcmpequd\010vcmpequh\010vcmpequq\010vcmpequw\010vcmpgefp\010"
    "vcmpgtfp\010vcmpgtsb\010vcmpgtsd\010vcmpgtsh\010vcmpgtsq\010vcmpgtsw\010"
    "vcmpgtub\010vcmpgtud\010vcmpgtuh\010vcmpgtuq\010vcmpgtuw\007vcmpneb\007"
    "vcmpneh\007vcmpnew\010vcmpnezb\010vcmpnezh\010vcmpnezw\006vcmpsq\006vcm"
    "puq\007vcntmbb\007vcntmbd\007vcntmbh\007vcntmbw\006vctsxs\006vctuxs\005"
    "vctzb\005vctzd\006vctzdm\005vctzh\010vctzlsbb\005vctzw\007vdivesd\007vd"
    "ivesq\007vdivesw\007vdiveud\007vdiveuq\007vdiveuw\006vdivsd\006vdivsq\006"
    "vdivsw\006vdivud\006vdivuq\006vdivuw\004veqv\tvexpandbm\tvexpanddm\tvex"
    "pandhm\tvexpandqm\tvexpandwm\010vexptefp\tvextddvlx\tvextddvrx\nvextdub"
    "vlx\nvextdubvrx\nvextduhvlx\nvextduhvrx\nvextduwvlx\nvextduwvrx\nvextra"
    "ctbm\tvextractd\nvextractdm\nvextracthm\nvextractqm\nvextractub\nvextra"
    "ctuh\nvextractuw\nvextractwm\010vextsb2d\010vextsb2w\010vextsd2q\010vex"
    "tsh2d\010vextsh2w\010vextsw2d\010vextublx\010vextubrx\010vextuhlx\010ve"
    "xtuhrx\010vextuwlx\010vextuwrx\005vgbbd\004vgnb\007vinsblx\007vinsbrx\010"
    "vinsbvlx\010vinsbvrx\005vinsd\007vinsdlx\007vinsdrx\010vinsertb\010vins"
    "ertd\010vinserth\010vinsertw\007vinshlx\007vinshrx\010vinshvlx\010vinsh"
    "vrx\005vinsw\007vinswlx\007vinswrx\010vinswvlx\010vinswvrx\007vlogefp\007"
    "vmaddfp\006vmaxfp\006vmaxsb\006vmaxsd\006vmaxsh\006vmaxsw\006vmaxub\006"
    "vmaxud\006vmaxuh\006vmaxuw\tvmhaddshs\nvmhraddshs\006vminfp\006vminsb\006"
    "vminsd\006vminsh\006vminsw\006vminub\006vminud\006vminuh\006vminuw\tvml"
    "adduhm\006vmodsd\006vmodsq\006vmodsw\006vmodud\006vmoduq\006vmoduw\003v"
    "mr\006vmrgew\006vmrghb\006vmrghh\006vmrghw\006vmrglb\006vmrglh\006vmrgl"
    "w\006vmrgow\010vmsumcud\010vmsummbm\010vmsumshm\010vmsumshs\010vmsumubm"
    "\010vmsumudm\010vmsumuhm\010vmsumuhs\tvmul10cuq\nvmul10ecuq\tvmul10euq\010"
    "vmul10uq\007vmulesb\007vmulesd\007vmulesh\007vmulesw\007vmuleub\007vmul"
    "eud\007vmuleuh\007vmuleuw\007vmulhsd\007vmulhsw\007vmulhud\007vmulhuw\006"
    "vmulld\007vmulosb\007vmulosd\007vmulosh\007vmulosw\007vmuloub\007vmulou"
    "d\007vmulouh\007vmulouw\007vmuluwm\005vnand\010vncipher\014vncipherlast"
    "\005vnegd\005vnegw\010vnmsubfp\004vnor\004vnot\003vor\004vorc\006vpdepd"
    "\005vperm\006vpermr\010vpermxor\006vpextd\005vpkpx\007vpksdss\007vpksdu"
    "s\007vpkshss\007vpkshus\007vpkswss\007vpkswus\007vpkudum\007vpkudus\007"
    "vpkuhum\007vpkuhus\007vpkuwum\007vpkuwus\007vpmsumb\007vpmsumd\007vpmsu"
    "mh\007vpmsumw\010vpopcntb\010vpopcntd\010vpopcnth\010vpopcntw\007vprtyb"
    "d\007vprtybq\007vprtybw\005vrefp\005vrfim\005vrfin\005vrfip\005vrfiz\004"
    "vrlb\004vrld\006vrldmi\006vrldnm\004vrlh\004vrlq\006vrlqmi\006vrlqnm\004"
    "vrlw\006vrlwmi\006vrlwnm\tvrsqrtefp\005vsbox\004vsel\nvshasigmad\nvshas"
    "igmaw\003vsl\004vslb\004vsld\006vsldbi\006vsldoi\004vslh\004vslo\004vsl"
    "q\004vslv\004vslw\006vspltb\006vsplth\010vspltisb\010vspltish\010vsplti"
    "sw\006vspltw\003vsr\005vsrab\005vsrad\005vsrah\005vsraq\005vsraw\004vsr"
    "b\004vsrd\006vsrdbi\004vsrh\004vsro\004vsrq\004vsrv\004vsrw\007vstribl\007"
    "vstribr\007vstrihl\007vstrihr\007vsubcuq\007vsubcuw\010vsubecuq\010vsub"
    "euqm\006vsubfp\007vsubsbs\007vsubshs\007vsubsws\007vsububm\007vsububs\007"
    "vsubudm\007vsubuhm\007vsubuhs\007vsubuqm\007vsubuwm\007vsubuws\010vsum2"
    "sws\010vsum4sbs\010vsum4shs\010vsum4ubs\007vsumsws\007vupkhpx\007vupkhs"
    "b\007vupkhsh\007vupkhsw\007vupklpx\007vupklsb\007vupklsh\007vupklsw\004"
    "vxor\004wait\010waitimpl\007waitrsv\005wrtee\006wrteei\004xnop\003xor\004"
    "xori\005xoris\007xsabsdp\007xsabsqp\007xsadddp\007xsaddqp\010xsaddqpo\007"
    "xsaddsp\txscmpeqdp\txscmpeqqp\nxscmpexpdp\nxscmpexpqp\txscmpgedp\txscmp"
    "geqp\txscmpgtdp\txscmpgtqp\010xscmpodp\010xscmpoqp\010xscmpudp\010xscmp"
    "uqp\txscpsgndp\txscpsgnqp\010xscvdphp\010xscvdpqp\010xscvdpsp\txscvdpsp"
    "n\nxscvdpsxds\nxscvdpsxws\nxscvdpuxds\nxscvdpuxws\010xscvhpdp\010xscvqp"
    "dp\txscvqpdpo\txscvqpsdz\txscvqpsqz\txscvqpswz\txscvqpudz\txscvqpuqz\tx"
    "scvqpuwz\010xscvsdqp\010xscvspdp\txscvspdpn\010xscvsqqp\txscvsxddp\txsc"
    "vsxdsp\010xscvudqp\010xscvuqqp\txscvuxddp\txscvuxdsp\007xsdivdp\007xsdi"
    "vqp\010xsdivqpo\007xsdivsp\010xsiexpdp\010xsiexpqp\txsmaddadp\txsmaddas"
    "p\txsmaddmdp\txsmaddmsp\010xsmaddqp\txsmaddqpo\010xsmaxcdp\010xsmaxcqp\007"
    "xsmaxdp\010xsmaxjdp\010xsmincdp\010xsmincqp\007xsmindp\010xsminjdp\txsm"
    "subadp\txsmsubasp\txsmsubmdp\txsmsubmsp\010xsmsubqp\txsmsubqpo\007xsmul"
    "dp\007xsmulqp\010xsmulqpo\007xsmulsp\010xsnabsdp\010xsnabsqp\007xsnegdp"
    "\007xsnegqp\nxsnmaddadp\nxsnmaddasp\nxsnmaddmdp\nxsnmaddmsp\txsnmaddqp\n"
    "xsnmaddqpo\nxsnmsubadp\nxsnmsubasp\nxsnmsubmdp\nxsnmsubmsp\txsnmsubqp\n"
    "xsnmsubqpo\006xsrdpi\007xsrdpic\007xsrdpim\007xsrdpip\007xsrdpiz\006xsr"
    "edp\006xsresp\006xsrqpi\007xsrqpix\007xsrqpxp\005xsrsp\nxsrsqrtedp\nxsr"
    "sqrtesp\010xssqrtdp\010xssqrtqp\txssqrtqpo\010xssqrtsp\007xssubdp\007xs"
    "subqp\010xssubqpo\007xssubsp\010xstdivdp\txstsqrtdp\txststdcdp\txststdc"
    "qp\txststdcsp\010xsxexpdp\010xsxexpqp\010xsxsigdp\010xsxsigqp\007xvabsd"
    "p\007xvabssp\007xvadddp\007xvaddsp\nxvbf16ger2\014xvbf16ger2nn\014xvbf1"
    "6ger2np\014xvbf16ger2pn\014xvbf16ger2pp\txvcmpeqdp\txvcmpeqsp\txvcmpged"
    "p\txvcmpgesp\txvcmpgtdp\txvcmpgtsp\txvcpsgndp\txvcpsgnsp\013xvcvbf16spn"
    "\010xvcvdpsp\nxvcvdpsxds\nxvcvdpsxws\nxvcvdpuxds\nxvcvdpuxws\010xvcvhps"
    "p\nxvcvspbf16\010xvcvspdp\010xvcvsphp\nxvcvspsxds\nxvcvspsxws\nxvcvspux"
    "ds\nxvcvspuxws\txvcvsxddp\txvcvsxdsp\txvcvsxwdp\txvcvsxwsp\txvcvuxddp\t"
    "xvcvuxdsp\txvcvuxwdp\txvcvuxwsp\007xvdivdp\007xvdivsp\txvf16ger2\013xvf"
    "16ger2nn\013xvf16ger2np\013xvf16ger2pn\013xvf16ger2pp\010xvf32ger\nxvf3"
    "2gernn\nxvf32gernp\nxvf32gerpn\nxvf32gerpp\010xvf64ger\nxvf64gernn\nxvf"
    "64gernp\nxvf64gerpn\nxvf64gerpp\txvi16ger2\013xvi16ger2pp\nxvi16ger2s\014"
    "xvi16ger2spp\010xvi4ger8\nxvi4ger8pp\010xvi8ger4\nxvi8ger4pp\013xvi8ger"
    "4spp\010xviexpdp\010xviexpsp\txvmaddadp\txvmaddasp\txvmaddmdp\txvmaddms"
    "p\007xvmaxdp\007xvmaxsp\007xvmindp\007xvminsp\007xvmovdp\007xvmovsp\txv"
    "msubadp\txvmsubasp\txvmsubmdp\txvmsubmsp\007xvmuldp\007xvmulsp\010xvnab"
    "sdp\010xvnabssp\007xvnegdp\007xvnegsp\nxvnmaddadp\nxvnmaddasp\nxvnmaddm"
    "dp\nxvnmaddmsp\nxvnmsubadp\nxvnmsubasp\nxvnmsubmdp\nxvnmsubmsp\006xvrdp"
    "i\007xvrdpic\007xvrdpim\007xvrdpip\007xvrdpiz\006xvredp\006xvresp\006xv"
    "rspi\007xvrspic\007xvrspim\007xvrspip\007xvrspiz\nxvrsqrtedp\nxvrsqrtes"
    "p\010xvsqrtdp\010xvsqrtsp\007xvsubdp\007xvsubsp\010xvtdivdp\010xvtdivsp"
    "\007xvtlsbb\txvtsqrtdp\txvtsqrtsp\txvtstdcdp\txvtstdcsp\010xvxexpdp\010"
    "xvxexpsp\010xvxsigdp\010xvxsigsp\txxblendvb\txxblendvd\txxblendvh\txxbl"
    "endvw\005xxbrd\005xxbrh\005xxbrq\005xxbrw\006xxeval\013xxextractuw\nxxg"
    "enpcvbm\nxxgenpcvdm\nxxgenpcvhm\nxxgenpcvwm\txxinsertw\006xxland\007xxl"
    "andc\006xxleqv\007xxlnand\006xxlnor\005xxlor\006xxlorc\006xxlxor\007xxm"
    "facc\007xxmrghd\007xxmrghw\007xxmrgld\007xxmrglw\007xxmtacc\006xxperm\010"
    "xxpermdi\007xxpermr\007xxpermx\005xxsel\txxsetaccz\007xxsldwi\007xxsplt"
    "d\013xxsplti32dx\010xxspltib\txxspltidp\010xxspltiw\007xxspltw\007xxswa"
    "pd";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_ModernAs,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_ModernAsBit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const MatchEntry MatchTable0[] = {
  { 0 /* add */, PPC::ADD8TLS_, Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_TLSReg }, },
  { 0 /* add */, PPC::ADD4, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 0 /* add */, PPC::ADD4_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* addco */, PPC::ADDCO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* addco */, PPC::ADDCO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 15 /* adde */, PPC::ADDE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 15 /* adde */, PPC::ADDE_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 20 /* addeo */, PPC::ADDEO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 20 /* addeo */, PPC::ADDEO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 26 /* addex */, PPC::ADDEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U2Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U2Imm }, },
  { 32 /* addg6s */, PPC::ADDG6S, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 39 /* addi */, PPC::ADDI, Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S16Imm }, },
  { 44 /* addic */, PPC::ADDIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 44 /* addic */, PPC::ADDIC_rec, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 50 /* addis */, PPC::ADDIS, Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S17Imm }, },
  { 56 /* addme */, PPC::ADDME, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 56 /* addme */, PPC::ADDME_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 62 /* addmeo */, PPC::ADDMEO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 62 /* addmeo */, PPC::ADDMEO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 69 /* addo */, PPC::ADD4O, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 69 /* addo */, PPC::ADD4O_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 74 /* addpcis */, PPC::ADDPCIS, Convert__RegG8RC1_0__Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_Imm }, },
  { 82 /* addze */, PPC::ADDZE, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 82 /* addze */, PPC::ADDZE_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 88 /* addzeo */, PPC::ADDZEO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 88 /* addzeo */, PPC::ADDZEO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 95 /* and */, PPC::AND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 95 /* and */, PPC::AND_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 99 /* andc */, PPC::ANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 99 /* andc */, PPC::ANDC_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 104 /* andi */, PPC::ANDI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 109 /* andis */, PPC::ANDIS_rec, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 115 /* attn */, PPC::ATTN, Convert_NoOperands, AMFBS_None, {  }, },
  { 120 /* b */, PPC::B, Convert__DirectBr1_0, AMFBS_None, { MCK_DirectBr }, },
  { 122 /* ba */, PPC::BA, Convert__DirectBr1_0, AMFBS_None, { MCK_DirectBr }, },
  { 125 /* bc */, PPC::gBC, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 125 /* bc */, PPC::gBCat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, AMFBS_None, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 128 /* bc+ */, PPC::gBCat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 132 /* bc- */, PPC::gBCat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 136 /* bca */, PPC::gBCA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 136 /* bca */, PPC::gBCAat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, AMFBS_None, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 140 /* bca+ */, PPC::gBCAat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 145 /* bca- */, PPC::gBCAat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 150 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 150 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 156 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 156 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 163 /* bcdadd */, PPC::BCDADD_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 170 /* bcdcfn */, PPC::BCDCFN_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 177 /* bcdcfsq */, PPC::BCDCFSQ_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 185 /* bcdcfz */, PPC::BCDCFZ_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 192 /* bcdcpsgn */, PPC::BCDCPSGN_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 201 /* bcdctn */, PPC::BCDCTN_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 208 /* bcdctsq */, PPC::BCDCTSQ_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 216 /* bcdctz */, PPC::BCDCTZ_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 223 /* bcds */, PPC::BCDS_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 228 /* bcdsetsgn */, PPC::BCDSETSGN_rec, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 238 /* bcdsr */, PPC::BCDSR_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 244 /* bcdsub */, PPC::BCDSUB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 251 /* bcdtrunc */, PPC::BCDTRUNC_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 260 /* bcdus */, PPC::BCDUS_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 266 /* bcdutrunc */, PPC::BCDUTRUNC_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 276 /* bcl */, PPC::gBCL, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 276 /* bcl */, PPC::gBCLat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, AMFBS_None, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 280 /* bcl+ */, PPC::gBCLat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 285 /* bcl- */, PPC::gBCLat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 290 /* bcla */, PPC::gBCLA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 290 /* bcla */, PPC::gBCLAat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, AMFBS_None, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 295 /* bcla+ */, PPC::gBCLAat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 301 /* bcla- */, PPC::gBCLAat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 307 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 307 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 312 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 312 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 318 /* bctr */, PPC::BCTR, Convert_NoOperands, AMFBS_None, {  }, },
  { 323 /* bctrl */, PPC::BCTRL, Convert_NoOperands, AMFBS_None, {  }, },
  { 329 /* bdnz */, PPC::BDNZ, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 334 /* bdnz+ */, PPC::BDNZp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 340 /* bdnz- */, PPC::BDNZm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 346 /* bdnza */, PPC::BDNZA, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 352 /* bdnza+ */, PPC::BDNZAp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 359 /* bdnza- */, PPC::BDNZAm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 366 /* bdnzf */, PPC::gBC, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 372 /* bdnzfa */, PPC::gBCA, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 379 /* bdnzfl */, PPC::gBCL, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 386 /* bdnzfla */, PPC::gBCLA, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 394 /* bdnzflr */, PPC::gBCLR, Convert__imm_95_0__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 402 /* bdnzflrl */, PPC::gBCLRL, Convert__imm_95_0__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 411 /* bdnzl */, PPC::BDNZL, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 417 /* bdnzl+ */, PPC::BDNZLp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 424 /* bdnzl- */, PPC::BDNZLm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 431 /* bdnzla */, PPC::BDNZLA, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 438 /* bdnzla+ */, PPC::BDNZLAp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 446 /* bdnzla- */, PPC::BDNZLAm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 454 /* bdnzlr */, PPC::BDNZLR, Convert_NoOperands, AMFBS_None, {  }, },
  { 461 /* bdnzlr+ */, PPC::BDNZLRp, Convert_NoOperands, AMFBS_None, {  }, },
  { 469 /* bdnzlr- */, PPC::BDNZLRm, Convert_NoOperands, AMFBS_None, {  }, },
  { 477 /* bdnzlrl */, PPC::BDNZLRL, Convert_NoOperands, AMFBS_None, {  }, },
  { 485 /* bdnzlrl+ */, PPC::BDNZLRLp, Convert_NoOperands, AMFBS_None, {  }, },
  { 494 /* bdnzlrl- */, PPC::BDNZLRLm, Convert_NoOperands, AMFBS_None, {  }, },
  { 503 /* bdnzt */, PPC::gBC, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 509 /* bdnzta */, PPC::gBCA, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 516 /* bdnztl */, PPC::gBCL, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 523 /* bdnztla */, PPC::gBCLA, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 531 /* bdnztlr */, PPC::gBCLR, Convert__imm_95_8__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 539 /* bdnztlrl */, PPC::gBCLRL, Convert__imm_95_8__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 548 /* bdz */, PPC::BDZ, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 552 /* bdz+ */, PPC::BDZp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 557 /* bdz- */, PPC::BDZm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 562 /* bdza */, PPC::BDZA, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 567 /* bdza+ */, PPC::BDZAp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 573 /* bdza- */, PPC::BDZAm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 579 /* bdzf */, PPC::gBC, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 584 /* bdzfa */, PPC::gBCA, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 590 /* bdzfl */, PPC::gBCL, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 596 /* bdzfla */, PPC::gBCLA, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 603 /* bdzflr */, PPC::gBCLR, Convert__imm_95_2__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 610 /* bdzflrl */, PPC::gBCLRL, Convert__imm_95_2__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 618 /* bdzl */, PPC::BDZL, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 623 /* bdzl+ */, PPC::BDZLp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 629 /* bdzl- */, PPC::BDZLm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 635 /* bdzla */, PPC::BDZLA, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 641 /* bdzla+ */, PPC::BDZLAp, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 648 /* bdzla- */, PPC::BDZLAm, Convert__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 655 /* bdzlr */, PPC::BDZLR, Convert_NoOperands, AMFBS_None, {  }, },
  { 661 /* bdzlr+ */, PPC::BDZLRp, Convert_NoOperands, AMFBS_None, {  }, },
  { 668 /* bdzlr- */, PPC::BDZLRm, Convert_NoOperands, AMFBS_None, {  }, },
  { 675 /* bdzlrl */, PPC::BDZLRL, Convert_NoOperands, AMFBS_None, {  }, },
  { 682 /* bdzlrl+ */, PPC::BDZLRLp, Convert_NoOperands, AMFBS_None, {  }, },
  { 690 /* bdzlrl- */, PPC::BDZLRLm, Convert_NoOperands, AMFBS_None, {  }, },
  { 698 /* bdzt */, PPC::gBC, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 703 /* bdzta */, PPC::gBCA, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 709 /* bdztl */, PPC::gBCL, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 715 /* bdztla */, PPC::gBCLA, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 722 /* bdztlr */, PPC::gBCLR, Convert__imm_95_10__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 729 /* bdztlrl */, PPC::gBCLRL, Convert__imm_95_10__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 737 /* beq */, PPC::BCC, Convert__imm_95_76__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 737 /* beq */, PPC::BCC, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 741 /* beq+ */, PPC::BCC, Convert__imm_95_79__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 741 /* beq+ */, PPC::BCC, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 746 /* beq- */, PPC::BCC, Convert__imm_95_78__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 746 /* beq- */, PPC::BCC, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 751 /* beqa */, PPC::BCCA, Convert__imm_95_76__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 751 /* beqa */, PPC::BCCA, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 756 /* beqa+ */, PPC::BCCA, Convert__imm_95_79__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 756 /* beqa+ */, PPC::BCCA, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 762 /* beqa- */, PPC::BCCA, Convert__imm_95_78__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 762 /* beqa- */, PPC::BCCA, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 768 /* beqctr */, PPC::BCCCTR, Convert__imm_95_76__regCR0, AMFBS_None, {  }, },
  { 768 /* beqctr */, PPC::BCCCTR, Convert__imm_95_76__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 775 /* beqctr+ */, PPC::BCCCTR, Convert__imm_95_79__regCR0, AMFBS_None, {  }, },
  { 775 /* beqctr+ */, PPC::BCCCTR, Convert__imm_95_79__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 783 /* beqctr- */, PPC::BCCCTR, Convert__imm_95_78__regCR0, AMFBS_None, {  }, },
  { 783 /* beqctr- */, PPC::BCCCTR, Convert__imm_95_78__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 791 /* beqctrl */, PPC::BCCCTRL, Convert__imm_95_76__regCR0, AMFBS_None, {  }, },
  { 791 /* beqctrl */, PPC::BCCCTRL, Convert__imm_95_76__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 799 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_95_79__regCR0, AMFBS_None, {  }, },
  { 799 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_95_79__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 808 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_95_78__regCR0, AMFBS_None, {  }, },
  { 808 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_95_78__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 817 /* beql */, PPC::BCCL, Convert__imm_95_76__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 817 /* beql */, PPC::BCCL, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 822 /* beql+ */, PPC::BCCL, Convert__imm_95_79__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 822 /* beql+ */, PPC::BCCL, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 828 /* beql- */, PPC::BCCL, Convert__imm_95_78__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 828 /* beql- */, PPC::BCCL, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 834 /* beqla */, PPC::BCCLA, Convert__imm_95_76__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 834 /* beqla */, PPC::BCCLA, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 840 /* beqla+ */, PPC::BCCLA, Convert__imm_95_79__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 840 /* beqla+ */, PPC::BCCLA, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 847 /* beqla- */, PPC::BCCLA, Convert__imm_95_78__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 847 /* beqla- */, PPC::BCCLA, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 854 /* beqlr */, PPC::BCCLR, Convert__imm_95_76__regCR0, AMFBS_None, {  }, },
  { 854 /* beqlr */, PPC::BCCLR, Convert__imm_95_76__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 860 /* beqlr+ */, PPC::BCCLR, Convert__imm_95_79__regCR0, AMFBS_None, {  }, },
  { 860 /* beqlr+ */, PPC::BCCLR, Convert__imm_95_79__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 867 /* beqlr- */, PPC::BCCLR, Convert__imm_95_78__regCR0, AMFBS_None, {  }, },
  { 867 /* beqlr- */, PPC::BCCLR, Convert__imm_95_78__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 874 /* beqlrl */, PPC::BCCLRL, Convert__imm_95_76__regCR0, AMFBS_None, {  }, },
  { 874 /* beqlrl */, PPC::BCCLRL, Convert__imm_95_76__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 881 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_95_79__regCR0, AMFBS_None, {  }, },
  { 881 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_95_79__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 889 /* beqlrl- */, PPC::BCCLRL, Convert__imm_95_78__regCR0, AMFBS_None, {  }, },
  { 889 /* beqlrl- */, PPC::BCCLRL, Convert__imm_95_78__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 897 /* bf */, PPC::gBC, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 900 /* bf+ */, PPC::gBC, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 904 /* bf- */, PPC::gBC, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 908 /* bfa */, PPC::gBCA, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 912 /* bfa+ */, PPC::gBCA, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 917 /* bfa- */, PPC::gBCA, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 922 /* bfctr */, PPC::gBCCTR, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 928 /* bfctr+ */, PPC::gBCCTR, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 935 /* bfctr- */, PPC::gBCCTR, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 942 /* bfctrl */, PPC::gBCCTRL, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 949 /* bfctrl+ */, PPC::gBCCTRL, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 957 /* bfctrl- */, PPC::gBCCTRL, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 965 /* bfl */, PPC::gBCL, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 969 /* bfl+ */, PPC::gBCL, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 974 /* bfl- */, PPC::gBCL, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 979 /* bfla */, PPC::gBCLA, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 984 /* bfla+ */, PPC::gBCLA, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 990 /* bfla- */, PPC::gBCLA, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 996 /* bflr */, PPC::gBCLR, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1001 /* bflr+ */, PPC::gBCLR, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1007 /* bflr- */, PPC::gBCLR, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1013 /* bflrl */, PPC::gBCLRL, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1019 /* bflrl+ */, PPC::gBCLRL, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1026 /* bflrl- */, PPC::gBCLRL, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 1033 /* bge */, PPC::BCC, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1033 /* bge */, PPC::BCC, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1037 /* bge+ */, PPC::BCC, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1037 /* bge+ */, PPC::BCC, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1042 /* bge- */, PPC::BCC, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1042 /* bge- */, PPC::BCC, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1047 /* bgea */, PPC::BCCA, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1047 /* bgea */, PPC::BCCA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1052 /* bgea+ */, PPC::BCCA, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1052 /* bgea+ */, PPC::BCCA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1058 /* bgea- */, PPC::BCCA, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1058 /* bgea- */, PPC::BCCA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1064 /* bgectr */, PPC::BCCCTR, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 1064 /* bgectr */, PPC::BCCCTR, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1071 /* bgectr+ */, PPC::BCCCTR, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 1071 /* bgectr+ */, PPC::BCCCTR, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1079 /* bgectr- */, PPC::BCCCTR, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 1079 /* bgectr- */, PPC::BCCCTR, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1087 /* bgectrl */, PPC::BCCCTRL, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 1087 /* bgectrl */, PPC::BCCCTRL, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1095 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 1095 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1104 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 1104 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1113 /* bgel */, PPC::BCCL, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1113 /* bgel */, PPC::BCCL, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1118 /* bgel+ */, PPC::BCCL, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1118 /* bgel+ */, PPC::BCCL, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1124 /* bgel- */, PPC::BCCL, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1124 /* bgel- */, PPC::BCCL, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1130 /* bgela */, PPC::BCCLA, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1130 /* bgela */, PPC::BCCLA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1136 /* bgela+ */, PPC::BCCLA, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1136 /* bgela+ */, PPC::BCCLA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1143 /* bgela- */, PPC::BCCLA, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1143 /* bgela- */, PPC::BCCLA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1150 /* bgelr */, PPC::BCCLR, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 1150 /* bgelr */, PPC::BCCLR, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1156 /* bgelr+ */, PPC::BCCLR, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 1156 /* bgelr+ */, PPC::BCCLR, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1163 /* bgelr- */, PPC::BCCLR, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 1163 /* bgelr- */, PPC::BCCLR, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1170 /* bgelrl */, PPC::BCCLRL, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 1170 /* bgelrl */, PPC::BCCLRL, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1177 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 1177 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1185 /* bgelrl- */, PPC::BCCLRL, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 1185 /* bgelrl- */, PPC::BCCLRL, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1193 /* bgt */, PPC::BCC, Convert__imm_95_44__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1193 /* bgt */, PPC::BCC, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1197 /* bgt+ */, PPC::BCC, Convert__imm_95_47__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1197 /* bgt+ */, PPC::BCC, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1202 /* bgt- */, PPC::BCC, Convert__imm_95_46__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1202 /* bgt- */, PPC::BCC, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1207 /* bgta */, PPC::BCCA, Convert__imm_95_44__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1207 /* bgta */, PPC::BCCA, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1212 /* bgta+ */, PPC::BCCA, Convert__imm_95_47__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1212 /* bgta+ */, PPC::BCCA, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1218 /* bgta- */, PPC::BCCA, Convert__imm_95_46__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1218 /* bgta- */, PPC::BCCA, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1224 /* bgtctr */, PPC::BCCCTR, Convert__imm_95_44__regCR0, AMFBS_None, {  }, },
  { 1224 /* bgtctr */, PPC::BCCCTR, Convert__imm_95_44__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1231 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_95_47__regCR0, AMFBS_None, {  }, },
  { 1231 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_95_47__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1239 /* bgtctr- */, PPC::BCCCTR, Convert__imm_95_46__regCR0, AMFBS_None, {  }, },
  { 1239 /* bgtctr- */, PPC::BCCCTR, Convert__imm_95_46__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1247 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_95_44__regCR0, AMFBS_None, {  }, },
  { 1247 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_95_44__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1255 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_95_47__regCR0, AMFBS_None, {  }, },
  { 1255 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_95_47__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1264 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_95_46__regCR0, AMFBS_None, {  }, },
  { 1264 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_95_46__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1273 /* bgtl */, PPC::BCCL, Convert__imm_95_44__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1273 /* bgtl */, PPC::BCCL, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1278 /* bgtl+ */, PPC::BCCL, Convert__imm_95_47__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1278 /* bgtl+ */, PPC::BCCL, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1284 /* bgtl- */, PPC::BCCL, Convert__imm_95_46__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1284 /* bgtl- */, PPC::BCCL, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1290 /* bgtla */, PPC::BCCLA, Convert__imm_95_44__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1290 /* bgtla */, PPC::BCCLA, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1296 /* bgtla+ */, PPC::BCCLA, Convert__imm_95_47__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1296 /* bgtla+ */, PPC::BCCLA, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1303 /* bgtla- */, PPC::BCCLA, Convert__imm_95_46__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1303 /* bgtla- */, PPC::BCCLA, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1310 /* bgtlr */, PPC::BCCLR, Convert__imm_95_44__regCR0, AMFBS_None, {  }, },
  { 1310 /* bgtlr */, PPC::BCCLR, Convert__imm_95_44__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1316 /* bgtlr+ */, PPC::BCCLR, Convert__imm_95_47__regCR0, AMFBS_None, {  }, },
  { 1316 /* bgtlr+ */, PPC::BCCLR, Convert__imm_95_47__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1323 /* bgtlr- */, PPC::BCCLR, Convert__imm_95_46__regCR0, AMFBS_None, {  }, },
  { 1323 /* bgtlr- */, PPC::BCCLR, Convert__imm_95_46__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1330 /* bgtlrl */, PPC::BCCLRL, Convert__imm_95_44__regCR0, AMFBS_None, {  }, },
  { 1330 /* bgtlrl */, PPC::BCCLRL, Convert__imm_95_44__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1337 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_95_47__regCR0, AMFBS_None, {  }, },
  { 1337 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_95_47__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1345 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_95_46__regCR0, AMFBS_None, {  }, },
  { 1345 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_95_46__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1353 /* bl */, PPC::BL, Convert__DirectBr1_0, AMFBS_None, { MCK_DirectBr }, },
  { 1353 /* bl */, PPC::BL8_TLS_, Convert__DirectBr1_0__Imm1_1, AMFBS_None, { MCK_DirectBr, MCK_Imm }, },
  { 1356 /* bla */, PPC::BLA, Convert__DirectBr1_0, AMFBS_None, { MCK_DirectBr }, },
  { 1360 /* ble */, PPC::BCC, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1360 /* ble */, PPC::BCC, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1364 /* ble+ */, PPC::BCC, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1364 /* ble+ */, PPC::BCC, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1369 /* ble- */, PPC::BCC, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1369 /* ble- */, PPC::BCC, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1374 /* blea */, PPC::BCCA, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1374 /* blea */, PPC::BCCA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1379 /* blea+ */, PPC::BCCA, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1379 /* blea+ */, PPC::BCCA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1385 /* blea- */, PPC::BCCA, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1385 /* blea- */, PPC::BCCA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1391 /* blectr */, PPC::BCCCTR, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1391 /* blectr */, PPC::BCCCTR, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1398 /* blectr+ */, PPC::BCCCTR, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1398 /* blectr+ */, PPC::BCCCTR, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1406 /* blectr- */, PPC::BCCCTR, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1406 /* blectr- */, PPC::BCCCTR, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1414 /* blectrl */, PPC::BCCCTRL, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1414 /* blectrl */, PPC::BCCCTRL, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1422 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1422 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1431 /* blectrl- */, PPC::BCCCTRL, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1431 /* blectrl- */, PPC::BCCCTRL, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1440 /* blel */, PPC::BCCL, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1440 /* blel */, PPC::BCCL, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1445 /* blel+ */, PPC::BCCL, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1445 /* blel+ */, PPC::BCCL, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1451 /* blel- */, PPC::BCCL, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1451 /* blel- */, PPC::BCCL, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1457 /* blela */, PPC::BCCLA, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1457 /* blela */, PPC::BCCLA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1463 /* blela+ */, PPC::BCCLA, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1463 /* blela+ */, PPC::BCCLA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1470 /* blela- */, PPC::BCCLA, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1470 /* blela- */, PPC::BCCLA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1477 /* blelr */, PPC::BCCLR, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1477 /* blelr */, PPC::BCCLR, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1483 /* blelr+ */, PPC::BCCLR, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1483 /* blelr+ */, PPC::BCCLR, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1490 /* blelr- */, PPC::BCCLR, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1490 /* blelr- */, PPC::BCCLR, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1497 /* blelrl */, PPC::BCCLRL, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1497 /* blelrl */, PPC::BCCLRL, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1504 /* blelrl+ */, PPC::BCCLRL, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1504 /* blelrl+ */, PPC::BCCLRL, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1512 /* blelrl- */, PPC::BCCLRL, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1512 /* blelrl- */, PPC::BCCLRL, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1520 /* blr */, PPC::BLR, Convert_NoOperands, AMFBS_None, {  }, },
  { 1524 /* blrl */, PPC::BLRL, Convert_NoOperands, AMFBS_None, {  }, },
  { 1529 /* blt */, PPC::BCC, Convert__imm_95_12__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1529 /* blt */, PPC::BCC, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1533 /* blt+ */, PPC::BCC, Convert__imm_95_15__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1533 /* blt+ */, PPC::BCC, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1538 /* blt- */, PPC::BCC, Convert__imm_95_14__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1538 /* blt- */, PPC::BCC, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1543 /* blta */, PPC::BCCA, Convert__imm_95_12__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1543 /* blta */, PPC::BCCA, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1548 /* blta+ */, PPC::BCCA, Convert__imm_95_15__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1548 /* blta+ */, PPC::BCCA, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1554 /* blta- */, PPC::BCCA, Convert__imm_95_14__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1554 /* blta- */, PPC::BCCA, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1560 /* bltctr */, PPC::BCCCTR, Convert__imm_95_12__regCR0, AMFBS_None, {  }, },
  { 1560 /* bltctr */, PPC::BCCCTR, Convert__imm_95_12__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1567 /* bltctr+ */, PPC::BCCCTR, Convert__imm_95_15__regCR0, AMFBS_None, {  }, },
  { 1567 /* bltctr+ */, PPC::BCCCTR, Convert__imm_95_15__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1575 /* bltctr- */, PPC::BCCCTR, Convert__imm_95_14__regCR0, AMFBS_None, {  }, },
  { 1575 /* bltctr- */, PPC::BCCCTR, Convert__imm_95_14__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1583 /* bltctrl */, PPC::BCCCTRL, Convert__imm_95_12__regCR0, AMFBS_None, {  }, },
  { 1583 /* bltctrl */, PPC::BCCCTRL, Convert__imm_95_12__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1591 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_95_15__regCR0, AMFBS_None, {  }, },
  { 1591 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_95_15__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1600 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_95_14__regCR0, AMFBS_None, {  }, },
  { 1600 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_95_14__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1609 /* bltl */, PPC::BCCL, Convert__imm_95_12__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1609 /* bltl */, PPC::BCCL, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1614 /* bltl+ */, PPC::BCCL, Convert__imm_95_15__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1614 /* bltl+ */, PPC::BCCL, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1620 /* bltl- */, PPC::BCCL, Convert__imm_95_14__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1620 /* bltl- */, PPC::BCCL, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1626 /* bltla */, PPC::BCCLA, Convert__imm_95_12__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1626 /* bltla */, PPC::BCCLA, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1632 /* bltla+ */, PPC::BCCLA, Convert__imm_95_15__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1632 /* bltla+ */, PPC::BCCLA, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1639 /* bltla- */, PPC::BCCLA, Convert__imm_95_14__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1639 /* bltla- */, PPC::BCCLA, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1646 /* bltlr */, PPC::BCCLR, Convert__imm_95_12__regCR0, AMFBS_None, {  }, },
  { 1646 /* bltlr */, PPC::BCCLR, Convert__imm_95_12__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1652 /* bltlr+ */, PPC::BCCLR, Convert__imm_95_15__regCR0, AMFBS_None, {  }, },
  { 1652 /* bltlr+ */, PPC::BCCLR, Convert__imm_95_15__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1659 /* bltlr- */, PPC::BCCLR, Convert__imm_95_14__regCR0, AMFBS_None, {  }, },
  { 1659 /* bltlr- */, PPC::BCCLR, Convert__imm_95_14__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1666 /* bltlrl */, PPC::BCCLRL, Convert__imm_95_12__regCR0, AMFBS_None, {  }, },
  { 1666 /* bltlrl */, PPC::BCCLRL, Convert__imm_95_12__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1673 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_95_15__regCR0, AMFBS_None, {  }, },
  { 1673 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_95_15__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1681 /* bltlrl- */, PPC::BCCLRL, Convert__imm_95_14__regCR0, AMFBS_None, {  }, },
  { 1681 /* bltlrl- */, PPC::BCCLRL, Convert__imm_95_14__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1689 /* bne */, PPC::BCC, Convert__imm_95_68__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1689 /* bne */, PPC::BCC, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1693 /* bne+ */, PPC::BCC, Convert__imm_95_71__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1693 /* bne+ */, PPC::BCC, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1698 /* bne- */, PPC::BCC, Convert__imm_95_70__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1698 /* bne- */, PPC::BCC, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1703 /* bnea */, PPC::BCCA, Convert__imm_95_68__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1703 /* bnea */, PPC::BCCA, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1708 /* bnea+ */, PPC::BCCA, Convert__imm_95_71__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1708 /* bnea+ */, PPC::BCCA, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1714 /* bnea- */, PPC::BCCA, Convert__imm_95_70__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1714 /* bnea- */, PPC::BCCA, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1720 /* bnectr */, PPC::BCCCTR, Convert__imm_95_68__regCR0, AMFBS_None, {  }, },
  { 1720 /* bnectr */, PPC::BCCCTR, Convert__imm_95_68__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1727 /* bnectr+ */, PPC::BCCCTR, Convert__imm_95_71__regCR0, AMFBS_None, {  }, },
  { 1727 /* bnectr+ */, PPC::BCCCTR, Convert__imm_95_71__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1735 /* bnectr- */, PPC::BCCCTR, Convert__imm_95_70__regCR0, AMFBS_None, {  }, },
  { 1735 /* bnectr- */, PPC::BCCCTR, Convert__imm_95_70__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1743 /* bnectrl */, PPC::BCCCTRL, Convert__imm_95_68__regCR0, AMFBS_None, {  }, },
  { 1743 /* bnectrl */, PPC::BCCCTRL, Convert__imm_95_68__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1751 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_95_71__regCR0, AMFBS_None, {  }, },
  { 1751 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_95_71__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1760 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_95_70__regCR0, AMFBS_None, {  }, },
  { 1760 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_95_70__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1769 /* bnel */, PPC::BCCL, Convert__imm_95_68__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1769 /* bnel */, PPC::BCCL, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1774 /* bnel+ */, PPC::BCCL, Convert__imm_95_71__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1774 /* bnel+ */, PPC::BCCL, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1780 /* bnel- */, PPC::BCCL, Convert__imm_95_70__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1780 /* bnel- */, PPC::BCCL, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1786 /* bnela */, PPC::BCCLA, Convert__imm_95_68__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1786 /* bnela */, PPC::BCCLA, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1792 /* bnela+ */, PPC::BCCLA, Convert__imm_95_71__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1792 /* bnela+ */, PPC::BCCLA, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1799 /* bnela- */, PPC::BCCLA, Convert__imm_95_70__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1799 /* bnela- */, PPC::BCCLA, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1806 /* bnelr */, PPC::BCCLR, Convert__imm_95_68__regCR0, AMFBS_None, {  }, },
  { 1806 /* bnelr */, PPC::BCCLR, Convert__imm_95_68__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1812 /* bnelr+ */, PPC::BCCLR, Convert__imm_95_71__regCR0, AMFBS_None, {  }, },
  { 1812 /* bnelr+ */, PPC::BCCLR, Convert__imm_95_71__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1819 /* bnelr- */, PPC::BCCLR, Convert__imm_95_70__regCR0, AMFBS_None, {  }, },
  { 1819 /* bnelr- */, PPC::BCCLR, Convert__imm_95_70__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1826 /* bnelrl */, PPC::BCCLRL, Convert__imm_95_68__regCR0, AMFBS_None, {  }, },
  { 1826 /* bnelrl */, PPC::BCCLRL, Convert__imm_95_68__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1833 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_95_71__regCR0, AMFBS_None, {  }, },
  { 1833 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_95_71__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1841 /* bnelrl- */, PPC::BCCLRL, Convert__imm_95_70__regCR0, AMFBS_None, {  }, },
  { 1841 /* bnelrl- */, PPC::BCCLRL, Convert__imm_95_70__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1849 /* bng */, PPC::BCC, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1849 /* bng */, PPC::BCC, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1853 /* bng+ */, PPC::BCC, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1853 /* bng+ */, PPC::BCC, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1858 /* bng- */, PPC::BCC, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1858 /* bng- */, PPC::BCC, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1863 /* bnga */, PPC::BCCA, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1863 /* bnga */, PPC::BCCA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1868 /* bnga+ */, PPC::BCCA, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1868 /* bnga+ */, PPC::BCCA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1874 /* bnga- */, PPC::BCCA, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1874 /* bnga- */, PPC::BCCA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1880 /* bngctr */, PPC::BCCCTR, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1880 /* bngctr */, PPC::BCCCTR, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1887 /* bngctr+ */, PPC::BCCCTR, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1887 /* bngctr+ */, PPC::BCCCTR, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1895 /* bngctr- */, PPC::BCCCTR, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1895 /* bngctr- */, PPC::BCCCTR, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1903 /* bngctrl */, PPC::BCCCTRL, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1903 /* bngctrl */, PPC::BCCCTRL, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1911 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1911 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1920 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1920 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1929 /* bngl */, PPC::BCCL, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1929 /* bngl */, PPC::BCCL, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1934 /* bngl+ */, PPC::BCCL, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1934 /* bngl+ */, PPC::BCCL, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1940 /* bngl- */, PPC::BCCL, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1940 /* bngl- */, PPC::BCCL, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1946 /* bngla */, PPC::BCCLA, Convert__imm_95_36__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1946 /* bngla */, PPC::BCCLA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1952 /* bngla+ */, PPC::BCCLA, Convert__imm_95_39__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1952 /* bngla+ */, PPC::BCCLA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1959 /* bngla- */, PPC::BCCLA, Convert__imm_95_38__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 1959 /* bngla- */, PPC::BCCLA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 1966 /* bnglr */, PPC::BCCLR, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1966 /* bnglr */, PPC::BCCLR, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1972 /* bnglr+ */, PPC::BCCLR, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1972 /* bnglr+ */, PPC::BCCLR, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1979 /* bnglr- */, PPC::BCCLR, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 1979 /* bnglr- */, PPC::BCCLR, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1986 /* bnglrl */, PPC::BCCLRL, Convert__imm_95_36__regCR0, AMFBS_None, {  }, },
  { 1986 /* bnglrl */, PPC::BCCLRL, Convert__imm_95_36__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 1993 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_95_39__regCR0, AMFBS_None, {  }, },
  { 1993 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_95_39__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2001 /* bnglrl- */, PPC::BCCLRL, Convert__imm_95_38__regCR0, AMFBS_None, {  }, },
  { 2001 /* bnglrl- */, PPC::BCCLRL, Convert__imm_95_38__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2009 /* bnl */, PPC::BCC, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2009 /* bnl */, PPC::BCC, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2013 /* bnl+ */, PPC::BCC, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2013 /* bnl+ */, PPC::BCC, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2018 /* bnl- */, PPC::BCC, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2018 /* bnl- */, PPC::BCC, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2023 /* bnla */, PPC::BCCA, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2023 /* bnla */, PPC::BCCA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2028 /* bnla+ */, PPC::BCCA, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2028 /* bnla+ */, PPC::BCCA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2034 /* bnla- */, PPC::BCCA, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2034 /* bnla- */, PPC::BCCA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2040 /* bnlctr */, PPC::BCCCTR, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 2040 /* bnlctr */, PPC::BCCCTR, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2047 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 2047 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2055 /* bnlctr- */, PPC::BCCCTR, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 2055 /* bnlctr- */, PPC::BCCCTR, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2063 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 2063 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2071 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 2071 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2080 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 2080 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2089 /* bnll */, PPC::BCCL, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2089 /* bnll */, PPC::BCCL, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2094 /* bnll+ */, PPC::BCCL, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2094 /* bnll+ */, PPC::BCCL, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2100 /* bnll- */, PPC::BCCL, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2100 /* bnll- */, PPC::BCCL, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2106 /* bnlla */, PPC::BCCLA, Convert__imm_95_4__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2106 /* bnlla */, PPC::BCCLA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2112 /* bnlla+ */, PPC::BCCLA, Convert__imm_95_7__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2112 /* bnlla+ */, PPC::BCCLA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2119 /* bnlla- */, PPC::BCCLA, Convert__imm_95_6__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2119 /* bnlla- */, PPC::BCCLA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2126 /* bnllr */, PPC::BCCLR, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 2126 /* bnllr */, PPC::BCCLR, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2132 /* bnllr+ */, PPC::BCCLR, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 2132 /* bnllr+ */, PPC::BCCLR, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2139 /* bnllr- */, PPC::BCCLR, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 2139 /* bnllr- */, PPC::BCCLR, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2146 /* bnllrl */, PPC::BCCLRL, Convert__imm_95_4__regCR0, AMFBS_None, {  }, },
  { 2146 /* bnllrl */, PPC::BCCLRL, Convert__imm_95_4__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2153 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_95_7__regCR0, AMFBS_None, {  }, },
  { 2153 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_95_7__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2161 /* bnllrl- */, PPC::BCCLRL, Convert__imm_95_6__regCR0, AMFBS_None, {  }, },
  { 2161 /* bnllrl- */, PPC::BCCLRL, Convert__imm_95_6__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2169 /* bns */, PPC::BCC, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2169 /* bns */, PPC::BCC, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2173 /* bns+ */, PPC::BCC, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2173 /* bns+ */, PPC::BCC, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2178 /* bns- */, PPC::BCC, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2178 /* bns- */, PPC::BCC, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2183 /* bnsa */, PPC::BCCA, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2183 /* bnsa */, PPC::BCCA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2188 /* bnsa+ */, PPC::BCCA, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2188 /* bnsa+ */, PPC::BCCA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2194 /* bnsa- */, PPC::BCCA, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2194 /* bnsa- */, PPC::BCCA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2200 /* bnsctr */, PPC::BCCCTR, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2200 /* bnsctr */, PPC::BCCCTR, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2207 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2207 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2215 /* bnsctr- */, PPC::BCCCTR, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2215 /* bnsctr- */, PPC::BCCCTR, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2223 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2223 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2231 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2231 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2240 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2240 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2249 /* bnsl */, PPC::BCCL, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2249 /* bnsl */, PPC::BCCL, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2254 /* bnsl+ */, PPC::BCCL, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2254 /* bnsl+ */, PPC::BCCL, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2260 /* bnsl- */, PPC::BCCL, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2260 /* bnsl- */, PPC::BCCL, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2266 /* bnsla */, PPC::BCCLA, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2266 /* bnsla */, PPC::BCCLA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2272 /* bnsla+ */, PPC::BCCLA, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2272 /* bnsla+ */, PPC::BCCLA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2279 /* bnsla- */, PPC::BCCLA, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2279 /* bnsla- */, PPC::BCCLA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2286 /* bnslr */, PPC::BCCLR, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2286 /* bnslr */, PPC::BCCLR, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2292 /* bnslr+ */, PPC::BCCLR, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2292 /* bnslr+ */, PPC::BCCLR, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2299 /* bnslr- */, PPC::BCCLR, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2299 /* bnslr- */, PPC::BCCLR, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2306 /* bnslrl */, PPC::BCCLRL, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2306 /* bnslrl */, PPC::BCCLRL, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2313 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2313 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2321 /* bnslrl- */, PPC::BCCLRL, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2321 /* bnslrl- */, PPC::BCCLRL, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2329 /* bnu */, PPC::BCC, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2329 /* bnu */, PPC::BCC, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2333 /* bnu+ */, PPC::BCC, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2333 /* bnu+ */, PPC::BCC, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2338 /* bnu- */, PPC::BCC, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2338 /* bnu- */, PPC::BCC, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2343 /* bnua */, PPC::BCCA, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2343 /* bnua */, PPC::BCCA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2348 /* bnua+ */, PPC::BCCA, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2348 /* bnua+ */, PPC::BCCA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2354 /* bnua- */, PPC::BCCA, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2354 /* bnua- */, PPC::BCCA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2360 /* bnuctr */, PPC::BCCCTR, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2360 /* bnuctr */, PPC::BCCCTR, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2367 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2367 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2375 /* bnuctr- */, PPC::BCCCTR, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2375 /* bnuctr- */, PPC::BCCCTR, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2383 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2383 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2391 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2391 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2400 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2400 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2409 /* bnul */, PPC::BCCL, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2409 /* bnul */, PPC::BCCL, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2414 /* bnul+ */, PPC::BCCL, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2414 /* bnul+ */, PPC::BCCL, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2420 /* bnul- */, PPC::BCCL, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2420 /* bnul- */, PPC::BCCL, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2426 /* bnula */, PPC::BCCLA, Convert__imm_95_100__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2426 /* bnula */, PPC::BCCLA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2432 /* bnula+ */, PPC::BCCLA, Convert__imm_95_103__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2432 /* bnula+ */, PPC::BCCLA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2439 /* bnula- */, PPC::BCCLA, Convert__imm_95_102__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2439 /* bnula- */, PPC::BCCLA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2446 /* bnulr */, PPC::BCCLR, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2446 /* bnulr */, PPC::BCCLR, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2452 /* bnulr+ */, PPC::BCCLR, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2452 /* bnulr+ */, PPC::BCCLR, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2459 /* bnulr- */, PPC::BCCLR, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2459 /* bnulr- */, PPC::BCCLR, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2466 /* bnulrl */, PPC::BCCLRL, Convert__imm_95_100__regCR0, AMFBS_None, {  }, },
  { 2466 /* bnulrl */, PPC::BCCLRL, Convert__imm_95_100__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2473 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_95_103__regCR0, AMFBS_None, {  }, },
  { 2473 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_95_103__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2481 /* bnulrl- */, PPC::BCCLRL, Convert__imm_95_102__regCR0, AMFBS_None, {  }, },
  { 2481 /* bnulrl- */, PPC::BCCLRL, Convert__imm_95_102__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2489 /* bpermd */, PPC::BPERMD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2496 /* brd */, PPC::BRD, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2500 /* brh */, PPC::BRH, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2504 /* brinc */, PPC::BRINC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2510 /* brw */, PPC::BRW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2514 /* bso */, PPC::BCC, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2514 /* bso */, PPC::BCC, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2518 /* bso+ */, PPC::BCC, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2518 /* bso+ */, PPC::BCC, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2523 /* bso- */, PPC::BCC, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2523 /* bso- */, PPC::BCC, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2528 /* bsoa */, PPC::BCCA, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2528 /* bsoa */, PPC::BCCA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2533 /* bsoa+ */, PPC::BCCA, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2533 /* bsoa+ */, PPC::BCCA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2539 /* bsoa- */, PPC::BCCA, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2539 /* bsoa- */, PPC::BCCA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2545 /* bsoctr */, PPC::BCCCTR, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2545 /* bsoctr */, PPC::BCCCTR, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2552 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2552 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2560 /* bsoctr- */, PPC::BCCCTR, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2560 /* bsoctr- */, PPC::BCCCTR, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2568 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2568 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2576 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2576 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2585 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2585 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2594 /* bsol */, PPC::BCCL, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2594 /* bsol */, PPC::BCCL, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2599 /* bsol+ */, PPC::BCCL, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2599 /* bsol+ */, PPC::BCCL, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2605 /* bsol- */, PPC::BCCL, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2605 /* bsol- */, PPC::BCCL, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2611 /* bsola */, PPC::BCCLA, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2611 /* bsola */, PPC::BCCLA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2617 /* bsola+ */, PPC::BCCLA, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2617 /* bsola+ */, PPC::BCCLA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2624 /* bsola- */, PPC::BCCLA, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2624 /* bsola- */, PPC::BCCLA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2631 /* bsolr */, PPC::BCCLR, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2631 /* bsolr */, PPC::BCCLR, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2637 /* bsolr+ */, PPC::BCCLR, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2637 /* bsolr+ */, PPC::BCCLR, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2644 /* bsolr- */, PPC::BCCLR, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2644 /* bsolr- */, PPC::BCCLR, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2651 /* bsolrl */, PPC::BCCLRL, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2651 /* bsolrl */, PPC::BCCLRL, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2658 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2658 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2666 /* bsolrl- */, PPC::BCCLRL, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2666 /* bsolrl- */, PPC::BCCLRL, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2674 /* bt */, PPC::gBC, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2677 /* bt+ */, PPC::gBC, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2681 /* bt- */, PPC::gBC, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2685 /* bta */, PPC::gBCA, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2689 /* bta+ */, PPC::gBCA, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2694 /* bta- */, PPC::gBCA, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2699 /* btctr */, PPC::gBCCTR, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2705 /* btctr+ */, PPC::gBCCTR, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2712 /* btctr- */, PPC::gBCCTR, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2719 /* btctrl */, PPC::gBCCTRL, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2726 /* btctrl+ */, PPC::gBCCTRL, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2734 /* btctrl- */, PPC::gBCCTRL, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2742 /* btl */, PPC::gBCL, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2746 /* btl+ */, PPC::gBCL, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2751 /* btl- */, PPC::gBCL, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2756 /* btla */, PPC::gBCLA, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2761 /* btla+ */, PPC::gBCLA, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2767 /* btla- */, PPC::gBCLA, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2773 /* btlr */, PPC::gBCLR, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2778 /* btlr+ */, PPC::gBCLR, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2784 /* btlr- */, PPC::gBCLR, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2790 /* btlrl */, PPC::gBCLRL, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2796 /* btlrl+ */, PPC::gBCLRL, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2803 /* btlrl- */, PPC::gBCLRL, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 2810 /* bun */, PPC::BCC, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2810 /* bun */, PPC::BCC, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2814 /* bun+ */, PPC::BCC, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2814 /* bun+ */, PPC::BCC, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2819 /* bun- */, PPC::BCC, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2819 /* bun- */, PPC::BCC, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2824 /* buna */, PPC::BCCA, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2824 /* buna */, PPC::BCCA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2829 /* buna+ */, PPC::BCCA, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2829 /* buna+ */, PPC::BCCA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2835 /* buna- */, PPC::BCCA, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2835 /* buna- */, PPC::BCCA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2841 /* bunctr */, PPC::BCCCTR, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2841 /* bunctr */, PPC::BCCCTR, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2848 /* bunctr+ */, PPC::BCCCTR, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2848 /* bunctr+ */, PPC::BCCCTR, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2856 /* bunctr- */, PPC::BCCCTR, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2856 /* bunctr- */, PPC::BCCCTR, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2864 /* bunctrl */, PPC::BCCCTRL, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2864 /* bunctrl */, PPC::BCCCTRL, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2872 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2872 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2881 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2881 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2890 /* bunl */, PPC::BCCL, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2890 /* bunl */, PPC::BCCL, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2895 /* bunl+ */, PPC::BCCL, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2895 /* bunl+ */, PPC::BCCL, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2901 /* bunl- */, PPC::BCCL, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2901 /* bunl- */, PPC::BCCL, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2907 /* bunla */, PPC::BCCLA, Convert__imm_95_108__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2907 /* bunla */, PPC::BCCLA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2913 /* bunla+ */, PPC::BCCLA, Convert__imm_95_111__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2913 /* bunla+ */, PPC::BCCLA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2920 /* bunla- */, PPC::BCCLA, Convert__imm_95_110__regCR0__CondBr1_0, AMFBS_None, { MCK_CondBr }, },
  { 2920 /* bunla- */, PPC::BCCLA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, AMFBS_None, { MCK_RegCRRC, MCK_CondBr }, },
  { 2927 /* bunlr */, PPC::BCCLR, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2927 /* bunlr */, PPC::BCCLR, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2933 /* bunlr+ */, PPC::BCCLR, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2933 /* bunlr+ */, PPC::BCCLR, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2940 /* bunlr- */, PPC::BCCLR, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2940 /* bunlr- */, PPC::BCCLR, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2947 /* bunlrl */, PPC::BCCLRL, Convert__imm_95_108__regCR0, AMFBS_None, {  }, },
  { 2947 /* bunlrl */, PPC::BCCLRL, Convert__imm_95_108__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2954 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_95_111__regCR0, AMFBS_None, {  }, },
  { 2954 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_95_111__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2962 /* bunlrl- */, PPC::BCCLRL, Convert__imm_95_110__regCR0, AMFBS_None, {  }, },
  { 2962 /* bunlrl- */, PPC::BCCLRL, Convert__imm_95_110__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 2970 /* cbcdtd */, PPC::CBCDTD, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2977 /* cdtbcd */, PPC::CDTBCD, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2984 /* cfuged */, PPC::CFUGED, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2991 /* clrbhrb */, PPC::CLRBHRB, Convert_NoOperands, AMFBS_None, {  }, },
  { 2999 /* clrldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2999 /* clrldi */, PPC::RLDICL_32_64, Convert__RegG8RC1_0__RegGPRC1_1__imm_95_0__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 2999 /* clrldi */, PPC::RLDICL_rec, Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3006 /* clrlsldi */, PPC::CLRLSLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3006 /* clrlsldi */, PPC::CLRLSLDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 3015 /* clrlslwi */, PPC::CLRLSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3015 /* clrlslwi */, PPC::CLRLSLWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 3024 /* clrlwi */, PPC::RLWINM8, Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U5Imm1_2__imm_95_31, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 3024 /* clrlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3024 /* clrlwi */, PPC::RLWINM8_rec, Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U5Imm1_3__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 3024 /* clrlwi */, PPC::RLWINM_rec, Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3031 /* clrrdi */, PPC::CLRRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3031 /* clrrdi */, PPC::CLRRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 3038 /* clrrwi */, PPC::CLRRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3038 /* clrrwi */, PPC::CLRRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3045 /* cmp */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3045 /* cmp */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3049 /* cmpb */, PPC::CMPB, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3054 /* cmpd */, PPC::CMPD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3054 /* cmpd */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3059 /* cmpdi */, PPC::CMPDI, Convert__regCR0__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 3059 /* cmpdi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_S16Imm }, },
  { 3065 /* cmpeqb */, PPC::CMPEQB, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3072 /* cmpi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3, AMFBS_None, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_S16Imm }, },
  { 3072 /* cmpi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3, AMFBS_None, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_S16Imm }, },
  { 3077 /* cmpl */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3077 /* cmpl */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3082 /* cmpld */, PPC::CMPLD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3082 /* cmpld */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3088 /* cmpldi */, PPC::CMPLDI, Convert__regCR0__RegG8RC1_0__U16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_U16Imm }, },
  { 3088 /* cmpldi */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegG8RC, MCK_U16Imm }, },
  { 3095 /* cmpli */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3, AMFBS_None, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_U16Imm }, },
  { 3095 /* cmpli */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3, AMFBS_None, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_U16Imm }, },
  { 3101 /* cmplw */, PPC::CMPLW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3101 /* cmplw */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3107 /* cmplwi */, PPC::CMPLWI, Convert__regCR0__RegGPRC1_0__U16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_U16Imm }, },
  { 3107 /* cmplwi */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 3114 /* cmprb */, PPC::CMPRB, Convert__RegCRRC1_0__U1Imm1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegCRRC, MCK_U1Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3120 /* cmpw */, PPC::CMPW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3120 /* cmpw */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3125 /* cmpwi */, PPC::CMPWI, Convert__regCR0__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 3125 /* cmpwi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 3131 /* cntlzd */, PPC::CNTLZD, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3131 /* cntlzd */, PPC::CNTLZD_rec, Convert__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3138 /* cntlzdm */, PPC::CNTLZDM, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3146 /* cntlzw */, PPC::CNTLZW8, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3146 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3146 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3146 /* cntlzw */, PPC::CNTLZW8_rec, Convert__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3146 /* cntlzw */, PPC::CNTLZW_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3146 /* cntlzw */, PPC::CNTLZW_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3153 /* cnttzd */, PPC::CNTTZD, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3153 /* cnttzd */, PPC::CNTTZD_rec, Convert__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3160 /* cnttzdm */, PPC::CNTTZDM, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3168 /* cnttzw */, PPC::CNTTZW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3168 /* cnttzw */, PPC::CNTTZW_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3175 /* copy */, PPC::CP_COPY, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3180 /* cpabort */, PPC::CP_ABORT, Convert_NoOperands, AMFBS_None, {  }, },
  { 3188 /* crand */, PPC::CRAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3194 /* crandc */, PPC::CRANDC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3201 /* crclr */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 3207 /* creqv */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3213 /* crmove */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3220 /* crnand */, PPC::CRNAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3227 /* crnor */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3233 /* crnot */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3239 /* cror */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3244 /* crorc */, PPC::CRORC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3250 /* crset */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, AMFBS_None, { MCK_RegCRBITRC }, },
  { 3256 /* crxor */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, AMFBS_None, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3262 /* darn */, PPC::DARN, Convert__RegG8RC1_0__U2Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_U2Imm }, },
  { 3267 /* dcba */, PPC::DCBA, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3272 /* dcbf */, PPC::DCBFx, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3272 /* dcbf */, PPC::DCBF, Convert__U3Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U3Imm }, },
  { 3277 /* dcbfep */, PPC::DCBFEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3284 /* dcbfl */, PPC::DCBFL, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3290 /* dcbflp */, PPC::DCBFLP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3297 /* dcbfps */, PPC::DCBFPS, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3304 /* dcbi */, PPC::DCBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3309 /* dcbst */, PPC::DCBST, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3315 /* dcbstep */, PPC::DCBSTEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3323 /* dcbstps */, PPC::DCBSTPS, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3331 /* dcbt */, PPC::DCBTx, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3331 /* dcbt */, PPC::DCBT, Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3336 /* dcbtct */, PPC::DCBTCT, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3343 /* dcbtds */, PPC::DCBTDS, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3350 /* dcbtep */, PPC::DCBTEP, Convert__RegGxRCNoR01_1__RegGxRC1_2__U5Imm1_0, AMFBS_None, { MCK_U5Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3357 /* dcbtst */, PPC::DCBTSTx, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3357 /* dcbtst */, PPC::DCBTST, Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3364 /* dcbtstct */, PPC::DCBTSTCT, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3373 /* dcbtstds */, PPC::DCBTSTDS, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3382 /* dcbtstep */, PPC::DCBTSTEP, Convert__RegGxRCNoR01_1__RegGxRC1_2__U5Imm1_0, AMFBS_None, { MCK_U5Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3391 /* dcbtstt */, PPC::DCBTSTT, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3399 /* dcbtt */, PPC::DCBTT, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3405 /* dcbz */, PPC::DCBZ, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3410 /* dcbzep */, PPC::DCBZEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3417 /* dcbzl */, PPC::DCBZL, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3423 /* dcbzlep */, PPC::DCBZLEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3431 /* dccci */, PPC::DCCCI, Convert__regR0__regR0, AMFBS_None, {  }, },
  { 3431 /* dccci */, PPC::DCCCI, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3437 /* dci */, PPC::DCCCI, Convert__regR0__regR0, AMFBS_None, { MCK_0 }, },
  { 3441 /* divd */, PPC::DIVD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3441 /* divd */, PPC::DIVD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3446 /* divde */, PPC::DIVDE, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3446 /* divde */, PPC::DIVDE_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3452 /* divdeo */, PPC::DIVDEO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3452 /* divdeo */, PPC::DIVDEO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3459 /* divdeu */, PPC::DIVDEU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3459 /* divdeu */, PPC::DIVDEU_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3466 /* divdeuo */, PPC::DIVDEUO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3466 /* divdeuo */, PPC::DIVDEUO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3474 /* divdo */, PPC::DIVDO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3474 /* divdo */, PPC::DIVDO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3480 /* divdu */, PPC::DIVDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3480 /* divdu */, PPC::DIVDU_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3486 /* divduo */, PPC::DIVDUO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3486 /* divduo */, PPC::DIVDUO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3493 /* divw */, PPC::DIVW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3493 /* divw */, PPC::DIVW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3498 /* divwe */, PPC::DIVWE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3498 /* divwe */, PPC::DIVWE_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3504 /* divweo */, PPC::DIVWEO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3504 /* divweo */, PPC::DIVWEO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3511 /* divweu */, PPC::DIVWEU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3511 /* divweu */, PPC::DIVWEU_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3518 /* divweuo */, PPC::DIVWEUO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3518 /* divweuo */, PPC::DIVWEUO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3526 /* divwo */, PPC::DIVWO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3526 /* divwo */, PPC::DIVWO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3532 /* divwu */, PPC::DIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3532 /* divwu */, PPC::DIVWU_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3538 /* divwuo */, PPC::DIVWUO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3538 /* divwuo */, PPC::DIVWUO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3545 /* dmmr */, PPC::DMMR, Convert__RegDMRRC1_0__RegDMRRC1_1, AMFBS_None, { MCK_RegDMRRC, MCK_RegDMRRC }, },
  { 3550 /* dmsetdmrz */, PPC::DMSETDMRZ, Convert__RegDMRRC1_0, AMFBS_None, { MCK_RegDMRRC }, },
  { 3560 /* dmxor */, PPC::DMXOR, Convert__RegDMRRC1_0__Tie0_1_1__RegDMRRC1_1, AMFBS_None, { MCK_RegDMRRC, MCK_RegDMRRC }, },
  { 3566 /* dmxxextfdmr256 */, PPC::DMXXEXTFDMR256, Convert__RegVSRpRC1_1__RegDMRROWpRC1_0__U2Imm1_2, AMFBS_None, { MCK_RegDMRROWpRC, MCK_RegVSRpRC, MCK_U2Imm }, },
  { 3581 /* dmxxextfdmr512 */, PPC::DMXXEXTFDMR512, Convert__RegVSRpRC1_1__RegVSRpRC1_2__RegACCRC1_0, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpRC, MCK_RegVSRpRC, MCK_0 }, },
  { 3581 /* dmxxextfdmr512 */, PPC::DMXXEXTFDMR512_HI, Convert__RegVSRpRC1_1__RegVSRpRC1_2__RegACCRC1_0, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpRC, MCK_RegVSRpRC, MCK_1 }, },
  { 3596 /* dmxxinstfdmr256 */, PPC::DMXXINSTFDMR256, Convert__RegDMRROWpRC1_0__RegVSRpRC1_1__U2Imm1_2, AMFBS_None, { MCK_RegDMRROWpRC, MCK_RegVSRpRC, MCK_U2Imm }, },
  { 3612 /* dmxxinstfdmr512 */, PPC::DMXXINSTFDMR512, Convert__RegACCRC1_0__RegVSRpRC1_1__RegVSRpRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpRC, MCK_RegVSRpRC, MCK_0 }, },
  { 3612 /* dmxxinstfdmr512 */, PPC::DMXXINSTFDMR512_HI, Convert__RegACCRC1_0__RegVSRpRC1_1__RegVSRpRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpRC, MCK_RegVSRpRC, MCK_1 }, },
  { 3628 /* dss */, PPC::DSS, Convert__U5Imm1_0, AMFBS_None, { MCK_U5Imm }, },
  { 3632 /* dssall */, PPC::DSSALL, Convert_NoOperands, AMFBS_None, {  }, },
  { 3639 /* dst */, PPC::DST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3643 /* dstst */, PPC::DSTST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3649 /* dststt */, PPC::DSTSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3656 /* dstt */, PPC::DSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3661 /* efdabs */, PPC::EFDABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 3668 /* efdadd */, PPC::EFDADD, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3675 /* efdcfs */, PPC::EFDCFS, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3682 /* efdcfsf */, PPC::EFDCFSF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3690 /* efdcfsi */, PPC::EFDCFSI, Convert__RegSPERC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC }, },
  { 3698 /* efdcfsid */, PPC::EFDCFSID, Convert__RegSPERC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC }, },
  { 3707 /* efdcfuf */, PPC::EFDCFUF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3715 /* efdcfui */, PPC::EFDCFUI, Convert__RegSPERC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC }, },
  { 3723 /* efdcfuid */, PPC::EFDCFUID, Convert__RegSPERC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC }, },
  { 3732 /* efdcmpeq */, PPC::EFDCMPEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3741 /* efdcmpgt */, PPC::EFDCMPGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3750 /* efdcmplt */, PPC::EFDCMPLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3759 /* efdctsf */, PPC::EFDCTSF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3767 /* efdctsi */, PPC::EFDCTSI, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3775 /* efdctsidz */, PPC::EFDCTSIDZ, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3785 /* efdctsiz */, PPC::EFDCTSIZ, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3794 /* efdctuf */, PPC::EFDCTUF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 3802 /* efdctui */, PPC::EFDCTUI, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3810 /* efdctuidz */, PPC::EFDCTUIDZ, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3820 /* efdctuiz */, PPC::EFDCTUIZ, Convert__RegGPRC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPERC }, },
  { 3829 /* efddiv */, PPC::EFDDIV, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3836 /* efdmul */, PPC::EFDMUL, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3843 /* efdnabs */, PPC::EFDNABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 3851 /* efdneg */, PPC::EFDNEG, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 3858 /* efdsub */, PPC::EFDSUB, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3865 /* efdtsteq */, PPC::EFDTSTEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3874 /* efdtstgt */, PPC::EFDTSTGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3883 /* efdtstlt */, PPC::EFDTSTLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 3892 /* efsabs */, PPC::EFSABS, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3899 /* efsadd */, PPC::EFSADD, Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3906 /* efscfd */, PPC::EFSCFD, Convert__RegSPE4RC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPERC }, },
  { 3913 /* efscfsf */, PPC::EFSCFSF, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3921 /* efscfsi */, PPC::EFSCFSI, Convert__RegSPE4RC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegGPRC }, },
  { 3929 /* efscfuf */, PPC::EFSCFUF, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3937 /* efscfui */, PPC::EFSCFUI, Convert__RegSPE4RC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegGPRC }, },
  { 3945 /* efscmpeq */, PPC::EFSCMPEQ, Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3954 /* efscmpgt */, PPC::EFSCMPGT, Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3963 /* efscmplt */, PPC::EFSCMPLT, Convert__RegCRRC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3972 /* efsctsf */, PPC::EFSCTSF, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 3980 /* efsctsi */, PPC::EFSCTSI, Convert__RegGPRC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPE4RC }, },
  { 3988 /* efsctsiz */, PPC::EFSCTSIZ, Convert__RegGPRC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPE4RC }, },
  { 3997 /* efsctuf */, PPC::EFSCTUF, Convert__RegSPERC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPE4RC }, },
  { 4005 /* efsctui */, PPC::EFSCTUI, Convert__RegGPRC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPE4RC }, },
  { 4013 /* efsctuiz */, PPC::EFSCTUIZ, Convert__RegGPRC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegSPE4RC }, },
  { 4022 /* efsdiv */, PPC::EFSDIV, Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 4029 /* efsmul */, PPC::EFSMUL, Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 4036 /* efsnabs */, PPC::EFSNABS, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 4044 /* efsneg */, PPC::EFSNEG, Convert__RegSPE4RC1_0__RegSPE4RC1_1, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 4051 /* efssub */, PPC::EFSSUB, Convert__RegSPE4RC1_0__RegSPE4RC1_1__RegSPE4RC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegSPE4RC, MCK_RegSPE4RC }, },
  { 4058 /* efststeq */, PPC::EFSTSTEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4067 /* efststgt */, PPC::EFSTSTGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4076 /* efststlt */, PPC::EFSTSTLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4085 /* eieio */, PPC::EnforceIEIO, Convert_NoOperands, AMFBS_None, {  }, },
  { 4091 /* eqv */, PPC::EQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4091 /* eqv */, PPC::EQV_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4095 /* evabs */, PPC::EVABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4101 /* evaddiw */, PPC::EVADDIW, Convert__RegSPERC1_0__RegSPERC1_2__U5Imm1_1, AMFBS_None, { MCK_RegSPERC, MCK_U5Imm, MCK_RegSPERC }, },
  { 4109 /* evaddsmiaaw */, PPC::EVADDSMIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4121 /* evaddssiaaw */, PPC::EVADDSSIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4133 /* evaddumiaaw */, PPC::EVADDUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4145 /* evaddusiaaw */, PPC::EVADDUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4157 /* evaddw */, PPC::EVADDW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4164 /* evand */, PPC::EVAND, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4170 /* evandc */, PPC::EVANDC, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4177 /* evcmpeq */, PPC::EVCMPEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4185 /* evcmpgts */, PPC::EVCMPGTS, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4194 /* evcmpgtu */, PPC::EVCMPGTU, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4203 /* evcmplts */, PPC::EVCMPLTS, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4212 /* evcmpltu */, PPC::EVCMPLTU, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4221 /* evcntlsw */, PPC::EVCNTLSW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4230 /* evcntlzw */, PPC::EVCNTLZW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4239 /* evdivws */, PPC::EVDIVWS, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4247 /* evdivwu */, PPC::EVDIVWU, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4255 /* eveqv */, PPC::EVEQV, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4261 /* evextsb */, PPC::EVEXTSB, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4269 /* evextsh */, PPC::EVEXTSH, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4277 /* evfsabs */, PPC::EVFSABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4285 /* evfsadd */, PPC::EVFSADD, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4293 /* evfscfsf */, PPC::EVFSCFSF, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4302 /* evfscfsi */, PPC::EVFSCFSI, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4311 /* evfscfuf */, PPC::EVFSCFUF, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4320 /* evfscfui */, PPC::EVFSCFUI, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4329 /* evfscmpeq */, PPC::EVFSCMPEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4339 /* evfscmpgt */, PPC::EVFSCMPGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4349 /* evfscmplt */, PPC::EVFSCMPLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4359 /* evfsctsf */, PPC::EVFSCTSF, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4359 /* evfsctsf */, PPC::EVFSCTUF, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4368 /* evfsctsi */, PPC::EVFSCTSI, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4377 /* evfsctsiz */, PPC::EVFSCTSIZ, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4377 /* evfsctsiz */, PPC::EVFSCTUIZ, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4387 /* evfsctui */, PPC::EVFSCTUI, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4396 /* evfsdiv */, PPC::EVFSDIV, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4404 /* evfsmul */, PPC::EVFSMUL, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4412 /* evfsnabs */, PPC::EVFSNABS, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4421 /* evfsneg */, PPC::EVFSNEG, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 4429 /* evfssub */, PPC::EVFSSUB, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4437 /* evfststeq */, PPC::EVFSTSTEQ, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4447 /* evfststgt */, PPC::EVFSTSTGT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4457 /* evfststlt */, PPC::EVFSTSTLT, Convert__RegCRRC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4467 /* evldd */, PPC::EVLDD, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4473 /* evlddx */, PPC::EVLDDX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4480 /* evldh */, PPC::EVLDH, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4486 /* evldhx */, PPC::EVLDHX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4493 /* evldw */, PPC::EVLDW, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4499 /* evldwx */, PPC::EVLDWX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4506 /* evlhhesplat */, PPC::EVLHHESPLAT, Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 4518 /* evlhhesplatx */, PPC::EVLHHESPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4531 /* evlhhossplat */, PPC::EVLHHOSSPLAT, Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 4544 /* evlhhossplatx */, PPC::EVLHHOSSPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4558 /* evlhhousplat */, PPC::EVLHHOUSPLAT, Convert__RegSPERC1_0__DispSPE21_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 4571 /* evlhhousplatx */, PPC::EVLHHOUSPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4585 /* evlwhe */, PPC::EVLWHE, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4592 /* evlwhex */, PPC::EVLWHEX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4600 /* evlwhos */, PPC::EVLWHOS, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4608 /* evlwhosx */, PPC::EVLWHOSX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4617 /* evlwhou */, PPC::EVLWHOU, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4625 /* evlwhoux */, PPC::EVLWHOUX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4634 /* evlwhsplat */, PPC::EVLWHSPLAT, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4645 /* evlwhsplatx */, PPC::EVLWHSPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4657 /* evlwwsplat */, PPC::EVLWWSPLAT, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4668 /* evlwwsplatx */, PPC::EVLWWSPLATX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 4680 /* evmergehi */, PPC::EVMERGEHI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4690 /* evmergehilo */, PPC::EVMERGEHILO, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4702 /* evmergelo */, PPC::EVMERGELO, Convert__RegSPERC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4712 /* evmergelohi */, PPC::EVMERGELOHI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4724 /* evmhegsmfaa */, PPC::EVMHEGSMFAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4736 /* evmhegsmfan */, PPC::EVMHEGSMFAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4748 /* evmhegsmiaa */, PPC::EVMHEGSMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4760 /* evmhegsmian */, PPC::EVMHEGSMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4772 /* evmhegumiaa */, PPC::EVMHEGUMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4784 /* evmhegumian */, PPC::EVMHEGUMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4796 /* evmhesmf */, PPC::EVMHESMF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4805 /* evmhesmfa */, PPC::EVMHESMFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4815 /* evmhesmfaaw */, PPC::EVMHESMFAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4827 /* evmhesmfanw */, PPC::EVMHESMFANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4839 /* evmhesmi */, PPC::EVMHESMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4848 /* evmhesmia */, PPC::EVMHESMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4858 /* evmhesmiaaw */, PPC::EVMHESMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4870 /* evmhesmianw */, PPC::EVMHESMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4882 /* evmhessf */, PPC::EVMHESSF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4891 /* evmhessfa */, PPC::EVMHESSFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4901 /* evmhessfaaw */, PPC::EVMHESSFAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4913 /* evmhessfanw */, PPC::EVMHESSFANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4925 /* evmhessiaaw */, PPC::EVMHESSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4937 /* evmhessianw */, PPC::EVMHESSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4949 /* evmheumi */, PPC::EVMHEUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4958 /* evmheumia */, PPC::EVMHEUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4968 /* evmheumiaaw */, PPC::EVMHEUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4980 /* evmheumianw */, PPC::EVMHEUMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 4992 /* evmheusiaaw */, PPC::EVMHEUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5004 /* evmheusianw */, PPC::EVMHEUSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5016 /* evmhogsmfaa */, PPC::EVMHOGSMFAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5028 /* evmhogsmfan */, PPC::EVMHOGSMFAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5040 /* evmhogsmiaa */, PPC::EVMHOGSMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5052 /* evmhogsmian */, PPC::EVMHOGSMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5064 /* evmhogumiaa */, PPC::EVMHOGUMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5076 /* evmhogumian */, PPC::EVMHOGUMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5088 /* evmhosmf */, PPC::EVMHOSMF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5097 /* evmhosmfa */, PPC::EVMHOSMFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5107 /* evmhosmfaaw */, PPC::EVMHOSMFAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5119 /* evmhosmfanw */, PPC::EVMHOSMFANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5131 /* evmhosmi */, PPC::EVMHOSMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5140 /* evmhosmia */, PPC::EVMHOSMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5150 /* evmhosmiaaw */, PPC::EVMHOSMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5162 /* evmhosmianw */, PPC::EVMHOSMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5174 /* evmhossf */, PPC::EVMHOSSF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5183 /* evmhossfa */, PPC::EVMHOSSFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5193 /* evmhossfaaw */, PPC::EVMHOSSFAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5205 /* evmhossfanw */, PPC::EVMHOSSFANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5217 /* evmhossiaaw */, PPC::EVMHOSSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5229 /* evmhossianw */, PPC::EVMHOSSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5241 /* evmhoumi */, PPC::EVMHOUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5250 /* evmhoumia */, PPC::EVMHOUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5260 /* evmhoumiaaw */, PPC::EVMHOUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5272 /* evmhoumianw */, PPC::EVMHOUMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5284 /* evmhousiaaw */, PPC::EVMHOUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5296 /* evmhousianw */, PPC::EVMHOUSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5308 /* evmra */, PPC::EVMRA, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5314 /* evmwhsmf */, PPC::EVMWHSMF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5323 /* evmwhsmfa */, PPC::EVMWHSMFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5333 /* evmwhsmi */, PPC::EVMWHSMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5342 /* evmwhsmia */, PPC::EVMWHSMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5352 /* evmwhssf */, PPC::EVMWHSSF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5361 /* evmwhssfa */, PPC::EVMWHSSFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5371 /* evmwhumi */, PPC::EVMWHUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5380 /* evmwhumia */, PPC::EVMWHUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5390 /* evmwlsmiaaw */, PPC::EVMWLSMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5402 /* evmwlsmianw */, PPC::EVMWLSMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5414 /* evmwlssiaaw */, PPC::EVMWLSSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5426 /* evmwlssianw */, PPC::EVMWLSSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5438 /* evmwlumi */, PPC::EVMWLUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5447 /* evmwlumia */, PPC::EVMWLUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5457 /* evmwlumiaaw */, PPC::EVMWLUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5469 /* evmwlumianw */, PPC::EVMWLUMIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5481 /* evmwlusiaaw */, PPC::EVMWLUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5493 /* evmwlusianw */, PPC::EVMWLUSIANW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5505 /* evmwsmf */, PPC::EVMWSMF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5513 /* evmwsmfa */, PPC::EVMWSMFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5522 /* evmwsmfaa */, PPC::EVMWSMFAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5532 /* evmwsmfan */, PPC::EVMWSMFAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5542 /* evmwsmi */, PPC::EVMWSMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5550 /* evmwsmia */, PPC::EVMWSMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5559 /* evmwsmiaa */, PPC::EVMWSMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5569 /* evmwsmian */, PPC::EVMWSMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5579 /* evmwssf */, PPC::EVMWSSF, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5587 /* evmwssfa */, PPC::EVMWSSFA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5596 /* evmwssfaa */, PPC::EVMWSSFAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5606 /* evmwssfan */, PPC::EVMWSSFAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5616 /* evmwumi */, PPC::EVMWUMI, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5624 /* evmwumia */, PPC::EVMWUMIA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5633 /* evmwumiaa */, PPC::EVMWUMIAA, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5643 /* evmwumian */, PPC::EVMWUMIAN, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5653 /* evnand */, PPC::EVNAND, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5660 /* evneg */, PPC::EVNEG, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5666 /* evnor */, PPC::EVNOR, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5672 /* evor */, PPC::EVOR, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5677 /* evorc */, PPC::EVORC, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5683 /* evrlw */, PPC::EVRLW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5689 /* evrlwi */, PPC::EVRLWI, Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_U5Imm }, },
  { 5696 /* evrndw */, PPC::EVRNDW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5703 /* evsel */, PPC::EVSEL, Convert__RegSPERC1_1__RegSPERC1_2__RegSPERC1_3__imm_95_0, AMFBS_None, { MCK_crD, MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5709 /* evslw */, PPC::EVSLW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5715 /* evslwi */, PPC::EVSLWI, Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_U5Imm }, },
  { 5722 /* evsplatfi */, PPC::EVSPLATFI, Convert__RegSPERC1_0__S5Imm1_1, AMFBS_None, { MCK_RegSPERC, MCK_S5Imm }, },
  { 5732 /* evsplati */, PPC::EVSPLATI, Convert__RegSPERC1_0__S5Imm1_1, AMFBS_None, { MCK_RegSPERC, MCK_S5Imm }, },
  { 5741 /* evsrwis */, PPC::EVSRWIS, Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_U5Imm }, },
  { 5749 /* evsrwiu */, PPC::EVSRWIU, Convert__RegSPERC1_0__RegSPERC1_1__U5Imm1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_U5Imm }, },
  { 5757 /* evsrws */, PPC::EVSRWS, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5764 /* evsrwu */, PPC::EVSRWU, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5771 /* evstdd */, PPC::EVSTDD, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 5778 /* evstddx */, PPC::EVSTDDX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5786 /* evstdh */, PPC::EVSTDH, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 5793 /* evstdhx */, PPC::EVSTDHX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5801 /* evstdw */, PPC::EVSTDW, Convert__RegSPERC1_0__DispSPE81_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 5808 /* evstdwx */, PPC::EVSTDWX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5816 /* evstwhe */, PPC::EVSTWHE, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 5824 /* evstwhex */, PPC::EVSTWHEX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5833 /* evstwho */, PPC::EVSTWHO, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 5841 /* evstwhox */, PPC::EVSTWHOX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5850 /* evstwwe */, PPC::EVSTWWE, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 5858 /* evstwwex */, PPC::EVSTWWEX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5867 /* evstwwo */, PPC::EVSTWWO, Convert__RegSPERC1_0__DispSPE41_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPERC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 5875 /* evstwwox */, PPC::EVSTWWOX, Convert__RegSPERC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5884 /* evsubfsmiaaw */, PPC::EVSUBFSMIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5897 /* evsubfssiaaw */, PPC::EVSUBFSSIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5910 /* evsubfumiaaw */, PPC::EVSUBFUMIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5923 /* evsubfusiaaw */, PPC::EVSUBFUSIAAW, Convert__RegSPERC1_0__RegSPERC1_1, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC }, },
  { 5936 /* evsubfw */, PPC::EVSUBFW, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5944 /* evsubifw */, PPC::EVSUBIFW, Convert__RegSPERC1_0__U5Imm1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_U5Imm, MCK_RegSPERC }, },
  { 5953 /* evxor */, PPC::EVXOR, Convert__RegSPERC1_0__RegSPERC1_1__RegSPERC1_2, AMFBS_None, { MCK_RegSPERC, MCK_RegSPERC, MCK_RegSPERC }, },
  { 5959 /* extldi */, PPC::EXTLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5959 /* extldi */, PPC::EXTLDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5966 /* extlwi */, PPC::EXTLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5966 /* extlwi */, PPC::EXTLWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5973 /* extrdi */, PPC::EXTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5973 /* extrdi */, PPC::EXTRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5980 /* extrwi */, PPC::EXTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5980 /* extrwi */, PPC::EXTRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5987 /* extsb */, PPC::EXTSB, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5987 /* extsb */, PPC::EXTSB_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5993 /* extsh */, PPC::EXTSH, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5993 /* extsh */, PPC::EXTSH_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5999 /* extsw */, PPC::EXTSW, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 5999 /* extsw */, PPC::EXTSW_rec, Convert__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6005 /* extswsli */, PPC::EXTSWSLI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6005 /* extswsli */, PPC::EXTSWSLI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6014 /* fabs */, PPC::FABSS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6014 /* fabs */, PPC::FABSS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6019 /* fadd */, PPC::FADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6019 /* fadd */, PPC::FADD_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6024 /* fadds */, PPC::FADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6024 /* fadds */, PPC::FADDS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6030 /* fcfid */, PPC::FCFID, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6030 /* fcfid */, PPC::FCFID_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6036 /* fcfids */, PPC::FCFIDS, Convert__RegF4RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 6036 /* fcfids */, PPC::FCFIDS_rec, Convert__RegF4RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 6043 /* fcfidu */, PPC::FCFIDU, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6043 /* fcfidu */, PPC::FCFIDU_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6050 /* fcfidus */, PPC::FCFIDUS, Convert__RegF4RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 6050 /* fcfidus */, PPC::FCFIDUS_rec, Convert__RegF4RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 6058 /* fcmpo */, PPC::FCMPOS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6064 /* fcmpu */, PPC::FCMPUS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6070 /* fcpsgn */, PPC::FCPSGNS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6070 /* fcpsgn */, PPC::FCPSGNS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6077 /* fctid */, PPC::FCTID, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6077 /* fctid */, PPC::FCTID_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6083 /* fctidu */, PPC::FCTIDU, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6083 /* fctidu */, PPC::FCTIDU_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6090 /* fctiduz */, PPC::FCTIDUZ, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6090 /* fctiduz */, PPC::FCTIDUZ_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6098 /* fctidz */, PPC::FCTIDZ, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6098 /* fctidz */, PPC::FCTIDZ_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6105 /* fctiw */, PPC::FCTIW, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6105 /* fctiw */, PPC::FCTIW_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6111 /* fctiwu */, PPC::FCTIWU, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6111 /* fctiwu */, PPC::FCTIWU_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6118 /* fctiwuz */, PPC::FCTIWUZ, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6118 /* fctiwuz */, PPC::FCTIWUZ_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6126 /* fctiwz */, PPC::FCTIWZ, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6126 /* fctiwz */, PPC::FCTIWZ_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6133 /* fdiv */, PPC::FDIV, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6133 /* fdiv */, PPC::FDIV_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6138 /* fdivs */, PPC::FDIVS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6138 /* fdivs */, PPC::FDIVS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6144 /* fmadd */, PPC::FMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6144 /* fmadd */, PPC::FMADD_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6150 /* fmadds */, PPC::FMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6150 /* fmadds */, PPC::FMADDS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6157 /* fmr */, PPC::FMR, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6157 /* fmr */, PPC::FMR_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6161 /* fmsub */, PPC::FMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6161 /* fmsub */, PPC::FMSUB_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6167 /* fmsubs */, PPC::FMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6167 /* fmsubs */, PPC::FMSUBS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6174 /* fmul */, PPC::FMUL, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6174 /* fmul */, PPC::FMUL_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6179 /* fmuls */, PPC::FMULS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6179 /* fmuls */, PPC::FMULS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6185 /* fnabs */, PPC::FNABSS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6185 /* fnabs */, PPC::FNABSS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6191 /* fneg */, PPC::FNEGS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6191 /* fneg */, PPC::FNEGS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6196 /* fnmadd */, PPC::FNMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6196 /* fnmadd */, PPC::FNMADD_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6203 /* fnmadds */, PPC::FNMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6203 /* fnmadds */, PPC::FNMADDS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6211 /* fnmsub */, PPC::FNMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6211 /* fnmsub */, PPC::FNMSUB_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6218 /* fnmsubs */, PPC::FNMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6218 /* fnmsubs */, PPC::FNMSUBS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6226 /* fre */, PPC::FRE, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6226 /* fre */, PPC::FRE_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6230 /* fres */, PPC::FRES, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6230 /* fres */, PPC::FRES_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6235 /* frim */, PPC::FRIMS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6235 /* frim */, PPC::FRIMS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6240 /* frin */, PPC::FRINS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6240 /* frin */, PPC::FRINS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6245 /* frip */, PPC::FRIPS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6245 /* frip */, PPC::FRIPS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6250 /* friz */, PPC::FRIZS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6250 /* friz */, PPC::FRIZS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6255 /* frsp */, PPC::FRSP, Convert__RegF4RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 6255 /* frsp */, PPC::FRSP_rec, Convert__RegF4RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 6260 /* frsqrte */, PPC::FRSQRTE, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6260 /* frsqrte */, PPC::FRSQRTE_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6268 /* frsqrtes */, PPC::FRSQRTES, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6268 /* frsqrtes */, PPC::FRSQRTES_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6277 /* fsel */, PPC::FSELS, Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6277 /* fsel */, PPC::FSELS_rec, Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6282 /* fsqrt */, PPC::FSQRT, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 6282 /* fsqrt */, PPC::FSQRT_rec, Convert__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6288 /* fsqrts */, PPC::FSQRTS, Convert__RegF4RC1_0__RegF4RC1_1, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 6288 /* fsqrts */, PPC::FSQRTS_rec, Convert__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6295 /* fsub */, PPC::FSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6295 /* fsub */, PPC::FSUB_rec, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6300 /* fsubs */, PPC::FSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6300 /* fsubs */, PPC::FSUBS_rec, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 6306 /* ftdiv */, PPC::FTDIV, Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 6312 /* ftsqrt */, PPC::FTSQRT, Convert__RegCRRC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegF8RC }, },
  { 6319 /* hashchk */, PPC::HASHCHK, Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRIHash, MCK_RegGxRCNoR0 }, },
  { 6327 /* hashchkp */, PPC::HASHCHKP, Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRIHash, MCK_RegGxRCNoR0 }, },
  { 6336 /* hashst */, PPC::HASHST, Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRIHash, MCK_RegGxRCNoR0 }, },
  { 6343 /* hashstp */, PPC::HASHSTP, Convert__RegGPRC1_0__DispRIHash1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRIHash, MCK_RegGxRCNoR0 }, },
  { 6351 /* hrfid */, PPC::HRFID, Convert_NoOperands, AMFBS_None, {  }, },
  { 6357 /* hwsync */, PPC::SYNC, Convert__imm_95_0, AMFBS_None, {  }, },
  { 6364 /* icbi */, PPC::ICBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6369 /* icbiep */, PPC::ICBIEP, Convert__RegGxRCNoR01_0__RegGxRC1_1, AMFBS_None, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6376 /* icblc */, PPC::ICBLC, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6382 /* icblq */, PPC::ICBLQ, Convert__U4Imm1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6388 /* icbt */, PPC::ICBT, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6393 /* icbtls */, PPC::ICBTLS, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6400 /* iccci */, PPC::ICCCI, Convert__regR0__regR0, AMFBS_None, {  }, },
  { 6400 /* iccci */, PPC::ICCCI, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6406 /* ici */, PPC::ICCCI, Convert__regR0__regR0, AMFBS_None, { MCK_0 }, },
  { 6410 /* inslwi */, PPC::INSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6410 /* inslwi */, PPC::INSLWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6417 /* insrdi */, PPC::INSRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6417 /* insrdi */, PPC::INSRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6424 /* insrwi */, PPC::INSRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6424 /* insrwi */, PPC::INSRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6431 /* isel */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 6436 /* iseleq */, PPC::ISEL8, Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0EQ, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_RegG8RC }, },
  { 6436 /* iseleq */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0EQ, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC }, },
  { 6443 /* iselgt */, PPC::ISEL8, Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0GT, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_RegG8RC }, },
  { 6443 /* iselgt */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0GT, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC }, },
  { 6450 /* isellt */, PPC::ISEL8, Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__regCR0LT, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_RegG8RC }, },
  { 6450 /* isellt */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__regCR0LT, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC }, },
  { 6457 /* isync */, PPC::ISYNC, Convert_NoOperands, AMFBS_None, {  }, },
  { 6463 /* la */, PPC::LAx, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6466 /* lbarx */, PPC::LBARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6466 /* lbarx */, PPC::LBARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6472 /* lbepx */, PPC::LBEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6478 /* lbz */, PPC::LBZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6482 /* lbzcix */, PPC::LBZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6489 /* lbzu */, PPC::LBZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6494 /* lbzux */, PPC::LBZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6500 /* lbzx */, PPC::LBZXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 6500 /* lbzx */, PPC::LBZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6505 /* ld */, PPC::LD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6508 /* ldarx */, PPC::LDARX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6508 /* ldarx */, PPC::LDARXL, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6514 /* ldat */, PPC::LDAT, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 6519 /* ldbrx */, PPC::LDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6525 /* ldcix */, PPC::LDCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6531 /* ldu */, PPC::LDU, Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6535 /* ldux */, PPC::LDUX, Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6540 /* ldx */, PPC::LDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6540 /* ldx */, PPC::LDXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 6544 /* lfd */, PPC::LFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6548 /* lfdepx */, PPC::LFDEPX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6555 /* lfdu */, PPC::LFDU, Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6560 /* lfdux */, PPC::LFDUX, Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6566 /* lfdx */, PPC::LFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6571 /* lfiwax */, PPC::LFIWAX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6578 /* lfiwzx */, PPC::LFIWZX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6585 /* lfs */, PPC::LFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6589 /* lfsu */, PPC::LFSU, Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6594 /* lfsux */, PPC::LFSUX, Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6600 /* lfsx */, PPC::LFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6605 /* lha */, PPC::LHA, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6609 /* lharx */, PPC::LHARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6609 /* lharx */, PPC::LHARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6615 /* lhau */, PPC::LHAU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6620 /* lhaux */, PPC::LHAUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6626 /* lhax */, PPC::LHAX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6631 /* lhbrx */, PPC::LHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6637 /* lhepx */, PPC::LHEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6643 /* lhz */, PPC::LHZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6647 /* lhzcix */, PPC::LHZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6654 /* lhzu */, PPC::LHZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6659 /* lhzux */, PPC::LHZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6665 /* lhzx */, PPC::LHZXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 6665 /* lhzx */, PPC::LHZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6670 /* li */, PPC::ADDI8, Convert__RegG8RC1_0__regZERO8__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6670 /* li */, PPC::LI, Convert__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 6670 /* li */, PPC::ADDI, Convert__RegGPRC1_0__regZERO__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 6673 /* lis */, PPC::ADDIS8, Convert__RegG8RC1_0__regZERO8__S17Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S17Imm }, },
  { 6673 /* lis */, PPC::LIS, Convert__RegGPRC1_0__S17Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S17Imm }, },
  { 6673 /* lis */, PPC::ADDIS, Convert__RegGPRC1_0__regZERO__S17Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S17Imm }, },
  { 6677 /* lmw */, PPC::LMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6681 /* lnia */, PPC::ADDPCIS, Convert__RegG8RC1_0__imm_95_0, AMFBS_None, { MCK_RegG8RC }, },
  { 6686 /* lq */, PPC::LQ, Convert__RegG8pRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8pRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 6689 /* lqarx */, PPC::LQARX, Convert__RegG8pRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8pRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6689 /* lqarx */, PPC::LQARXL, Convert__RegG8pRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8pRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6695 /* lswi */, PPC::LSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6700 /* lvebx */, PPC::LVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6706 /* lvehx */, PPC::LVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6712 /* lvewx */, PPC::LVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6718 /* lvsl */, PPC::LVSL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6723 /* lvsr */, PPC::LVSR, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6728 /* lvx */, PPC::LVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6732 /* lvxl */, PPC::LVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6737 /* lwa */, PPC::LWA, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6741 /* lwarx */, PPC::LWARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6741 /* lwarx */, PPC::LWARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 6747 /* lwat */, PPC::LWAT, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6752 /* lwaux */, PPC::LWAUX, Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6758 /* lwax */, PPC::LWAX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6763 /* lwbrx */, PPC::LWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6769 /* lwepx */, PPC::LWEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6775 /* lwsync */, PPC::SYNC, Convert__imm_95_1, AMFBS_None, {  }, },
  { 6782 /* lwz */, PPC::LWZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6782 /* lwz */, PPC::SPELWZ, Convert__RegSPE4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPE4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6786 /* lwzcix */, PPC::LWZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6793 /* lwzu */, PPC::LWZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6798 /* lwzux */, PPC::LWZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6804 /* lwzx */, PPC::LWZXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 6804 /* lwzx */, PPC::LWZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6804 /* lwzx */, PPC::SPELWZX, Convert__RegSPE4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6809 /* lxsd */, PPC::LXSD, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6814 /* lxsdx */, PPC::LXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6820 /* lxsibzx */, PPC::LXSIBZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6828 /* lxsihzx */, PPC::LXSIHZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6836 /* lxsiwax */, PPC::LXSIWAX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6844 /* lxsiwzx */, PPC::LXSIWZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6852 /* lxssp */, PPC::LXSSP, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6858 /* lxsspx */, PPC::LXSSPX, Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6865 /* lxv */, PPC::LXV, Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 6869 /* lxvb16x */, PPC::LXVB16X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6877 /* lxvd2x */, PPC::LXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6884 /* lxvdsx */, PPC::LXVDSX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6891 /* lxvh8x */, PPC::LXVH8X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6898 /* lxvkq */, PPC::LXVKQ, Convert__RegVSRC1_0__U5Imm1_1, AMFBS_None, { MCK_RegVSRC, MCK_U5Imm }, },
  { 6904 /* lxvl */, PPC::LXVL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 6909 /* lxvll */, PPC::LXVLL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 6915 /* lxvp */, PPC::LXVP, Convert__RegVSRpRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 6920 /* lxvprl */, PPC::LXVPRL, Convert__RegVSRpRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_Imm, MCK_RegG8RC }, },
  { 6927 /* lxvprll */, PPC::LXVPRLL, Convert__RegVSRpRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_Imm, MCK_RegG8RC }, },
  { 6935 /* lxvpx */, PPC::LXVPX, Convert__RegVSRpRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6941 /* lxvrbx */, PPC::LXVRBX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6948 /* lxvrdx */, PPC::LXVRDX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6955 /* lxvrhx */, PPC::LXVRHX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6962 /* lxvrl */, PPC::LXVRL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 6968 /* lxvrll */, PPC::LXVRLL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 6975 /* lxvrwx */, PPC::LXVRWX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6982 /* lxvw4x */, PPC::LXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6989 /* lxvwsx */, PPC::LXVWSX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6996 /* lxvx */, PPC::LXVX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7001 /* maddhd */, PPC::MADDHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 7008 /* maddhdu */, PPC::MADDHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 7016 /* maddld */, PPC::MADDLD, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7023 /* mbar */, PPC::MBAR, Convert__imm_95_0, AMFBS_None, {  }, },
  { 7023 /* mbar */, PPC::MBAR, Convert__U5Imm1_0, AMFBS_None, { MCK_U5Imm }, },
  { 7028 /* mcrf */, PPC::MCRF, Convert__RegCRRC1_0__RegCRRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 7033 /* mcrfs */, PPC::MCRFS, Convert__RegCRRC1_0__RegCRRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 7039 /* mcrxrx */, PPC::MCRXRX, Convert__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 7046 /* mfamr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_29, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7046 /* mfamr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_29, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7052 /* mfasr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_280, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7052 /* mfasr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_280, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7058 /* mfbhrbe */, PPC::MFBHRBE, Convert__RegGPRC1_0__U10Imm1_1__imm_95_0, AMFBS_None, { MCK_RegGPRC, MCK_U10Imm }, },
  { 7066 /* mfbr0 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_128, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7072 /* mfbr1 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_129, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7078 /* mfbr2 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_130, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7084 /* mfbr3 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_131, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7090 /* mfbr4 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_132, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7096 /* mfbr5 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_133, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7102 /* mfbr6 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_134, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7108 /* mfbr7 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_135, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7114 /* mfcfar */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_28, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7114 /* mfcfar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_28, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7121 /* mfcr */, PPC::MFCR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7126 /* mfctr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_9, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7126 /* mfctr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_9, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7126 /* mfctr */, PPC::MFCTR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7132 /* mfdar */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_19, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7132 /* mfdar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_19, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7138 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_537, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7138 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_539, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7138 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_541, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7138 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_543, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7146 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_536, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7146 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_538, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7146 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_540, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7146 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_542, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7154 /* mfdccr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1018, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7161 /* mfdcr */, PPC::MFDCR, Convert__RegGPRC1_0__Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_Imm }, },
  { 7167 /* mfdear */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_981, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7174 /* mfdec */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_22, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7174 /* mfdec */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_22, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7180 /* mfdscr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_17, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7180 /* mfdscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_17, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7187 /* mfdsisr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_18, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7187 /* mfdsisr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_18, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7195 /* mfesr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_980, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7201 /* mffprd */, PPC::MFVSRD, Convert__RegG8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegF8RC }, },
  { 7208 /* mffprwz */, PPC::MFVSRWZ, Convert__RegGPRC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegF8RC }, },
  { 7216 /* mffs */, PPC::MFFS, Convert__RegF8RC1_0, AMFBS_None, { MCK_RegF8RC }, },
  { 7216 /* mffs */, PPC::MFFS_rec, Convert__RegF8RC1_1, AMFBS_None, { MCK__DOT_, MCK_RegF8RC }, },
  { 7221 /* mffscdrn */, PPC::MFFSCDRN, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 7230 /* mffscdrni */, PPC::MFFSCDRNI, Convert__RegF8RC1_0__U3Imm1_1, AMFBS_None, { MCK_RegF8RC, MCK_U3Imm }, },
  { 7240 /* mffsce */, PPC::MFFSCE, Convert__RegF8RC1_0, AMFBS_None, { MCK_RegF8RC }, },
  { 7247 /* mffscrn */, PPC::MFFSCRN, Convert__RegF8RC1_0__RegF8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 7255 /* mffscrni */, PPC::MFFSCRNI, Convert__RegF8RC1_0__U2Imm1_1, AMFBS_None, { MCK_RegF8RC, MCK_U2Imm }, },
  { 7264 /* mffsl */, PPC::MFFSL, Convert__RegF8RC1_0, AMFBS_None, { MCK_RegF8RC }, },
  { 7270 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_529, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7270 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_531, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7270 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_533, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7270 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_535, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7278 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_528, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7278 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_530, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7278 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_532, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7278 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_534, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7286 /* mficcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1019, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7293 /* mflr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_8, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7293 /* mflr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_8, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7293 /* mflr */, PPC::MFLR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7298 /* mfmsr */, PPC::MFMSR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7304 /* mfocrf */, PPC::MFOCRF, Convert__RegGPRC1_0__CRBitMask1_1, AMFBS_None, { MCK_RegGPRC, MCK_CRBitMask }, },
  { 7311 /* mfpid */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_48, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7317 /* mfpmr */, PPC::MFPMR, Convert__RegGPRC1_0__Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_Imm }, },
  { 7323 /* mfppr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_896, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7329 /* mfpvr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_287, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7329 /* mfpvr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_287, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7335 /* mfrtcl */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_5, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7335 /* mfrtcl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_5, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7342 /* mfrtcu */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_4, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7342 /* mfrtcu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_4, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7349 /* mfsdr1 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_25, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7349 /* mfsdr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_25, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7356 /* mfspefscr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_512, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7356 /* mfspefscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_512, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7366 /* mfspr */, PPC::MFUDSCR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC, MCK_3 }, },
  { 7366 /* mfspr */, PPC::MFSPR, Convert__RegGPRC1_0__Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_Imm }, },
  { 7372 /* mfsprg */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_272, AMFBS_ModernAs, { MCK_RegG8RC, MCK_0 }, },
  { 7372 /* mfsprg */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_273, AMFBS_ModernAs, { MCK_RegG8RC, MCK_1 }, },
  { 7372 /* mfsprg */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_274, AMFBS_ModernAs, { MCK_RegG8RC, MCK_2 }, },
  { 7372 /* mfsprg */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_275, AMFBS_ModernAs, { MCK_RegG8RC, MCK_3 }, },
  { 7372 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_272, AMFBS_ModernAs, { MCK_RegGPRC, MCK_0 }, },
  { 7372 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_273, AMFBS_ModernAs, { MCK_RegGPRC, MCK_1 }, },
  { 7372 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_274, AMFBS_ModernAs, { MCK_RegGPRC, MCK_2 }, },
  { 7372 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_275, AMFBS_ModernAs, { MCK_RegGPRC, MCK_3 }, },
  { 7372 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_260, AMFBS_ModernAs, { MCK_RegGPRC, MCK_4 }, },
  { 7372 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_261, AMFBS_ModernAs, { MCK_RegGPRC, MCK_5 }, },
  { 7372 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_262, AMFBS_ModernAs, { MCK_RegGPRC, MCK_6 }, },
  { 7372 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_263, AMFBS_ModernAs, { MCK_RegGPRC, MCK_7 }, },
  { 7379 /* mfsprg0 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_272, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7379 /* mfsprg0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_272, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7387 /* mfsprg1 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_273, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7387 /* mfsprg1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_273, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7395 /* mfsprg2 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_274, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7395 /* mfsprg2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_274, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7403 /* mfsprg3 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_275, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7403 /* mfsprg3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_275, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7411 /* mfsprg4 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_260, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7419 /* mfsprg5 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_261, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7427 /* mfsprg6 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_262, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7435 /* mfsprg7 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_263, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7443 /* mfsr */, PPC::MFSR, Convert__RegGPRC1_0__U4Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_U4Imm }, },
  { 7448 /* mfsrin */, PPC::MFSRIN, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7455 /* mfsrr0 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_26, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7455 /* mfsrr0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_26, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7462 /* mfsrr1 */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_27, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7462 /* mfsrr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_27, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7469 /* mfsrr2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_990, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7476 /* mfsrr3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_991, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7483 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_268, AMFBS_None, { MCK_RegGPRC }, },
  { 7483 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_Imm }, },
  { 7488 /* mftbhi */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_988, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7495 /* mftbl */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_268, AMFBS_None, { MCK_RegGPRC }, },
  { 7501 /* mftblo */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_989, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7508 /* mftbu */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_269, AMFBS_None, { MCK_RegGPRC }, },
  { 7514 /* mftcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_986, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7520 /* mfuamr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_13, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7520 /* mfuamr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_13, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7527 /* mfudscr */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_3, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7527 /* mfudscr */, PPC::MFUDSCR, Convert__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7527 /* mfudscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_3, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7535 /* mfvrd */, PPC::MFVRD, Convert__RegG8RC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC }, },
  { 7541 /* mfvrsave */, PPC::MFVRSAVE, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7550 /* mfvrwz */, PPC::MFVRWZ, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 7557 /* mfvscr */, PPC::MFVSCR, Convert__RegVRRC1_0, AMFBS_None, { MCK_RegVRRC }, },
  { 7564 /* mfvsrd */, PPC::MFVSRD, Convert__RegG8RC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 7571 /* mfvsrld */, PPC::MFVSRLD, Convert__RegG8RC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVSRC }, },
  { 7579 /* mfvsrwz */, PPC::MFVSRWZ, Convert__RegGPRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVSFRC }, },
  { 7587 /* mfxer */, PPC::MFSPR8, Convert__RegG8RC1_0__imm_95_1, AMFBS_None, { MCK_RegG8RC }, },
  { 7587 /* mfxer */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1, AMFBS_None, { MCK_RegGPRC }, },
  { 7593 /* modsd */, PPC::MODSD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 7599 /* modsw */, PPC::MODSW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7605 /* modud */, PPC::MODUD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 7611 /* moduw */, PPC::MODUW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7617 /* mr */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7617 /* mr */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7617 /* mr */, PPC::OR8_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 7617 /* mr */, PPC::OR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7620 /* msgsync */, PPC::MSGSYNC, Convert_NoOperands, AMFBS_None, {  }, },
  { 7628 /* msync */, PPC::SYNC, Convert__imm_95_0, AMFBS_None, {  }, },
  { 7634 /* mtamr */, PPC::MTSPR8, Convert__imm_95_29__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7634 /* mtamr */, PPC::MTSPR, Convert__imm_95_29__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7640 /* mtasr */, PPC::MTSPR8, Convert__imm_95_280__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7640 /* mtasr */, PPC::MTSPR, Convert__imm_95_280__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7646 /* mtbr0 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_128, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7652 /* mtbr1 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_129, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7658 /* mtbr2 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_130, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7664 /* mtbr3 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_131, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7670 /* mtbr4 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_132, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7676 /* mtbr5 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_133, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7682 /* mtbr6 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_134, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7688 /* mtbr7 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_135, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7694 /* mtcfar */, PPC::MTSPR8, Convert__imm_95_28__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7694 /* mtcfar */, PPC::MTSPR, Convert__imm_95_28__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7701 /* mtcr */, PPC::MTCRF8, Convert__imm_95_255__RegG8RC1_0, AMFBS_None, { MCK_RegG8RC }, },
  { 7701 /* mtcr */, PPC::MTCRF, Convert__imm_95_255__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7706 /* mtcrf */, PPC::MTCRF, Convert__Imm1_0__RegGPRC1_1, AMFBS_None, { MCK_Imm, MCK_RegGPRC }, },
  { 7712 /* mtctr */, PPC::MTSPR8, Convert__imm_95_9__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7712 /* mtctr */, PPC::MTSPR, Convert__imm_95_9__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7712 /* mtctr */, PPC::MTCTR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7718 /* mtdar */, PPC::MTSPR8, Convert__imm_95_19__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7718 /* mtdar */, PPC::MTSPR, Convert__imm_95_19__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7724 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_537__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7724 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_539__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7724 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_541__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7724 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_543__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7732 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_536__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7732 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_538__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7732 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_540__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7732 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_542__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7740 /* mtdccr */, PPC::MTSPR, Convert__imm_95_1018__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7747 /* mtdcr */, PPC::MTDCR, Convert__RegGPRC1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_RegGPRC }, },
  { 7753 /* mtdear */, PPC::MTSPR, Convert__imm_95_981__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7760 /* mtdec */, PPC::MTSPR8, Convert__imm_95_22__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7760 /* mtdec */, PPC::MTSPR, Convert__imm_95_22__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7766 /* mtdscr */, PPC::MTSPR8, Convert__imm_95_17__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7766 /* mtdscr */, PPC::MTSPR, Convert__imm_95_17__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7773 /* mtdsisr */, PPC::MTSPR8, Convert__imm_95_18__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7773 /* mtdsisr */, PPC::MTSPR, Convert__imm_95_18__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7781 /* mtesr */, PPC::MTSPR, Convert__imm_95_980__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7787 /* mtfprd */, PPC::MTVSRD, Convert__RegF8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegG8RC }, },
  { 7794 /* mtfprwa */, PPC::MTVSRWA, Convert__RegF8RC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegGPRC }, },
  { 7802 /* mtfprwz */, PPC::MTVSRWZ, Convert__RegF8RC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegF8RC, MCK_RegGPRC }, },
  { 7810 /* mtfsb0 */, PPC::MTFSB0, Convert__U5Imm1_0, AMFBS_None, { MCK_U5Imm }, },
  { 7817 /* mtfsb1 */, PPC::MTFSB1, Convert__U5Imm1_0, AMFBS_None, { MCK_U5Imm }, },
  { 7824 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0, AMFBS_None, { MCK_Imm, MCK_RegF8RC }, },
  { 7824 /* mtfsf */, PPC::MTFSF_rec, Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0, AMFBS_None, { MCK__DOT_, MCK_Imm, MCK_RegF8RC }, },
  { 7824 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1__U1Imm1_2__Imm1_3, AMFBS_None, { MCK_Imm, MCK_RegF8RC, MCK_U1Imm, MCK_Imm }, },
  { 7824 /* mtfsf */, PPC::MTFSF_rec, Convert__Imm1_1__RegF8RC1_2__U1Imm1_3__Imm1_4, AMFBS_None, { MCK__DOT_, MCK_Imm, MCK_RegF8RC, MCK_U1Imm, MCK_Imm }, },
  { 7830 /* mtfsfi */, PPC::MTFSFI, Convert__U3Imm1_0__U4Imm1_1__imm_95_0, AMFBS_None, { MCK_U3Imm, MCK_U4Imm }, },
  { 7830 /* mtfsfi */, PPC::MTFSFI_rec, Convert__U3Imm1_1__U4Imm1_2__imm_95_0, AMFBS_None, { MCK__DOT_, MCK_U3Imm, MCK_U4Imm }, },
  { 7830 /* mtfsfi */, PPC::MTFSFI, Convert__U3Imm1_0__U4Imm1_1__Imm1_2, AMFBS_None, { MCK_U3Imm, MCK_U4Imm, MCK_Imm }, },
  { 7830 /* mtfsfi */, PPC::MTFSFI_rec, Convert__U3Imm1_1__U4Imm1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_U3Imm, MCK_U4Imm, MCK_U1Imm }, },
  { 7837 /* mtibatl */, PPC::MTSPR, Convert__imm_95_529__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7837 /* mtibatl */, PPC::MTSPR, Convert__imm_95_531__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7837 /* mtibatl */, PPC::MTSPR, Convert__imm_95_533__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7837 /* mtibatl */, PPC::MTSPR, Convert__imm_95_535__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7845 /* mtibatu */, PPC::MTSPR, Convert__imm_95_528__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7845 /* mtibatu */, PPC::MTSPR, Convert__imm_95_530__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7845 /* mtibatu */, PPC::MTSPR, Convert__imm_95_532__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7845 /* mtibatu */, PPC::MTSPR, Convert__imm_95_534__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7853 /* mticcr */, PPC::MTSPR, Convert__imm_95_1019__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7860 /* mtlr */, PPC::MTSPR8, Convert__imm_95_8__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7860 /* mtlr */, PPC::MTSPR, Convert__imm_95_8__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7860 /* mtlr */, PPC::MTLR, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 7865 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__imm_95_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7865 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__U1Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_U1Imm }, },
  { 7871 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__imm_95_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7871 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__U1Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_U1Imm }, },
  { 7878 /* mtocrf */, PPC::MTOCRF, Convert__CRBitMask1_0__RegGPRC1_1, AMFBS_None, { MCK_CRBitMask, MCK_RegGPRC }, },
  { 7885 /* mtpid */, PPC::MTSPR, Convert__imm_95_48__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7891 /* mtpmr */, PPC::MTPMR, Convert__Imm1_0__RegGPRC1_1, AMFBS_None, { MCK_Imm, MCK_RegGPRC }, },
  { 7897 /* mtppr */, PPC::MTSPR, Convert__imm_95_896__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7903 /* mtsdr1 */, PPC::MTSPR8, Convert__imm_95_25__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7903 /* mtsdr1 */, PPC::MTSPR, Convert__imm_95_25__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7910 /* mtspefscr */, PPC::MTSPR8, Convert__imm_95_512__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7910 /* mtspefscr */, PPC::MTSPR, Convert__imm_95_512__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7920 /* mtspr */, PPC::MTUDSCR, Convert__RegGPRC1_1, AMFBS_None, { MCK_3, MCK_RegGPRC }, },
  { 7920 /* mtspr */, PPC::MTSPR, Convert__Imm1_0__RegGPRC1_1, AMFBS_None, { MCK_Imm, MCK_RegGPRC }, },
  { 7926 /* mtsprg */, PPC::MTSPR8, Convert__imm_95_272__RegG8RC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegG8RC }, },
  { 7926 /* mtsprg */, PPC::MTSPR, Convert__imm_95_272__RegGPRC1_1, AMFBS_ModernAs, { MCK_0, MCK_RegGPRC }, },
  { 7926 /* mtsprg */, PPC::MTSPR8, Convert__imm_95_273__RegG8RC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegG8RC }, },
  { 7926 /* mtsprg */, PPC::MTSPR, Convert__imm_95_273__RegGPRC1_1, AMFBS_ModernAs, { MCK_1, MCK_RegGPRC }, },
  { 7926 /* mtsprg */, PPC::MTSPR8, Convert__imm_95_274__RegG8RC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegG8RC }, },
  { 7926 /* mtsprg */, PPC::MTSPR, Convert__imm_95_274__RegGPRC1_1, AMFBS_ModernAs, { MCK_2, MCK_RegGPRC }, },
  { 7926 /* mtsprg */, PPC::MTSPR8, Convert__imm_95_275__RegG8RC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegG8RC }, },
  { 7926 /* mtsprg */, PPC::MTSPR, Convert__imm_95_275__RegGPRC1_1, AMFBS_ModernAs, { MCK_3, MCK_RegGPRC }, },
  { 7926 /* mtsprg */, PPC::MTSPR, Convert__imm_95_260__RegGPRC1_1, AMFBS_ModernAs, { MCK_4, MCK_RegGPRC }, },
  { 7926 /* mtsprg */, PPC::MTSPR, Convert__imm_95_261__RegGPRC1_1, AMFBS_ModernAs, { MCK_5, MCK_RegGPRC }, },
  { 7926 /* mtsprg */, PPC::MTSPR, Convert__imm_95_262__RegGPRC1_1, AMFBS_ModernAs, { MCK_6, MCK_RegGPRC }, },
  { 7926 /* mtsprg */, PPC::MTSPR, Convert__imm_95_263__RegGPRC1_1, AMFBS_ModernAs, { MCK_7, MCK_RegGPRC }, },
  { 7933 /* mtsprg0 */, PPC::MTSPR8, Convert__imm_95_272__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7933 /* mtsprg0 */, PPC::MTSPR, Convert__imm_95_272__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7941 /* mtsprg1 */, PPC::MTSPR8, Convert__imm_95_273__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7941 /* mtsprg1 */, PPC::MTSPR, Convert__imm_95_273__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7949 /* mtsprg2 */, PPC::MTSPR8, Convert__imm_95_274__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7949 /* mtsprg2 */, PPC::MTSPR, Convert__imm_95_274__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7957 /* mtsprg3 */, PPC::MTSPR8, Convert__imm_95_275__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 7957 /* mtsprg3 */, PPC::MTSPR, Convert__imm_95_275__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7965 /* mtsprg4 */, PPC::MTSPR, Convert__imm_95_260__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7973 /* mtsprg5 */, PPC::MTSPR, Convert__imm_95_261__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7981 /* mtsprg6 */, PPC::MTSPR, Convert__imm_95_262__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7989 /* mtsprg7 */, PPC::MTSPR, Convert__imm_95_263__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 7997 /* mtsr */, PPC::MTSR, Convert__RegGPRC1_1__U4Imm1_0, AMFBS_None, { MCK_U4Imm, MCK_RegGPRC }, },
  { 8002 /* mtsrin */, PPC::MTSRIN, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8009 /* mtsrr0 */, PPC::MTSPR8, Convert__imm_95_26__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 8009 /* mtsrr0 */, PPC::MTSPR, Convert__imm_95_26__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8016 /* mtsrr1 */, PPC::MTSPR8, Convert__imm_95_27__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 8016 /* mtsrr1 */, PPC::MTSPR, Convert__imm_95_27__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8023 /* mtsrr2 */, PPC::MTSPR, Convert__imm_95_990__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8030 /* mtsrr3 */, PPC::MTSPR, Convert__imm_95_991__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8037 /* mttbhi */, PPC::MTSPR, Convert__imm_95_988__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8044 /* mttbl */, PPC::MTSPR8, Convert__imm_95_284__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 8044 /* mttbl */, PPC::MTSPR, Convert__imm_95_284__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8050 /* mttblo */, PPC::MTSPR, Convert__imm_95_989__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8057 /* mttbu */, PPC::MTSPR8, Convert__imm_95_285__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 8057 /* mttbu */, PPC::MTSPR, Convert__imm_95_285__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8063 /* mttcr */, PPC::MTSPR, Convert__imm_95_986__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8069 /* mtuamr */, PPC::MTSPR8, Convert__imm_95_13__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 8069 /* mtuamr */, PPC::MTSPR, Convert__imm_95_13__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8076 /* mtudscr */, PPC::MTSPR8, Convert__imm_95_3__RegG8RC1_0, AMFBS_ModernAs, { MCK_RegG8RC }, },
  { 8076 /* mtudscr */, PPC::MTUDSCR, Convert__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8076 /* mtudscr */, PPC::MTSPR, Convert__imm_95_3__RegGPRC1_0, AMFBS_ModernAs, { MCK_RegGPRC }, },
  { 8084 /* mtvrd */, PPC::MTVRD, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8090 /* mtvrsave */, PPC::MTVRSAVE, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 8099 /* mtvrwa */, PPC::MTVRWA, Convert__RegVRRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC }, },
  { 8106 /* mtvrwz */, PPC::MTVRWZ, Convert__RegVRRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC }, },
  { 8113 /* mtvscr */, PPC::MTVSCR, Convert__RegVRRC1_0, AMFBS_None, { MCK_RegVRRC }, },
  { 8120 /* mtvsrbm */, PPC::MTVSRBM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8128 /* mtvsrbmi */, PPC::MTVSRBMI, Convert__RegVRRC1_0__U16Imm1_1, AMFBS_None, { MCK_RegVRRC, MCK_U16Imm }, },
  { 8137 /* mtvsrd */, PPC::MTVSRD, Convert__RegVSFRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegG8RC }, },
  { 8144 /* mtvsrdd */, PPC::MTVSRDD, Convert__RegVSRC1_0__RegG8RCNoX01_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegG8RCNoX0, MCK_RegG8RC }, },
  { 8152 /* mtvsrdm */, PPC::MTVSRDM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8160 /* mtvsrhm */, PPC::MTVSRHM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8168 /* mtvsrqm */, PPC::MTVSRQM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8176 /* mtvsrwa */, PPC::MTVSRWA, Convert__RegVSFRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegGPRC }, },
  { 8184 /* mtvsrwm */, PPC::MTVSRWM, Convert__RegVRRC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC }, },
  { 8192 /* mtvsrws */, PPC::MTVSRWS, Convert__RegVSRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegGPRC }, },
  { 8200 /* mtvsrwz */, PPC::MTVSRWZ, Convert__RegVSFRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegGPRC }, },
  { 8208 /* mtxer */, PPC::MTSPR8, Convert__imm_95_1__RegG8RC1_0, AMFBS_None, { MCK_RegG8RC }, },
  { 8208 /* mtxer */, PPC::MTSPR, Convert__imm_95_1__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 8214 /* mulhd */, PPC::MULHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8214 /* mulhd */, PPC::MULHD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8220 /* mulhdu */, PPC::MULHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8220 /* mulhdu */, PPC::MULHDU_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8227 /* mulhw */, PPC::MULHW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8227 /* mulhw */, PPC::MULHW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8233 /* mulhwu */, PPC::MULHWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8233 /* mulhwu */, PPC::MULHWU_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8240 /* mulld */, PPC::MULLD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8240 /* mulld */, PPC::MULLD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8246 /* mulldo */, PPC::MULLDO, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8246 /* mulldo */, PPC::MULLDO_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8253 /* mulli */, PPC::MULLI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 8259 /* mullw */, PPC::MULLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8259 /* mullw */, PPC::MULLW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8265 /* mullwo */, PPC::MULLWO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8265 /* mullwo */, PPC::MULLWO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8272 /* nand */, PPC::NAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8272 /* nand */, PPC::NAND_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8277 /* nap */, PPC::NAP, Convert_NoOperands, AMFBS_None, {  }, },
  { 8281 /* neg */, PPC::NEG, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8281 /* neg */, PPC::NEG_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8285 /* nego */, PPC::NEGO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8285 /* nego */, PPC::NEGO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8290 /* nop */, PPC::NOP, Convert_NoOperands, AMFBS_None, {  }, },
  { 8290 /* nop */, PPC::ORI, Convert__regR0__regR0__imm_95_0, AMFBS_None, {  }, },
  { 8290 /* nop */, PPC::ORI8, Convert__regX0__regX0__imm_95_0, AMFBS_None, {  }, },
  { 8294 /* nor */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8294 /* nor */, PPC::NOR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8298 /* not */, PPC::NOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8298 /* not */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8298 /* not */, PPC::NOR8_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8298 /* not */, PPC::NOR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8302 /* or */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8302 /* or */, PPC::OR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8305 /* orc */, PPC::ORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8305 /* orc */, PPC::ORC_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8309 /* ori */, PPC::ORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 8313 /* oris */, PPC::ORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 8318 /* paddi */, PPC::PADDIpc, Convert__RegGPRC1_0__ImmZero1_1__S34Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_ImmZero, MCK_S34Imm, MCK_1 }, },
  { 8318 /* paddi */, PPC::PADDI, Convert__RegGPRC1_0__RegGPRC1_1__S34Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S34Imm, MCK_0 }, },
  { 8324 /* paste */, PPC::CP_PASTE_rec, Convert__RegGPRC1_1__RegGPRC1_2__imm_95_1, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8324 /* paste */, PPC::CP_PASTE_rec, Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U1Imm }, },
  { 8330 /* pdepd */, PPC::PDEPD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8336 /* pextd */, PPC::PEXTD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8342 /* plbz */, PPC::PLBZpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8342 /* plbz */, PPC::PLBZ, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8347 /* pld */, PPC::PLDpc, Convert__RegG8RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8347 /* pld */, PPC::PLD, Convert__RegG8RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8351 /* plfd */, PPC::PLFDpc, Convert__RegF8RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8351 /* plfd */, PPC::PLFD, Convert__RegF8RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8356 /* plfs */, PPC::PLFSpc, Convert__RegF4RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8356 /* plfs */, PPC::PLFS, Convert__RegF4RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8361 /* plha */, PPC::PLHApc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8361 /* plha */, PPC::PLHA, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8366 /* plhz */, PPC::PLHZpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8366 /* plhz */, PPC::PLHZ, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8371 /* pli */, PPC::PLI, Convert__RegGPRC1_0__S34Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S34Imm }, },
  { 8375 /* plwa */, PPC::PLWApc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8375 /* plwa */, PPC::PLWA, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8380 /* plwz */, PPC::PLWZpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8380 /* plwz */, PPC::PLWZ, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8385 /* plxsd */, PPC::PLXSDpc, Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8385 /* plxsd */, PPC::PLXSD, Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8391 /* plxssp */, PPC::PLXSSPpc, Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8391 /* plxssp */, PPC::PLXSSP, Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8398 /* plxv */, PPC::PLXVpc, Convert__RegVSRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8398 /* plxv */, PPC::PLXV, Convert__RegVSRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8403 /* plxvp */, PPC::PLXVPpc, Convert__RegVSRpRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8403 /* plxvp */, PPC::PLXVP, Convert__RegVSRpRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8409 /* pmxvbf16ger2 */, PPC::PMXVBF16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8422 /* pmxvbf16ger2nn */, PPC::PMXVBF16GER2NN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8437 /* pmxvbf16ger2np */, PPC::PMXVBF16GER2NP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8452 /* pmxvbf16ger2pn */, PPC::PMXVBF16GER2PN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8467 /* pmxvbf16ger2pp */, PPC::PMXVBF16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8482 /* pmxvf16ger2 */, PPC::PMXVF16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8494 /* pmxvf16ger2nn */, PPC::PMXVF16GER2NN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8508 /* pmxvf16ger2np */, PPC::PMXVF16GER2NP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8522 /* pmxvf16ger2pn */, PPC::PMXVF16GER2PN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8536 /* pmxvf16ger2pp */, PPC::PMXVF16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8550 /* pmxvf32ger */, PPC::PMXVF32GER, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8561 /* pmxvf32gernn */, PPC::PMXVF32GERNN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8574 /* pmxvf32gernp */, PPC::PMXVF32GERNP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8587 /* pmxvf32gerpn */, PPC::PMXVF32GERPN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8600 /* pmxvf32gerpp */, PPC::PMXVF32GERPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm }, },
  { 8613 /* pmxvf64ger */, PPC::PMXVF64GER, Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8624 /* pmxvf64gernn */, PPC::PMXVF64GERNN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8637 /* pmxvf64gernp */, PPC::PMXVF64GERNP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8650 /* pmxvf64gerpn */, PPC::PMXVF64GERPN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8663 /* pmxvf64gerpp */, PPC::PMXVF64GERPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2__U4Imm1_3__U2Imm1_4, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC, MCK_U4Imm, MCK_U2Imm }, },
  { 8676 /* pmxvi16ger2 */, PPC::PMXVI16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8688 /* pmxvi16ger2pp */, PPC::PMXVI16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8702 /* pmxvi16ger2s */, PPC::PMXVI16GER2S, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8715 /* pmxvi16ger2spp */, PPC::PMXVI16GER2SPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U2Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U2Imm }, },
  { 8730 /* pmxvi4ger8 */, PPC::PMXVI4GER8, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U8Imm }, },
  { 8741 /* pmxvi4ger8pp */, PPC::PMXVI4GER8PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U8Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U8Imm }, },
  { 8754 /* pmxvi8ger4 */, PPC::PMXVI8GER4, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8765 /* pmxvi8ger4pp */, PPC::PMXVI8GER4PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8778 /* pmxvi8ger4spp */, PPC::PMXVI8GER4SPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8792 /* popcntb */, PPC::POPCNTB, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8800 /* popcntd */, PPC::POPCNTD, Convert__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8808 /* popcntw */, PPC::POPCNTW, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8816 /* pstb */, PPC::PSTBpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8816 /* pstb */, PPC::PSTB, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8821 /* pstd */, PPC::PSTDpc, Convert__RegG8RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8821 /* pstd */, PPC::PSTD, Convert__RegG8RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8826 /* pstfd */, PPC::PSTFDpc, Convert__RegF8RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8826 /* pstfd */, PPC::PSTFD, Convert__RegF8RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8832 /* pstfs */, PPC::PSTFSpc, Convert__RegF4RC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8832 /* pstfs */, PPC::PSTFS, Convert__RegF4RC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8838 /* psth */, PPC::PSTHpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8838 /* psth */, PPC::PSTH, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8843 /* pstw */, PPC::PSTWpc, Convert__RegGPRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8843 /* pstw */, PPC::PSTW, Convert__RegGPRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8848 /* pstxsd */, PPC::PSTXSDpc, Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8848 /* pstxsd */, PPC::PSTXSD, Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8855 /* pstxssp */, PPC::PSTXSSPpc, Convert__RegVFRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8855 /* pstxssp */, PPC::PSTXSSP, Convert__RegVFRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8863 /* pstxv */, PPC::PSTXVpc, Convert__RegVSRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8863 /* pstxv */, PPC::PSTXV, Convert__RegVSRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8869 /* pstxvp */, PPC::PSTXVPpc, Convert__RegVSRpRC1_0__DispRI341_1__ImmZero1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRI34, MCK_ImmZero, MCK_1 }, },
  { 8869 /* pstxvp */, PPC::PSTXVP, Convert__RegVSRpRC1_0__DispRI341_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRI34, MCK_RegGxRCNoR0, MCK_0 }, },
  { 8876 /* ptesync */, PPC::SYNC, Convert__imm_95_2, AMFBS_None, {  }, },
  { 8884 /* rfci */, PPC::RFCI, Convert_NoOperands, AMFBS_None, {  }, },
  { 8889 /* rfdi */, PPC::RFDI, Convert_NoOperands, AMFBS_None, {  }, },
  { 8894 /* rfebb */, PPC::RFEBB, Convert__imm_95_1, AMFBS_None, {  }, },
  { 8894 /* rfebb */, PPC::RFEBB, Convert__U1Imm1_0, AMFBS_None, { MCK_U1Imm }, },
  { 8900 /* rfi */, PPC::RFI, Convert_NoOperands, AMFBS_None, {  }, },
  { 8904 /* rfid */, PPC::RFID, Convert_NoOperands, AMFBS_None, {  }, },
  { 8909 /* rfmci */, PPC::RFMCI, Convert_NoOperands, AMFBS_None, {  }, },
  { 8915 /* rldcl */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8915 /* rldcl */, PPC::RLDCL_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8921 /* rldcr */, PPC::RLDCR, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8921 /* rldcr */, PPC::RLDCR_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8927 /* rldic */, PPC::RLDIC, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8927 /* rldic */, PPC::RLDIC_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8933 /* rldicl */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8933 /* rldicl */, PPC::RLDICL_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8940 /* rldicr */, PPC::RLDICR, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8940 /* rldicr */, PPC::RLDICR_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8947 /* rldimi */, PPC::RLDIMI, Convert__RegG8RC1_0__Tie0_1_1__RegG8RC1_1__U6Imm1_2__U6Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8947 /* rldimi */, PPC::RLDIMI_rec, Convert__RegG8RC1_1__Tie0_1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8954 /* rlwimi */, PPC::RLWIMIbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8954 /* rlwimi */, PPC::RLWIMIbm_rec, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8954 /* rlwimi */, PPC::RLWIMI, Convert__RegGPRC1_0__Tie0_1_1__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8954 /* rlwimi */, PPC::RLWIMI_rec, Convert__RegGPRC1_1__Tie0_1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8961 /* rlwinm */, PPC::RLWINMbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8961 /* rlwinm */, PPC::RLWINMbm_rec, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8961 /* rlwinm */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8961 /* rlwinm */, PPC::RLWINM_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8968 /* rlwnm */, PPC::RLWNMbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8968 /* rlwnm */, PPC::RLWNMbm_rec, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8968 /* rlwnm */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 8968 /* rlwnm */, PPC::RLWNM_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 8974 /* rotld */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8974 /* rotld */, PPC::RLDCL_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8980 /* rotldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8980 /* rotldi */, PPC::RLDICL_32_64, Convert__RegG8RC1_0__RegGPRC1_1__U6Imm1_2__imm_95_0, AMFBS_None, { MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8980 /* rotldi */, PPC::RLDICL_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8987 /* rotlw */, PPC::RLWNM8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2__imm_95_0__imm_95_31, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8987 /* rotlw */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8987 /* rotlw */, PPC::RLWNM8_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3__imm_95_0__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8987 /* rotlw */, PPC::RLWNM_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8993 /* rotlwi */, PPC::RLWINM8, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__imm_95_0__imm_95_31, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 8993 /* rotlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8993 /* rotlwi */, PPC::RLWINM8_rec, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__imm_95_0__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 8993 /* rotlwi */, PPC::RLWINM_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9000 /* rotrdi */, PPC::ROTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9000 /* rotrdi */, PPC::ROTRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9007 /* rotrwi */, PPC::ROTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9007 /* rotrwi */, PPC::ROTRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9014 /* sc */, PPC::SC, Convert__imm_95_0, AMFBS_None, {  }, },
  { 9014 /* sc */, PPC::SC, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 9017 /* setb */, PPC::SETB, Convert__RegGPRC1_0__RegCRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRRC }, },
  { 9022 /* setbc */, PPC::SETBC, Convert__RegGPRC1_0__RegCRBITRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 9028 /* setbcr */, PPC::SETBCR, Convert__RegGPRC1_0__RegCRBITRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 9035 /* setnbc */, PPC::SETNBC, Convert__RegGPRC1_0__RegCRBITRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 9042 /* setnbcr */, PPC::SETNBCR, Convert__RegGPRC1_0__RegCRBITRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 9050 /* slbfee */, PPC::SLBFEE_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9057 /* slbia */, PPC::SLBIA, Convert_NoOperands, AMFBS_None, {  }, },
  { 9063 /* slbie */, PPC::SLBIE, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 9069 /* slbieg */, PPC::SLBIEG, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9076 /* slbmfee */, PPC::SLBMFEE, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9084 /* slbmfev */, PPC::SLBMFEV, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9092 /* slbmte */, PPC::SLBMTE, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9099 /* slbsync */, PPC::SLBSYNC, Convert_NoOperands, AMFBS_None, {  }, },
  { 9107 /* sld */, PPC::SLD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 9107 /* sld */, PPC::SLD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 9111 /* sldi */, PPC::SLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9111 /* sldi */, PPC::SLDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9116 /* slw */, PPC::SLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9116 /* slw */, PPC::SLW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9120 /* slwi */, PPC::SLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9120 /* slwi */, PPC::SLWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9125 /* srad */, PPC::SRAD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 9125 /* srad */, PPC::SRAD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 9130 /* sradi */, PPC::SRADI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9130 /* sradi */, PPC::SRADI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9136 /* sraw */, PPC::SRAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9136 /* sraw */, PPC::SRAW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9141 /* srawi */, PPC::SRAWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9141 /* srawi */, PPC::SRAWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9147 /* srd */, PPC::SRD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 9147 /* srd */, PPC::SRD_rec, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 9151 /* srdi */, PPC::SRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9151 /* srdi */, PPC::SRDI_rec, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 9156 /* srw */, PPC::SRW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9156 /* srw */, PPC::SRW_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9160 /* srwi */, PPC::SRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9160 /* srwi */, PPC::SRWI_rec, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9165 /* stb */, PPC::STB, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9169 /* stbcix */, PPC::STBCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9176 /* stbcx */, PPC::STBCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9182 /* stbepx */, PPC::STBEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9189 /* stbu */, PPC::STBU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9194 /* stbux */, PPC::STBUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9200 /* stbx */, PPC::STBXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 9200 /* stbx */, PPC::STBX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9205 /* std */, PPC::STD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9209 /* stdat */, PPC::STDAT, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 9215 /* stdbrx */, PPC::STDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9222 /* stdcix */, PPC::STDCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9229 /* stdcx */, PPC::STDCX, Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9235 /* stdu */, PPC::STDU, Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9240 /* stdux */, PPC::STDUX, Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9246 /* stdx */, PPC::STDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9246 /* stdx */, PPC::STDXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 9251 /* stfd */, PPC::STFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9256 /* stfdepx */, PPC::STFDEPX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9264 /* stfdu */, PPC::STFDU, Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9270 /* stfdux */, PPC::STFDUX, Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9277 /* stfdx */, PPC::STFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9283 /* stfiwx */, PPC::STFIWX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9290 /* stfs */, PPC::STFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9295 /* stfsu */, PPC::STFSU, Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9301 /* stfsux */, PPC::STFSUX, Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9308 /* stfsx */, PPC::STFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9314 /* sth */, PPC::STH, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9318 /* sthbrx */, PPC::STHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9325 /* sthcix */, PPC::STHCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9332 /* sthcx */, PPC::STHCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9338 /* sthepx */, PPC::STHEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9345 /* sthu */, PPC::STHU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9350 /* sthux */, PPC::STHUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9356 /* sthx */, PPC::STHXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 9356 /* sthx */, PPC::STHX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9361 /* stmw */, PPC::STMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9366 /* stop */, PPC::STOP, Convert_NoOperands, AMFBS_None, {  }, },
  { 9371 /* stq */, PPC::STQ, Convert__RegG8pRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegG8pRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9375 /* stqcx */, PPC::STQCX, Convert__RegG8pRC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegG8pRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9381 /* stswi */, PPC::STSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9387 /* stvebx */, PPC::STVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9394 /* stvehx */, PPC::STVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9401 /* stvewx */, PPC::STVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9408 /* stvx */, PPC::STVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9413 /* stvxl */, PPC::STVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9419 /* stw */, PPC::STW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9419 /* stw */, PPC::SPESTW, Convert__RegSPE4RC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegSPE4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9423 /* stwat */, PPC::STWAT, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 9429 /* stwbrx */, PPC::STWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9436 /* stwcix */, PPC::STWCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9443 /* stwcx */, PPC::STWCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9449 /* stwepx */, PPC::STWEPX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9456 /* stwu */, PPC::STWU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 9461 /* stwux */, PPC::STWUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9467 /* stwx */, PPC::STWXTLS_, Convert__RegG8RC1_0__RegGxRCNoR01_1__TLSReg1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_TLSReg }, },
  { 9467 /* stwx */, PPC::STWX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9467 /* stwx */, PPC::SPESTWX, Convert__RegSPE4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegSPE4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9472 /* stxsd */, PPC::STXSD, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9478 /* stxsdx */, PPC::STXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9485 /* stxsibx */, PPC::STXSIBX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9493 /* stxsihx */, PPC::STXSIHX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9501 /* stxsiwx */, PPC::STXSIWX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9509 /* stxssp */, PPC::STXSSP, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 9516 /* stxsspx */, PPC::STXSSPX, Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9524 /* stxv */, PPC::STXV, Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 9529 /* stxvb16x */, PPC::STXVB16X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9538 /* stxvd2x */, PPC::STXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9546 /* stxvh8x */, PPC::STXVH8X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9554 /* stxvl */, PPC::STXVL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 9560 /* stxvll */, PPC::STXVLL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 9567 /* stxvp */, PPC::STXVP, Convert__RegVSRpRC1_0__DispRIX161_1__RegGxRCNoR01_2, AMFBS_None, { MCK_RegVSRpRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 9573 /* stxvprl */, PPC::STXVPRL, Convert__RegVSRpRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_Imm, MCK_RegG8RC }, },
  { 9581 /* stxvprll */, PPC::STXVPRLL, Convert__RegVSRpRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_Imm, MCK_RegG8RC }, },
  { 9590 /* stxvpx */, PPC::STXVPX, Convert__RegVSRpRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRpRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9597 /* stxvrbx */, PPC::STXVRBX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9605 /* stxvrdx */, PPC::STXVRDX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9613 /* stxvrhx */, PPC::STXVRHX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9621 /* stxvrl */, PPC::STXVRL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 9628 /* stxvrll */, PPC::STXVRLL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 9636 /* stxvrwx */, PPC::STXVRWX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9644 /* stxvw4x */, PPC::STXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9652 /* stxvx */, PPC::STXVX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 9658 /* sub */, PPC::SUBF8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9658 /* sub */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_2__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9658 /* sub */, PPC::SUBF8_rec, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9658 /* sub */, PPC::SUBF_rec, Convert__RegGPRC1_1__RegGPRC1_3__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9662 /* subc */, PPC::SUBFC8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9662 /* subc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_2__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9662 /* subc */, PPC::SUBFC8_rec, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9662 /* subc */, PPC::SUBFC_rec, Convert__RegGPRC1_1__RegGPRC1_3__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9667 /* subf */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9667 /* subf */, PPC::SUBF_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9672 /* subfc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9672 /* subfc */, PPC::SUBFC_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9678 /* subfco */, PPC::SUBFCO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9678 /* subfco */, PPC::SUBFCO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9685 /* subfe */, PPC::SUBFE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9685 /* subfe */, PPC::SUBFE_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9691 /* subfeo */, PPC::SUBFEO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9691 /* subfeo */, PPC::SUBFEO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9698 /* subfic */, PPC::SUBFIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9705 /* subfme */, PPC::SUBFME, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9705 /* subfme */, PPC::SUBFME_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9712 /* subfmeo */, PPC::SUBFMEO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9712 /* subfmeo */, PPC::SUBFMEO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9720 /* subfo */, PPC::SUBFO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9720 /* subfo */, PPC::SUBFO_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9726 /* subfus */, PPC::SUBFUS, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_3__U1Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_U1Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9726 /* subfus */, PPC::SUBFUS_rec, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_4__U1Imm1_2, AMFBS_None, { MCK__DOT_, MCK_RegG8RC, MCK_U1Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9733 /* subfze */, PPC::SUBFZE, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9733 /* subfze */, PPC::SUBFZE_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9740 /* subfzeo */, PPC::SUBFZEO, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9740 /* subfzeo */, PPC::SUBFZEO_rec, Convert__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9748 /* subi */, PPC::SUBI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9753 /* subic */, PPC::SUBIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9753 /* subic */, PPC::SUBIC_rec, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9759 /* subis */, PPC::SUBIS, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 9765 /* subpcis */, PPC::SUBPCIS, Convert__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9773 /* sync */, PPC::SYNC, Convert__imm_95_0, AMFBS_None, {  }, },
  { 9773 /* sync */, PPC::SYNC, Convert__U2Imm1_0, AMFBS_None, { MCK_U2Imm }, },
  { 9778 /* tabort */, PPC::TABORT, Convert__RegGPRC1_1, AMFBS_None, { MCK__DOT_, MCK_RegGPRC }, },
  { 9785 /* tabortdc */, PPC::TABORTDC, Convert__U5Imm1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9794 /* tabortdci */, PPC::TABORTDCI, Convert__U5Imm1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_U5Imm }, },
  { 9804 /* tabortwc */, PPC::TABORTWC, Convert__U5Imm1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9813 /* tabortwci */, PPC::TABORTWCI, Convert__U5Imm1_1__RegGPRC1_2__U5Imm1_3, AMFBS_None, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_U5Imm }, },
  { 9823 /* tbegin */, PPC::TBEGIN, Convert__U1Imm1_1, AMFBS_None, { MCK__DOT_, MCK_U1Imm }, },
  { 9830 /* tcheck */, PPC::TCHECK, Convert__RegCRRC1_0, AMFBS_None, { MCK_RegCRRC }, },
  { 9837 /* td */, PPC::TD, Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_U5Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 9840 /* tdeq */, PPC::TD, Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9845 /* tdeqi */, PPC::TDI, Convert__imm_95_4__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9851 /* tdge */, PPC::TD, Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9856 /* tdgei */, PPC::TDI, Convert__imm_95_12__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9862 /* tdgt */, PPC::TD, Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9867 /* tdgti */, PPC::TDI, Convert__imm_95_8__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9873 /* tdi */, PPC::TDI, Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegG8RC, MCK_S16Imm }, },
  { 9877 /* tdle */, PPC::TD, Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9882 /* tdlei */, PPC::TDI, Convert__imm_95_20__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9888 /* tdlge */, PPC::TD, Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9894 /* tdlgei */, PPC::TDI, Convert__imm_95_5__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9901 /* tdlgt */, PPC::TD, Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9907 /* tdlgti */, PPC::TDI, Convert__imm_95_1__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9914 /* tdlle */, PPC::TD, Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9920 /* tdllei */, PPC::TDI, Convert__imm_95_6__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9927 /* tdllt */, PPC::TD, Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9933 /* tdllti */, PPC::TDI, Convert__imm_95_2__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9940 /* tdlng */, PPC::TD, Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9946 /* tdlngi */, PPC::TDI, Convert__imm_95_6__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9953 /* tdlnl */, PPC::TD, Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9959 /* tdlnli */, PPC::TDI, Convert__imm_95_5__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9966 /* tdlt */, PPC::TD, Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9971 /* tdlti */, PPC::TDI, Convert__imm_95_16__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9977 /* tdne */, PPC::TD, Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9982 /* tdnei */, PPC::TDI, Convert__imm_95_24__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9988 /* tdng */, PPC::TD, Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 9993 /* tdngi */, PPC::TDI, Convert__imm_95_20__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9999 /* tdnl */, PPC::TD, Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 10004 /* tdnli */, PPC::TDI, Convert__imm_95_12__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 10010 /* tdu */, PPC::TD, Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 10014 /* tdui */, PPC::TDI, Convert__imm_95_31__RegG8RC1_0__S16Imm1_1, AMFBS_None, { MCK_RegG8RC, MCK_S16Imm }, },
  { 10019 /* tend */, PPC::TEND, Convert__imm_95_0, AMFBS_None, { MCK__DOT_ }, },
  { 10019 /* tend */, PPC::TEND, Convert__U1Imm1_1, AMFBS_None, { MCK__DOT_, MCK_U1Imm }, },
  { 10024 /* tendall */, PPC::TEND, Convert__imm_95_1, AMFBS_None, { MCK__DOT_ }, },
  { 10032 /* tlbia */, PPC::TLBIA, Convert_NoOperands, AMFBS_None, {  }, },
  { 10038 /* tlbie */, PPC::TLBIE, Convert__regR0__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 10038 /* tlbie */, PPC::TLBIE, Convert__RegGPRC1_1__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10044 /* tlbiel */, PPC::TLBIEL, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 10051 /* tlbivax */, PPC::TLBIVAX, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10059 /* tlbld */, PPC::TLBLD, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 10065 /* tlbli */, PPC::TLBLI, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 10071 /* tlbre */, PPC::TLBRE, Convert_NoOperands, AMFBS_None, {  }, },
  { 10071 /* tlbre */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 10077 /* tlbrehi */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10085 /* tlbrelo */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10093 /* tlbsx */, PPC::TLBSX, Convert__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10093 /* tlbsx */, PPC::TLBSX2, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 10093 /* tlbsx */, PPC::TLBSX2D, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 10099 /* tlbsync */, PPC::TLBSYNC, Convert_NoOperands, AMFBS_None, {  }, },
  { 10107 /* tlbwe */, PPC::TLBWE, Convert_NoOperands, AMFBS_None, {  }, },
  { 10107 /* tlbwe */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 10113 /* tlbwehi */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10121 /* tlbwelo */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10129 /* trap */, PPC::TRAP, Convert_NoOperands, AMFBS_None, {  }, },
  { 10129 /* trap */, PPC::TW, Convert__imm_95_31__regR0__regR0, AMFBS_None, {  }, },
  { 10134 /* trechkpt */, PPC::TRECHKPT, Convert_NoOperands, AMFBS_None, { MCK__DOT_ }, },
  { 10143 /* treclaim */, PPC::TRECLAIM, Convert__RegGPRC1_1, AMFBS_None, { MCK__DOT_, MCK_RegGPRC }, },
  { 10152 /* tresume */, PPC::TSR, Convert__imm_95_1, AMFBS_None, { MCK__DOT_ }, },
  { 10160 /* tsr */, PPC::TSR, Convert__U1Imm1_1, AMFBS_None, { MCK__DOT_, MCK_U1Imm }, },
  { 10164 /* tsuspend */, PPC::TSR, Convert__imm_95_0, AMFBS_None, { MCK__DOT_ }, },
  { 10173 /* tw */, PPC::TW, Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 10176 /* tweq */, PPC::TW, Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10181 /* tweqi */, PPC::TWI, Convert__imm_95_4__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10187 /* twge */, PPC::TW, Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10192 /* twgei */, PPC::TWI, Convert__imm_95_12__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10198 /* twgt */, PPC::TW, Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10203 /* twgti */, PPC::TWI, Convert__imm_95_8__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10209 /* twi */, PPC::TWI, Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2, AMFBS_None, { MCK_U5Imm, MCK_RegGPRC, MCK_S16Imm }, },
  { 10213 /* twle */, PPC::TW, Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10218 /* twlei */, PPC::TWI, Convert__imm_95_20__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10224 /* twlge */, PPC::TW, Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10230 /* twlgei */, PPC::TWI, Convert__imm_95_5__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10237 /* twlgt */, PPC::TW, Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10243 /* twlgti */, PPC::TWI, Convert__imm_95_1__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10250 /* twlle */, PPC::TW, Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10256 /* twllei */, PPC::TWI, Convert__imm_95_6__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10263 /* twllt */, PPC::TW, Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10269 /* twllti */, PPC::TWI, Convert__imm_95_2__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10276 /* twlng */, PPC::TW, Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10282 /* twlngi */, PPC::TWI, Convert__imm_95_6__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10289 /* twlnl */, PPC::TW, Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10295 /* twlnli */, PPC::TWI, Convert__imm_95_5__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10302 /* twlt */, PPC::TW, Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10307 /* twlti */, PPC::TWI, Convert__imm_95_16__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10313 /* twne */, PPC::TW, Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10318 /* twnei */, PPC::TWI, Convert__imm_95_24__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10324 /* twng */, PPC::TW, Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10329 /* twngi */, PPC::TWI, Convert__imm_95_20__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10335 /* twnl */, PPC::TW, Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10340 /* twnli */, PPC::TWI, Convert__imm_95_12__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10346 /* twu */, PPC::TW, Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 10350 /* twui */, PPC::TWI, Convert__imm_95_31__RegGPRC1_0__S16Imm1_1, AMFBS_None, { MCK_RegGPRC, MCK_S16Imm }, },
  { 10355 /* vabsdub */, PPC::VABSDUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10363 /* vabsduh */, PPC::VABSDUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10371 /* vabsduw */, PPC::VABSDUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10379 /* vaddcuq */, PPC::VADDCUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10387 /* vaddcuw */, PPC::VADDCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10395 /* vaddecuq */, PPC::VADDECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10404 /* vaddeuqm */, PPC::VADDEUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10413 /* vaddfp */, PPC::VADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10420 /* vaddsbs */, PPC::VADDSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10428 /* vaddshs */, PPC::VADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10436 /* vaddsws */, PPC::VADDSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10444 /* vaddubm */, PPC::VADDUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10452 /* vaddubs */, PPC::VADDUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10460 /* vaddudm */, PPC::VADDUDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10468 /* vadduhm */, PPC::VADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10476 /* vadduhs */, PPC::VADDUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10484 /* vadduqm */, PPC::VADDUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10492 /* vadduwm */, PPC::VADDUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10500 /* vadduws */, PPC::VADDUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10508 /* vand */, PPC::VAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10513 /* vandc */, PPC::VANDC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10519 /* vavgsb */, PPC::VAVGSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10526 /* vavgsh */, PPC::VAVGSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10533 /* vavgsw */, PPC::VAVGSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10540 /* vavgub */, PPC::VAVGUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10547 /* vavguh */, PPC::VAVGUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10554 /* vavguw */, PPC::VAVGUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10561 /* vbpermd */, PPC::VBPERMD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10569 /* vbpermq */, PPC::VBPERMQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10577 /* vcfsx */, PPC::VCFSX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10583 /* vcfuged */, PPC::VCFUGED, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10591 /* vcfux */, PPC::VCFUX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10597 /* vcipher */, PPC::VCIPHER, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10605 /* vcipherlast */, PPC::VCIPHERLAST, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10617 /* vclrlb */, PPC::VCLRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 10624 /* vclrrb */, PPC::VCLRRB, Convert__RegVRRC1_0__RegVRRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 10631 /* vclzb */, PPC::VCLZB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10637 /* vclzd */, PPC::VCLZD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10643 /* vclzdm */, PPC::VCLZDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10650 /* vclzh */, PPC::VCLZH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10656 /* vclzlsbb */, PPC::VCLZLSBB, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 10665 /* vclzw */, PPC::VCLZW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10671 /* vcmpbfp */, PPC::VCMPBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10671 /* vcmpbfp */, PPC::VCMPBFP_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10679 /* vcmpeqfp */, PPC::VCMPEQFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10679 /* vcmpeqfp */, PPC::VCMPEQFP_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10688 /* vcmpequb */, PPC::VCMPEQUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10688 /* vcmpequb */, PPC::VCMPEQUB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10697 /* vcmpequd */, PPC::VCMPEQUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10697 /* vcmpequd */, PPC::VCMPEQUD_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10706 /* vcmpequh */, PPC::VCMPEQUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10706 /* vcmpequh */, PPC::VCMPEQUH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10715 /* vcmpequq */, PPC::VCMPEQUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10715 /* vcmpequq */, PPC::VCMPEQUQ_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10724 /* vcmpequw */, PPC::VCMPEQUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10724 /* vcmpequw */, PPC::VCMPEQUW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10733 /* vcmpgefp */, PPC::VCMPGEFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10733 /* vcmpgefp */, PPC::VCMPGEFP_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10742 /* vcmpgtfp */, PPC::VCMPGTFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10742 /* vcmpgtfp */, PPC::VCMPGTFP_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10751 /* vcmpgtsb */, PPC::VCMPGTSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10751 /* vcmpgtsb */, PPC::VCMPGTSB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10760 /* vcmpgtsd */, PPC::VCMPGTSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10760 /* vcmpgtsd */, PPC::VCMPGTSD_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10769 /* vcmpgtsh */, PPC::VCMPGTSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10769 /* vcmpgtsh */, PPC::VCMPGTSH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10778 /* vcmpgtsq */, PPC::VCMPGTSQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10778 /* vcmpgtsq */, PPC::VCMPGTSQ_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10787 /* vcmpgtsw */, PPC::VCMPGTSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10787 /* vcmpgtsw */, PPC::VCMPGTSW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10796 /* vcmpgtub */, PPC::VCMPGTUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10796 /* vcmpgtub */, PPC::VCMPGTUB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10805 /* vcmpgtud */, PPC::VCMPGTUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10805 /* vcmpgtud */, PPC::VCMPGTUD_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10814 /* vcmpgtuh */, PPC::VCMPGTUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10814 /* vcmpgtuh */, PPC::VCMPGTUH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10823 /* vcmpgtuq */, PPC::VCMPGTUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10823 /* vcmpgtuq */, PPC::VCMPGTUQ_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10832 /* vcmpgtuw */, PPC::VCMPGTUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10832 /* vcmpgtuw */, PPC::VCMPGTUW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10841 /* vcmpneb */, PPC::VCMPNEB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10841 /* vcmpneb */, PPC::VCMPNEB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10849 /* vcmpneh */, PPC::VCMPNEH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10849 /* vcmpneh */, PPC::VCMPNEH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10857 /* vcmpnew */, PPC::VCMPNEW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10857 /* vcmpnew */, PPC::VCMPNEW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10865 /* vcmpnezb */, PPC::VCMPNEZB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10865 /* vcmpnezb */, PPC::VCMPNEZB_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10874 /* vcmpnezh */, PPC::VCMPNEZH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10874 /* vcmpnezh */, PPC::VCMPNEZH_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10883 /* vcmpnezw */, PPC::VCMPNEZW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10883 /* vcmpnezw */, PPC::VCMPNEZW_rec, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10892 /* vcmpsq */, PPC::VCMPSQ, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10899 /* vcmpuq */, PPC::VCMPUQ, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10906 /* vcntmbb */, PPC::VCNTMBB, Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U1Imm }, },
  { 10914 /* vcntmbd */, PPC::VCNTMBD, Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U1Imm }, },
  { 10922 /* vcntmbh */, PPC::VCNTMBH, Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U1Imm }, },
  { 10930 /* vcntmbw */, PPC::VCNTMBW, Convert__RegG8RC1_0__RegVRRC1_1__U1Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U1Imm }, },
  { 10938 /* vctsxs */, PPC::VCTSXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10945 /* vctuxs */, PPC::VCTUXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10952 /* vctzb */, PPC::VCTZB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10958 /* vctzd */, PPC::VCTZD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10964 /* vctzdm */, PPC::VCTZDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10971 /* vctzh */, PPC::VCTZH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10977 /* vctzlsbb */, PPC::VCTZLSBB, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 10986 /* vctzw */, PPC::VCTZW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10992 /* vdivesd */, PPC::VDIVESD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11000 /* vdivesq */, PPC::VDIVESQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11008 /* vdivesw */, PPC::VDIVESW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11016 /* vdiveud */, PPC::VDIVEUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11024 /* vdiveuq */, PPC::VDIVEUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11032 /* vdiveuw */, PPC::VDIVEUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11040 /* vdivsd */, PPC::VDIVSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11047 /* vdivsq */, PPC::VDIVSQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11054 /* vdivsw */, PPC::VDIVSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11061 /* vdivud */, PPC::VDIVUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11068 /* vdivuq */, PPC::VDIVUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11075 /* vdivuw */, PPC::VDIVUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11082 /* veqv */, PPC::VEQV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11087 /* vexpandbm */, PPC::VEXPANDBM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11097 /* vexpanddm */, PPC::VEXPANDDM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11107 /* vexpandhm */, PPC::VEXPANDHM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11117 /* vexpandqm */, PPC::VEXPANDQM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11127 /* vexpandwm */, PPC::VEXPANDWM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11137 /* vexptefp */, PPC::VEXPTEFP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11146 /* vextddvlx */, PPC::VEXTDDVLX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11156 /* vextddvrx */, PPC::VEXTDDVRX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11166 /* vextdubvlx */, PPC::VEXTDUBVLX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11177 /* vextdubvrx */, PPC::VEXTDUBVRX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11188 /* vextduhvlx */, PPC::VEXTDUHVLX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11199 /* vextduhvrx */, PPC::VEXTDUHVRX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11210 /* vextduwvlx */, PPC::VEXTDUWVLX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11221 /* vextduwvrx */, PPC::VEXTDUWVRX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegGPRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegGPRC }, },
  { 11232 /* vextractbm */, PPC::VEXTRACTBM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11243 /* vextractd */, PPC::VEXTRACTD, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11253 /* vextractdm */, PPC::VEXTRACTDM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11264 /* vextracthm */, PPC::VEXTRACTHM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11275 /* vextractqm */, PPC::VEXTRACTQM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11286 /* vextractub */, PPC::VEXTRACTUB, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11297 /* vextractuh */, PPC::VEXTRACTUH, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11308 /* vextractuw */, PPC::VEXTRACTUW, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11319 /* vextractwm */, PPC::VEXTRACTWM, Convert__RegGPRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 11330 /* vextsb2d */, PPC::VEXTSB2D, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11339 /* vextsb2w */, PPC::VEXTSB2W, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11348 /* vextsd2q */, PPC::VEXTSD2Q, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11357 /* vextsh2d */, PPC::VEXTSH2D, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11366 /* vextsh2w */, PPC::VEXTSH2W, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11375 /* vextsw2d */, PPC::VEXTSW2D, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11384 /* vextublx */, PPC::VEXTUBLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11393 /* vextubrx */, PPC::VEXTUBRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11402 /* vextuhlx */, PPC::VEXTUHLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11411 /* vextuhrx */, PPC::VEXTUHRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11420 /* vextuwlx */, PPC::VEXTUWLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11429 /* vextuwrx */, PPC::VEXTUWRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 11438 /* vgbbd */, PPC::VGBBD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11444 /* vgnb */, PPC::VGNB, Convert__RegG8RC1_0__RegVRRC1_1__U3Imm1_2, AMFBS_None, { MCK_RegG8RC, MCK_RegVRRC, MCK_U3Imm }, },
  { 11449 /* vinsblx */, PPC::VINSBLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11457 /* vinsbrx */, PPC::VINSBRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11465 /* vinsbvlx */, PPC::VINSBVLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11474 /* vinsbvrx */, PPC::VINSBVRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11483 /* vinsd */, PPC::VINSD, Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegG8RC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC, MCK_U4Imm }, },
  { 11489 /* vinsdlx */, PPC::VINSDLX, Convert__RegVRRC1_0__Tie0_1_1__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 11497 /* vinsdrx */, PPC::VINSDRX, Convert__RegVRRC1_0__Tie0_1_1__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 11505 /* vinsertb */, PPC::VINSERTB, Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11514 /* vinsertd */, PPC::VINSERTD, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11523 /* vinserth */, PPC::VINSERTH, Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11532 /* vinsertw */, PPC::VINSERTW, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 11541 /* vinshlx */, PPC::VINSHLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11549 /* vinshrx */, PPC::VINSHRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11557 /* vinshvlx */, PPC::VINSHVLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11566 /* vinshvrx */, PPC::VINSHVRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11575 /* vinsw */, PPC::VINSW, Convert__RegVRRC1_0__Tie0_1_1__U4Imm1_2__RegGPRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_U4Imm }, },
  { 11581 /* vinswlx */, PPC::VINSWLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11589 /* vinswrx */, PPC::VINSWRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11597 /* vinswvlx */, PPC::VINSWVLX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11606 /* vinswvrx */, PPC::VINSWVRX, Convert__RegVRRC1_0__Tie0_1_1__RegGPRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegGPRC, MCK_RegVRRC }, },
  { 11615 /* vlogefp */, PPC::VLOGEFP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11623 /* vmaddfp */, PPC::VMADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11631 /* vmaxfp */, PPC::VMAXFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11638 /* vmaxsb */, PPC::VMAXSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11645 /* vmaxsd */, PPC::VMAXSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11652 /* vmaxsh */, PPC::VMAXSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11659 /* vmaxsw */, PPC::VMAXSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11666 /* vmaxub */, PPC::VMAXUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11673 /* vmaxud */, PPC::VMAXUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11680 /* vmaxuh */, PPC::VMAXUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11687 /* vmaxuw */, PPC::VMAXUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11694 /* vmhaddshs */, PPC::VMHADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11704 /* vmhraddshs */, PPC::VMHRADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11715 /* vminfp */, PPC::VMINFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11722 /* vminsb */, PPC::VMINSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11729 /* vminsd */, PPC::VMINSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11736 /* vminsh */, PPC::VMINSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11743 /* vminsw */, PPC::VMINSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11750 /* vminub */, PPC::VMINUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11757 /* vminud */, PPC::VMINUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11764 /* vminuh */, PPC::VMINUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11771 /* vminuw */, PPC::VMINUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11778 /* vmladduhm */, PPC::VMLADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11788 /* vmodsd */, PPC::VMODSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11795 /* vmodsq */, PPC::VMODSQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11802 /* vmodsw */, PPC::VMODSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11809 /* vmodud */, PPC::VMODUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11816 /* vmoduq */, PPC::VMODUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11823 /* vmoduw */, PPC::VMODUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11830 /* vmr */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11834 /* vmrgew */, PPC::VMRGEW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11841 /* vmrghb */, PPC::VMRGHB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11848 /* vmrghh */, PPC::VMRGHH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11855 /* vmrghw */, PPC::VMRGHW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11862 /* vmrglb */, PPC::VMRGLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11869 /* vmrglh */, PPC::VMRGLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11876 /* vmrglw */, PPC::VMRGLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11883 /* vmrgow */, PPC::VMRGOW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11890 /* vmsumcud */, PPC::VMSUMCUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11899 /* vmsummbm */, PPC::VMSUMMBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11908 /* vmsumshm */, PPC::VMSUMSHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11917 /* vmsumshs */, PPC::VMSUMSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11926 /* vmsumubm */, PPC::VMSUMUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11935 /* vmsumudm */, PPC::VMSUMUDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11944 /* vmsumuhm */, PPC::VMSUMUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11953 /* vmsumuhs */, PPC::VMSUMUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11962 /* vmul10cuq */, PPC::VMUL10CUQ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11972 /* vmul10ecuq */, PPC::VMUL10ECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11983 /* vmul10euq */, PPC::VMUL10EUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11993 /* vmul10uq */, PPC::VMUL10UQ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12002 /* vmulesb */, PPC::VMULESB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12010 /* vmulesd */, PPC::VMULESD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12018 /* vmulesh */, PPC::VMULESH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12026 /* vmulesw */, PPC::VMULESW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12034 /* vmuleub */, PPC::VMULEUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12042 /* vmuleud */, PPC::VMULEUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12050 /* vmuleuh */, PPC::VMULEUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12058 /* vmuleuw */, PPC::VMULEUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12066 /* vmulhsd */, PPC::VMULHSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12074 /* vmulhsw */, PPC::VMULHSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12082 /* vmulhud */, PPC::VMULHUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12090 /* vmulhuw */, PPC::VMULHUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12098 /* vmulld */, PPC::VMULLD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12105 /* vmulosb */, PPC::VMULOSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12113 /* vmulosd */, PPC::VMULOSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12121 /* vmulosh */, PPC::VMULOSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12129 /* vmulosw */, PPC::VMULOSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12137 /* vmuloub */, PPC::VMULOUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12145 /* vmuloud */, PPC::VMULOUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12153 /* vmulouh */, PPC::VMULOUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12161 /* vmulouw */, PPC::VMULOUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12169 /* vmuluwm */, PPC::VMULUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12177 /* vnand */, PPC::VNAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12183 /* vncipher */, PPC::VNCIPHER, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12192 /* vncipherlast */, PPC::VNCIPHERLAST, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12205 /* vnegd */, PPC::VNEGD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12211 /* vnegw */, PPC::VNEGW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12217 /* vnmsubfp */, PPC::VNMSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12226 /* vnor */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12231 /* vnot */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12236 /* vor */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12240 /* vorc */, PPC::VORC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12245 /* vpdepd */, PPC::VPDEPD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12252 /* vperm */, PPC::VPERM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12258 /* vpermr */, PPC::VPERMR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12265 /* vpermxor */, PPC::VPERMXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12274 /* vpextd */, PPC::VPEXTD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12281 /* vpkpx */, PPC::VPKPX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12287 /* vpksdss */, PPC::VPKSDSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12295 /* vpksdus */, PPC::VPKSDUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12303 /* vpkshss */, PPC::VPKSHSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12311 /* vpkshus */, PPC::VPKSHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12319 /* vpkswss */, PPC::VPKSWSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12327 /* vpkswus */, PPC::VPKSWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12335 /* vpkudum */, PPC::VPKUDUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12343 /* vpkudus */, PPC::VPKUDUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12351 /* vpkuhum */, PPC::VPKUHUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12359 /* vpkuhus */, PPC::VPKUHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12367 /* vpkuwum */, PPC::VPKUWUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12375 /* vpkuwus */, PPC::VPKUWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12383 /* vpmsumb */, PPC::VPMSUMB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12391 /* vpmsumd */, PPC::VPMSUMD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12399 /* vpmsumh */, PPC::VPMSUMH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12407 /* vpmsumw */, PPC::VPMSUMW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12415 /* vpopcntb */, PPC::VPOPCNTB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12424 /* vpopcntd */, PPC::VPOPCNTD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12433 /* vpopcnth */, PPC::VPOPCNTH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12442 /* vpopcntw */, PPC::VPOPCNTW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12451 /* vprtybd */, PPC::VPRTYBD, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12459 /* vprtybq */, PPC::VPRTYBQ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12467 /* vprtybw */, PPC::VPRTYBW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12475 /* vrefp */, PPC::VREFP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12481 /* vrfim */, PPC::VRFIM, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12487 /* vrfin */, PPC::VRFIN, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12493 /* vrfip */, PPC::VRFIP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12499 /* vrfiz */, PPC::VRFIZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12505 /* vrlb */, PPC::VRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12510 /* vrld */, PPC::VRLD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12515 /* vrldmi */, PPC::VRLDMI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12522 /* vrldnm */, PPC::VRLDNM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12529 /* vrlh */, PPC::VRLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12534 /* vrlq */, PPC::VRLQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12539 /* vrlqmi */, PPC::VRLQMI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12546 /* vrlqnm */, PPC::VRLQNM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12553 /* vrlw */, PPC::VRLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12558 /* vrlwmi */, PPC::VRLWMI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0_1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12565 /* vrlwnm */, PPC::VRLWNM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12572 /* vrsqrtefp */, PPC::VRSQRTEFP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12582 /* vsbox */, PPC::VSBOX, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12588 /* vsel */, PPC::VSEL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12593 /* vshasigmad */, PPC::VSHASIGMAD, Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm, MCK_U4Imm }, },
  { 12604 /* vshasigmaw */, PPC::VSHASIGMAW, Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm, MCK_U4Imm }, },
  { 12615 /* vsl */, PPC::VSL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12619 /* vslb */, PPC::VSLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12624 /* vsld */, PPC::VSLD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12629 /* vsldbi */, PPC::VSLDBI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U3Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U3Imm }, },
  { 12636 /* vsldoi */, PPC::VSLDOI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U4Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 12643 /* vslh */, PPC::VSLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12648 /* vslo */, PPC::VSLO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12653 /* vslq */, PPC::VSLQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12658 /* vslv */, PPC::VSLV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12663 /* vslw */, PPC::VSLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12668 /* vspltb */, PPC::VSPLTB, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 12675 /* vsplth */, PPC::VSPLTH, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 12682 /* vspltisb */, PPC::VSPLTISB, Convert__RegVRRC1_0__S5Imm1_1, AMFBS_None, { MCK_RegVRRC, MCK_S5Imm }, },
  { 12691 /* vspltish */, PPC::VSPLTISH, Convert__RegVRRC1_0__S5Imm1_1, AMFBS_None, { MCK_RegVRRC, MCK_S5Imm }, },
  { 12700 /* vspltisw */, PPC::VSPLTISW, Convert__RegVRRC1_0__S5Imm1_1, AMFBS_None, { MCK_RegVRRC, MCK_S5Imm }, },
  { 12709 /* vspltw */, PPC::VSPLTW, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 12716 /* vsr */, PPC::VSR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12720 /* vsrab */, PPC::VSRAB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12726 /* vsrad */, PPC::VSRAD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12732 /* vsrah */, PPC::VSRAH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12738 /* vsraq */, PPC::VSRAQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12744 /* vsraw */, PPC::VSRAW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12750 /* vsrb */, PPC::VSRB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12755 /* vsrd */, PPC::VSRD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12760 /* vsrdbi */, PPC::VSRDBI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U3Imm1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U3Imm }, },
  { 12767 /* vsrh */, PPC::VSRH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12772 /* vsro */, PPC::VSRO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12777 /* vsrq */, PPC::VSRQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12782 /* vsrv */, PPC::VSRV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12787 /* vsrw */, PPC::VSRW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12792 /* vstribl */, PPC::VSTRIBL, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12792 /* vstribl */, PPC::VSTRIBL_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12800 /* vstribr */, PPC::VSTRIBR, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12800 /* vstribr */, PPC::VSTRIBR_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12808 /* vstrihl */, PPC::VSTRIHL, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12808 /* vstrihl */, PPC::VSTRIHL_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12816 /* vstrihr */, PPC::VSTRIHR, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12816 /* vstrihr */, PPC::VSTRIHR_rec, Convert__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12824 /* vsubcuq */, PPC::VSUBCUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12832 /* vsubcuw */, PPC::VSUBCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12840 /* vsubecuq */, PPC::VSUBECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12849 /* vsubeuqm */, PPC::VSUBEUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12858 /* vsubfp */, PPC::VSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12865 /* vsubsbs */, PPC::VSUBSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12873 /* vsubshs */, PPC::VSUBSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12881 /* vsubsws */, PPC::VSUBSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12889 /* vsububm */, PPC::VSUBUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12897 /* vsububs */, PPC::VSUBUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12905 /* vsubudm */, PPC::VSUBUDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12913 /* vsubuhm */, PPC::VSUBUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12921 /* vsubuhs */, PPC::VSUBUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12929 /* vsubuqm */, PPC::VSUBUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12937 /* vsubuwm */, PPC::VSUBUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12945 /* vsubuws */, PPC::VSUBUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12953 /* vsum2sws */, PPC::VSUM2SWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12962 /* vsum4sbs */, PPC::VSUM4SBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12971 /* vsum4shs */, PPC::VSUM4SHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12980 /* vsum4ubs */, PPC::VSUM4UBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12989 /* vsumsws */, PPC::VSUMSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12997 /* vupkhpx */, PPC::VUPKHPX, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13005 /* vupkhsb */, PPC::VUPKHSB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13013 /* vupkhsh */, PPC::VUPKHSH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13021 /* vupkhsw */, PPC::VUPKHSW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13029 /* vupklpx */, PPC::VUPKLPX, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13037 /* vupklsb */, PPC::VUPKLSB, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13045 /* vupklsh */, PPC::VUPKLSH, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13053 /* vupklsw */, PPC::VUPKLSW, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13061 /* vxor */, PPC::VXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13066 /* wait */, PPC::WAIT, Convert__imm_95_0, AMFBS_None, {  }, },
  { 13066 /* wait */, PPC::WAIT, Convert__U2Imm1_0, AMFBS_None, { MCK_U2Imm }, },
  { 13071 /* waitimpl */, PPC::WAIT, Convert__imm_95_2, AMFBS_None, {  }, },
  { 13080 /* waitrsv */, PPC::WAIT, Convert__imm_95_1, AMFBS_None, {  }, },
  { 13088 /* wrtee */, PPC::WRTEE, Convert__RegGPRC1_0, AMFBS_None, { MCK_RegGPRC }, },
  { 13094 /* wrteei */, PPC::WRTEEI, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 13101 /* xnop */, PPC::XORI8, Convert__regX0__regX0__imm_95_0, AMFBS_None, {  }, },
  { 13101 /* xnop */, PPC::XORI, Convert__regR0__regR0__imm_95_0, AMFBS_None, {  }, },
  { 13106 /* xor */, PPC::XOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 13106 /* xor */, PPC::XOR_rec, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 13110 /* xori */, PPC::XORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 13115 /* xoris */, PPC::XORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, AMFBS_None, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 13121 /* xsabsdp */, PPC::XSABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13129 /* xsabsqp */, PPC::XSABSQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13137 /* xsadddp */, PPC::XSADDDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13145 /* xsaddqp */, PPC::XSADDQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13153 /* xsaddqpo */, PPC::XSADDQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13162 /* xsaddsp */, PPC::XSADDSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13170 /* xscmpeqdp */, PPC::XSCMPEQDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13180 /* xscmpeqqp */, PPC::XSCMPEQQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13190 /* xscmpexpdp */, PPC::XSCMPEXPDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13201 /* xscmpexpqp */, PPC::XSCMPEXPQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13212 /* xscmpgedp */, PPC::XSCMPGEDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13222 /* xscmpgeqp */, PPC::XSCMPGEQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13232 /* xscmpgtdp */, PPC::XSCMPGTDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13242 /* xscmpgtqp */, PPC::XSCMPGTQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13252 /* xscmpodp */, PPC::XSCMPODP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13261 /* xscmpoqp */, PPC::XSCMPOQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13270 /* xscmpudp */, PPC::XSCMPUDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13279 /* xscmpuqp */, PPC::XSCMPUQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13288 /* xscpsgndp */, PPC::XSCPSGNDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13298 /* xscpsgnqp */, PPC::XSCPSGNQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13308 /* xscvdphp */, PPC::XSCVDPHP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13317 /* xscvdpqp */, PPC::XSCVDPQP, Convert__RegVRRC1_0__RegVFRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 13326 /* xscvdpsp */, PPC::XSCVDPSP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13335 /* xscvdpspn */, PPC::XSCVDPSPN, Convert__RegVSRC1_0__RegVSSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSSRC }, },
  { 13345 /* xscvdpsxds */, PPC::XSCVDPSXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13356 /* xscvdpsxws */, PPC::XSCVDPSXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13367 /* xscvdpuxds */, PPC::XSCVDPUXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13378 /* xscvdpuxws */, PPC::XSCVDPUXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13389 /* xscvhpdp */, PPC::XSCVHPDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13398 /* xscvqpdp */, PPC::XSCVQPDP, Convert__RegVFRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVFRC, MCK_RegVRRC }, },
  { 13407 /* xscvqpdpo */, PPC::XSCVQPDPO, Convert__RegVFRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVFRC, MCK_RegVRRC }, },
  { 13417 /* xscvqpsdz */, PPC::XSCVQPSDZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13427 /* xscvqpsqz */, PPC::XSCVQPSQZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13437 /* xscvqpswz */, PPC::XSCVQPSWZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13447 /* xscvqpudz */, PPC::XSCVQPUDZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13457 /* xscvqpuqz */, PPC::XSCVQPUQZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13467 /* xscvqpuwz */, PPC::XSCVQPUWZ, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13477 /* xscvsdqp */, PPC::XSCVSDQP, Convert__RegVRRC1_0__RegVFRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 13486 /* xscvspdp */, PPC::XSCVSPDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13495 /* xscvspdpn */, PPC::XSCVSPDPN, Convert__RegVSSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSRC }, },
  { 13505 /* xscvsqqp */, PPC::XSCVSQQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13514 /* xscvsxddp */, PPC::XSCVSXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13524 /* xscvsxdsp */, PPC::XSCVSXDSP, Convert__RegVSSRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSFRC }, },
  { 13534 /* xscvudqp */, PPC::XSCVUDQP, Convert__RegVRRC1_0__RegVFRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 13543 /* xscvuqqp */, PPC::XSCVUQQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13552 /* xscvuxddp */, PPC::XSCVUXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13562 /* xscvuxdsp */, PPC::XSCVUXDSP, Convert__RegVSSRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSFRC }, },
  { 13572 /* xsdivdp */, PPC::XSDIVDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13580 /* xsdivqp */, PPC::XSDIVQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13588 /* xsdivqpo */, PPC::XSDIVQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13597 /* xsdivsp */, PPC::XSDIVSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13605 /* xsiexpdp */, PPC::XSIEXPDP, Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 13614 /* xsiexpqp */, PPC::XSIEXPQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVSFRC }, },
  { 13623 /* xsmaddadp */, PPC::XSMADDADP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13633 /* xsmaddasp */, PPC::XSMADDASP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13643 /* xsmaddmdp */, PPC::XSMADDMDP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13653 /* xsmaddmsp */, PPC::XSMADDMSP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13663 /* xsmaddqp */, PPC::XSMADDQP, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13672 /* xsmaddqpo */, PPC::XSMADDQPO, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13682 /* xsmaxcdp */, PPC::XSMAXCDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13691 /* xsmaxcqp */, PPC::XSMAXCQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13700 /* xsmaxdp */, PPC::XSMAXDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13708 /* xsmaxjdp */, PPC::XSMAXJDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13717 /* xsmincdp */, PPC::XSMINCDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13726 /* xsmincqp */, PPC::XSMINCQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13735 /* xsmindp */, PPC::XSMINDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13743 /* xsminjdp */, PPC::XSMINJDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13752 /* xsmsubadp */, PPC::XSMSUBADP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13762 /* xsmsubasp */, PPC::XSMSUBASP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13772 /* xsmsubmdp */, PPC::XSMSUBMDP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13782 /* xsmsubmsp */, PPC::XSMSUBMSP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13792 /* xsmsubqp */, PPC::XSMSUBQP, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13801 /* xsmsubqpo */, PPC::XSMSUBQPO, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13811 /* xsmuldp */, PPC::XSMULDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13819 /* xsmulqp */, PPC::XSMULQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13827 /* xsmulqpo */, PPC::XSMULQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13836 /* xsmulsp */, PPC::XSMULSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13844 /* xsnabsdp */, PPC::XSNABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13853 /* xsnabsqp */, PPC::XSNABSQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13862 /* xsnegdp */, PPC::XSNEGDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13870 /* xsnegqp */, PPC::XSNEGQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 13878 /* xsnmaddadp */, PPC::XSNMADDADP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13889 /* xsnmaddasp */, PPC::XSNMADDASP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13900 /* xsnmaddmdp */, PPC::XSNMADDMDP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13911 /* xsnmaddmsp */, PPC::XSNMADDMSP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13922 /* xsnmaddqp */, PPC::XSNMADDQP, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13932 /* xsnmaddqpo */, PPC::XSNMADDQPO, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13943 /* xsnmsubadp */, PPC::XSNMSUBADP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13954 /* xsnmsubasp */, PPC::XSNMSUBASP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13965 /* xsnmsubmdp */, PPC::XSNMSUBMDP, Convert__RegVSFRC1_0__Tie0_1_1__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 13976 /* xsnmsubmsp */, PPC::XSNMSUBMSP, Convert__RegVSSRC1_0__Tie0_1_1__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 13987 /* xsnmsubqp */, PPC::XSNMSUBQP, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 13997 /* xsnmsubqpo */, PPC::XSNMSUBQPO, Convert__RegVRRC1_0__Tie0_1_1__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 14008 /* xsrdpi */, PPC::XSRDPI, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14015 /* xsrdpic */, PPC::XSRDPIC, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14023 /* xsrdpim */, PPC::XSRDPIM, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14031 /* xsrdpip */, PPC::XSRDPIP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14039 /* xsrdpiz */, PPC::XSRDPIZ, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14047 /* xsredp */, PPC::XSREDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14054 /* xsresp */, PPC::XSRESP, Convert__RegVSSRC1_0__RegVSSRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 14061 /* xsrqpi */, PPC::XSRQPI, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, AMFBS_None, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 14068 /* xsrqpix */, PPC::XSRQPIX, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, AMFBS_None, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 14076 /* xsrqpxp */, PPC::XSRQPXP, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, AMFBS_None, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 14084 /* xsrsp */, PPC::XSRSP, Convert__RegVSSRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSFRC }, },
  { 14090 /* xsrsqrtedp */, PPC::XSRSQRTEDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14101 /* xsrsqrtesp */, PPC::XSRSQRTESP, Convert__RegVSSRC1_0__RegVSSRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 14112 /* xssqrtdp */, PPC::XSSQRTDP, Convert__RegVSFRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14121 /* xssqrtqp */, PPC::XSSQRTQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 14130 /* xssqrtqpo */, PPC::XSSQRTQPO, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 14140 /* xssqrtsp */, PPC::XSSQRTSP, Convert__RegVSSRC1_0__RegVSSRC1_1, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 14149 /* xssubdp */, PPC::XSSUBDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14157 /* xssubqp */, PPC::XSSUBQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 14165 /* xssubqpo */, PPC::XSSUBQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 14174 /* xssubsp */, PPC::XSSUBSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, AMFBS_None, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 14182 /* xstdivdp */, PPC::XSTDIVDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 14191 /* xstsqrtdp */, PPC::XSTSQRTDP, Convert__RegCRRC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC }, },
  { 14201 /* xststdcdp */, PPC::XSTSTDCDP, Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_U7Imm }, },
  { 14211 /* xststdcqp */, PPC::XSTSTDCQP, Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVRRC, MCK_U7Imm }, },
  { 14221 /* xststdcsp */, PPC::XSTSTDCSP, Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSFRC, MCK_U7Imm }, },
  { 14231 /* xsxexpdp */, PPC::XSXEXPDP, Convert__RegG8RC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 14240 /* xsxexpqp */, PPC::XSXEXPQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 14249 /* xsxsigdp */, PPC::XSXSIGDP, Convert__RegG8RC1_0__RegVSFRC1_1, AMFBS_None, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 14258 /* xsxsigqp */, PPC::XSXSIGQP, Convert__RegVRRC1_0__RegVRRC1_1, AMFBS_None, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 14267 /* xvabsdp */, PPC::XVABSDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14275 /* xvabssp */, PPC::XVABSSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14283 /* xvadddp */, PPC::XVADDDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14291 /* xvaddsp */, PPC::XVADDSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14299 /* xvbf16ger2 */, PPC::XVBF16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14310 /* xvbf16ger2nn */, PPC::XVBF16GER2NN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14323 /* xvbf16ger2np */, PPC::XVBF16GER2NP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14336 /* xvbf16ger2pn */, PPC::XVBF16GER2PN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14349 /* xvbf16ger2pp */, PPC::XVBF16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14362 /* xvcmpeqdp */, PPC::XVCMPEQDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14362 /* xvcmpeqdp */, PPC::XVCMPEQDP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14372 /* xvcmpeqsp */, PPC::XVCMPEQSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14372 /* xvcmpeqsp */, PPC::XVCMPEQSP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14382 /* xvcmpgedp */, PPC::XVCMPGEDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14382 /* xvcmpgedp */, PPC::XVCMPGEDP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14392 /* xvcmpgesp */, PPC::XVCMPGESP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14392 /* xvcmpgesp */, PPC::XVCMPGESP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14402 /* xvcmpgtdp */, PPC::XVCMPGTDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14402 /* xvcmpgtdp */, PPC::XVCMPGTDP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14412 /* xvcmpgtsp */, PPC::XVCMPGTSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14412 /* xvcmpgtsp */, PPC::XVCMPGTSP_rec, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14422 /* xvcpsgndp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14432 /* xvcpsgnsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14442 /* xvcvbf16spn */, PPC::XVCVBF16SPN, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14454 /* xvcvdpsp */, PPC::XVCVDPSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14463 /* xvcvdpsxds */, PPC::XVCVDPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14474 /* xvcvdpsxws */, PPC::XVCVDPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14485 /* xvcvdpuxds */, PPC::XVCVDPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14496 /* xvcvdpuxws */, PPC::XVCVDPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14507 /* xvcvhpsp */, PPC::XVCVHPSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14516 /* xvcvspbf16 */, PPC::XVCVSPBF16, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14527 /* xvcvspdp */, PPC::XVCVSPDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14536 /* xvcvsphp */, PPC::XVCVSPHP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14545 /* xvcvspsxds */, PPC::XVCVSPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14556 /* xvcvspsxws */, PPC::XVCVSPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14567 /* xvcvspuxds */, PPC::XVCVSPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14578 /* xvcvspuxws */, PPC::XVCVSPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14589 /* xvcvsxddp */, PPC::XVCVSXDDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14599 /* xvcvsxdsp */, PPC::XVCVSXDSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14609 /* xvcvsxwdp */, PPC::XVCVSXWDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14619 /* xvcvsxwsp */, PPC::XVCVSXWSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14629 /* xvcvuxddp */, PPC::XVCVUXDDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14639 /* xvcvuxdsp */, PPC::XVCVUXDSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14649 /* xvcvuxwdp */, PPC::XVCVUXWDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14659 /* xvcvuxwsp */, PPC::XVCVUXWSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 14669 /* xvdivdp */, PPC::XVDIVDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14677 /* xvdivsp */, PPC::XVDIVSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14685 /* xvf16ger2 */, PPC::XVF16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14695 /* xvf16ger2nn */, PPC::XVF16GER2NN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14707 /* xvf16ger2np */, PPC::XVF16GER2NP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14719 /* xvf16ger2pn */, PPC::XVF16GER2PN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14731 /* xvf16ger2pp */, PPC::XVF16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14743 /* xvf32ger */, PPC::XVF32GER, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14752 /* xvf32gernn */, PPC::XVF32GERNN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14763 /* xvf32gernp */, PPC::XVF32GERNP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14774 /* xvf32gerpn */, PPC::XVF32GERPN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14785 /* xvf32gerpp */, PPC::XVF32GERPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14796 /* xvf64ger */, PPC::XVF64GER, Convert__RegACCRC1_0__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14805 /* xvf64gernn */, PPC::XVF64GERNN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14816 /* xvf64gernp */, PPC::XVF64GERNP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14827 /* xvf64gerpn */, PPC::XVF64GERPN, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14838 /* xvf64gerpp */, PPC::XVF64GERPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRpEvenRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRpEvenRC, MCK_RegVSRC }, },
  { 14849 /* xvi16ger2 */, PPC::XVI16GER2, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14859 /* xvi16ger2pp */, PPC::XVI16GER2PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14871 /* xvi16ger2s */, PPC::XVI16GER2S, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14882 /* xvi16ger2spp */, PPC::XVI16GER2SPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14895 /* xvi4ger8 */, PPC::XVI4GER8, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14904 /* xvi4ger8pp */, PPC::XVI4GER8PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14915 /* xvi8ger4 */, PPC::XVI8GER4, Convert__RegACCRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14924 /* xvi8ger4pp */, PPC::XVI8GER4PP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14935 /* xvi8ger4spp */, PPC::XVI8GER4SPP, Convert__RegACCRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegACCRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14947 /* xviexpdp */, PPC::XVIEXPDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14956 /* xviexpsp */, PPC::XVIEXPSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14965 /* xvmaddadp */, PPC::XVMADDADP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14975 /* xvmaddasp */, PPC::XVMADDASP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14985 /* xvmaddmdp */, PPC::XVMADDMDP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 14995 /* xvmaddmsp */, PPC::XVMADDMSP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15005 /* xvmaxdp */, PPC::XVMAXDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15013 /* xvmaxsp */, PPC::XVMAXSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15021 /* xvmindp */, PPC::XVMINDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15029 /* xvminsp */, PPC::XVMINSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15037 /* xvmovdp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15045 /* xvmovsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15053 /* xvmsubadp */, PPC::XVMSUBADP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15063 /* xvmsubasp */, PPC::XVMSUBASP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15073 /* xvmsubmdp */, PPC::XVMSUBMDP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15083 /* xvmsubmsp */, PPC::XVMSUBMSP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15093 /* xvmuldp */, PPC::XVMULDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15101 /* xvmulsp */, PPC::XVMULSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15109 /* xvnabsdp */, PPC::XVNABSDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15118 /* xvnabssp */, PPC::XVNABSSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15127 /* xvnegdp */, PPC::XVNEGDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15135 /* xvnegsp */, PPC::XVNEGSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15143 /* xvnmaddadp */, PPC::XVNMADDADP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15154 /* xvnmaddasp */, PPC::XVNMADDASP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15165 /* xvnmaddmdp */, PPC::XVNMADDMDP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15176 /* xvnmaddmsp */, PPC::XVNMADDMSP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15187 /* xvnmsubadp */, PPC::XVNMSUBADP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15198 /* xvnmsubasp */, PPC::XVNMSUBASP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15209 /* xvnmsubmdp */, PPC::XVNMSUBMDP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15220 /* xvnmsubmsp */, PPC::XVNMSUBMSP, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15231 /* xvrdpi */, PPC::XVRDPI, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15238 /* xvrdpic */, PPC::XVRDPIC, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15246 /* xvrdpim */, PPC::XVRDPIM, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15254 /* xvrdpip */, PPC::XVRDPIP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15262 /* xvrdpiz */, PPC::XVRDPIZ, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15270 /* xvredp */, PPC::XVREDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15277 /* xvresp */, PPC::XVRESP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15284 /* xvrspi */, PPC::XVRSPI, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15291 /* xvrspic */, PPC::XVRSPIC, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15299 /* xvrspim */, PPC::XVRSPIM, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15307 /* xvrspip */, PPC::XVRSPIP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15315 /* xvrspiz */, PPC::XVRSPIZ, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15323 /* xvrsqrtedp */, PPC::XVRSQRTEDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15334 /* xvrsqrtesp */, PPC::XVRSQRTESP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15345 /* xvsqrtdp */, PPC::XVSQRTDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15354 /* xvsqrtsp */, PPC::XVSQRTSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15363 /* xvsubdp */, PPC::XVSUBDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15371 /* xvsubsp */, PPC::XVSUBSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15379 /* xvtdivdp */, PPC::XVTDIVDP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15388 /* xvtdivsp */, PPC::XVTDIVSP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15397 /* xvtlsbb */, PPC::XVTLSBB, Convert__RegCRRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 15405 /* xvtsqrtdp */, PPC::XVTSQRTDP, Convert__RegCRRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 15415 /* xvtsqrtsp */, PPC::XVTSQRTSP, Convert__RegCRRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 15425 /* xvtstdcdp */, PPC::XVTSTDCDP, Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_U7Imm }, },
  { 15435 /* xvtstdcsp */, PPC::XVTSTDCSP, Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_U7Imm }, },
  { 15445 /* xvxexpdp */, PPC::XVXEXPDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15454 /* xvxexpsp */, PPC::XVXEXPSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15463 /* xvxsigdp */, PPC::XVXSIGDP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15472 /* xvxsigsp */, PPC::XVXSIGSP, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15481 /* xxblendvb */, PPC::XXBLENDVB, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15491 /* xxblendvd */, PPC::XXBLENDVD, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15501 /* xxblendvh */, PPC::XXBLENDVH, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15511 /* xxblendvw */, PPC::XXBLENDVW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15521 /* xxbrd */, PPC::XXBRD, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15527 /* xxbrh */, PPC::XXBRH, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15533 /* xxbrq */, PPC::XXBRQ, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15539 /* xxbrw */, PPC::XXBRW, Convert__RegVSRC1_0__RegVSRC1_1, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 15545 /* xxeval */, PPC::XXEVAL, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U8Imm1_4, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U8Imm }, },
  { 15552 /* xxextractuw */, PPC::XXEXTRACTUW, Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2, AMFBS_None, { MCK_RegVSFRC, MCK_RegVSRC, MCK_U4Imm }, },
  { 15564 /* xxgenpcvbm */, PPC::XXGENPCVBM, Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVRRC, MCK_S5Imm }, },
  { 15575 /* xxgenpcvdm */, PPC::XXGENPCVDM, Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVRRC, MCK_S5Imm }, },
  { 15586 /* xxgenpcvhm */, PPC::XXGENPCVHM, Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVRRC, MCK_S5Imm }, },
  { 15597 /* xxgenpcvwm */, PPC::XXGENPCVWM, Convert__RegVSRC1_0__RegVRRC1_1__S5Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVRRC, MCK_S5Imm }, },
  { 15608 /* xxinsertw */, PPC::XXINSERTW, Convert__RegVSRC1_0__Tie0_1_1__RegVSRC1_1__U4Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm }, },
  { 15618 /* xxland */, PPC::XXLAND, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15625 /* xxlandc */, PPC::XXLANDC, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15633 /* xxleqv */, PPC::XXLEQV, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15640 /* xxlnand */, PPC::XXLNAND, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15648 /* xxlnor */, PPC::XXLNOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15655 /* xxlor */, PPC::XXLOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15661 /* xxlorc */, PPC::XXLORC, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15668 /* xxlxor */, PPC::XXLXOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15675 /* xxmfacc */, PPC::XXMFACC, Convert__RegACCRC1_0__Tie0_1_1, AMFBS_None, { MCK_RegACCRC }, },
  { 15683 /* xxmrghd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15691 /* xxmrghw */, PPC::XXMRGHW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15699 /* xxmrgld */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15707 /* xxmrglw */, PPC::XXMRGLW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15715 /* xxmtacc */, PPC::XXMTACC, Convert__RegACCRC1_0__Tie0_1_1, AMFBS_None, { MCK_RegACCRC }, },
  { 15723 /* xxperm */, PPC::XXPERM, Convert__RegVSRC1_0__RegVSRC1_1__Tie0_1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15730 /* xxpermdi */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 15739 /* xxpermr */, PPC::XXPERMR, Convert__RegVSRC1_0__RegVSRC1_1__Tie0_1_1__RegVSRC1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15747 /* xxpermx */, PPC::XXPERMX, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3__U3Imm1_4, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U3Imm }, },
  { 15755 /* xxsel */, PPC::XXSEL, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 15761 /* xxsetaccz */, PPC::XXSETACCZ, Convert__RegACCRC1_0, AMFBS_None, { MCK_RegACCRC }, },
  { 15771 /* xxsldwi */, PPC::XXSLDWI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 15779 /* xxspltd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0, AMFBS_ModernAs, { MCK_RegVSRC, MCK_RegVSFRC, MCK_0 }, },
  { 15779 /* xxspltd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3, AMFBS_ModernAs, { MCK_RegVSRC, MCK_RegVSFRC, MCK_1 }, },
  { 15779 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0, AMFBS_ModernAs, { MCK_RegVSRC, MCK_RegVSRC, MCK_0 }, },
  { 15779 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3, AMFBS_ModernAs, { MCK_RegVSRC, MCK_RegVSRC, MCK_1 }, },
  { 15787 /* xxsplti32dx */, PPC::XXSPLTI32DX, Convert__RegVSRC1_0__Tie0_1_1__U1Imm1_1__Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_U1Imm, MCK_Imm }, },
  { 15799 /* xxspltib */, PPC::XXSPLTIB, Convert__RegVSRC1_0__U8Imm1_1, AMFBS_None, { MCK_RegVSRC, MCK_U8Imm }, },
  { 15808 /* xxspltidp */, PPC::XXSPLTIDP, Convert__RegVSRC1_0__Imm1_1, AMFBS_None, { MCK_RegVSRC, MCK_Imm }, },
  { 15818 /* xxspltiw */, PPC::XXSPLTIW, Convert__RegVSRC1_0__Imm1_1, AMFBS_None, { MCK_RegVSRC, MCK_Imm }, },
  { 15827 /* xxspltw */, PPC::XXSPLTW, Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 15835 /* xxswapd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSFRC }, },
  { 15835 /* xxswapd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2, AMFBS_None, { MCK_RegVSRC, MCK_RegVSRC }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned PPCAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((PPCOperand &)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  MissingFeatures.set();
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) <<
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    bool HasRequiredFeatures =
      (AvailableFeatures & RequiredFeatures) == RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 6; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range\n");
        if (Formal == InvalidMatchClass) {
          break;
        }
        if (isSubclass(Formal, OptionalMatchClass)) {
          continue;
        }
        OperandsValid = false;
        ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      FeatureBitset NewMissingFeatures = RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features:";
                      for (unsigned I = 0, E = NewMissingFeatures.size(); I != E; ++I)
                        if (NewMissingFeatures[I])
                          dbgs() << ' ' << I;
                      dbgs() << "\n");
      if (NewMissingFeatures.count() <=
          MissingFeatures.count())
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
        return Match_InvalidTiedOperand;

      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    std::string Info;
    if (!getParser().getTargetParser().getTargetOptions().MCNoDeprecatedWarn &&
        MII.getDeprecatedInfo(Inst, getSTI(), Info)) {
      SMLoc Loc = ((PPCOperand &)*Operands[0]).getStartLoc();
      getParser().Warning(Loc, Info, std::nullopt);
    }
    if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
      return Match_InvalidTiedOperand;

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  ErrorInfo = 0;
  return Match_MissingFeature;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string PPCMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    const FeatureBitset &RequiredFeatures = FeatureBitsets[I->RequiredFeaturesIdx];
    if ((FBS & RequiredFeatures) != RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T.equals(Prev))
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for (; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER


#ifdef GET_MNEMONIC_CHECKER
#undef GET_MNEMONIC_CHECKER

static bool PPCCheckMnemonic(StringRef Mnemonic,
                                const FeatureBitset &AvailableFeatures,
                                unsigned VariantID) {
  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  if (MnemonicRange.first == MnemonicRange.second)
    return false;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures =
      FeatureBitsets[it->RequiredFeaturesIdx];
    if ((AvailableFeatures & RequiredFeatures) == RequiredFeatures)
      return true;
  }
  return false;
}

#endif // GET_MNEMONIC_CHECKER

