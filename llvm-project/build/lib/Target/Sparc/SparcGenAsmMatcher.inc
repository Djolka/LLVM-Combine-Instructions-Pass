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

  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic,
    bool ParseForAllFeatures = false);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_UseSoftMulDivBit = 5,
  Feature_HasV9Bit = 1,
  Feature_HasVISBit = 2,
  Feature_HasVIS2Bit = 3,
  Feature_HasVIS3Bit = 4,
  Feature_HasPWRPSRBit = 0,
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_UseSoftMulDivBit: return "";
  case Feature_HasV9Bit: return "";
  case Feature_HasVISBit: return "";
  case Feature_HasVIS2Bit: return "";
  case Feature_HasVIS3Bit: return "";
  case Feature_HasPWRPSRBit: return "";
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
      case 3:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "stw", 3) != 0)
          break;
        if (Features.test(Feature_HasV9Bit))	 // "stw"
          Mnemonic = "st";
        return;
      case 4:	 // 7 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddc", 3) != 0)
            break;
          if (Features.test(Feature_HasV9Bit))	 // "addc"
            Mnemonic = "addx";
          return;
        case 'l':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "duw", 3) != 0)
            break;
          if (Features.test(Feature_HasV9Bit))	 // "lduw"
            Mnemonic = "ld";
          return;
        case 's':	 // 5 strings to match.
          switch (Mnemonic[1]) {
          default: break;
          case 't':	 // 4 strings to match.
            switch (Mnemonic[2]) {
            default: break;
            case 's':	 // 2 strings to match.
              switch (Mnemonic[3]) {
              default: break;
              case 'b':	 // 1 string to match.
                Mnemonic = "stb";	 // "stsb"
                return;
              case 'h':	 // 1 string to match.
                Mnemonic = "sth";	 // "stsh"
                return;
              }
              break;
            case 'u':	 // 2 strings to match.
              switch (Mnemonic[3]) {
              default: break;
              case 'b':	 // 1 string to match.
                Mnemonic = "stb";	 // "stub"
                return;
              case 'h':	 // 1 string to match.
                Mnemonic = "sth";	 // "stuh"
                return;
              }
              break;
            }
            break;
          case 'u':	 // 1 string to match.
            if (memcmp(Mnemonic.data()+2, "bc", 2) != 0)
              break;
            if (Features.test(Feature_HasV9Bit))	 // "subc"
              Mnemonic = "subx";
            return;
          }
          break;
        }
        break;
      case 5:	 // 5 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "duwa", 4) != 0)
            break;
          if (Features.test(Feature_HasV9Bit))	 // "lduwa"
            Mnemonic = "lda";
          return;
        case 's':	 // 4 strings to match.
          if (Mnemonic[1] != 't')
            break;
          switch (Mnemonic[2]) {
          default: break;
          case 's':	 // 2 strings to match.
            switch (Mnemonic[3]) {
            default: break;
            case 'b':	 // 1 string to match.
              if (Mnemonic[4] != 'a')
                break;
              Mnemonic = "stba";	 // "stsba"
              return;
            case 'h':	 // 1 string to match.
              if (Mnemonic[4] != 'a')
                break;
              Mnemonic = "stha";	 // "stsha"
              return;
            }
            break;
          case 'u':	 // 2 strings to match.
            switch (Mnemonic[3]) {
            default: break;
            case 'b':	 // 1 string to match.
              if (Mnemonic[4] != 'a')
                break;
              Mnemonic = "stba";	 // "stuba"
              return;
            case 'h':	 // 1 string to match.
              if (Mnemonic[4] != 'a')
                break;
              Mnemonic = "stha";	 // "stuha"
              return;
            }
            break;
          }
          break;
        }
        break;
      case 6:	 // 4 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddccc", 5) != 0)
            break;
          if (Features.test(Feature_HasV9Bit))	 // "addccc"
            Mnemonic = "addxcc";
          return;
        case 'i':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "flush", 5) != 0)
            break;
          Mnemonic = "flush";	 // "iflush"
          return;
        case 'r':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "eturn", 5) != 0)
            break;
          if (Features.test(Feature_HasV9Bit))	 // "return"
            Mnemonic = "rett";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubccc", 5) != 0)
            break;
          if (Features.test(Feature_HasV9Bit))	 // "subccc"
            Mnemonic = "subxcc";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 3:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "stw", 3) != 0)
      break;
    if (Features.test(Feature_HasV9Bit))	 // "stw"
      Mnemonic = "st";
    return;
  case 4:	 // 7 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddc", 3) != 0)
        break;
      if (Features.test(Feature_HasV9Bit))	 // "addc"
        Mnemonic = "addx";
      return;
    case 'l':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "duw", 3) != 0)
        break;
      if (Features.test(Feature_HasV9Bit))	 // "lduw"
        Mnemonic = "ld";
      return;
    case 's':	 // 5 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 't':	 // 4 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 's':	 // 2 strings to match.
          switch (Mnemonic[3]) {
          default: break;
          case 'b':	 // 1 string to match.
            Mnemonic = "stb";	 // "stsb"
            return;
          case 'h':	 // 1 string to match.
            Mnemonic = "sth";	 // "stsh"
            return;
          }
          break;
        case 'u':	 // 2 strings to match.
          switch (Mnemonic[3]) {
          default: break;
          case 'b':	 // 1 string to match.
            Mnemonic = "stb";	 // "stub"
            return;
          case 'h':	 // 1 string to match.
            Mnemonic = "sth";	 // "stuh"
            return;
          }
          break;
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "bc", 2) != 0)
          break;
        if (Features.test(Feature_HasV9Bit))	 // "subc"
          Mnemonic = "subx";
        return;
      }
      break;
    }
    break;
  case 5:	 // 5 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "duwa", 4) != 0)
        break;
      if (Features.test(Feature_HasV9Bit))	 // "lduwa"
        Mnemonic = "lda";
      return;
    case 's':	 // 4 strings to match.
      if (Mnemonic[1] != 't')
        break;
      switch (Mnemonic[2]) {
      default: break;
      case 's':	 // 2 strings to match.
        switch (Mnemonic[3]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (Mnemonic[4] != 'a')
            break;
          Mnemonic = "stba";	 // "stsba"
          return;
        case 'h':	 // 1 string to match.
          if (Mnemonic[4] != 'a')
            break;
          Mnemonic = "stha";	 // "stsha"
          return;
        }
        break;
      case 'u':	 // 2 strings to match.
        switch (Mnemonic[3]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (Mnemonic[4] != 'a')
            break;
          Mnemonic = "stba";	 // "stuba"
          return;
        case 'h':	 // 1 string to match.
          if (Mnemonic[4] != 'a')
            break;
          Mnemonic = "stha";	 // "stuha"
          return;
        }
        break;
      }
      break;
    }
    break;
  case 6:	 // 4 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddccc", 5) != 0)
        break;
      if (Features.test(Feature_HasV9Bit))	 // "addccc"
        Mnemonic = "addxcc";
      return;
    case 'i':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "flush", 5) != 0)
        break;
      Mnemonic = "flush";	 // "iflush"
      return;
    case 'r':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "eturn", 5) != 0)
        break;
      if (Features.test(Feature_HasV9Bit))	 // "return"
        Mnemonic = "rett";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubccc", 5) != 0)
        break;
      if (Features.test(Feature_HasV9Bit))	 // "subccc"
        Mnemonic = "subxcc";
      return;
    }
    break;
  }
}

enum {
  Tie0_1_1,
  Tie0_3_3,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_1_1 */ { 0, 1, 1 },
  /* Tie0_3_3 */ { 0, 3, 3 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_95_addTailRelocSymOperands,
  CVT_imm_95_8,
  CVT_imm_95_13,
  CVT_imm_95_5,
  CVT_imm_95_1,
  CVT_imm_95_10,
  CVT_imm_95_11,
  CVT_imm_95_12,
  CVT_imm_95_3,
  CVT_imm_95_2,
  CVT_imm_95_4,
  CVT_imm_95_0,
  CVT_imm_95_9,
  CVT_imm_95_6,
  CVT_imm_95_14,
  CVT_regG0,
  CVT_imm_95_15,
  CVT_imm_95_7,
  CVT_95_addCallTargetOperands,
  CVT_regO7,
  CVT_95_addMEMriOperands,
  CVT_95_addMEMrrOperands,
  CVT_regFCC0,
  CVT_95_addMembarTagOperands,
  CVT_95_addShiftAmtImm5Operands,
  CVT_95_addShiftAmtImm6Operands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_2__Reg1_0__Reg1_1,
  Convert__Reg1_2__Reg1_0__Imm1_1,
  Convert__Reg1_2__Reg1_0__Reg1_1__TailRelocSymAdd_TLS1_3,
  Convert__Imm1_0__imm_95_8,
  Convert__Imm1_1__imm_95_8,
  Convert__Imm1_1__Imm1_0,
  Convert__Imm1_2__imm_95_8,
  Convert__Imm1_2__Imm1_0,
  Convert__Imm1_3__imm_95_8,
  Convert__Imm1_3__Imm1_0,
  Convert__Imm1_4__Imm1_0,
  Convert__Imm1_0,
  Convert__Imm1_1,
  Convert__Imm1_0__imm_95_13,
  Convert__Imm1_1__imm_95_13,
  Convert__Imm1_2__imm_95_13,
  Convert__Imm1_3__imm_95_13,
  Convert__Reg1_1__Reg1_1__Reg1_0,
  Convert__Reg1_1__Reg1_1__Imm1_0,
  Convert__Imm1_0__imm_95_5,
  Convert__Imm1_1__imm_95_5,
  Convert__Imm1_2__imm_95_5,
  Convert__Imm1_3__imm_95_5,
  Convert__Imm1_0__imm_95_1,
  Convert__Imm1_1__imm_95_1,
  Convert__Imm1_2__imm_95_1,
  Convert__Imm1_3__imm_95_1,
  Convert__Imm1_0__imm_95_10,
  Convert__Imm1_1__imm_95_10,
  Convert__Imm1_2__imm_95_10,
  Convert__Imm1_3__imm_95_10,
  Convert__Imm1_0__imm_95_11,
  Convert__Imm1_1__imm_95_11,
  Convert__Imm1_2__imm_95_11,
  Convert__Imm1_3__imm_95_11,
  Convert__Imm1_0__imm_95_12,
  Convert__Imm1_1__imm_95_12,
  Convert__Imm1_2__imm_95_12,
  Convert__Imm1_3__imm_95_12,
  Convert__Imm1_0__imm_95_3,
  Convert__Imm1_1__imm_95_3,
  Convert__Imm1_2__imm_95_3,
  Convert__Imm1_3__imm_95_3,
  Convert__Imm1_0__imm_95_2,
  Convert__Imm1_1__imm_95_2,
  Convert__Imm1_2__imm_95_2,
  Convert__Imm1_3__imm_95_2,
  Convert__Imm1_0__imm_95_4,
  Convert__Imm1_1__imm_95_4,
  Convert__Imm1_2__imm_95_4,
  Convert__Imm1_3__imm_95_4,
  Convert__Imm1_0__imm_95_0,
  Convert__Imm1_1__imm_95_0,
  Convert__Imm1_2__imm_95_0,
  Convert__Imm1_3__imm_95_0,
  Convert__Imm1_0__imm_95_9,
  Convert__Imm1_1__imm_95_9,
  Convert__Imm1_2__imm_95_9,
  Convert__Imm1_3__imm_95_9,
  Convert__Imm1_0__imm_95_6,
  Convert__Imm1_1__imm_95_6,
  Convert__Imm1_2__imm_95_6,
  Convert__Imm1_3__imm_95_6,
  Convert__Imm1_0__imm_95_14,
  Convert__Imm1_1__imm_95_14,
  Convert__Imm1_2__imm_95_14,
  Convert__Imm1_3__imm_95_14,
  Convert__Reg1_0__Imm1_1,
  Convert__Reg1_1__Imm1_2,
  Convert__Reg1_2__Imm1_3,
  Convert__regG0__Reg1_1__Reg1_0,
  Convert__regG0__Reg1_1__Imm1_0,
  Convert__Imm1_0__imm_95_15,
  Convert__Imm1_1__imm_95_15,
  Convert__Imm1_2__imm_95_15,
  Convert__Imm1_3__imm_95_15,
  Convert__Imm1_0__imm_95_7,
  Convert__Imm1_1__imm_95_7,
  Convert__Imm1_2__imm_95_7,
  Convert__Imm1_3__imm_95_7,
  Convert__CallTarget1_0,
  Convert__regO7__MEMri2_0,
  Convert__regO7__MEMrr2_0,
  Convert__CallTarget1_0__TailRelocSymCall_TLS1_1,
  Convert__Reg1_4__Reg1_1__Reg1_3__Tie0_1_1,
  Convert__Reg1_5__Reg1_1__Reg1_4__Tie0_1_1,
  Convert__Reg1_5__Reg1_1__Reg1_4__Tie0_1_1__Imm1_3,
  Convert__Reg1_0__regG0__regG0,
  Convert__MEMri2_1__regG0,
  Convert__MEMrr2_1__regG0,
  Convert__Reg1_0,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_0__imm_95_1,
  Convert__Reg1_1__Reg1_0,
  Convert__Imm1_1__imm_95_8__Reg1_0,
  Convert__Imm1_2__imm_95_8__Reg1_1,
  Convert__Imm1_2__Imm1_0__Reg1_1,
  Convert__Imm1_3__imm_95_8__Reg1_2,
  Convert__Imm1_3__Imm1_0__Reg1_2,
  Convert__Imm1_4__Imm1_0__Reg1_3,
  Convert__Imm1_1__imm_95_9__Reg1_0,
  Convert__Imm1_2__imm_95_9__Reg1_1,
  Convert__Imm1_3__imm_95_9__Reg1_2,
  Convert__Imm1_1__imm_95_6__Reg1_0,
  Convert__Imm1_2__imm_95_6__Reg1_1,
  Convert__Imm1_3__imm_95_6__Reg1_2,
  Convert__Imm1_1__imm_95_11__Reg1_0,
  Convert__Imm1_2__imm_95_11__Reg1_1,
  Convert__Imm1_3__imm_95_11__Reg1_2,
  Convert__Imm1_1__imm_95_4__Reg1_0,
  Convert__Imm1_2__imm_95_4__Reg1_1,
  Convert__Imm1_3__imm_95_4__Reg1_2,
  Convert__Imm1_1__imm_95_13__Reg1_0,
  Convert__Imm1_2__imm_95_13__Reg1_1,
  Convert__Imm1_3__imm_95_13__Reg1_2,
  Convert__Imm1_1__imm_95_2__Reg1_0,
  Convert__Imm1_2__imm_95_2__Reg1_1,
  Convert__Imm1_3__imm_95_2__Reg1_2,
  Convert__Imm1_1__imm_95_0__Reg1_0,
  Convert__Imm1_2__imm_95_0__Reg1_1,
  Convert__Imm1_3__imm_95_0__Reg1_2,
  Convert__Imm1_1__imm_95_1__Reg1_0,
  Convert__Imm1_2__imm_95_1__Reg1_1,
  Convert__Imm1_3__imm_95_1__Reg1_2,
  Convert__Imm1_1__imm_95_15__Reg1_0,
  Convert__Imm1_2__imm_95_15__Reg1_1,
  Convert__Imm1_3__imm_95_15__Reg1_2,
  Convert__Imm1_1__imm_95_7__Reg1_0,
  Convert__Imm1_2__imm_95_7__Reg1_1,
  Convert__Imm1_3__imm_95_7__Reg1_2,
  Convert__Imm1_1__imm_95_10__Reg1_0,
  Convert__Imm1_2__imm_95_10__Reg1_1,
  Convert__Imm1_3__imm_95_10__Reg1_2,
  Convert__Imm1_1__imm_95_5__Reg1_0,
  Convert__Imm1_2__imm_95_5__Reg1_1,
  Convert__Imm1_3__imm_95_5__Reg1_2,
  Convert__Imm1_1__imm_95_12__Reg1_0,
  Convert__Imm1_2__imm_95_12__Reg1_1,
  Convert__Imm1_3__imm_95_12__Reg1_2,
  Convert__Imm1_1__imm_95_3__Reg1_0,
  Convert__Imm1_2__imm_95_3__Reg1_1,
  Convert__Imm1_3__imm_95_3__Reg1_2,
  Convert__Imm1_1__imm_95_14__Reg1_0,
  Convert__Imm1_2__imm_95_14__Reg1_1,
  Convert__Imm1_3__imm_95_14__Reg1_2,
  Convert__regFCC0__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert_NoOperands,
  Convert__MEMri2_0,
  Convert__MEMrr2_0,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8,
  Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0,
  Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_11,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_4,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_13,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_0,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_15,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_12,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_14,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15,
  Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7,
  Convert__Reg1_0__Tie0_1_1,
  Convert__regG0__MEMri2_0,
  Convert__regG0__MEMrr2_0,
  Convert__Reg1_1__MEMri2_0,
  Convert__Reg1_1__MEMrr2_0,
  Convert__MEMri2_1,
  Convert__Reg1_3__MEMri2_1,
  Convert__MEMrr2_1,
  Convert__Reg1_3__MEMrr2_1,
  Convert__Reg1_3__MEMrr2_1__TailRelocSymLoad_GOT1_4,
  Convert__Reg1_3__MEMrr2_1__TailRelocSymLoad_TLS1_4,
  Convert__Reg1_4__MEMrr2_1__Imm1_3,
  Convert__MembarTag1_0,
  Convert__Reg1_1,
  Convert__regG0__Reg1_0,
  Convert__Reg1_1__regG0__Reg1_0,
  Convert__regG0__Imm1_0,
  Convert__Reg1_1__regG0__Imm1_0,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_8,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_8,
  Convert__Reg1_3__Imm1_2__Tie0_1_1__Imm1_0,
  Convert__Reg1_3__Reg1_1__Imm1_2__Tie0_1_1__Imm1_0,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_13,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_5,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_1,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_9,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_6,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_11,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_11,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_12,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_4,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_2,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_13,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_4,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_2,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_0,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_0,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_9,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_1,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_6,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_15,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_14,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_7,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_5,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_12,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_14,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_15,
  Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_7,
  Convert__Reg1_0__regG0__Reg1_0,
  Convert__Reg1_0__Reg1_0__regG0,
  Convert__Reg1_1__Reg1_0__regG0,
  Convert__MEMri2_1__ShiftAmtImm51_3,
  Convert__MEMrr2_1__ShiftAmtImm51_3,
  Convert__regG0__regG0__regG0,
  Convert__imm_95_8,
  Convert__Reg1_1__Imm1_0,
  Convert__imm_95_0,
  Convert__Reg1_2__Reg1_0__ShiftAmtImm51_1,
  Convert__Reg1_2__Reg1_0__ShiftAmtImm61_1,
  Convert__Reg1_2__Reg1_0__Reg1_1__imm_95_0,
  Convert__Reg1_2__Reg1_0__Imm1_1__imm_95_0,
  Convert__MEMri2_2,
  Convert__MEMrr2_2,
  Convert__MEMri2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0__Imm1_4,
  Convert__Reg1_3__MEMri2_1__Tie0_1_1,
  Convert__Reg1_3__MEMrr2_1__Tie0_1_1,
  Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0_1_1,
  Convert__regG0__Reg1_0__imm_95_8,
  Convert__regG0__Imm1_0__imm_95_8,
  Convert__regG0__Reg1_1__imm_95_8,
  Convert__regG0__Imm1_1__imm_95_8,
  Convert__Reg1_0__Reg1_2__imm_95_8,
  Convert__Reg1_0__Imm1_2__imm_95_8,
  Convert__Reg1_1__Reg1_3__imm_95_8,
  Convert__Reg1_1__Imm1_3__imm_95_8,
  Convert__Reg1_1__Reg1_3__Imm1_0,
  Convert__Reg1_1__Imm1_3__Imm1_0,
  Convert__Reg1_2__Reg1_4__Imm1_0,
  Convert__Reg1_2__Imm1_4__Imm1_0,
  Convert__regG0__Reg1_0__imm_95_13,
  Convert__regG0__Imm1_0__imm_95_13,
  Convert__regG0__Reg1_1__imm_95_13,
  Convert__regG0__Imm1_1__imm_95_13,
  Convert__Reg1_0__Reg1_2__imm_95_13,
  Convert__Reg1_0__Imm1_2__imm_95_13,
  Convert__Reg1_1__Reg1_3__imm_95_13,
  Convert__Reg1_1__Imm1_3__imm_95_13,
  Convert__regG0__Reg1_0__imm_95_5,
  Convert__regG0__Imm1_0__imm_95_5,
  Convert__regG0__Reg1_1__imm_95_5,
  Convert__regG0__Imm1_1__imm_95_5,
  Convert__Reg1_0__Reg1_2__imm_95_5,
  Convert__Reg1_0__Imm1_2__imm_95_5,
  Convert__Reg1_1__Reg1_3__imm_95_5,
  Convert__Reg1_1__Imm1_3__imm_95_5,
  Convert__regG0__Reg1_0__imm_95_1,
  Convert__regG0__Imm1_0__imm_95_1,
  Convert__regG0__Reg1_1__imm_95_1,
  Convert__regG0__Imm1_1__imm_95_1,
  Convert__Reg1_0__Reg1_2__imm_95_1,
  Convert__Reg1_0__Imm1_2__imm_95_1,
  Convert__Reg1_1__Reg1_3__imm_95_1,
  Convert__Reg1_1__Imm1_3__imm_95_1,
  Convert__regG0__Reg1_0__imm_95_10,
  Convert__regG0__Imm1_0__imm_95_10,
  Convert__regG0__Reg1_1__imm_95_10,
  Convert__regG0__Imm1_1__imm_95_10,
  Convert__Reg1_0__Reg1_2__imm_95_10,
  Convert__Reg1_0__Imm1_2__imm_95_10,
  Convert__Reg1_1__Reg1_3__imm_95_10,
  Convert__Reg1_1__Imm1_3__imm_95_10,
  Convert__regG0__Reg1_0__imm_95_11,
  Convert__regG0__Imm1_0__imm_95_11,
  Convert__regG0__Reg1_1__imm_95_11,
  Convert__regG0__Imm1_1__imm_95_11,
  Convert__Reg1_0__Reg1_2__imm_95_11,
  Convert__Reg1_0__Imm1_2__imm_95_11,
  Convert__Reg1_1__Reg1_3__imm_95_11,
  Convert__Reg1_1__Imm1_3__imm_95_11,
  Convert__regG0__Reg1_0__imm_95_12,
  Convert__regG0__Imm1_0__imm_95_12,
  Convert__regG0__Reg1_1__imm_95_12,
  Convert__regG0__Imm1_1__imm_95_12,
  Convert__Reg1_0__Reg1_2__imm_95_12,
  Convert__Reg1_0__Imm1_2__imm_95_12,
  Convert__Reg1_1__Reg1_3__imm_95_12,
  Convert__Reg1_1__Imm1_3__imm_95_12,
  Convert__regG0__Reg1_0__imm_95_3,
  Convert__regG0__Imm1_0__imm_95_3,
  Convert__regG0__Reg1_1__imm_95_3,
  Convert__regG0__Imm1_1__imm_95_3,
  Convert__Reg1_0__Reg1_2__imm_95_3,
  Convert__Reg1_0__Imm1_2__imm_95_3,
  Convert__Reg1_1__Reg1_3__imm_95_3,
  Convert__Reg1_1__Imm1_3__imm_95_3,
  Convert__regG0__Reg1_0__imm_95_2,
  Convert__regG0__Imm1_0__imm_95_2,
  Convert__regG0__Reg1_1__imm_95_2,
  Convert__regG0__Imm1_1__imm_95_2,
  Convert__Reg1_0__Reg1_2__imm_95_2,
  Convert__Reg1_0__Imm1_2__imm_95_2,
  Convert__Reg1_1__Reg1_3__imm_95_2,
  Convert__Reg1_1__Imm1_3__imm_95_2,
  Convert__regG0__Reg1_0__imm_95_4,
  Convert__regG0__Imm1_0__imm_95_4,
  Convert__regG0__Reg1_1__imm_95_4,
  Convert__regG0__Imm1_1__imm_95_4,
  Convert__Reg1_0__Reg1_2__imm_95_4,
  Convert__Reg1_0__Imm1_2__imm_95_4,
  Convert__Reg1_1__Reg1_3__imm_95_4,
  Convert__Reg1_1__Imm1_3__imm_95_4,
  Convert__regG0__Reg1_0__imm_95_0,
  Convert__regG0__Imm1_0__imm_95_0,
  Convert__regG0__Reg1_1__imm_95_0,
  Convert__regG0__Imm1_1__imm_95_0,
  Convert__Reg1_0__Reg1_2__imm_95_0,
  Convert__Reg1_0__Imm1_2__imm_95_0,
  Convert__Reg1_1__Reg1_3__imm_95_0,
  Convert__Reg1_1__Imm1_3__imm_95_0,
  Convert__regG0__Reg1_0__imm_95_9,
  Convert__regG0__Imm1_0__imm_95_9,
  Convert__regG0__Reg1_1__imm_95_9,
  Convert__regG0__Imm1_1__imm_95_9,
  Convert__Reg1_0__Reg1_2__imm_95_9,
  Convert__Reg1_0__Imm1_2__imm_95_9,
  Convert__Reg1_1__Reg1_3__imm_95_9,
  Convert__Reg1_1__Imm1_3__imm_95_9,
  Convert__regG0__Reg1_0__imm_95_6,
  Convert__regG0__Imm1_0__imm_95_6,
  Convert__regG0__Reg1_1__imm_95_6,
  Convert__regG0__Imm1_1__imm_95_6,
  Convert__Reg1_0__Reg1_2__imm_95_6,
  Convert__Reg1_0__Imm1_2__imm_95_6,
  Convert__Reg1_1__Reg1_3__imm_95_6,
  Convert__Reg1_1__Imm1_3__imm_95_6,
  Convert__regG0__Reg1_0__imm_95_14,
  Convert__regG0__Imm1_0__imm_95_14,
  Convert__regG0__Reg1_1__imm_95_14,
  Convert__regG0__Imm1_1__imm_95_14,
  Convert__Reg1_0__Reg1_2__imm_95_14,
  Convert__Reg1_0__Imm1_2__imm_95_14,
  Convert__Reg1_1__Reg1_3__imm_95_14,
  Convert__Reg1_1__Imm1_3__imm_95_14,
  Convert__regG0__Reg1_0__regG0,
  Convert__regG0__Reg1_0__imm_95_15,
  Convert__regG0__Imm1_0__imm_95_15,
  Convert__regG0__Reg1_1__imm_95_15,
  Convert__regG0__Imm1_1__imm_95_15,
  Convert__Reg1_0__Reg1_2__imm_95_15,
  Convert__Reg1_0__Imm1_2__imm_95_15,
  Convert__Reg1_1__Reg1_3__imm_95_15,
  Convert__Reg1_1__Imm1_3__imm_95_15,
  Convert__regG0__Reg1_0__imm_95_7,
  Convert__regG0__Imm1_0__imm_95_7,
  Convert__regG0__Reg1_1__imm_95_7,
  Convert__regG0__Imm1_1__imm_95_7,
  Convert__Reg1_0__Reg1_2__imm_95_7,
  Convert__Reg1_0__Imm1_2__imm_95_7,
  Convert__Reg1_1__Reg1_3__imm_95_7,
  Convert__Reg1_1__Imm1_3__imm_95_7,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_2__Reg1_0__Reg1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__TailRelocSymAdd_TLS1_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addTailRelocSymOperands, 4, CVT_Done },
  // Convert__Imm1_0__imm_95_8
  { CVT_95_addImmOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_8
  { CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_8
  { CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_2__Imm1_0
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_3__imm_95_8
  { CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_3__Imm1_0
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_4__Imm1_0
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0__imm_95_13
  { CVT_95_addImmOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_13
  { CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_13
  { CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_13
  { CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_5
  { CVT_95_addImmOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_5
  { CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_5
  { CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_5
  { CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_1
  { CVT_95_addImmOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_1
  { CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_1
  { CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_10
  { CVT_95_addImmOperands, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_10
  { CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_10
  { CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_10
  { CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_11
  { CVT_95_addImmOperands, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_11
  { CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_11
  { CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_11
  { CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_12
  { CVT_95_addImmOperands, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_12
  { CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_12
  { CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_12
  { CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_3
  { CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_3
  { CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_3
  { CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_3
  { CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_2
  { CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_2
  { CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_4
  { CVT_95_addImmOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_4
  { CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_4
  { CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_4
  { CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_0
  { CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_0
  { CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_9
  { CVT_95_addImmOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_9
  { CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_9
  { CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_9
  { CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_6
  { CVT_95_addImmOperands, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_6
  { CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_6
  { CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_6
  { CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_14
  { CVT_95_addImmOperands, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_14
  { CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_14
  { CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_14
  { CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Imm1_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_2__Imm1_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regG0__Reg1_1__Reg1_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__regG0__Reg1_1__Imm1_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_15
  { CVT_95_addImmOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_15
  { CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_15
  { CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_15
  { CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_7
  { CVT_95_addImmOperands, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_7
  { CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_7
  { CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_7
  { CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__CallTarget1_0
  { CVT_95_addCallTargetOperands, 1, CVT_Done },
  // Convert__regO7__MEMri2_0
  { CVT_regO7, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regO7__MEMrr2_0
  { CVT_regO7, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__CallTarget1_0__TailRelocSymCall_TLS1_1
  { CVT_95_addCallTargetOperands, 1, CVT_95_addTailRelocSymOperands, 2, CVT_Done },
  // Convert__Reg1_4__Reg1_1__Reg1_3__Tie0_1_1
  { CVT_95_Reg, 5, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__Reg1_5__Reg1_1__Reg1_4__Tie0_1_1
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 5, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__Reg1_5__Reg1_1__Reg1_4__Tie0_1_1__Imm1_3
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 5, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__regG0__regG0
  { CVT_95_Reg, 1, CVT_regG0, 0, CVT_regG0, 0, CVT_Done },
  // Convert__MEMri2_1__regG0
  { CVT_95_addMEMriOperands, 2, CVT_regG0, 0, CVT_Done },
  // Convert__MEMrr2_1__regG0
  { CVT_95_addMEMrrOperands, 2, CVT_regG0, 0, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_0__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_1__imm_95_8__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_8__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_2__Imm1_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_8__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_3__Imm1_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_4__Imm1_0__Reg1_3
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_95_Reg, 4, CVT_Done },
  // Convert__Imm1_1__imm_95_9__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_9__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_9__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_6__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_6__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_6__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_11__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_11__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_11__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_4__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_4__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_4__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_13__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_13__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_13__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_2__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_2__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_2__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_0__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_1__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_1__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_1__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_15__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_15__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_15__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_7__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_7__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_7__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_10__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_10__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_10__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_5__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_5__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_5__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_12__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_12__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_12__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_3__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_3__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_3__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_14__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_14__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_14__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__regFCC0__Reg1_0__Reg1_1
  { CVT_regFCC0, 0, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__MEMri2_0
  { CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__MEMrr2_0
  { CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 3, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__regG0__MEMri2_0
  { CVT_regG0, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regG0__MEMrr2_0
  { CVT_regG0, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMri2_0
  { CVT_95_Reg, 2, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMrr2_0
  { CVT_95_Reg, 2, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__MEMri2_1
  { CVT_95_addMEMriOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMri2_1
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Done },
  // Convert__MEMrr2_1
  { CVT_95_addMEMrrOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1__TailRelocSymLoad_GOT1_4
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_95_addTailRelocSymOperands, 5, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1__TailRelocSymLoad_TLS1_4
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_95_addTailRelocSymOperands, 5, CVT_Done },
  // Convert__Reg1_4__MEMrr2_1__Imm1_3
  { CVT_95_Reg, 5, CVT_95_addMEMrrOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__MembarTag1_0
  { CVT_95_addMembarTagOperands, 1, CVT_Done },
  // Convert__Reg1_1
  { CVT_95_Reg, 2, CVT_Done },
  // Convert__regG0__Reg1_0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__regG0__Reg1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__regG0__Imm1_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__regG0__Imm1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_8
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_3__Imm1_2__Tie0_1_1__Imm1_0
  { CVT_95_Reg, 4, CVT_95_addImmOperands, 3, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Imm1_2__Tie0_1_1__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_13
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_5
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_1
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_10
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_11
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_12
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_2
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_4
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_9
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_6
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_14
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_15
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_7
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, Tie0_3_3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__regG0__Reg1_0
  { CVT_95_Reg, 1, CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_0__regG0
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_0__regG0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__MEMri2_1__ShiftAmtImm51_3
  { CVT_95_addMEMriOperands, 2, CVT_95_addShiftAmtImm5Operands, 4, CVT_Done },
  // Convert__MEMrr2_1__ShiftAmtImm51_3
  { CVT_95_addMEMrrOperands, 2, CVT_95_addShiftAmtImm5Operands, 4, CVT_Done },
  // Convert__regG0__regG0__regG0
  { CVT_regG0, 0, CVT_regG0, 0, CVT_regG0, 0, CVT_Done },
  // Convert__imm_95_8
  { CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__ShiftAmtImm51_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addShiftAmtImm5Operands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__ShiftAmtImm61_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addShiftAmtImm6Operands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__MEMri2_2
  { CVT_95_addMEMriOperands, 3, CVT_Done },
  // Convert__MEMrr2_2
  { CVT_95_addMEMrrOperands, 3, CVT_Done },
  // Convert__MEMri2_2__Reg1_0
  { CVT_95_addMEMriOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0__Imm1_4
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_3__MEMri2_1__Tie0_1_1
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1__Tie0_1_1
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0_1_1
  { CVT_95_Reg, 5, CVT_95_addMEMrrOperands, 2, CVT_95_addImmOperands, 4, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_8
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_8
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_8
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_8
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_8
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_8
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__Imm1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm1_3__Imm1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_13
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_13
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_13
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_13
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_13
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_13
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_5
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_5
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_5
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_5
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_5
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_1
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_1
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_1
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_1
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_10
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_10
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_10
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_10
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_10
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_11
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_11
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_11
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_11
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_11
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_11
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_12
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_12
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_12
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_12
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_12
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_12
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_3
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_3
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_3
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_2
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_2
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_2
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_4
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_4
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_4
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_4
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_4
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_0
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_9
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_9
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_9
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_9
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_9
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_6
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_6
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_6
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_6
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_6
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_6
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_14
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_14
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_14
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_14
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_14
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_14
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Reg1_0__regG0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_15
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_15
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_15
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_15
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_15
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_15
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_7
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_7
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_7
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_7
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_Done },
};

void SparcAsmParser::
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
      static_cast<SparcOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
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
    case CVT_95_Reg:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addTailRelocSymOperands:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addTailRelocSymOperands(Inst, 1);
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_13:
      Inst.addOperand(MCOperand::createImm(13));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_imm_95_10:
      Inst.addOperand(MCOperand::createImm(10));
      break;
    case CVT_imm_95_11:
      Inst.addOperand(MCOperand::createImm(11));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_imm_95_9:
      Inst.addOperand(MCOperand::createImm(9));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_regG0:
      Inst.addOperand(MCOperand::createReg(SP::G0));
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_95_addCallTargetOperands:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addCallTargetOperands(Inst, 1);
      break;
    case CVT_regO7:
      Inst.addOperand(MCOperand::createReg(SP::O7));
      break;
    case CVT_95_addMEMriOperands:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addMEMriOperands(Inst, 2);
      break;
    case CVT_95_addMEMrrOperands:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addMEMrrOperands(Inst, 2);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::createReg(SP::FCC0));
      break;
    case CVT_95_addMembarTagOperands:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addMembarTagOperands(Inst, 1);
      break;
    case CVT_95_addShiftAmtImm5Operands:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addShiftAmtImm5Operands(Inst, 1);
      break;
    case CVT_95_addShiftAmtImm6Operands:
      static_cast<SparcOperand &>(*Operands[OpIdx]).addShiftAmtImm6Operands(Inst, 1);
      break;
    }
  }
}

void SparcAsmParser::
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
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addTailRelocSymOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_13:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_11:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
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
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_9:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regG0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCallTargetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regO7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMEMriOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMEMrrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMembarTagOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addShiftAmtImm5Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addShiftAmtImm6Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
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
  MCK__PCT_cq, // '%cq'
  MCK__PCT_csr, // '%csr'
  MCK__PCT_fcc0, // '%fcc0'
  MCK__PCT_fq, // '%fq'
  MCK__PCT_fsr, // '%fsr'
  MCK__PCT_g0, // '%g0'
  MCK__PCT_icc, // '%icc'
  MCK__PCT_pc, // '%pc'
  MCK__PCT_psr, // '%psr'
  MCK__PCT_tbr, // '%tbr'
  MCK__PCT_wim, // '%wim'
  MCK__PCT_xcc, // '%xcc'
  MCK__43_, // '+'
  MCK_1, // '1'
  MCK_10, // '10'
  MCK_3, // '3'
  MCK_5, // '5'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_a, // 'a'
  MCK_pn, // 'pn'
  MCK_pt, // 'pt'
  MCK_LAST_TOKEN = MCK_pt,
  MCK_FCCRegs, // register class 'FCCRegs'
  MCK_LowQFPRegs, // register class 'LowQFPRegs'
  MCK_PRRegs, // register class 'PRRegs'
  MCK_CoprocPair, // register class 'CoprocPair'
  MCK_IntPair, // register class 'IntPair'
  MCK_LowDFPRegs, // register class 'LowDFPRegs'
  MCK_QFPRegs, // register class 'QFPRegs'
  MCK_ASRRegs, // register class 'ASRRegs'
  MCK_CoprocRegs, // register class 'CoprocRegs'
  MCK_DFPRegs, // register class 'DFPRegs'
  MCK_FPRegs, // register class 'FPRegs'
  MCK_IntRegs, // register class 'IntRegs,I64Regs'
  MCK_LAST_REGISTER = MCK_IntRegs,
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_CallTarget, // user defined class 'SparcCallTargetAsmOperand'
  MCK_MEMri, // user defined class 'SparcMEMriAsmOperand'
  MCK_MEMrr, // user defined class 'SparcMEMrrAsmOperand'
  MCK_MembarTag, // user defined class 'SparcMembarTagAsmOperand'
  MCK_ShiftAmtImm5, // user defined class 'anonymous_3979'
  MCK_ShiftAmtImm6, // user defined class 'anonymous_3980'
  MCK_TailRelocSymLoad_GOT, // user defined class 'anonymous_3981'
  MCK_TailRelocSymAdd_TLS, // user defined class 'anonymous_3982'
  MCK_TailRelocSymLoad_TLS, // user defined class 'anonymous_3983'
  MCK_TailRelocSymCall_TLS, // user defined class 'anonymous_3984'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case '+':	 // 1 string to match.
      return MCK__43_;	 // "+"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case 'a':	 // 1 string to match.
      return MCK_a;	 // "a"
    }
    break;
  case 2:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case '1':	 // 1 string to match.
      if (Name[1] != '0')
        break;
      return MCK_10;	 // "10"
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'n':	 // 1 string to match.
        return MCK_pn;	 // "pn"
      case 't':	 // 1 string to match.
        return MCK_pt;	 // "pt"
      }
      break;
    }
    break;
  case 3:	 // 4 strings to match.
    if (Name[0] != '%')
      break;
    switch (Name[1]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (Name[2] != 'q')
        break;
      return MCK__PCT_cq;	 // "%cq"
    case 'f':	 // 1 string to match.
      if (Name[2] != 'q')
        break;
      return MCK__PCT_fq;	 // "%fq"
    case 'g':	 // 1 string to match.
      if (Name[2] != '0')
        break;
      return MCK__PCT_g0;	 // "%g0"
    case 'p':	 // 1 string to match.
      if (Name[2] != 'c')
        break;
      return MCK__PCT_pc;	 // "%pc"
    }
    break;
  case 4:	 // 7 strings to match.
    if (Name[0] != '%')
      break;
    switch (Name[1]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2) != 0)
        break;
      return MCK__PCT_csr;	 // "%csr"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2) != 0)
        break;
      return MCK__PCT_fsr;	 // "%fsr"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2) != 0)
        break;
      return MCK__PCT_icc;	 // "%icc"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2) != 0)
        break;
      return MCK__PCT_psr;	 // "%psr"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "br", 2) != 0)
        break;
      return MCK__PCT_tbr;	 // "%tbr"
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+2, "im", 2) != 0)
        break;
      return MCK__PCT_wim;	 // "%wim"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2) != 0)
        break;
      return MCK__PCT_xcc;	 // "%xcc"
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Name.data()+0, "%fcc0", 5) != 0)
      break;
    return MCK__PCT_fcc0;	 // "%fcc0"
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

  case MCK_LowQFPRegs:
    return B == MCK_QFPRegs;

  case MCK_LowDFPRegs:
    return B == MCK_DFPRegs;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SparcOperand &Operand = (SparcOperand &)GOp;
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
  // 'CallTarget' class
  case MCK_CallTarget: {
    DiagnosticPredicate DP(Operand.isCallTarget());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'MEMri' class
  case MCK_MEMri: {
    DiagnosticPredicate DP(Operand.isMEMri());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'MEMrr' class
  case MCK_MEMrr: {
    DiagnosticPredicate DP(Operand.isMEMrr());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'MembarTag' class
  case MCK_MembarTag: {
    DiagnosticPredicate DP(Operand.isMembarTag());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ShiftAmtImm5' class
  case MCK_ShiftAmtImm5: {
    DiagnosticPredicate DP(Operand.isShiftAmtImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ShiftAmtImm6' class
  case MCK_ShiftAmtImm6: {
    DiagnosticPredicate DP(Operand.isShiftAmtImm6());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'TailRelocSymLoad_GOT' class
  case MCK_TailRelocSymLoad_GOT: {
    DiagnosticPredicate DP(Operand.isTailRelocSym());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'TailRelocSymAdd_TLS' class
  case MCK_TailRelocSymAdd_TLS: {
    DiagnosticPredicate DP(Operand.isTailRelocSym());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'TailRelocSymLoad_TLS' class
  case MCK_TailRelocSymLoad_TLS: {
    DiagnosticPredicate DP(Operand.isTailRelocSym());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'TailRelocSymCall_TLS' class
  case MCK_TailRelocSymCall_TLS: {
    DiagnosticPredicate DP(Operand.isTailRelocSym());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SP::FCC0: OpKind = MCK_FCCRegs; break;
    case SP::FCC1: OpKind = MCK_FCCRegs; break;
    case SP::FCC2: OpKind = MCK_FCCRegs; break;
    case SP::FCC3: OpKind = MCK_FCCRegs; break;
    case SP::Y: OpKind = MCK_ASRRegs; break;
    case SP::ASR1: OpKind = MCK_ASRRegs; break;
    case SP::ASR2: OpKind = MCK_ASRRegs; break;
    case SP::ASR3: OpKind = MCK_ASRRegs; break;
    case SP::ASR4: OpKind = MCK_ASRRegs; break;
    case SP::ASR5: OpKind = MCK_ASRRegs; break;
    case SP::ASR6: OpKind = MCK_ASRRegs; break;
    case SP::ASR7: OpKind = MCK_ASRRegs; break;
    case SP::ASR8: OpKind = MCK_ASRRegs; break;
    case SP::ASR9: OpKind = MCK_ASRRegs; break;
    case SP::ASR10: OpKind = MCK_ASRRegs; break;
    case SP::ASR11: OpKind = MCK_ASRRegs; break;
    case SP::ASR12: OpKind = MCK_ASRRegs; break;
    case SP::ASR13: OpKind = MCK_ASRRegs; break;
    case SP::ASR14: OpKind = MCK_ASRRegs; break;
    case SP::ASR15: OpKind = MCK_ASRRegs; break;
    case SP::ASR16: OpKind = MCK_ASRRegs; break;
    case SP::ASR17: OpKind = MCK_ASRRegs; break;
    case SP::ASR18: OpKind = MCK_ASRRegs; break;
    case SP::ASR19: OpKind = MCK_ASRRegs; break;
    case SP::ASR20: OpKind = MCK_ASRRegs; break;
    case SP::ASR21: OpKind = MCK_ASRRegs; break;
    case SP::ASR22: OpKind = MCK_ASRRegs; break;
    case SP::ASR23: OpKind = MCK_ASRRegs; break;
    case SP::ASR24: OpKind = MCK_ASRRegs; break;
    case SP::ASR25: OpKind = MCK_ASRRegs; break;
    case SP::ASR26: OpKind = MCK_ASRRegs; break;
    case SP::ASR27: OpKind = MCK_ASRRegs; break;
    case SP::ASR28: OpKind = MCK_ASRRegs; break;
    case SP::ASR29: OpKind = MCK_ASRRegs; break;
    case SP::ASR30: OpKind = MCK_ASRRegs; break;
    case SP::ASR31: OpKind = MCK_ASRRegs; break;
    case SP::TPC: OpKind = MCK_PRRegs; break;
    case SP::TNPC: OpKind = MCK_PRRegs; break;
    case SP::TSTATE: OpKind = MCK_PRRegs; break;
    case SP::TT: OpKind = MCK_PRRegs; break;
    case SP::TICK: OpKind = MCK_PRRegs; break;
    case SP::TBA: OpKind = MCK_PRRegs; break;
    case SP::PSTATE: OpKind = MCK_PRRegs; break;
    case SP::TL: OpKind = MCK_PRRegs; break;
    case SP::PIL: OpKind = MCK_PRRegs; break;
    case SP::CWP: OpKind = MCK_PRRegs; break;
    case SP::CANSAVE: OpKind = MCK_PRRegs; break;
    case SP::CANRESTORE: OpKind = MCK_PRRegs; break;
    case SP::CLEANWIN: OpKind = MCK_PRRegs; break;
    case SP::OTHERWIN: OpKind = MCK_PRRegs; break;
    case SP::WSTATE: OpKind = MCK_PRRegs; break;
    case SP::G0: OpKind = MCK_IntRegs; break;
    case SP::G1: OpKind = MCK_IntRegs; break;
    case SP::G2: OpKind = MCK_IntRegs; break;
    case SP::G3: OpKind = MCK_IntRegs; break;
    case SP::G4: OpKind = MCK_IntRegs; break;
    case SP::G5: OpKind = MCK_IntRegs; break;
    case SP::G6: OpKind = MCK_IntRegs; break;
    case SP::G7: OpKind = MCK_IntRegs; break;
    case SP::O0: OpKind = MCK_IntRegs; break;
    case SP::O1: OpKind = MCK_IntRegs; break;
    case SP::O2: OpKind = MCK_IntRegs; break;
    case SP::O3: OpKind = MCK_IntRegs; break;
    case SP::O4: OpKind = MCK_IntRegs; break;
    case SP::O5: OpKind = MCK_IntRegs; break;
    case SP::O6: OpKind = MCK_IntRegs; break;
    case SP::O7: OpKind = MCK_IntRegs; break;
    case SP::L0: OpKind = MCK_IntRegs; break;
    case SP::L1: OpKind = MCK_IntRegs; break;
    case SP::L2: OpKind = MCK_IntRegs; break;
    case SP::L3: OpKind = MCK_IntRegs; break;
    case SP::L4: OpKind = MCK_IntRegs; break;
    case SP::L5: OpKind = MCK_IntRegs; break;
    case SP::L6: OpKind = MCK_IntRegs; break;
    case SP::L7: OpKind = MCK_IntRegs; break;
    case SP::I0: OpKind = MCK_IntRegs; break;
    case SP::I1: OpKind = MCK_IntRegs; break;
    case SP::I2: OpKind = MCK_IntRegs; break;
    case SP::I3: OpKind = MCK_IntRegs; break;
    case SP::I4: OpKind = MCK_IntRegs; break;
    case SP::I5: OpKind = MCK_IntRegs; break;
    case SP::I6: OpKind = MCK_IntRegs; break;
    case SP::I7: OpKind = MCK_IntRegs; break;
    case SP::F0: OpKind = MCK_FPRegs; break;
    case SP::F1: OpKind = MCK_FPRegs; break;
    case SP::F2: OpKind = MCK_FPRegs; break;
    case SP::F3: OpKind = MCK_FPRegs; break;
    case SP::F4: OpKind = MCK_FPRegs; break;
    case SP::F5: OpKind = MCK_FPRegs; break;
    case SP::F6: OpKind = MCK_FPRegs; break;
    case SP::F7: OpKind = MCK_FPRegs; break;
    case SP::F8: OpKind = MCK_FPRegs; break;
    case SP::F9: OpKind = MCK_FPRegs; break;
    case SP::F10: OpKind = MCK_FPRegs; break;
    case SP::F11: OpKind = MCK_FPRegs; break;
    case SP::F12: OpKind = MCK_FPRegs; break;
    case SP::F13: OpKind = MCK_FPRegs; break;
    case SP::F14: OpKind = MCK_FPRegs; break;
    case SP::F15: OpKind = MCK_FPRegs; break;
    case SP::F16: OpKind = MCK_FPRegs; break;
    case SP::F17: OpKind = MCK_FPRegs; break;
    case SP::F18: OpKind = MCK_FPRegs; break;
    case SP::F19: OpKind = MCK_FPRegs; break;
    case SP::F20: OpKind = MCK_FPRegs; break;
    case SP::F21: OpKind = MCK_FPRegs; break;
    case SP::F22: OpKind = MCK_FPRegs; break;
    case SP::F23: OpKind = MCK_FPRegs; break;
    case SP::F24: OpKind = MCK_FPRegs; break;
    case SP::F25: OpKind = MCK_FPRegs; break;
    case SP::F26: OpKind = MCK_FPRegs; break;
    case SP::F27: OpKind = MCK_FPRegs; break;
    case SP::F28: OpKind = MCK_FPRegs; break;
    case SP::F29: OpKind = MCK_FPRegs; break;
    case SP::F30: OpKind = MCK_FPRegs; break;
    case SP::F31: OpKind = MCK_FPRegs; break;
    case SP::D0: OpKind = MCK_LowDFPRegs; break;
    case SP::D1: OpKind = MCK_LowDFPRegs; break;
    case SP::D2: OpKind = MCK_LowDFPRegs; break;
    case SP::D3: OpKind = MCK_LowDFPRegs; break;
    case SP::D4: OpKind = MCK_LowDFPRegs; break;
    case SP::D5: OpKind = MCK_LowDFPRegs; break;
    case SP::D6: OpKind = MCK_LowDFPRegs; break;
    case SP::D7: OpKind = MCK_LowDFPRegs; break;
    case SP::D8: OpKind = MCK_LowDFPRegs; break;
    case SP::D9: OpKind = MCK_LowDFPRegs; break;
    case SP::D10: OpKind = MCK_LowDFPRegs; break;
    case SP::D11: OpKind = MCK_LowDFPRegs; break;
    case SP::D12: OpKind = MCK_LowDFPRegs; break;
    case SP::D13: OpKind = MCK_LowDFPRegs; break;
    case SP::D14: OpKind = MCK_LowDFPRegs; break;
    case SP::D15: OpKind = MCK_LowDFPRegs; break;
    case SP::C0: OpKind = MCK_CoprocRegs; break;
    case SP::C1: OpKind = MCK_CoprocRegs; break;
    case SP::C2: OpKind = MCK_CoprocRegs; break;
    case SP::C3: OpKind = MCK_CoprocRegs; break;
    case SP::C4: OpKind = MCK_CoprocRegs; break;
    case SP::C5: OpKind = MCK_CoprocRegs; break;
    case SP::C6: OpKind = MCK_CoprocRegs; break;
    case SP::C7: OpKind = MCK_CoprocRegs; break;
    case SP::C8: OpKind = MCK_CoprocRegs; break;
    case SP::C9: OpKind = MCK_CoprocRegs; break;
    case SP::C10: OpKind = MCK_CoprocRegs; break;
    case SP::C11: OpKind = MCK_CoprocRegs; break;
    case SP::C12: OpKind = MCK_CoprocRegs; break;
    case SP::C13: OpKind = MCK_CoprocRegs; break;
    case SP::C14: OpKind = MCK_CoprocRegs; break;
    case SP::C15: OpKind = MCK_CoprocRegs; break;
    case SP::C16: OpKind = MCK_CoprocRegs; break;
    case SP::C17: OpKind = MCK_CoprocRegs; break;
    case SP::C18: OpKind = MCK_CoprocRegs; break;
    case SP::C19: OpKind = MCK_CoprocRegs; break;
    case SP::C20: OpKind = MCK_CoprocRegs; break;
    case SP::C21: OpKind = MCK_CoprocRegs; break;
    case SP::C22: OpKind = MCK_CoprocRegs; break;
    case SP::C23: OpKind = MCK_CoprocRegs; break;
    case SP::C24: OpKind = MCK_CoprocRegs; break;
    case SP::C25: OpKind = MCK_CoprocRegs; break;
    case SP::C26: OpKind = MCK_CoprocRegs; break;
    case SP::C27: OpKind = MCK_CoprocRegs; break;
    case SP::C28: OpKind = MCK_CoprocRegs; break;
    case SP::C29: OpKind = MCK_CoprocRegs; break;
    case SP::C30: OpKind = MCK_CoprocRegs; break;
    case SP::C31: OpKind = MCK_CoprocRegs; break;
    case SP::D16: OpKind = MCK_DFPRegs; break;
    case SP::D17: OpKind = MCK_DFPRegs; break;
    case SP::D18: OpKind = MCK_DFPRegs; break;
    case SP::D19: OpKind = MCK_DFPRegs; break;
    case SP::D20: OpKind = MCK_DFPRegs; break;
    case SP::D21: OpKind = MCK_DFPRegs; break;
    case SP::D22: OpKind = MCK_DFPRegs; break;
    case SP::D23: OpKind = MCK_DFPRegs; break;
    case SP::D24: OpKind = MCK_DFPRegs; break;
    case SP::D25: OpKind = MCK_DFPRegs; break;
    case SP::D26: OpKind = MCK_DFPRegs; break;
    case SP::D27: OpKind = MCK_DFPRegs; break;
    case SP::D28: OpKind = MCK_DFPRegs; break;
    case SP::D29: OpKind = MCK_DFPRegs; break;
    case SP::D30: OpKind = MCK_DFPRegs; break;
    case SP::D31: OpKind = MCK_DFPRegs; break;
    case SP::Q0: OpKind = MCK_LowQFPRegs; break;
    case SP::Q1: OpKind = MCK_LowQFPRegs; break;
    case SP::Q2: OpKind = MCK_LowQFPRegs; break;
    case SP::Q3: OpKind = MCK_LowQFPRegs; break;
    case SP::Q4: OpKind = MCK_LowQFPRegs; break;
    case SP::Q5: OpKind = MCK_LowQFPRegs; break;
    case SP::Q6: OpKind = MCK_LowQFPRegs; break;
    case SP::Q7: OpKind = MCK_LowQFPRegs; break;
    case SP::Q8: OpKind = MCK_QFPRegs; break;
    case SP::Q9: OpKind = MCK_QFPRegs; break;
    case SP::Q10: OpKind = MCK_QFPRegs; break;
    case SP::Q11: OpKind = MCK_QFPRegs; break;
    case SP::Q12: OpKind = MCK_QFPRegs; break;
    case SP::Q13: OpKind = MCK_QFPRegs; break;
    case SP::Q14: OpKind = MCK_QFPRegs; break;
    case SP::Q15: OpKind = MCK_QFPRegs; break;
    case SP::G0_G1: OpKind = MCK_IntPair; break;
    case SP::G2_G3: OpKind = MCK_IntPair; break;
    case SP::G4_G5: OpKind = MCK_IntPair; break;
    case SP::G6_G7: OpKind = MCK_IntPair; break;
    case SP::O0_O1: OpKind = MCK_IntPair; break;
    case SP::O2_O3: OpKind = MCK_IntPair; break;
    case SP::O4_O5: OpKind = MCK_IntPair; break;
    case SP::O6_O7: OpKind = MCK_IntPair; break;
    case SP::L0_L1: OpKind = MCK_IntPair; break;
    case SP::L2_L3: OpKind = MCK_IntPair; break;
    case SP::L4_L5: OpKind = MCK_IntPair; break;
    case SP::L6_L7: OpKind = MCK_IntPair; break;
    case SP::I0_I1: OpKind = MCK_IntPair; break;
    case SP::I2_I3: OpKind = MCK_IntPair; break;
    case SP::I4_I5: OpKind = MCK_IntPair; break;
    case SP::I6_I7: OpKind = MCK_IntPair; break;
    case SP::C0_C1: OpKind = MCK_CoprocPair; break;
    case SP::C2_C3: OpKind = MCK_CoprocPair; break;
    case SP::C4_C5: OpKind = MCK_CoprocPair; break;
    case SP::C6_C7: OpKind = MCK_CoprocPair; break;
    case SP::C8_C9: OpKind = MCK_CoprocPair; break;
    case SP::C10_C11: OpKind = MCK_CoprocPair; break;
    case SP::C12_C13: OpKind = MCK_CoprocPair; break;
    case SP::C14_C15: OpKind = MCK_CoprocPair; break;
    case SP::C16_C17: OpKind = MCK_CoprocPair; break;
    case SP::C18_C19: OpKind = MCK_CoprocPair; break;
    case SP::C20_C21: OpKind = MCK_CoprocPair; break;
    case SP::C22_C23: OpKind = MCK_CoprocPair; break;
    case SP::C24_C25: OpKind = MCK_CoprocPair; break;
    case SP::C26_C27: OpKind = MCK_CoprocPair; break;
    case SP::C28_C29: OpKind = MCK_CoprocPair; break;
    case SP::C30_C31: OpKind = MCK_CoprocPair; break;
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
  case MCK__PCT_cq: return "MCK__PCT_cq";
  case MCK__PCT_csr: return "MCK__PCT_csr";
  case MCK__PCT_fcc0: return "MCK__PCT_fcc0";
  case MCK__PCT_fq: return "MCK__PCT_fq";
  case MCK__PCT_fsr: return "MCK__PCT_fsr";
  case MCK__PCT_g0: return "MCK__PCT_g0";
  case MCK__PCT_icc: return "MCK__PCT_icc";
  case MCK__PCT_pc: return "MCK__PCT_pc";
  case MCK__PCT_psr: return "MCK__PCT_psr";
  case MCK__PCT_tbr: return "MCK__PCT_tbr";
  case MCK__PCT_wim: return "MCK__PCT_wim";
  case MCK__PCT_xcc: return "MCK__PCT_xcc";
  case MCK__43_: return "MCK__43_";
  case MCK_1: return "MCK_1";
  case MCK_10: return "MCK_10";
  case MCK_3: return "MCK_3";
  case MCK_5: return "MCK_5";
  case MCK__91_: return "MCK__91_";
  case MCK__93_: return "MCK__93_";
  case MCK_a: return "MCK_a";
  case MCK_pn: return "MCK_pn";
  case MCK_pt: return "MCK_pt";
  case MCK_FCCRegs: return "MCK_FCCRegs";
  case MCK_LowQFPRegs: return "MCK_LowQFPRegs";
  case MCK_PRRegs: return "MCK_PRRegs";
  case MCK_CoprocPair: return "MCK_CoprocPair";
  case MCK_IntPair: return "MCK_IntPair";
  case MCK_LowDFPRegs: return "MCK_LowDFPRegs";
  case MCK_QFPRegs: return "MCK_QFPRegs";
  case MCK_ASRRegs: return "MCK_ASRRegs";
  case MCK_CoprocRegs: return "MCK_CoprocRegs";
  case MCK_DFPRegs: return "MCK_DFPRegs";
  case MCK_FPRegs: return "MCK_FPRegs";
  case MCK_IntRegs: return "MCK_IntRegs";
  case MCK_Imm: return "MCK_Imm";
  case MCK_CallTarget: return "MCK_CallTarget";
  case MCK_MEMri: return "MCK_MEMri";
  case MCK_MEMrr: return "MCK_MEMrr";
  case MCK_MembarTag: return "MCK_MembarTag";
  case MCK_ShiftAmtImm5: return "MCK_ShiftAmtImm5";
  case MCK_ShiftAmtImm6: return "MCK_ShiftAmtImm6";
  case MCK_TailRelocSymLoad_GOT: return "MCK_TailRelocSymLoad_GOT";
  case MCK_TailRelocSymAdd_TLS: return "MCK_TailRelocSymAdd_TLS";
  case MCK_TailRelocSymLoad_TLS: return "MCK_TailRelocSymLoad_TLS";
  case MCK_TailRelocSymCall_TLS: return "MCK_TailRelocSymCall_TLS";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset SparcAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (FB[Sparc::FeatureSoftMulDiv])
    Features.set(Feature_UseSoftMulDivBit);
  if (FB[Sparc::FeatureV9])
    Features.set(Feature_HasV9Bit);
  if (FB[Sparc::FeatureVIS])
    Features.set(Feature_HasVISBit);
  if (FB[Sparc::FeatureVIS2])
    Features.set(Feature_HasVIS2Bit);
  if (FB[Sparc::FeatureVIS3])
    Features.set(Feature_HasVIS3Bit);
  if (FB[Sparc::FeaturePWRPSR])
    Features.set(Feature_HasPWRPSRBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const SparcAsmParser&AsmParser,
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
    "\003add\005addcc\004addx\005addxc\006addxcc\007addxccc\talignaddr\nalig"
    "naddrl\003and\005andcc\004andn\006andncc\007array16\007array32\006array"
    "8\001b\002ba\003bcc\004bclr\003bcs\002be\003beq\002bg\003bge\004bgeu\003"
    "bgu\002bl\003ble\004bleu\003blu\005bmask\002bn\003bne\004bneg\003bnz\004"
    "bpos\005brgez\004brgz\005brlez\004brlz\004brnz\003brz\004bset\010bshuff"
    "le\004btog\004btst\003bvc\003bvs\002bz\004call\003cas\004casa\004casx\002"
    "cb\003cb0\004cb01\005cb012\005cb013\004cb02\005cb023\004cb03\003cb1\004"
    "cb12\005cb123\004cb13\003cb2\004cb23\003cb3\003cba\003cbn\003clr\004clr"
    "b\004clrh\007cmask16\007cmask32\006cmask8\003cmp\003dec\005deccc\006edg"
    "e16\007edge16l\010edge16ln\007edge16n\006edge32\007edge32l\010edge32ln\007"
    "edge32n\005edge8\006edge8l\007edge8ln\006edge8n\005fabsd\005fabsq\005fa"
    "bss\005faddd\005faddq\005fadds\nfaligndata\004fand\010fandnot1\tfandnot"
    "1s\010fandnot2\tfandnot2s\005fands\002fb\003fba\003fbe\003fbg\004fbge\003"
    "fbl\004fble\004fblg\003fbn\004fbne\004fbnz\003fbo\003fbu\004fbue\004fbu"
    "g\005fbuge\004fbul\005fbule\003fbz\010fchksm16\005fcmpd\006fcmped\006fc"
    "mpeq\010fcmpeq16\010fcmpeq32\006fcmpes\010fcmpgt16\010fcmpgt32\010fcmpl"
    "e16\010fcmple32\010fcmpne16\010fcmpne32\005fcmpq\005fcmps\005fdivd\005f"
    "divq\005fdivs\006fdmulq\005fdtoi\005fdtoq\005fdtos\005fdtox\007fexpand\006"
    "fhaddd\006fhadds\006fhsubd\006fhsubs\005fitod\005fitoq\005fitos\006flcm"
    "pd\006flcmps\005flush\006flushw\007fmean16\005fmovd\006fmovda\007fmovdc"
    "c\007fmovdcs\006fmovde\007fmovdeq\006fmovdg\007fmovdge\010fmovdgeu\007f"
    "movdgu\006fmovdl\007fmovdle\010fmovdleu\007fmovdlg\007fmovdlu\006fmovdn"
    "\007fmovdne\010fmovdneg\007fmovdnz\006fmovdo\010fmovdpos\006fmovdu\007f"
    "movdue\007fmovdug\010fmovduge\007fmovdul\010fmovdule\007fmovdvc\007fmov"
    "dvs\006fmovdz\005fmovq\006fmovqa\007fmovqcc\007fmovqcs\006fmovqe\007fmo"
    "vqeq\006fmovqg\007fmovqge\010fmovqgeu\007fmovqgu\006fmovql\007fmovqle\010"
    "fmovqleu\007fmovqlg\007fmovqlu\006fmovqn\007fmovqne\010fmovqneg\007fmov"
    "qnz\006fmovqo\010fmovqpos\006fmovqu\007fmovque\007fmovqug\010fmovquge\007"
    "fmovqul\010fmovqule\007fmovqvc\007fmovqvs\006fmovqz\006fmovrd\tfmovrdge"
    "z\010fmovrdgz\tfmovrdlez\010fmovrdlz\010fmovrdnz\007fmovrdz\006fmovrq\t"
    "fmovrqgez\010fmovrqgz\tfmovrqlez\010fmovrqlz\010fmovrqnz\007fmovrqz\006"
    "fmovrs\tfmovrsgez\010fmovrsgz\tfmovrslez\010fmovrslz\010fmovrsnz\007fmo"
    "vrsz\005fmovs\006fmovsa\007fmovscc\007fmovscs\006fmovse\007fmovseq\006f"
    "movsg\007fmovsge\010fmovsgeu\007fmovsgu\006fmovsl\007fmovsle\010fmovsle"
    "u\007fmovslg\007fmovslu\006fmovsn\007fmovsne\010fmovsneg\007fmovsnz\006"
    "fmovso\010fmovspos\006fmovsu\007fmovsue\007fmovsug\010fmovsuge\007fmovs"
    "ul\010fmovsule\007fmovsvc\007fmovsvs\006fmovsz\nfmul8sux16\nfmul8ulx16\010"
    "fmul8x16\nfmul8x16al\nfmul8x16au\005fmuld\013fmuld8sux16\013fmuld8ulx16"
    "\005fmulq\005fmuls\006fnaddd\006fnadds\005fnand\006fnands\005fnegd\005f"
    "negq\005fnegs\007fnhaddd\007fnhadds\004fnor\005fnors\005fnot1\006fnot1s"
    "\005fnot2\006fnot2s\004fone\005fones\003for\007fornot1\010fornot1s\007f"
    "ornot2\010fornot2s\004fors\007fpack16\007fpack32\010fpackfix\007fpadd16"
    "\010fpadd16s\007fpadd32\010fpadd32s\007fpadd64\007fpmerge\007fpsub16\010"
    "fpsub16s\007fpsub32\010fpsub32s\005fqtod\005fqtoi\005fqtos\005fqtox\007"
    "fslas16\007fslas32\006fsll16\006fsll32\006fsmuld\006fsqrtd\006fsqrtq\006"
    "fsqrts\006fsra16\006fsra32\005fsrc1\006fsrc1s\005fsrc2\006fsrc2s\006fsr"
    "l16\006fsrl32\005fstod\005fstoi\005fstoq\005fstox\005fsubd\005fsubq\005"
    "fsubs\005fxnor\006fxnors\004fxor\005fxors\005fxtod\005fxtoq\005fxtos\005"
    "fzero\006fzeros\003inc\005inccc\003jmp\004jmpl\002ld\003lda\003ldd\004l"
    "dda\003ldq\004ldqa\004ldsb\005ldsba\004ldsh\005ldsha\006ldstub\007ldstu"
    "ba\004ldsw\004ldub\005lduba\004lduh\005lduha\003ldx\005lzcnt\006membar\003"
    "mov\004mova\005movcc\005movcs\007movdtox\004move\005moveq\004movg\005mo"
    "vge\006movgeu\005movgu\004movl\005movle\006movleu\005movlg\005movlu\004"
    "movn\005movne\006movneg\005movnz\004movo\006movpos\004movr\007movrgez\006"
    "movrgz\007movrlez\006movrlz\006movrnz\005movrz\010movstosw\010movstouw\004"
    "movu\005movue\005movug\006movuge\005movul\006movule\005movvc\005movvs\004"
    "movz\006mulscc\004mulx\003neg\003nop\003not\002or\004orcc\003orn\005orn"
    "cc\005pdist\006pdistn\004popc\010prefetch\003pwr\002rd\004rdpr\007resto"
    "re\003ret\004retl\004rett\004save\004sdiv\006sdivcc\005sdivx\003set\005"
    "sethi\010shutdown\004siam\005signx\003sir\003sll\004sllx\004smac\004smu"
    "l\006smulcc\003sra\004srax\003srl\004srlx\002st\003sta\003stb\004stba\005"
    "stbar\003std\004stda\003sth\004stha\003stq\004stqa\003stx\003sub\005sub"
    "cc\004subx\006subxcc\004swap\005swapa\001t\002ta\006taddcc\010taddcctv\003"
    "tcc\003tcs\002te\003teq\002tg\003tge\004tgeu\003tgu\002tl\003tle\004tle"
    "u\003tlu\002tn\003tne\004tneg\003tnz\004tpos\003tst\006tsubcc\010tsubcc"
    "tv\003tvc\003tvs\002tz\004udiv\006udivcc\005udivx\004umac\004umul\006um"
    "ulcc\007umulxhi\005unimp\002wr\004wrpr\005xmulx\007xmulxhi\004xnor\006x"
    "norcc\003xor\005xorcc";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_HasPWRPSR,
  AMFBS_HasV9,
  AMFBS_HasVIS,
  AMFBS_HasVIS2,
  AMFBS_HasVIS3,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_HasPWRPSRBit, },
  {Feature_HasV9Bit, },
  {Feature_HasVISBit, },
  {Feature_HasVIS2Bit, },
  {Feature_HasVIS3Bit, },
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
  { 0 /* add */, SP::ADDrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 0 /* add */, SP::ADDri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 0 /* add */, SP::TLS_ADDrr, Convert__Reg1_2__Reg1_0__Reg1_1__TailRelocSymAdd_TLS1_3, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs, MCK_TailRelocSymAdd_TLS }, },
  { 4 /* addcc */, SP::ADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 4 /* addcc */, SP::ADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 10 /* addx */, SP::ADDCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 10 /* addx */, SP::ADDCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 15 /* addxc */, SP::ADDXC, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, SP::ADDErr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, SP::ADDEri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 28 /* addxccc */, SP::ADDXCCC, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 36 /* alignaddr */, SP::ALIGNADDR, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 46 /* alignaddrl */, SP::ALIGNADDRL, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, SP::ANDrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, SP::ANDri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 61 /* andcc */, SP::ANDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 61 /* andcc */, SP::ANDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 67 /* andn */, SP::ANDNrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 67 /* andn */, SP::ANDNri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 72 /* andncc */, SP::ANDNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 72 /* andncc */, SP::ANDNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 79 /* array16 */, SP::ARRAY16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 87 /* array32 */, SP::ARRAY32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 95 /* array8 */, SP::ARRAY8, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 102 /* b */, SP::BCOND, Convert__Imm1_0__imm_95_8, AMFBS_None, { MCK_Imm }, },
  { 102 /* b */, SP::BPICC, Convert__Imm1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCC, Convert__Imm1_1__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BCONDA, Convert__Imm1_1__imm_95_8, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 102 /* b */, SP::BCOND, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 102 /* b */, SP::BPICCA, Convert__Imm1_2__imm_95_8, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCA, Convert__Imm1_2__imm_95_8, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCNT, Convert__Imm1_2__imm_95_8, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCNT, Convert__Imm1_2__imm_95_8, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICC, Convert__Imm1_2__imm_95_8, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCC, Convert__Imm1_2__imm_95_8, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICC, Convert__Imm1_2__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCC, Convert__Imm1_2__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BCONDA, Convert__Imm1_2__Imm1_0, AMFBS_None, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 102 /* b */, SP::BPICCANT, Convert__Imm1_3__imm_95_8, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCANT, Convert__Imm1_3__imm_95_8, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCA, Convert__Imm1_3__imm_95_8, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCA, Convert__Imm1_3__imm_95_8, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCA, Convert__Imm1_3__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCA, Convert__Imm1_3__Imm1_0, AMFBS_None, { MCK_Imm, MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCNT, Convert__Imm1_3__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCNT, Convert__Imm1_3__Imm1_0, AMFBS_None, { MCK_Imm, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, SP::BPICCANT, Convert__Imm1_4__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, SP::BPXCCANT, Convert__Imm1_4__Imm1_0, AMFBS_None, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BA, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 104 /* ba */, SP::BCOND, Convert__Imm1_0__imm_95_8, AMFBS_None, { MCK_Imm }, },
  { 104 /* ba */, SP::BPA, Convert__Imm1_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICC, Convert__Imm1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCC, Convert__Imm1_1__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BCONDA, Convert__Imm1_1__imm_95_8, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 104 /* ba */, SP::BPICCA, Convert__Imm1_2__imm_95_8, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCCA, Convert__Imm1_2__imm_95_8, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICCNT, Convert__Imm1_2__imm_95_8, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCCNT, Convert__Imm1_2__imm_95_8, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICC, Convert__Imm1_2__imm_95_8, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCC, Convert__Imm1_2__imm_95_8, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICCANT, Convert__Imm1_3__imm_95_8, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCCANT, Convert__Imm1_3__imm_95_8, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, SP::BPICCA, Convert__Imm1_3__imm_95_8, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, SP::BPXCCA, Convert__Imm1_3__imm_95_8, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BCOND, Convert__Imm1_0__imm_95_13, AMFBS_None, { MCK_Imm }, },
  { 107 /* bcc */, SP::BPICC, Convert__Imm1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCC, Convert__Imm1_1__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BCONDA, Convert__Imm1_1__imm_95_13, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICCA, Convert__Imm1_2__imm_95_13, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCCA, Convert__Imm1_2__imm_95_13, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICCNT, Convert__Imm1_2__imm_95_13, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCCNT, Convert__Imm1_2__imm_95_13, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICC, Convert__Imm1_2__imm_95_13, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCC, Convert__Imm1_2__imm_95_13, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICCANT, Convert__Imm1_3__imm_95_13, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCCANT, Convert__Imm1_3__imm_95_13, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPICCA, Convert__Imm1_3__imm_95_13, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, SP::BPXCCA, Convert__Imm1_3__imm_95_13, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bclr */, SP::ANDNrr, Convert__Reg1_1__Reg1_1__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs }, },
  { 111 /* bclr */, SP::ANDNri, Convert__Reg1_1__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 116 /* bcs */, SP::BCOND, Convert__Imm1_0__imm_95_5, AMFBS_None, { MCK_Imm }, },
  { 116 /* bcs */, SP::BPICC, Convert__Imm1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCC, Convert__Imm1_1__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BCONDA, Convert__Imm1_1__imm_95_5, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICCA, Convert__Imm1_2__imm_95_5, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCCA, Convert__Imm1_2__imm_95_5, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICCNT, Convert__Imm1_2__imm_95_5, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCCNT, Convert__Imm1_2__imm_95_5, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICC, Convert__Imm1_2__imm_95_5, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCC, Convert__Imm1_2__imm_95_5, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICCANT, Convert__Imm1_3__imm_95_5, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCCANT, Convert__Imm1_3__imm_95_5, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPICCA, Convert__Imm1_3__imm_95_5, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, SP::BPXCCA, Convert__Imm1_3__imm_95_5, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BCOND, Convert__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 120 /* be */, SP::BPICC, Convert__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCC, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BCONDA, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 120 /* be */, SP::BPICCA, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCCA, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BPICCNT, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCCNT, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BPICC, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCC, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BPICCANT, Convert__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCCANT, Convert__Imm1_3__imm_95_1, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, SP::BPICCA, Convert__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, SP::BPXCCA, Convert__Imm1_3__imm_95_1, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BCOND, Convert__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 123 /* beq */, SP::BPICC, Convert__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCC, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BCONDA, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 123 /* beq */, SP::BPICCA, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCCA, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BPICCNT, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCCNT, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BPICC, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCC, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BPICCANT, Convert__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCCANT, Convert__Imm1_3__imm_95_1, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* beq */, SP::BPICCA, Convert__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* beq */, SP::BPXCCA, Convert__Imm1_3__imm_95_1, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BCOND, Convert__Imm1_0__imm_95_10, AMFBS_None, { MCK_Imm }, },
  { 127 /* bg */, SP::BPICC, Convert__Imm1_1__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCC, Convert__Imm1_1__imm_95_10, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BCONDA, Convert__Imm1_1__imm_95_10, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 127 /* bg */, SP::BPICCA, Convert__Imm1_2__imm_95_10, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCCA, Convert__Imm1_2__imm_95_10, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BPICCNT, Convert__Imm1_2__imm_95_10, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCCNT, Convert__Imm1_2__imm_95_10, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BPICC, Convert__Imm1_2__imm_95_10, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCC, Convert__Imm1_2__imm_95_10, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BPICCANT, Convert__Imm1_3__imm_95_10, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCCANT, Convert__Imm1_3__imm_95_10, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 127 /* bg */, SP::BPICCA, Convert__Imm1_3__imm_95_10, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 127 /* bg */, SP::BPXCCA, Convert__Imm1_3__imm_95_10, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BCOND, Convert__Imm1_0__imm_95_11, AMFBS_None, { MCK_Imm }, },
  { 130 /* bge */, SP::BPICC, Convert__Imm1_1__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCC, Convert__Imm1_1__imm_95_11, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BCONDA, Convert__Imm1_1__imm_95_11, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 130 /* bge */, SP::BPICCA, Convert__Imm1_2__imm_95_11, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCCA, Convert__Imm1_2__imm_95_11, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BPICCNT, Convert__Imm1_2__imm_95_11, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCCNT, Convert__Imm1_2__imm_95_11, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BPICC, Convert__Imm1_2__imm_95_11, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCC, Convert__Imm1_2__imm_95_11, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BPICCANT, Convert__Imm1_3__imm_95_11, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCCANT, Convert__Imm1_3__imm_95_11, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bge */, SP::BPICCA, Convert__Imm1_3__imm_95_11, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bge */, SP::BPXCCA, Convert__Imm1_3__imm_95_11, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BCOND, Convert__Imm1_0__imm_95_13, AMFBS_None, { MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICC, Convert__Imm1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCC, Convert__Imm1_1__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BCONDA, Convert__Imm1_1__imm_95_13, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICCA, Convert__Imm1_2__imm_95_13, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCCA, Convert__Imm1_2__imm_95_13, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICCNT, Convert__Imm1_2__imm_95_13, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCCNT, Convert__Imm1_2__imm_95_13, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICC, Convert__Imm1_2__imm_95_13, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCC, Convert__Imm1_2__imm_95_13, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICCANT, Convert__Imm1_3__imm_95_13, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCCANT, Convert__Imm1_3__imm_95_13, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPICCA, Convert__Imm1_3__imm_95_13, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 134 /* bgeu */, SP::BPXCCA, Convert__Imm1_3__imm_95_13, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BCOND, Convert__Imm1_0__imm_95_12, AMFBS_None, { MCK_Imm }, },
  { 139 /* bgu */, SP::BPICC, Convert__Imm1_1__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCC, Convert__Imm1_1__imm_95_12, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BCONDA, Convert__Imm1_1__imm_95_12, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICCA, Convert__Imm1_2__imm_95_12, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCCA, Convert__Imm1_2__imm_95_12, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICCNT, Convert__Imm1_2__imm_95_12, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCCNT, Convert__Imm1_2__imm_95_12, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICC, Convert__Imm1_2__imm_95_12, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCC, Convert__Imm1_2__imm_95_12, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICCANT, Convert__Imm1_3__imm_95_12, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCCANT, Convert__Imm1_3__imm_95_12, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPICCA, Convert__Imm1_3__imm_95_12, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bgu */, SP::BPXCCA, Convert__Imm1_3__imm_95_12, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BCOND, Convert__Imm1_0__imm_95_3, AMFBS_None, { MCK_Imm }, },
  { 143 /* bl */, SP::BPICC, Convert__Imm1_1__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCC, Convert__Imm1_1__imm_95_3, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BCONDA, Convert__Imm1_1__imm_95_3, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 143 /* bl */, SP::BPICCA, Convert__Imm1_2__imm_95_3, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCCA, Convert__Imm1_2__imm_95_3, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BPICCNT, Convert__Imm1_2__imm_95_3, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCCNT, Convert__Imm1_2__imm_95_3, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BPICC, Convert__Imm1_2__imm_95_3, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCC, Convert__Imm1_2__imm_95_3, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BPICCANT, Convert__Imm1_3__imm_95_3, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCCANT, Convert__Imm1_3__imm_95_3, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 143 /* bl */, SP::BPICCA, Convert__Imm1_3__imm_95_3, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 143 /* bl */, SP::BPXCCA, Convert__Imm1_3__imm_95_3, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BCOND, Convert__Imm1_0__imm_95_2, AMFBS_None, { MCK_Imm }, },
  { 146 /* ble */, SP::BPICC, Convert__Imm1_1__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCC, Convert__Imm1_1__imm_95_2, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BCONDA, Convert__Imm1_1__imm_95_2, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 146 /* ble */, SP::BPICCA, Convert__Imm1_2__imm_95_2, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCCA, Convert__Imm1_2__imm_95_2, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BPICCNT, Convert__Imm1_2__imm_95_2, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCCNT, Convert__Imm1_2__imm_95_2, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BPICC, Convert__Imm1_2__imm_95_2, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCC, Convert__Imm1_2__imm_95_2, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BPICCANT, Convert__Imm1_3__imm_95_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCCANT, Convert__Imm1_3__imm_95_2, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* ble */, SP::BPICCA, Convert__Imm1_3__imm_95_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* ble */, SP::BPXCCA, Convert__Imm1_3__imm_95_2, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BCOND, Convert__Imm1_0__imm_95_4, AMFBS_None, { MCK_Imm }, },
  { 150 /* bleu */, SP::BPICC, Convert__Imm1_1__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCC, Convert__Imm1_1__imm_95_4, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BCONDA, Convert__Imm1_1__imm_95_4, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICCA, Convert__Imm1_2__imm_95_4, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCCA, Convert__Imm1_2__imm_95_4, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICCNT, Convert__Imm1_2__imm_95_4, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCCNT, Convert__Imm1_2__imm_95_4, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICC, Convert__Imm1_2__imm_95_4, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCC, Convert__Imm1_2__imm_95_4, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICCANT, Convert__Imm1_3__imm_95_4, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCCANT, Convert__Imm1_3__imm_95_4, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPICCA, Convert__Imm1_3__imm_95_4, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 150 /* bleu */, SP::BPXCCA, Convert__Imm1_3__imm_95_4, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BCOND, Convert__Imm1_0__imm_95_5, AMFBS_None, { MCK_Imm }, },
  { 155 /* blu */, SP::BPICC, Convert__Imm1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCC, Convert__Imm1_1__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BCONDA, Convert__Imm1_1__imm_95_5, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 155 /* blu */, SP::BPICCA, Convert__Imm1_2__imm_95_5, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCCA, Convert__Imm1_2__imm_95_5, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BPICCNT, Convert__Imm1_2__imm_95_5, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCCNT, Convert__Imm1_2__imm_95_5, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BPICC, Convert__Imm1_2__imm_95_5, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCC, Convert__Imm1_2__imm_95_5, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BPICCANT, Convert__Imm1_3__imm_95_5, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCCANT, Convert__Imm1_3__imm_95_5, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* blu */, SP::BPICCA, Convert__Imm1_3__imm_95_5, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 155 /* blu */, SP::BPXCCA, Convert__Imm1_3__imm_95_5, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 159 /* bmask */, SP::BMASK, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 165 /* bn */, SP::BCOND, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 165 /* bn */, SP::BPICC, Convert__Imm1_1__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCC, Convert__Imm1_1__imm_95_0, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BCONDA, Convert__Imm1_1__imm_95_0, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 165 /* bn */, SP::BPICCA, Convert__Imm1_2__imm_95_0, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCCA, Convert__Imm1_2__imm_95_0, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BPICCNT, Convert__Imm1_2__imm_95_0, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCCNT, Convert__Imm1_2__imm_95_0, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BPICC, Convert__Imm1_2__imm_95_0, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCC, Convert__Imm1_2__imm_95_0, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BPICCANT, Convert__Imm1_3__imm_95_0, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCCANT, Convert__Imm1_3__imm_95_0, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 165 /* bn */, SP::BPICCA, Convert__Imm1_3__imm_95_0, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 165 /* bn */, SP::BPXCCA, Convert__Imm1_3__imm_95_0, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BCOND, Convert__Imm1_0__imm_95_9, AMFBS_None, { MCK_Imm }, },
  { 168 /* bne */, SP::BPICC, Convert__Imm1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCC, Convert__Imm1_1__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BCONDA, Convert__Imm1_1__imm_95_9, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 168 /* bne */, SP::BPICCA, Convert__Imm1_2__imm_95_9, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCCA, Convert__Imm1_2__imm_95_9, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BPICCNT, Convert__Imm1_2__imm_95_9, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCCNT, Convert__Imm1_2__imm_95_9, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BPICC, Convert__Imm1_2__imm_95_9, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCC, Convert__Imm1_2__imm_95_9, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BPICCANT, Convert__Imm1_3__imm_95_9, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCCANT, Convert__Imm1_3__imm_95_9, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bne */, SP::BPICCA, Convert__Imm1_3__imm_95_9, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bne */, SP::BPXCCA, Convert__Imm1_3__imm_95_9, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BCOND, Convert__Imm1_0__imm_95_6, AMFBS_None, { MCK_Imm }, },
  { 172 /* bneg */, SP::BPICC, Convert__Imm1_1__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCC, Convert__Imm1_1__imm_95_6, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BCONDA, Convert__Imm1_1__imm_95_6, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICCA, Convert__Imm1_2__imm_95_6, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCCA, Convert__Imm1_2__imm_95_6, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICCNT, Convert__Imm1_2__imm_95_6, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCCNT, Convert__Imm1_2__imm_95_6, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICC, Convert__Imm1_2__imm_95_6, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCC, Convert__Imm1_2__imm_95_6, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICCANT, Convert__Imm1_3__imm_95_6, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCCANT, Convert__Imm1_3__imm_95_6, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPICCA, Convert__Imm1_3__imm_95_6, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 172 /* bneg */, SP::BPXCCA, Convert__Imm1_3__imm_95_6, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BCOND, Convert__Imm1_0__imm_95_9, AMFBS_None, { MCK_Imm }, },
  { 177 /* bnz */, SP::BPICC, Convert__Imm1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCC, Convert__Imm1_1__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BCONDA, Convert__Imm1_1__imm_95_9, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICCA, Convert__Imm1_2__imm_95_9, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCCA, Convert__Imm1_2__imm_95_9, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICCNT, Convert__Imm1_2__imm_95_9, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCCNT, Convert__Imm1_2__imm_95_9, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICC, Convert__Imm1_2__imm_95_9, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCC, Convert__Imm1_2__imm_95_9, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICCANT, Convert__Imm1_3__imm_95_9, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCCANT, Convert__Imm1_3__imm_95_9, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPICCA, Convert__Imm1_3__imm_95_9, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bnz */, SP::BPXCCA, Convert__Imm1_3__imm_95_9, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BCOND, Convert__Imm1_0__imm_95_14, AMFBS_None, { MCK_Imm }, },
  { 181 /* bpos */, SP::BPICC, Convert__Imm1_1__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCC, Convert__Imm1_1__imm_95_14, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BCONDA, Convert__Imm1_1__imm_95_14, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICCA, Convert__Imm1_2__imm_95_14, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCCA, Convert__Imm1_2__imm_95_14, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICCNT, Convert__Imm1_2__imm_95_14, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCCNT, Convert__Imm1_2__imm_95_14, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICC, Convert__Imm1_2__imm_95_14, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCC, Convert__Imm1_2__imm_95_14, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICCANT, Convert__Imm1_3__imm_95_14, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCCANT, Convert__Imm1_3__imm_95_14, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPICCA, Convert__Imm1_3__imm_95_14, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 181 /* bpos */, SP::BPXCCA, Convert__Imm1_3__imm_95_14, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZnapt, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZnapn, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZnapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZapn, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 186 /* brgez */, SP::BPGEZapt, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZnapt, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZnapn, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZnapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZapn, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 192 /* brgz */, SP::BPGZapt, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZnapt, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZnapn, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZnapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZapn, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 197 /* brlez */, SP::BPLEZapt, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZnapt, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZnapn, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZnapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZapn, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 203 /* brlz */, SP::BPLZapt, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZnapt, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZnapn, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZnapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZapn, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 208 /* brnz */, SP::BPNZapt, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZnapt, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZnapn, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZnapt, Convert__Reg1_1__Imm1_2, AMFBS_None, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZapn, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 213 /* brz */, SP::BPZapt, Convert__Reg1_2__Imm1_3, AMFBS_None, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 217 /* bset */, SP::ORrr, Convert__Reg1_1__Reg1_1__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs }, },
  { 217 /* bset */, SP::ORri, Convert__Reg1_1__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 222 /* bshuffle */, SP::BSHUFFLE, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS2, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 231 /* btog */, SP::XORrr, Convert__Reg1_1__Reg1_1__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs }, },
  { 231 /* btog */, SP::XORri, Convert__Reg1_1__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 236 /* btst */, SP::ANDCCrr, Convert__regG0__Reg1_1__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs }, },
  { 236 /* btst */, SP::ANDCCri, Convert__regG0__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 241 /* bvc */, SP::BCOND, Convert__Imm1_0__imm_95_15, AMFBS_None, { MCK_Imm }, },
  { 241 /* bvc */, SP::BPICC, Convert__Imm1_1__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCC, Convert__Imm1_1__imm_95_15, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BCONDA, Convert__Imm1_1__imm_95_15, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICCA, Convert__Imm1_2__imm_95_15, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCCA, Convert__Imm1_2__imm_95_15, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICCNT, Convert__Imm1_2__imm_95_15, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCCNT, Convert__Imm1_2__imm_95_15, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICC, Convert__Imm1_2__imm_95_15, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCC, Convert__Imm1_2__imm_95_15, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICCANT, Convert__Imm1_3__imm_95_15, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCCANT, Convert__Imm1_3__imm_95_15, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPICCA, Convert__Imm1_3__imm_95_15, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvc */, SP::BPXCCA, Convert__Imm1_3__imm_95_15, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BCOND, Convert__Imm1_0__imm_95_7, AMFBS_None, { MCK_Imm }, },
  { 245 /* bvs */, SP::BPICC, Convert__Imm1_1__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCC, Convert__Imm1_1__imm_95_7, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BCONDA, Convert__Imm1_1__imm_95_7, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICCA, Convert__Imm1_2__imm_95_7, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCCA, Convert__Imm1_2__imm_95_7, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICCNT, Convert__Imm1_2__imm_95_7, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCCNT, Convert__Imm1_2__imm_95_7, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICC, Convert__Imm1_2__imm_95_7, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCC, Convert__Imm1_2__imm_95_7, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICCANT, Convert__Imm1_3__imm_95_7, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCCANT, Convert__Imm1_3__imm_95_7, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPICCA, Convert__Imm1_3__imm_95_7, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bvs */, SP::BPXCCA, Convert__Imm1_3__imm_95_7, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BCOND, Convert__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 249 /* bz */, SP::BPICC, Convert__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCC, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BCONDA, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 249 /* bz */, SP::BPICCA, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCCA, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BPICCNT, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCCNT, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BPICC, Convert__Imm1_2__imm_95_1, AMFBS_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCC, Convert__Imm1_2__imm_95_1, AMFBS_None, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BPICCANT, Convert__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCCANT, Convert__Imm1_3__imm_95_1, AMFBS_None, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 249 /* bz */, SP::BPICCA, Convert__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 249 /* bz */, SP::BPXCCA, Convert__Imm1_3__imm_95_1, AMFBS_None, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 252 /* call */, SP::CALL, Convert__CallTarget1_0, AMFBS_None, { MCK_CallTarget }, },
  { 252 /* call */, SP::JMPLri, Convert__regO7__MEMri2_0, AMFBS_None, { MCK_MEMri }, },
  { 252 /* call */, SP::JMPLrr, Convert__regO7__MEMrr2_0, AMFBS_None, { MCK_MEMrr }, },
  { 252 /* call */, SP::TLS_CALL, Convert__CallTarget1_0__TailRelocSymCall_TLS1_1, AMFBS_None, { MCK_CallTarget, MCK_TailRelocSymCall_TLS }, },
  { 257 /* cas */, SP::CASrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0_1_1, AMFBS_HasV9, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 261 /* casa */, SP::CASAasi10, Convert__Reg1_5__Reg1_1__Reg1_4__Tie0_1_1, AMFBS_None, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_10, MCK_IntRegs, MCK_IntRegs }, },
  { 261 /* casa */, SP::CASArr, Convert__Reg1_5__Reg1_1__Reg1_4__Tie0_1_1__Imm1_3, AMFBS_None, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_Imm, MCK_IntRegs, MCK_IntRegs }, },
  { 266 /* casx */, SP::CASXrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0_1_1, AMFBS_None, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 271 /* cb */, SP::CBCOND, Convert__Imm1_0__imm_95_8, AMFBS_None, { MCK_Imm }, },
  { 271 /* cb */, SP::CBCONDA, Convert__Imm1_1__imm_95_8, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 271 /* cb */, SP::CBCOND, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 271 /* cb */, SP::CBCONDA, Convert__Imm1_2__Imm1_0, AMFBS_None, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 274 /* cb0 */, SP::CBCOND, Convert__Imm1_0__imm_95_9, AMFBS_None, { MCK_Imm }, },
  { 274 /* cb0 */, SP::CBCONDA, Convert__Imm1_1__imm_95_9, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 278 /* cb01 */, SP::CBCOND, Convert__Imm1_0__imm_95_13, AMFBS_None, { MCK_Imm }, },
  { 278 /* cb01 */, SP::CBCONDA, Convert__Imm1_1__imm_95_13, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 283 /* cb012 */, SP::CBCOND, Convert__Imm1_0__imm_95_15, AMFBS_None, { MCK_Imm }, },
  { 283 /* cb012 */, SP::CBCONDA, Convert__Imm1_1__imm_95_15, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 289 /* cb013 */, SP::CBCOND, Convert__Imm1_0__imm_95_14, AMFBS_None, { MCK_Imm }, },
  { 289 /* cb013 */, SP::CBCONDA, Convert__Imm1_1__imm_95_14, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 295 /* cb02 */, SP::CBCOND, Convert__Imm1_0__imm_95_11, AMFBS_None, { MCK_Imm }, },
  { 295 /* cb02 */, SP::CBCONDA, Convert__Imm1_1__imm_95_11, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 300 /* cb023 */, SP::CBCOND, Convert__Imm1_0__imm_95_12, AMFBS_None, { MCK_Imm }, },
  { 300 /* cb023 */, SP::CBCONDA, Convert__Imm1_1__imm_95_12, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 306 /* cb03 */, SP::CBCOND, Convert__Imm1_0__imm_95_10, AMFBS_None, { MCK_Imm }, },
  { 306 /* cb03 */, SP::CBCONDA, Convert__Imm1_1__imm_95_10, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 311 /* cb1 */, SP::CBCOND, Convert__Imm1_0__imm_95_4, AMFBS_None, { MCK_Imm }, },
  { 311 /* cb1 */, SP::CBCONDA, Convert__Imm1_1__imm_95_4, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 315 /* cb12 */, SP::CBCOND, Convert__Imm1_0__imm_95_2, AMFBS_None, { MCK_Imm }, },
  { 315 /* cb12 */, SP::CBCONDA, Convert__Imm1_1__imm_95_2, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 320 /* cb123 */, SP::CBCOND, Convert__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 320 /* cb123 */, SP::CBCONDA, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 326 /* cb13 */, SP::CBCOND, Convert__Imm1_0__imm_95_3, AMFBS_None, { MCK_Imm }, },
  { 326 /* cb13 */, SP::CBCONDA, Convert__Imm1_1__imm_95_3, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 331 /* cb2 */, SP::CBCOND, Convert__Imm1_0__imm_95_6, AMFBS_None, { MCK_Imm }, },
  { 331 /* cb2 */, SP::CBCONDA, Convert__Imm1_1__imm_95_6, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 335 /* cb23 */, SP::CBCOND, Convert__Imm1_0__imm_95_5, AMFBS_None, { MCK_Imm }, },
  { 335 /* cb23 */, SP::CBCONDA, Convert__Imm1_1__imm_95_5, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 340 /* cb3 */, SP::CBCOND, Convert__Imm1_0__imm_95_7, AMFBS_None, { MCK_Imm }, },
  { 340 /* cb3 */, SP::CBCONDA, Convert__Imm1_1__imm_95_7, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 344 /* cba */, SP::CBCOND, Convert__Imm1_0__imm_95_8, AMFBS_None, { MCK_Imm }, },
  { 344 /* cba */, SP::CBCONDA, Convert__Imm1_1__imm_95_8, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 348 /* cbn */, SP::CBCOND, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 348 /* cbn */, SP::CBCONDA, Convert__Imm1_1__imm_95_0, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 352 /* clr */, SP::ORrr, Convert__Reg1_0__regG0__regG0, AMFBS_None, { MCK_IntRegs }, },
  { 352 /* clr */, SP::STri, Convert__MEMri2_1__regG0, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 352 /* clr */, SP::STrr, Convert__MEMrr2_1__regG0, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 356 /* clrb */, SP::STBri, Convert__MEMri2_1__regG0, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 356 /* clrb */, SP::STBrr, Convert__MEMrr2_1__regG0, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 361 /* clrh */, SP::STHri, Convert__MEMri2_1__regG0, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 361 /* clrh */, SP::STHrr, Convert__MEMrr2_1__regG0, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 366 /* cmask16 */, SP::CMASK16, Convert__Reg1_0, AMFBS_HasVIS3, { MCK_IntRegs }, },
  { 374 /* cmask32 */, SP::CMASK32, Convert__Reg1_0, AMFBS_HasVIS3, { MCK_IntRegs }, },
  { 382 /* cmask8 */, SP::CMASK8, Convert__Reg1_0, AMFBS_HasVIS3, { MCK_IntRegs }, },
  { 389 /* cmp */, SP::CMPrr, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs }, },
  { 389 /* cmp */, SP::CMPri, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm }, },
  { 393 /* dec */, SP::SUBri, Convert__Reg1_0__Reg1_0__imm_95_1, AMFBS_None, { MCK_IntRegs }, },
  { 393 /* dec */, SP::SUBri, Convert__Reg1_1__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 397 /* deccc */, SP::SUBCCri, Convert__Reg1_0__Reg1_0__imm_95_1, AMFBS_None, { MCK_IntRegs }, },
  { 397 /* deccc */, SP::SUBCCri, Convert__Reg1_1__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 403 /* edge16 */, SP::EDGE16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 410 /* edge16l */, SP::EDGE16L, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 418 /* edge16ln */, SP::EDGE16LN, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 427 /* edge16n */, SP::EDGE16N, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 435 /* edge32 */, SP::EDGE32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 442 /* edge32l */, SP::EDGE32L, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 450 /* edge32ln */, SP::EDGE32LN, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 459 /* edge32n */, SP::EDGE32N, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 467 /* edge8 */, SP::EDGE8, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 473 /* edge8l */, SP::EDGE8L, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 480 /* edge8ln */, SP::EDGE8LN, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 488 /* edge8n */, SP::EDGE8N, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 495 /* fabsd */, SP::FABSD, Convert__Reg1_1__Reg1_0, AMFBS_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 501 /* fabsq */, SP::FABSQ, Convert__Reg1_1__Reg1_0, AMFBS_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 507 /* fabss */, SP::FABSS, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_FPRegs }, },
  { 513 /* faddd */, SP::FADDD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 519 /* faddq */, SP::FADDQ, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 525 /* fadds */, SP::FADDS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 531 /* faligndata */, SP::FALIGNADATA, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 542 /* fand */, SP::FAND, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 547 /* fandnot1 */, SP::FANDNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 556 /* fandnot1s */, SP::FANDNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 566 /* fandnot2 */, SP::FANDNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 575 /* fandnot2s */, SP::FANDNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 585 /* fands */, SP::FANDS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 591 /* fb */, SP::FBCOND, Convert__Imm1_0__imm_95_8, AMFBS_None, { MCK_Imm }, },
  { 591 /* fb */, SP::FBCONDA, Convert__Imm1_1__imm_95_8, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCC, Convert__Imm1_1__imm_95_8__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::FBCOND, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCA, Convert__Imm1_2__imm_95_8__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCNT, Convert__Imm1_2__imm_95_8__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCC, Convert__Imm1_2__imm_95_8__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::FBCOND_V9, Convert__Imm1_2__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_Imm }, },
  { 591 /* fb */, SP::FBCONDA, Convert__Imm1_2__Imm1_0, AMFBS_None, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCC, Convert__Imm1_2__Imm1_0__Reg1_1, AMFBS_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCANT, Convert__Imm1_3__imm_95_8__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCA, Convert__Imm1_3__imm_95_8__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::FBCONDA_V9, Convert__Imm1_3__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_a, MCK__PCT_fcc0, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCA, Convert__Imm1_3__Imm1_0__Reg1_2, AMFBS_HasV9, { MCK_Imm, MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCNT, Convert__Imm1_3__Imm1_0__Reg1_2, AMFBS_HasV9, { MCK_Imm, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 591 /* fb */, SP::BPFCCANT, Convert__Imm1_4__Imm1_0__Reg1_3, AMFBS_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::FBCOND, Convert__Imm1_0__imm_95_8, AMFBS_None, { MCK_Imm }, },
  { 594 /* fba */, SP::FBCONDA, Convert__Imm1_1__imm_95_8, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCC, Convert__Imm1_1__imm_95_8__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCCA, Convert__Imm1_2__imm_95_8__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCCNT, Convert__Imm1_2__imm_95_8__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCC, Convert__Imm1_2__imm_95_8__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCCANT, Convert__Imm1_3__imm_95_8__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 594 /* fba */, SP::BPFCCA, Convert__Imm1_3__imm_95_8__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::FBCOND, Convert__Imm1_0__imm_95_9, AMFBS_None, { MCK_Imm }, },
  { 598 /* fbe */, SP::FBCONDA, Convert__Imm1_1__imm_95_9, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCC, Convert__Imm1_1__imm_95_9__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCCA, Convert__Imm1_2__imm_95_9__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCCNT, Convert__Imm1_2__imm_95_9__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCC, Convert__Imm1_2__imm_95_9__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCCANT, Convert__Imm1_3__imm_95_9__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 598 /* fbe */, SP::BPFCCA, Convert__Imm1_3__imm_95_9__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::FBCOND, Convert__Imm1_0__imm_95_6, AMFBS_None, { MCK_Imm }, },
  { 602 /* fbg */, SP::FBCONDA, Convert__Imm1_1__imm_95_6, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCC, Convert__Imm1_1__imm_95_6__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCCA, Convert__Imm1_2__imm_95_6__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCCNT, Convert__Imm1_2__imm_95_6__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCC, Convert__Imm1_2__imm_95_6__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCCANT, Convert__Imm1_3__imm_95_6__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 602 /* fbg */, SP::BPFCCA, Convert__Imm1_3__imm_95_6__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::FBCOND, Convert__Imm1_0__imm_95_11, AMFBS_None, { MCK_Imm }, },
  { 606 /* fbge */, SP::FBCONDA, Convert__Imm1_1__imm_95_11, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCC, Convert__Imm1_1__imm_95_11__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCCA, Convert__Imm1_2__imm_95_11__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCCNT, Convert__Imm1_2__imm_95_11__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCC, Convert__Imm1_2__imm_95_11__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCCANT, Convert__Imm1_3__imm_95_11__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 606 /* fbge */, SP::BPFCCA, Convert__Imm1_3__imm_95_11__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::FBCOND, Convert__Imm1_0__imm_95_4, AMFBS_None, { MCK_Imm }, },
  { 611 /* fbl */, SP::FBCONDA, Convert__Imm1_1__imm_95_4, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCC, Convert__Imm1_1__imm_95_4__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCCA, Convert__Imm1_2__imm_95_4__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCCNT, Convert__Imm1_2__imm_95_4__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCC, Convert__Imm1_2__imm_95_4__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCCANT, Convert__Imm1_3__imm_95_4__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 611 /* fbl */, SP::BPFCCA, Convert__Imm1_3__imm_95_4__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::FBCOND, Convert__Imm1_0__imm_95_13, AMFBS_None, { MCK_Imm }, },
  { 615 /* fble */, SP::FBCONDA, Convert__Imm1_1__imm_95_13, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCC, Convert__Imm1_1__imm_95_13__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCCA, Convert__Imm1_2__imm_95_13__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCCNT, Convert__Imm1_2__imm_95_13__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCC, Convert__Imm1_2__imm_95_13__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCCANT, Convert__Imm1_3__imm_95_13__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 615 /* fble */, SP::BPFCCA, Convert__Imm1_3__imm_95_13__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::FBCOND, Convert__Imm1_0__imm_95_2, AMFBS_None, { MCK_Imm }, },
  { 620 /* fblg */, SP::FBCONDA, Convert__Imm1_1__imm_95_2, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCC, Convert__Imm1_1__imm_95_2__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCCA, Convert__Imm1_2__imm_95_2__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCCNT, Convert__Imm1_2__imm_95_2__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCC, Convert__Imm1_2__imm_95_2__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCCANT, Convert__Imm1_3__imm_95_2__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 620 /* fblg */, SP::BPFCCA, Convert__Imm1_3__imm_95_2__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::FBCOND, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 625 /* fbn */, SP::FBCONDA, Convert__Imm1_1__imm_95_0, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCC, Convert__Imm1_1__imm_95_0__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCCA, Convert__Imm1_2__imm_95_0__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCCNT, Convert__Imm1_2__imm_95_0__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCC, Convert__Imm1_2__imm_95_0__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCCANT, Convert__Imm1_3__imm_95_0__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 625 /* fbn */, SP::BPFCCA, Convert__Imm1_3__imm_95_0__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::FBCOND, Convert__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 629 /* fbne */, SP::FBCONDA, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCC, Convert__Imm1_1__imm_95_1__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCCA, Convert__Imm1_2__imm_95_1__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCCNT, Convert__Imm1_2__imm_95_1__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCC, Convert__Imm1_2__imm_95_1__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCCANT, Convert__Imm1_3__imm_95_1__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 629 /* fbne */, SP::BPFCCA, Convert__Imm1_3__imm_95_1__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::FBCOND, Convert__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 634 /* fbnz */, SP::FBCONDA, Convert__Imm1_1__imm_95_1, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCC, Convert__Imm1_1__imm_95_1__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCCA, Convert__Imm1_2__imm_95_1__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCCNT, Convert__Imm1_2__imm_95_1__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCC, Convert__Imm1_2__imm_95_1__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCCANT, Convert__Imm1_3__imm_95_1__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 634 /* fbnz */, SP::BPFCCA, Convert__Imm1_3__imm_95_1__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::FBCOND, Convert__Imm1_0__imm_95_15, AMFBS_None, { MCK_Imm }, },
  { 639 /* fbo */, SP::FBCONDA, Convert__Imm1_1__imm_95_15, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCC, Convert__Imm1_1__imm_95_15__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCCA, Convert__Imm1_2__imm_95_15__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCCNT, Convert__Imm1_2__imm_95_15__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCC, Convert__Imm1_2__imm_95_15__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCCANT, Convert__Imm1_3__imm_95_15__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 639 /* fbo */, SP::BPFCCA, Convert__Imm1_3__imm_95_15__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::FBCOND, Convert__Imm1_0__imm_95_7, AMFBS_None, { MCK_Imm }, },
  { 643 /* fbu */, SP::FBCONDA, Convert__Imm1_1__imm_95_7, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCC, Convert__Imm1_1__imm_95_7__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCCA, Convert__Imm1_2__imm_95_7__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCCNT, Convert__Imm1_2__imm_95_7__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCC, Convert__Imm1_2__imm_95_7__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCCANT, Convert__Imm1_3__imm_95_7__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 643 /* fbu */, SP::BPFCCA, Convert__Imm1_3__imm_95_7__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::FBCOND, Convert__Imm1_0__imm_95_10, AMFBS_None, { MCK_Imm }, },
  { 647 /* fbue */, SP::FBCONDA, Convert__Imm1_1__imm_95_10, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCC, Convert__Imm1_1__imm_95_10__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCCA, Convert__Imm1_2__imm_95_10__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCCNT, Convert__Imm1_2__imm_95_10__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCC, Convert__Imm1_2__imm_95_10__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCCANT, Convert__Imm1_3__imm_95_10__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 647 /* fbue */, SP::BPFCCA, Convert__Imm1_3__imm_95_10__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::FBCOND, Convert__Imm1_0__imm_95_5, AMFBS_None, { MCK_Imm }, },
  { 652 /* fbug */, SP::FBCONDA, Convert__Imm1_1__imm_95_5, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCC, Convert__Imm1_1__imm_95_5__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCCA, Convert__Imm1_2__imm_95_5__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCCNT, Convert__Imm1_2__imm_95_5__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCC, Convert__Imm1_2__imm_95_5__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCCANT, Convert__Imm1_3__imm_95_5__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 652 /* fbug */, SP::BPFCCA, Convert__Imm1_3__imm_95_5__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::FBCOND, Convert__Imm1_0__imm_95_12, AMFBS_None, { MCK_Imm }, },
  { 657 /* fbuge */, SP::FBCONDA, Convert__Imm1_1__imm_95_12, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCC, Convert__Imm1_1__imm_95_12__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCCA, Convert__Imm1_2__imm_95_12__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCCNT, Convert__Imm1_2__imm_95_12__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCC, Convert__Imm1_2__imm_95_12__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCCANT, Convert__Imm1_3__imm_95_12__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 657 /* fbuge */, SP::BPFCCA, Convert__Imm1_3__imm_95_12__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::FBCOND, Convert__Imm1_0__imm_95_3, AMFBS_None, { MCK_Imm }, },
  { 663 /* fbul */, SP::FBCONDA, Convert__Imm1_1__imm_95_3, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCC, Convert__Imm1_1__imm_95_3__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCCA, Convert__Imm1_2__imm_95_3__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCCNT, Convert__Imm1_2__imm_95_3__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCC, Convert__Imm1_2__imm_95_3__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCCANT, Convert__Imm1_3__imm_95_3__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 663 /* fbul */, SP::BPFCCA, Convert__Imm1_3__imm_95_3__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::FBCOND, Convert__Imm1_0__imm_95_14, AMFBS_None, { MCK_Imm }, },
  { 668 /* fbule */, SP::FBCONDA, Convert__Imm1_1__imm_95_14, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCC, Convert__Imm1_1__imm_95_14__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCCA, Convert__Imm1_2__imm_95_14__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCCNT, Convert__Imm1_2__imm_95_14__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCC, Convert__Imm1_2__imm_95_14__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCCANT, Convert__Imm1_3__imm_95_14__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 668 /* fbule */, SP::BPFCCA, Convert__Imm1_3__imm_95_14__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::FBCOND, Convert__Imm1_0__imm_95_9, AMFBS_None, { MCK_Imm }, },
  { 674 /* fbz */, SP::FBCONDA, Convert__Imm1_1__imm_95_9, AMFBS_None, { MCK_a, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCC, Convert__Imm1_1__imm_95_9__Reg1_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCCA, Convert__Imm1_2__imm_95_9__Reg1_1, AMFBS_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCCNT, Convert__Imm1_2__imm_95_9__Reg1_1, AMFBS_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCC, Convert__Imm1_2__imm_95_9__Reg1_1, AMFBS_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCCANT, Convert__Imm1_3__imm_95_9__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 674 /* fbz */, SP::BPFCCA, Convert__Imm1_3__imm_95_9__Reg1_2, AMFBS_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 678 /* fchksm16 */, SP::FCHKSM16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 687 /* fcmpd */, SP::V9FCMPD, Convert__regFCC0__Reg1_0__Reg1_1, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 687 /* fcmpd */, SP::V9FCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 693 /* fcmped */, SP::V9FCMPED, Convert__regFCC0__Reg1_0__Reg1_1, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 693 /* fcmped */, SP::V9FCMPED, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 700 /* fcmpeq */, SP::V9FCMPEQ, Convert__regFCC0__Reg1_0__Reg1_1, AMFBS_None, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 700 /* fcmpeq */, SP::V9FCMPEQ, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 707 /* fcmpeq16 */, SP::FCMPEQ16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 716 /* fcmpeq32 */, SP::FCMPEQ32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 725 /* fcmpes */, SP::V9FCMPES, Convert__regFCC0__Reg1_0__Reg1_1, AMFBS_None, { MCK_FPRegs, MCK_FPRegs }, },
  { 725 /* fcmpes */, SP::V9FCMPES, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 732 /* fcmpgt16 */, SP::FCMPGT16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 741 /* fcmpgt32 */, SP::FCMPGT32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 750 /* fcmple16 */, SP::FCMPLE16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 759 /* fcmple32 */, SP::FCMPLE32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 768 /* fcmpne16 */, SP::FCMPNE16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 777 /* fcmpne32 */, SP::FCMPNE32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 786 /* fcmpq */, SP::V9FCMPQ, Convert__regFCC0__Reg1_0__Reg1_1, AMFBS_None, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 786 /* fcmpq */, SP::V9FCMPQ, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 792 /* fcmps */, SP::V9FCMPS, Convert__regFCC0__Reg1_0__Reg1_1, AMFBS_None, { MCK_FPRegs, MCK_FPRegs }, },
  { 792 /* fcmps */, SP::V9FCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 798 /* fdivd */, SP::FDIVD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 804 /* fdivq */, SP::FDIVQ, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 810 /* fdivs */, SP::FDIVS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 816 /* fdmulq */, SP::FDMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs, MCK_QFPRegs }, },
  { 823 /* fdtoi */, SP::FDTOI, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK_FPRegs }, },
  { 829 /* fdtoq */, SP::FDTOQ, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 835 /* fdtos */, SP::FDTOS, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK_FPRegs }, },
  { 841 /* fdtox */, SP::FDTOX, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 847 /* fexpand */, SP::FEXPAND, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 855 /* fhaddd */, SP::FHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 862 /* fhadds */, SP::FHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 869 /* fhsubd */, SP::FHSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 876 /* fhsubs */, SP::FHSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 883 /* fitod */, SP::FITOD, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_DFPRegs }, },
  { 889 /* fitoq */, SP::FITOQ, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_QFPRegs }, },
  { 895 /* fitos */, SP::FITOS, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_FPRegs }, },
  { 901 /* flcmpd */, SP::FLCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 908 /* flcmps */, SP::FLCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 915 /* flush */, SP::FLUSH, Convert_NoOperands, AMFBS_None, {  }, },
  { 915 /* flush */, SP::FLUSH, Convert_NoOperands, AMFBS_None, { MCK__PCT_g0 }, },
  { 915 /* flush */, SP::FLUSHri, Convert__MEMri2_0, AMFBS_None, { MCK_MEMri }, },
  { 915 /* flush */, SP::FLUSHrr, Convert__MEMrr2_0, AMFBS_None, { MCK_MEMrr }, },
  { 921 /* flushw */, SP::FLUSHW, Convert_NoOperands, AMFBS_HasV9, {  }, },
  { 928 /* fmean16 */, SP::FMEAN16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD, Convert__Reg1_1__Reg1_0, AMFBS_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_FCC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_ICC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::FMOVD_XCC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 936 /* fmovd */, SP::V9FMOVD_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 942 /* fmovda */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 942 /* fmovda */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 942 /* fmovda */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 949 /* fmovdcc */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 949 /* fmovdcc */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 957 /* fmovdcs */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 957 /* fmovdcs */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 965 /* fmovde */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 965 /* fmovde */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 965 /* fmovde */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 972 /* fmovdeq */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 972 /* fmovdeq */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 980 /* fmovdg */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 980 /* fmovdg */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 980 /* fmovdg */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 987 /* fmovdge */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 987 /* fmovdge */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 987 /* fmovdge */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 995 /* fmovdgeu */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 995 /* fmovdgeu */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1004 /* fmovdgu */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1004 /* fmovdgu */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1012 /* fmovdl */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1012 /* fmovdl */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1012 /* fmovdl */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1019 /* fmovdle */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1019 /* fmovdle */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1019 /* fmovdle */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1027 /* fmovdleu */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1027 /* fmovdleu */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1036 /* fmovdlg */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1044 /* fmovdlu */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1044 /* fmovdlu */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1052 /* fmovdn */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1052 /* fmovdn */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1052 /* fmovdn */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1059 /* fmovdne */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1059 /* fmovdne */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1059 /* fmovdne */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1067 /* fmovdneg */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1067 /* fmovdneg */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1076 /* fmovdnz */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1076 /* fmovdnz */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1076 /* fmovdnz */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1084 /* fmovdo */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1091 /* fmovdpos */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1091 /* fmovdpos */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1100 /* fmovdu */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1107 /* fmovdue */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1115 /* fmovdug */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1123 /* fmovduge */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1132 /* fmovdul */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1140 /* fmovdule */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1149 /* fmovdvc */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1149 /* fmovdvc */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1157 /* fmovdvs */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1157 /* fmovdvs */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1165 /* fmovdz */, SP::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1165 /* fmovdz */, SP::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1165 /* fmovdz */, SP::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ, Convert__Reg1_1__Reg1_0, AMFBS_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_FCC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_ICC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::FMOVQ_XCC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1172 /* fmovq */, SP::V9FMOVQ_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1178 /* fmovqa */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1178 /* fmovqa */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1178 /* fmovqa */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1185 /* fmovqcc */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1185 /* fmovqcc */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1193 /* fmovqcs */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1193 /* fmovqcs */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1201 /* fmovqe */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1201 /* fmovqe */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1201 /* fmovqe */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1208 /* fmovqeq */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1208 /* fmovqeq */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1216 /* fmovqg */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1216 /* fmovqg */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1216 /* fmovqg */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1223 /* fmovqge */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1223 /* fmovqge */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1223 /* fmovqge */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1231 /* fmovqgeu */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1231 /* fmovqgeu */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1240 /* fmovqgu */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1240 /* fmovqgu */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1248 /* fmovql */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1248 /* fmovql */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1248 /* fmovql */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1255 /* fmovqle */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1255 /* fmovqle */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1255 /* fmovqle */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1263 /* fmovqleu */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1263 /* fmovqleu */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1272 /* fmovqlg */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1280 /* fmovqlu */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1280 /* fmovqlu */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1288 /* fmovqn */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1288 /* fmovqn */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1288 /* fmovqn */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqne */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqne */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqne */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1303 /* fmovqneg */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1303 /* fmovqneg */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1312 /* fmovqnz */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1312 /* fmovqnz */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1312 /* fmovqnz */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1320 /* fmovqo */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1327 /* fmovqpos */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1327 /* fmovqpos */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1336 /* fmovqu */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1343 /* fmovque */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1351 /* fmovqug */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1359 /* fmovquge */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1368 /* fmovqul */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1376 /* fmovqule */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1385 /* fmovqvc */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1385 /* fmovqvc */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1393 /* fmovqvs */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1393 /* fmovqvs */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1401 /* fmovqz */, SP::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1401 /* fmovqz */, SP::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1401 /* fmovqz */, SP::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1408 /* fmovrd */, SP::FMOVRD, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1415 /* fmovrdgez */, SP::FMOVRD, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK_IntRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1425 /* fmovrdgz */, SP::FMOVRD, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK_IntRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1434 /* fmovrdlez */, SP::FMOVRD, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK_IntRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1444 /* fmovrdlz */, SP::FMOVRD, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK_IntRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1453 /* fmovrdnz */, SP::FMOVRD, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1462 /* fmovrdz */, SP::FMOVRD, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1470 /* fmovrq */, SP::FMOVRQ, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1477 /* fmovrqgez */, SP::FMOVRQ, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK_IntRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1487 /* fmovrqgz */, SP::FMOVRQ, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK_IntRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1496 /* fmovrqlez */, SP::FMOVRQ, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK_IntRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1506 /* fmovrqlz */, SP::FMOVRQ, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK_IntRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1515 /* fmovrqnz */, SP::FMOVRQ, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1524 /* fmovrqz */, SP::FMOVRQ, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1532 /* fmovrs */, SP::FMOVRS, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1539 /* fmovrsgez */, SP::FMOVRS, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1549 /* fmovrsgz */, SP::FMOVRS, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1558 /* fmovrslez */, SP::FMOVRS, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1568 /* fmovrslz */, SP::FMOVRS, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1577 /* fmovrsnz */, SP::FMOVRS, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1586 /* fmovrsz */, SP::FMOVRS, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovs */, SP::FMOVS, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovs */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovs */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovs */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovs */, SP::FMOVS_FCC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovs */, SP::FMOVS_ICC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovs */, SP::FMOVS_XCC, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1594 /* fmovs */, SP::V9FMOVS_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1600 /* fmovsa */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1600 /* fmovsa */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1600 /* fmovsa */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1607 /* fmovscc */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1607 /* fmovscc */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1615 /* fmovscs */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1615 /* fmovscs */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1623 /* fmovse */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1623 /* fmovse */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1623 /* fmovse */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1630 /* fmovseq */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1630 /* fmovseq */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1638 /* fmovsg */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1638 /* fmovsg */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1638 /* fmovsg */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1645 /* fmovsge */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1645 /* fmovsge */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1645 /* fmovsge */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1653 /* fmovsgeu */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1653 /* fmovsgeu */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1662 /* fmovsgu */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1662 /* fmovsgu */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1670 /* fmovsl */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1670 /* fmovsl */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1670 /* fmovsl */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1677 /* fmovsle */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1677 /* fmovsle */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1677 /* fmovsle */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1685 /* fmovsleu */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1685 /* fmovsleu */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1694 /* fmovslg */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1702 /* fmovslu */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1702 /* fmovslu */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1710 /* fmovsn */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1710 /* fmovsn */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1710 /* fmovsn */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1717 /* fmovsne */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1717 /* fmovsne */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1717 /* fmovsne */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1725 /* fmovsneg */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1725 /* fmovsneg */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1734 /* fmovsnz */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1734 /* fmovsnz */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1734 /* fmovsnz */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1742 /* fmovso */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1749 /* fmovspos */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1749 /* fmovspos */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1758 /* fmovsu */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1765 /* fmovsue */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1773 /* fmovsug */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1781 /* fmovsuge */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1790 /* fmovsul */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1798 /* fmovsule */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1807 /* fmovsvc */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1807 /* fmovsvc */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1815 /* fmovsvs */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1815 /* fmovsvs */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1823 /* fmovsz */, SP::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1823 /* fmovsz */, SP::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1823 /* fmovsz */, SP::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1830 /* fmul8sux16 */, SP::FMUL8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1841 /* fmul8ulx16 */, SP::FMUL8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1852 /* fmul8x16 */, SP::FMUL8X16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1861 /* fmul8x16al */, SP::FMUL8X16AL, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1872 /* fmul8x16au */, SP::FMUL8X16AU, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1883 /* fmuld */, SP::FMULD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1889 /* fmuld8sux16 */, SP::FMULD8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1901 /* fmuld8ulx16 */, SP::FMULD8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1913 /* fmulq */, SP::FMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1919 /* fmuls */, SP::FMULS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1925 /* fnaddd */, SP::FNADDD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1932 /* fnadds */, SP::FNADDS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1939 /* fnand */, SP::FNAND, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1945 /* fnands */, SP::FNANDS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1952 /* fnegd */, SP::FNEGD, Convert__Reg1_1__Reg1_0, AMFBS_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1958 /* fnegq */, SP::FNEGQ, Convert__Reg1_1__Reg1_0, AMFBS_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1964 /* fnegs */, SP::FNEGS, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_FPRegs }, },
  { 1970 /* fnhaddd */, SP::FNHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1970 /* fnhaddd */, SP::FNMULD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1978 /* fnhadds */, SP::FNHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1978 /* fnhadds */, SP::FNMULS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1978 /* fnhadds */, SP::FNSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1986 /* fnor */, SP::FNOR, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1991 /* fnors */, SP::FNORS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1997 /* fnot1 */, SP::FNOT1, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2003 /* fnot1s */, SP::FNOT1S, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2010 /* fnot2 */, SP::FNOT2, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2016 /* fnot2s */, SP::FNOT2S, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2023 /* fone */, SP::FONE, Convert__Reg1_0__Tie0_1_1, AMFBS_HasVIS, { MCK_DFPRegs }, },
  { 2028 /* fones */, SP::FONES, Convert__Reg1_0__Tie0_1_1, AMFBS_HasVIS, { MCK_FPRegs }, },
  { 2034 /* for */, SP::FOR, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2038 /* fornot1 */, SP::FORNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2046 /* fornot1s */, SP::FORNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2055 /* fornot2 */, SP::FORNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2063 /* fornot2s */, SP::FORNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2072 /* fors */, SP::FORS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2077 /* fpack16 */, SP::FPACK16, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2085 /* fpack32 */, SP::FPACK32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2093 /* fpackfix */, SP::FPACKFIX, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2102 /* fpadd16 */, SP::FPADD16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2110 /* fpadd16s */, SP::FPADD16S, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2119 /* fpadd32 */, SP::FPADD32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2127 /* fpadd32s */, SP::FPADD32S, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2136 /* fpadd64 */, SP::FPADD64, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2144 /* fpmerge */, SP::FPMERGE, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2152 /* fpsub16 */, SP::FPSUB16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2160 /* fpsub16S */, SP::FPSUB16S, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2169 /* fpsub32 */, SP::FPSUB32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2177 /* fpsub32S */, SP::FPSUB32S, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2186 /* fqtod */, SP::FQTOD, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 2192 /* fqtoi */, SP::FQTOI, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_QFPRegs, MCK_FPRegs }, },
  { 2198 /* fqtos */, SP::FQTOS, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_QFPRegs, MCK_FPRegs }, },
  { 2204 /* fqtox */, SP::FQTOX, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 2210 /* fslas16 */, SP::FSLAS16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2218 /* fslas32 */, SP::FSLAS32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2226 /* fsll16 */, SP::FSLL16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2233 /* fsll32 */, SP::FSLL32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2240 /* fsmuld */, SP::FSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_FPRegs, MCK_FPRegs, MCK_DFPRegs }, },
  { 2247 /* fsqrtd */, SP::FSQRTD, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2254 /* fsqrtq */, SP::FSQRTQ, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 2261 /* fsqrts */, SP::FSQRTS, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_FPRegs }, },
  { 2268 /* fsra16 */, SP::FSRA16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2275 /* fsra32 */, SP::FSRA32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2282 /* fsrc1 */, SP::FSRC1, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2288 /* fsrc1s */, SP::FSRC1S, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2295 /* fsrc2 */, SP::FSRC2, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2301 /* fsrc2s */, SP::FSRC2S, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2308 /* fsrl16 */, SP::FSRL16, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2315 /* fsrl32 */, SP::FSRL32, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2322 /* fstod */, SP::FSTOD, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2328 /* fstoi */, SP::FSTOI, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_FPRegs }, },
  { 2334 /* fstoq */, SP::FSTOQ, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_QFPRegs }, },
  { 2340 /* fstox */, SP::FSTOX, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2346 /* fsubd */, SP::FSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2352 /* fsubq */, SP::FSUBQ, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 2358 /* fsubs */, SP::FSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2364 /* fxnor */, SP::FXNOR, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2370 /* fxnors */, SP::FXNORS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2377 /* fxor */, SP::FXOR, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2382 /* fxors */, SP::FXORS, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2388 /* fxtod */, SP::FXTOD, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2394 /* fxtoq */, SP::FXTOQ, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 2400 /* fxtos */, SP::FXTOS, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK_FPRegs }, },
  { 2406 /* fzero */, SP::FZERO, Convert__Reg1_0__Tie0_1_1, AMFBS_HasVIS, { MCK_DFPRegs }, },
  { 2412 /* fzeros */, SP::FZEROS, Convert__Reg1_0__Tie0_1_1, AMFBS_HasVIS, { MCK_FPRegs }, },
  { 2419 /* inc */, SP::ADDri, Convert__Reg1_0__Reg1_0__imm_95_1, AMFBS_None, { MCK_IntRegs }, },
  { 2419 /* inc */, SP::ADDri, Convert__Reg1_1__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 2423 /* inccc */, SP::ADDCCri, Convert__Reg1_0__Reg1_0__imm_95_1, AMFBS_None, { MCK_IntRegs }, },
  { 2423 /* inccc */, SP::ADDCCri, Convert__Reg1_1__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 2429 /* jmp */, SP::JMPLri, Convert__regG0__MEMri2_0, AMFBS_None, { MCK_MEMri }, },
  { 2429 /* jmp */, SP::JMPLrr, Convert__regG0__MEMrr2_0, AMFBS_None, { MCK_MEMrr }, },
  { 2433 /* jmpl */, SP::JMPLri, Convert__Reg1_1__MEMri2_0, AMFBS_None, { MCK_MEMri, MCK_IntRegs }, },
  { 2433 /* jmpl */, SP::JMPLrr, Convert__Reg1_1__MEMrr2_0, AMFBS_None, { MCK_MEMrr, MCK_IntRegs }, },
  { 2438 /* ld */, SP::LDCSRri, Convert__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK__PCT_csr }, },
  { 2438 /* ld */, SP::LDFSRri, Convert__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK__PCT_fsr }, },
  { 2438 /* ld */, SP::LDCri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_CoprocRegs }, },
  { 2438 /* ld */, SP::LDFri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_FPRegs }, },
  { 2438 /* ld */, SP::LDri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2438 /* ld */, SP::LDCSRrr, Convert__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK__PCT_csr }, },
  { 2438 /* ld */, SP::LDFSRrr, Convert__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK__PCT_fsr }, },
  { 2438 /* ld */, SP::LDCrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_CoprocRegs }, },
  { 2438 /* ld */, SP::LDFrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_FPRegs }, },
  { 2438 /* ld */, SP::LDrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2438 /* ld */, SP::GDOP_LDrr, Convert__Reg1_3__MEMrr2_1__TailRelocSymLoad_GOT1_4, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs, MCK_TailRelocSymLoad_GOT }, },
  { 2438 /* ld */, SP::TLS_LDrr, Convert__Reg1_3__MEMrr2_1__TailRelocSymLoad_TLS1_4, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs, MCK_TailRelocSymLoad_TLS }, },
  { 2441 /* lda */, SP::LDFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_FPRegs }, },
  { 2441 /* lda */, SP::LDArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2445 /* ldd */, SP::LDDCri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_CoprocPair }, },
  { 2445 /* ldd */, SP::LDDri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntPair }, },
  { 2445 /* ldd */, SP::LDDFri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_DFPRegs }, },
  { 2445 /* ldd */, SP::LDDCrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_CoprocPair }, },
  { 2445 /* ldd */, SP::LDDrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntPair }, },
  { 2445 /* ldd */, SP::LDDFrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_DFPRegs }, },
  { 2449 /* ldda */, SP::LDDArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntPair }, },
  { 2449 /* ldda */, SP::LDDFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_DFPRegs }, },
  { 2454 /* ldq */, SP::LDQFri, Convert__Reg1_3__MEMri2_1, AMFBS_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK_QFPRegs }, },
  { 2454 /* ldq */, SP::LDQFrr, Convert__Reg1_3__MEMrr2_1, AMFBS_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_QFPRegs }, },
  { 2458 /* ldqa */, SP::LDQFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_QFPRegs }, },
  { 2463 /* ldsb */, SP::LDSBri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2463 /* ldsb */, SP::LDSBrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2468 /* ldsba */, SP::LDSBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2474 /* ldsh */, SP::LDSHri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2474 /* ldsh */, SP::LDSHrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2479 /* ldsha */, SP::LDSHArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2485 /* ldstub */, SP::LDSTUBri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2485 /* ldstub */, SP::LDSTUBrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2492 /* ldstuba */, SP::LDSTUBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2500 /* ldsw */, SP::LDSWri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2500 /* ldsw */, SP::LDSWrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2505 /* ldub */, SP::LDUBri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2505 /* ldub */, SP::LDUBrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2510 /* lduba */, SP::LDUBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2516 /* lduh */, SP::LDUHri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2516 /* lduh */, SP::LDUHrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2521 /* lduha */, SP::LDUHArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2527 /* ldx */, SP::LDXFSRri, Convert__MEMri2_1, AMFBS_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK__PCT_fsr }, },
  { 2527 /* ldx */, SP::LDXri, Convert__Reg1_3__MEMri2_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2527 /* ldx */, SP::LDXFSRrr, Convert__MEMrr2_1, AMFBS_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK__PCT_fsr }, },
  { 2527 /* ldx */, SP::LDXrr, Convert__Reg1_3__MEMrr2_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2527 /* ldx */, SP::GDOP_LDXrr, Convert__Reg1_3__MEMrr2_1__TailRelocSymLoad_GOT1_4, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs, MCK_TailRelocSymLoad_GOT }, },
  { 2527 /* ldx */, SP::TLS_LDXrr, Convert__Reg1_3__MEMrr2_1__TailRelocSymLoad_TLS1_4, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs, MCK_TailRelocSymLoad_TLS }, },
  { 2531 /* lzcnt */, SP::LZCNT, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS3, { MCK_IntRegs, MCK_IntRegs }, },
  { 2537 /* membar */, SP::MEMBARi, Convert__MembarTag1_0, AMFBS_HasV9, { MCK_MembarTag }, },
  { 2544 /* mov */, SP::RDPC, Convert__Reg1_1, AMFBS_None, { MCK__PCT_pc, MCK_IntRegs }, },
  { 2544 /* mov */, SP::RDPSR, Convert__Reg1_1, AMFBS_None, { MCK__PCT_psr, MCK_IntRegs }, },
  { 2544 /* mov */, SP::RDTBR, Convert__Reg1_1, AMFBS_None, { MCK__PCT_tbr, MCK_IntRegs }, },
  { 2544 /* mov */, SP::RDWIM, Convert__Reg1_1, AMFBS_None, { MCK__PCT_wim, MCK_IntRegs }, },
  { 2544 /* mov */, SP::RDASR, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_ASRRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::WRPSRrr, Convert__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__PCT_psr }, },
  { 2544 /* mov */, SP::WRTBRrr, Convert__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__PCT_tbr }, },
  { 2544 /* mov */, SP::WRWIMrr, Convert__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__PCT_wim }, },
  { 2544 /* mov */, SP::WRASRrr, Convert__Reg1_1__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK_ASRRegs }, },
  { 2544 /* mov */, SP::ORrr, Convert__Reg1_1__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::WRPSRri, Convert__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_psr }, },
  { 2544 /* mov */, SP::WRTBRri, Convert__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_tbr }, },
  { 2544 /* mov */, SP::WRWIMri, Convert__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_wim }, },
  { 2544 /* mov */, SP::WRASRri, Convert__Reg1_1__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK_ASRRegs }, },
  { 2544 /* mov */, SP::ORri, Convert__Reg1_1__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2544 /* mov */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVFCCrr, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_IntRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVFCCri, Convert__Reg1_3__Imm1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_Imm, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVICCrr, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVICCri, Convert__Reg1_3__Imm1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVXCCrr, Convert__Reg1_3__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::MOVXCCri, Convert__Reg1_3__Imm1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2544 /* mov */, SP::V9MOVFCCrr, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2544 /* mov */, SP::V9MOVFCCri, Convert__Reg1_3__Reg1_1__Imm1_2__Tie0_1_1__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2548 /* mova */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2548 /* mova */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2548 /* mova */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2548 /* mova */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_8, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2548 /* mova */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2548 /* mova */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_8, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2553 /* movcc */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2553 /* movcc */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2553 /* movcc */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2553 /* movcc */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2559 /* movcs */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2559 /* movcs */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2559 /* movcs */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2559 /* movcs */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2565 /* movdtox */, SP::MOVDTOX, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2565 /* movdtox */, SP::MOVWTOS, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2565 /* movdtox */, SP::MOVXTOD, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2573 /* move */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2573 /* move */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2573 /* move */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2573 /* move */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2573 /* move */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2573 /* move */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2578 /* moveq */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2578 /* moveq */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2578 /* moveq */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2578 /* moveq */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2584 /* movg */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2584 /* movg */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2584 /* movg */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2584 /* movg */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_10, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2584 /* movg */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2584 /* movg */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2589 /* movge */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2589 /* movge */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2589 /* movge */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2589 /* movge */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_11, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2589 /* movge */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2589 /* movge */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_11, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2595 /* movgeu */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2595 /* movgeu */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2595 /* movgeu */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2595 /* movgeu */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_13, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2602 /* movgu */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2602 /* movgu */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2602 /* movgu */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2602 /* movgu */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_12, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2608 /* movl */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2608 /* movl */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2608 /* movl */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2608 /* movl */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2608 /* movl */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2608 /* movl */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2613 /* movle */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2613 /* movle */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2613 /* movle */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2613 /* movle */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2613 /* movle */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2613 /* movle */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_13, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2619 /* movleu */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2619 /* movleu */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2619 /* movleu */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_4, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2619 /* movleu */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_4, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2626 /* movlg */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2626 /* movlg */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_2, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2632 /* movlu */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2632 /* movlu */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2632 /* movlu */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2632 /* movlu */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2638 /* movn */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2638 /* movn */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2638 /* movn */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2638 /* movn */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_0, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2638 /* movn */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2638 /* movn */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_0, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2643 /* movne */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2643 /* movne */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2643 /* movne */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2643 /* movne */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2643 /* movne */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2643 /* movne */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2649 /* movneg */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2649 /* movneg */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2649 /* movneg */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2649 /* movneg */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2656 /* movnz */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2656 /* movnz */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2656 /* movnz */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2656 /* movnz */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_9, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2656 /* movnz */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2656 /* movnz */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2662 /* movo */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2662 /* movo */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2667 /* movpos */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2667 /* movpos */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2667 /* movpos */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2667 /* movpos */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_14, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2674 /* movr */, SP::MOVRrr, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2674 /* movr */, SP::MOVRri, Convert__Reg1_3__Reg1_1__Imm1_2__Tie0_1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2679 /* movrgez */, SP::MOVRrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2679 /* movrgez */, SP::MOVRri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2687 /* movrgz */, SP::MOVRrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2687 /* movrgz */, SP::MOVRri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_6, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2694 /* movrlez */, SP::MOVRrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2694 /* movrlez */, SP::MOVRri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_2, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2702 /* movrlz */, SP::MOVRrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2702 /* movrlz */, SP::MOVRri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_3, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2709 /* movrnz */, SP::MOVRrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2709 /* movrnz */, SP::MOVRri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2716 /* movrz */, SP::MOVRrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2716 /* movrz */, SP::MOVRri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2722 /* movstosw */, SP::MOVSTOSW, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2731 /* movstouw */, SP::MOVSTOUW, Convert__Reg1_1__Reg1_0, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2740 /* movu */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2740 /* movu */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2745 /* movue */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2745 /* movue */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_10, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2751 /* movug */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2751 /* movug */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_5, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2757 /* movuge */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2757 /* movuge */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_12, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2764 /* movul */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2764 /* movul */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_3, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2770 /* movule */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2770 /* movule */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_14, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2777 /* movvc */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2777 /* movvc */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2777 /* movvc */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_15, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2777 /* movvc */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_15, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2783 /* movvs */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2783 /* movvs */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2783 /* movvs */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2783 /* movvs */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_7, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2789 /* movz */, SP::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2789 /* movz */, SP::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2789 /* movz */, SP::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2789 /* movz */, SP::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0_3_3__imm_95_1, AMFBS_None, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2789 /* movz */, SP::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2789 /* movz */, SP::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0_3_3__imm_95_9, AMFBS_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2794 /* mulscc */, SP::MULSCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2794 /* mulscc */, SP::MULSCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2801 /* mulx */, SP::MULXrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2801 /* mulx */, SP::MULXri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2806 /* neg */, SP::SUBrr, Convert__Reg1_0__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs }, },
  { 2806 /* neg */, SP::SUBrr, Convert__Reg1_1__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs }, },
  { 2810 /* nop */, SP::NOP, Convert_NoOperands, AMFBS_None, {  }, },
  { 2814 /* not */, SP::XNORrr, Convert__Reg1_0__Reg1_0__regG0, AMFBS_None, { MCK_IntRegs }, },
  { 2814 /* not */, SP::XNORrr, Convert__Reg1_1__Reg1_0__regG0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs }, },
  { 2818 /* or */, SP::ORrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2818 /* or */, SP::ORri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2821 /* orcc */, SP::ORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2821 /* orcc */, SP::ORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2826 /* orn */, SP::ORNrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2826 /* orn */, SP::ORNri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2830 /* orncc */, SP::ORNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2830 /* orncc */, SP::ORNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2836 /* pdist */, SP::PDIST, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2842 /* pdistn */, SP::PDISTN, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2849 /* popc */, SP::POPCrr, Convert__Reg1_1__Reg1_0, AMFBS_HasV9, { MCK_IntRegs, MCK_IntRegs }, },
  { 2854 /* prefetch */, SP::PREFETCHi, Convert__MEMri2_1__ShiftAmtImm51_3, AMFBS_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK_ShiftAmtImm5 }, },
  { 2854 /* prefetch */, SP::PREFETCHr, Convert__MEMrr2_1__ShiftAmtImm51_3, AMFBS_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_ShiftAmtImm5 }, },
  { 2863 /* pwr */, SP::PWRPSRrr, Convert__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__PCT_psr }, },
  { 2863 /* pwr */, SP::PWRPSRri, Convert__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_psr }, },
  { 2863 /* pwr */, SP::PWRPSRrr, Convert__Reg1_0__Reg1_1, AMFBS_HasPWRPSR, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_psr }, },
  { 2863 /* pwr */, SP::PWRPSRri, Convert__Reg1_0__Imm1_1, AMFBS_HasPWRPSR, { MCK_IntRegs, MCK_Imm, MCK__PCT_psr }, },
  { 2867 /* rd */, SP::RDPC, Convert__Reg1_1, AMFBS_HasV9, { MCK__PCT_pc, MCK_IntRegs }, },
  { 2867 /* rd */, SP::RDPSR, Convert__Reg1_1, AMFBS_None, { MCK__PCT_psr, MCK_IntRegs }, },
  { 2867 /* rd */, SP::RDTBR, Convert__Reg1_1, AMFBS_None, { MCK__PCT_tbr, MCK_IntRegs }, },
  { 2867 /* rd */, SP::RDWIM, Convert__Reg1_1, AMFBS_None, { MCK__PCT_wim, MCK_IntRegs }, },
  { 2867 /* rd */, SP::RDASR, Convert__Reg1_1__Reg1_0, AMFBS_None, { MCK_ASRRegs, MCK_IntRegs }, },
  { 2870 /* rdpr */, SP::RDPR, Convert__Reg1_1__Reg1_0, AMFBS_HasV9, { MCK_PRRegs, MCK_IntRegs }, },
  { 2875 /* restore */, SP::RESTORErr, Convert__regG0__regG0__regG0, AMFBS_None, {  }, },
  { 2875 /* restore */, SP::RESTORErr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2875 /* restore */, SP::RESTOREri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2883 /* ret */, SP::RET, Convert__imm_95_8, AMFBS_None, {  }, },
  { 2887 /* retl */, SP::RETL, Convert__imm_95_8, AMFBS_None, {  }, },
  { 2892 /* rett */, SP::RETTri, Convert__MEMri2_0, AMFBS_None, { MCK_MEMri }, },
  { 2892 /* rett */, SP::RETTrr, Convert__MEMrr2_0, AMFBS_None, { MCK_MEMrr }, },
  { 2897 /* save */, SP::SAVErr, Convert__regG0__regG0__regG0, AMFBS_None, {  }, },
  { 2897 /* save */, SP::SAVErr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2897 /* save */, SP::SAVEri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2902 /* sdiv */, SP::SDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2902 /* sdiv */, SP::SDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2907 /* sdivcc */, SP::SDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2907 /* sdivcc */, SP::SDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2914 /* sdivx */, SP::SDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2914 /* sdivx */, SP::SDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2920 /* set */, SP::SET, Convert__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 2924 /* sethi */, SP::SETHIi, Convert__Reg1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs }, },
  { 2930 /* shutdown */, SP::SHUTDOWN, Convert_NoOperands, AMFBS_HasVIS, {  }, },
  { 2939 /* siam */, SP::SIAM, Convert_NoOperands, AMFBS_HasVIS2, {  }, },
  { 2944 /* signx */, SP::SRArr, Convert__Reg1_0__Reg1_0__regG0, AMFBS_HasV9, { MCK_IntRegs }, },
  { 2944 /* signx */, SP::SRArr, Convert__Reg1_1__Reg1_0__regG0, AMFBS_HasV9, { MCK_IntRegs, MCK_IntRegs }, },
  { 2950 /* sir */, SP::SIR, Convert__imm_95_0, AMFBS_None, {  }, },
  { 2950 /* sir */, SP::SIR, Convert__Imm1_0, AMFBS_HasV9, { MCK_Imm }, },
  { 2954 /* sll */, SP::SLLrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2954 /* sll */, SP::SLLri, Convert__Reg1_2__Reg1_0__ShiftAmtImm51_1, AMFBS_None, { MCK_IntRegs, MCK_ShiftAmtImm5, MCK_IntRegs }, },
  { 2958 /* sllx */, SP::SLLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2958 /* sllx */, SP::SLLXri, Convert__Reg1_2__Reg1_0__ShiftAmtImm61_1, AMFBS_None, { MCK_IntRegs, MCK_ShiftAmtImm6, MCK_IntRegs }, },
  { 2963 /* smac */, SP::SMACrr, Convert__Reg1_2__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2963 /* smac */, SP::SMACri, Convert__Reg1_2__Reg1_0__Imm1_1__imm_95_0, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2968 /* smul */, SP::SMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2968 /* smul */, SP::SMULri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2973 /* smulcc */, SP::SMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2973 /* smulcc */, SP::SMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2980 /* sra */, SP::SRArr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2980 /* sra */, SP::SRAri, Convert__Reg1_2__Reg1_0__ShiftAmtImm51_1, AMFBS_None, { MCK_IntRegs, MCK_ShiftAmtImm5, MCK_IntRegs }, },
  { 2984 /* srax */, SP::SRAXrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2984 /* srax */, SP::SRAXri, Convert__Reg1_2__Reg1_0__ShiftAmtImm61_1, AMFBS_None, { MCK_IntRegs, MCK_ShiftAmtImm6, MCK_IntRegs }, },
  { 2989 /* srl */, SP::SRLrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2989 /* srl */, SP::SRLri, Convert__Reg1_2__Reg1_0__ShiftAmtImm51_1, AMFBS_None, { MCK_IntRegs, MCK_ShiftAmtImm5, MCK_IntRegs }, },
  { 2993 /* srlx */, SP::SRLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2993 /* srlx */, SP::SRLXri, Convert__Reg1_2__Reg1_0__ShiftAmtImm61_1, AMFBS_None, { MCK_IntRegs, MCK_ShiftAmtImm6, MCK_IntRegs }, },
  { 2998 /* st */, SP::STCSRri, Convert__MEMri2_2, AMFBS_None, { MCK__PCT_csr, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2998 /* st */, SP::STCSRrr, Convert__MEMrr2_2, AMFBS_None, { MCK__PCT_csr, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2998 /* st */, SP::STFSRri, Convert__MEMri2_2, AMFBS_None, { MCK__PCT_fsr, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2998 /* st */, SP::STFSRrr, Convert__MEMrr2_2, AMFBS_None, { MCK__PCT_fsr, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2998 /* st */, SP::STCri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_CoprocRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2998 /* st */, SP::STCrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_CoprocRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2998 /* st */, SP::STFri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2998 /* st */, SP::STFrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_FPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2998 /* st */, SP::STri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2998 /* st */, SP::STrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3001 /* sta */, SP::STFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, AMFBS_HasV9, { MCK_FPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 3001 /* sta */, SP::STArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 3005 /* stb */, SP::STBri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3005 /* stb */, SP::STBrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3009 /* stba */, SP::STBArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 3014 /* stbar */, SP::STBAR, Convert_NoOperands, AMFBS_None, {  }, },
  { 3020 /* std */, SP::STDCQri, Convert__MEMri2_2, AMFBS_None, { MCK__PCT_cq, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3020 /* std */, SP::STDCQrr, Convert__MEMrr2_2, AMFBS_None, { MCK__PCT_cq, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3020 /* std */, SP::STDFQri, Convert__MEMri2_2, AMFBS_None, { MCK__PCT_fq, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3020 /* std */, SP::STDFQrr, Convert__MEMrr2_2, AMFBS_None, { MCK__PCT_fq, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3020 /* std */, SP::STDCri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_CoprocPair, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3020 /* std */, SP::STDCrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_CoprocPair, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3020 /* std */, SP::STDri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_IntPair, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3020 /* std */, SP::STDrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_IntPair, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3020 /* std */, SP::STDFri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3020 /* std */, SP::STDFrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_DFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3024 /* stda */, SP::STDArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, AMFBS_None, { MCK_IntPair, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 3024 /* stda */, SP::STDFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, AMFBS_HasV9, { MCK_DFPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 3029 /* sth */, SP::STHri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3029 /* sth */, SP::STHrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3033 /* stha */, SP::STHArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 3038 /* stq */, SP::STQFri, Convert__MEMri2_2__Reg1_0, AMFBS_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3038 /* stq */, SP::STQFrr, Convert__MEMrr2_2__Reg1_0, AMFBS_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3042 /* stqa */, SP::STQFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, AMFBS_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 3047 /* stx */, SP::STXFSRri, Convert__MEMri2_2, AMFBS_HasV9, { MCK__PCT_fsr, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3047 /* stx */, SP::STXFSRrr, Convert__MEMrr2_2, AMFBS_HasV9, { MCK__PCT_fsr, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3047 /* stx */, SP::STXri, Convert__MEMri2_2__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 3047 /* stx */, SP::STXrr, Convert__MEMrr2_2__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 3051 /* sub */, SP::SUBrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3051 /* sub */, SP::SUBri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3055 /* subcc */, SP::SUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3055 /* subcc */, SP::SUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3061 /* subx */, SP::SUBCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3061 /* subx */, SP::SUBCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3066 /* subxcc */, SP::SUBErr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3066 /* subxcc */, SP::SUBEri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3073 /* swap */, SP::SWAPri, Convert__Reg1_3__MEMri2_1__Tie0_1_1, AMFBS_None, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 3073 /* swap */, SP::SWAPrr, Convert__Reg1_3__MEMrr2_1__Tie0_1_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 3078 /* swapa */, SP::SWAPArr, Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0_1_1, AMFBS_None, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 3084 /* t */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_8, AMFBS_None, { MCK_IntRegs }, },
  { 3084 /* t */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_8, AMFBS_None, { MCK_Imm }, },
  { 3084 /* t */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3084 /* t */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3084 /* t */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3084 /* t */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3084 /* t */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_8, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* t */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_8, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3084 /* t */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* t */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3084 /* t */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* t */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3084 /* t */, SP::TRAPrr, Convert__Reg1_1__Reg1_3__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* t */, SP::TRAPri, Convert__Reg1_1__Imm1_3__Imm1_0, AMFBS_None, { MCK_Imm, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3084 /* t */, SP::TICCrr, Convert__Reg1_2__Reg1_4__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* t */, SP::TICCri, Convert__Reg1_2__Imm1_4__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3084 /* t */, SP::TXCCrr, Convert__Reg1_2__Reg1_4__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3084 /* t */, SP::TXCCri, Convert__Reg1_2__Imm1_4__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3086 /* ta */, SP::TA1, Convert_NoOperands, AMFBS_None, { MCK_1 }, },
  { 3086 /* ta */, SP::TA3, Convert_NoOperands, AMFBS_None, { MCK_3 }, },
  { 3086 /* ta */, SP::TA5, Convert_NoOperands, AMFBS_None, { MCK_5 }, },
  { 3086 /* ta */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_8, AMFBS_None, { MCK_IntRegs }, },
  { 3086 /* ta */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_8, AMFBS_None, { MCK_Imm }, },
  { 3086 /* ta */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3086 /* ta */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3086 /* ta */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3086 /* ta */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_8, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3086 /* ta */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_8, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3086 /* ta */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_8, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3086 /* ta */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3086 /* ta */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3086 /* ta */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3086 /* ta */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_8, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3089 /* taddcc */, SP::TADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3089 /* taddcc */, SP::TADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3096 /* taddcctv */, SP::TADDCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3096 /* taddcctv */, SP::TADDCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3105 /* tcc */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_13, AMFBS_None, { MCK_IntRegs }, },
  { 3105 /* tcc */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_13, AMFBS_None, { MCK_Imm }, },
  { 3105 /* tcc */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3105 /* tcc */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3105 /* tcc */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3105 /* tcc */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3105 /* tcc */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_13, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3105 /* tcc */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_13, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3105 /* tcc */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3105 /* tcc */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3105 /* tcc */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3105 /* tcc */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3109 /* tcs */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_5, AMFBS_None, { MCK_IntRegs }, },
  { 3109 /* tcs */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_5, AMFBS_None, { MCK_Imm }, },
  { 3109 /* tcs */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3109 /* tcs */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3109 /* tcs */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3109 /* tcs */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3109 /* tcs */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3109 /* tcs */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3109 /* tcs */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3109 /* tcs */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3109 /* tcs */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3109 /* tcs */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3113 /* te */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_1, AMFBS_None, { MCK_IntRegs }, },
  { 3113 /* te */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 3113 /* te */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3113 /* te */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3113 /* te */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3113 /* te */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3113 /* te */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3113 /* te */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3113 /* te */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3113 /* te */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3113 /* te */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3113 /* te */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3116 /* teq */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_1, AMFBS_None, { MCK_IntRegs }, },
  { 3116 /* teq */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 3116 /* teq */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3116 /* teq */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3116 /* teq */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3116 /* teq */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3116 /* teq */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3116 /* teq */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3116 /* teq */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3116 /* teq */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3116 /* teq */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3116 /* teq */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3120 /* tg */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_10, AMFBS_None, { MCK_IntRegs }, },
  { 3120 /* tg */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_10, AMFBS_None, { MCK_Imm }, },
  { 3120 /* tg */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3120 /* tg */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3120 /* tg */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_10, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3120 /* tg */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_10, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3120 /* tg */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_10, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3120 /* tg */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_10, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3120 /* tg */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3120 /* tg */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3120 /* tg */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3120 /* tg */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_10, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3123 /* tge */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_11, AMFBS_None, { MCK_IntRegs }, },
  { 3123 /* tge */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_11, AMFBS_None, { MCK_Imm }, },
  { 3123 /* tge */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3123 /* tge */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3123 /* tge */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_11, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3123 /* tge */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_11, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3123 /* tge */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_11, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3123 /* tge */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_11, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3123 /* tge */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3123 /* tge */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3123 /* tge */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3123 /* tge */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_11, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3127 /* tgeu */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_13, AMFBS_None, { MCK_IntRegs }, },
  { 3127 /* tgeu */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_13, AMFBS_None, { MCK_Imm }, },
  { 3127 /* tgeu */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3127 /* tgeu */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3127 /* tgeu */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3127 /* tgeu */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_13, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3127 /* tgeu */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_13, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3127 /* tgeu */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_13, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3127 /* tgeu */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3127 /* tgeu */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3127 /* tgeu */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3127 /* tgeu */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_13, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3132 /* tgu */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_12, AMFBS_None, { MCK_IntRegs }, },
  { 3132 /* tgu */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_12, AMFBS_None, { MCK_Imm }, },
  { 3132 /* tgu */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3132 /* tgu */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3132 /* tgu */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_12, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3132 /* tgu */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_12, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3132 /* tgu */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_12, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3132 /* tgu */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_12, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3132 /* tgu */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3132 /* tgu */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3132 /* tgu */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3132 /* tgu */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_12, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3136 /* tl */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_3, AMFBS_None, { MCK_IntRegs }, },
  { 3136 /* tl */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_3, AMFBS_None, { MCK_Imm }, },
  { 3136 /* tl */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3136 /* tl */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3136 /* tl */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_3, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3136 /* tl */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_3, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3136 /* tl */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_3, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3136 /* tl */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_3, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3136 /* tl */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3136 /* tl */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3136 /* tl */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3136 /* tl */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_3, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3139 /* tle */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_2, AMFBS_None, { MCK_IntRegs }, },
  { 3139 /* tle */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_2, AMFBS_None, { MCK_Imm }, },
  { 3139 /* tle */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3139 /* tle */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3139 /* tle */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_2, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3139 /* tle */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_2, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3139 /* tle */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_2, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3139 /* tle */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_2, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3139 /* tle */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3139 /* tle */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3139 /* tle */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3139 /* tle */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_2, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3143 /* tleu */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_4, AMFBS_None, { MCK_IntRegs }, },
  { 3143 /* tleu */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_4, AMFBS_None, { MCK_Imm }, },
  { 3143 /* tleu */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3143 /* tleu */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3143 /* tleu */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_4, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3143 /* tleu */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_4, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3143 /* tleu */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_4, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3143 /* tleu */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_4, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3143 /* tleu */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3143 /* tleu */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3143 /* tleu */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3143 /* tleu */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_4, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3148 /* tlu */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_5, AMFBS_None, { MCK_IntRegs }, },
  { 3148 /* tlu */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_5, AMFBS_None, { MCK_Imm }, },
  { 3148 /* tlu */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3148 /* tlu */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3148 /* tlu */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3148 /* tlu */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_5, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3148 /* tlu */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3148 /* tlu */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_5, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3148 /* tlu */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3148 /* tlu */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3148 /* tlu */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3148 /* tlu */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_5, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3152 /* tn */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_0, AMFBS_None, { MCK_IntRegs }, },
  { 3152 /* tn */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 3152 /* tn */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3152 /* tn */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3152 /* tn */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_0, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3152 /* tn */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_0, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3152 /* tn */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3152 /* tn */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_0, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3152 /* tn */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3152 /* tn */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3152 /* tn */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3152 /* tn */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_0, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3155 /* tne */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_9, AMFBS_None, { MCK_IntRegs }, },
  { 3155 /* tne */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_9, AMFBS_None, { MCK_Imm }, },
  { 3155 /* tne */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3155 /* tne */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3155 /* tne */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3155 /* tne */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3155 /* tne */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_9, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3155 /* tne */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_9, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3155 /* tne */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3155 /* tne */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3155 /* tne */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3155 /* tne */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3159 /* tneg */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_6, AMFBS_None, { MCK_IntRegs }, },
  { 3159 /* tneg */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_6, AMFBS_None, { MCK_Imm }, },
  { 3159 /* tneg */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3159 /* tneg */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3159 /* tneg */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_6, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3159 /* tneg */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_6, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3159 /* tneg */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_6, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3159 /* tneg */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_6, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3159 /* tneg */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3159 /* tneg */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3159 /* tneg */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3159 /* tneg */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_6, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3164 /* tnz */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_9, AMFBS_None, { MCK_IntRegs }, },
  { 3164 /* tnz */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_9, AMFBS_None, { MCK_Imm }, },
  { 3164 /* tnz */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3164 /* tnz */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3164 /* tnz */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3164 /* tnz */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_9, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3164 /* tnz */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_9, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3164 /* tnz */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_9, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3164 /* tnz */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3164 /* tnz */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3164 /* tnz */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3164 /* tnz */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_9, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3168 /* tpos */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_14, AMFBS_None, { MCK_IntRegs }, },
  { 3168 /* tpos */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_14, AMFBS_None, { MCK_Imm }, },
  { 3168 /* tpos */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3168 /* tpos */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3168 /* tpos */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_14, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3168 /* tpos */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_14, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3168 /* tpos */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_14, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3168 /* tpos */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_14, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3168 /* tpos */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3168 /* tpos */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3168 /* tpos */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3168 /* tpos */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_14, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3173 /* tst */, SP::ORCCrr, Convert__regG0__Reg1_0__regG0, AMFBS_None, { MCK_IntRegs }, },
  { 3177 /* tsubcc */, SP::TSUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3177 /* tsubcc */, SP::TSUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3184 /* tsubcctv */, SP::TSUBCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3184 /* tsubcctv */, SP::TSUBCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3193 /* tvc */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_15, AMFBS_None, { MCK_IntRegs }, },
  { 3193 /* tvc */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_15, AMFBS_None, { MCK_Imm }, },
  { 3193 /* tvc */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3193 /* tvc */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3193 /* tvc */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_15, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3193 /* tvc */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_15, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3193 /* tvc */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_15, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3193 /* tvc */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_15, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3193 /* tvc */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3193 /* tvc */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3193 /* tvc */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3193 /* tvc */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_15, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3197 /* tvs */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_7, AMFBS_None, { MCK_IntRegs }, },
  { 3197 /* tvs */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_7, AMFBS_None, { MCK_Imm }, },
  { 3197 /* tvs */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3197 /* tvs */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3197 /* tvs */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_7, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3197 /* tvs */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_7, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3197 /* tvs */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_7, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3197 /* tvs */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_7, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3197 /* tvs */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3197 /* tvs */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3197 /* tvs */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3197 /* tvs */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_7, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3201 /* tz */, SP::TRAPrr, Convert__regG0__Reg1_0__imm_95_1, AMFBS_None, { MCK_IntRegs }, },
  { 3201 /* tz */, SP::TRAPri, Convert__regG0__Imm1_0__imm_95_1, AMFBS_None, { MCK_Imm }, },
  { 3201 /* tz */, SP::TICCrr, Convert__regG0__Reg1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3201 /* tz */, SP::TICCri, Convert__regG0__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3201 /* tz */, SP::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3201 /* tz */, SP::TXCCri, Convert__regG0__Imm1_1__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3201 /* tz */, SP::TRAPrr, Convert__Reg1_0__Reg1_2__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3201 /* tz */, SP::TRAPri, Convert__Reg1_0__Imm1_2__imm_95_1, AMFBS_None, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3201 /* tz */, SP::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3201 /* tz */, SP::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3201 /* tz */, SP::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3201 /* tz */, SP::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, AMFBS_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3204 /* udiv */, SP::UDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3204 /* udiv */, SP::UDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3209 /* udivcc */, SP::UDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3209 /* udivcc */, SP::UDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3216 /* udivx */, SP::UDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3216 /* udivx */, SP::UDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3222 /* umac */, SP::UMACrr, Convert__Reg1_2__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3222 /* umac */, SP::UMACri, Convert__Reg1_2__Reg1_0__Imm1_1__imm_95_0, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3227 /* umul */, SP::UMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3227 /* umul */, SP::UMULri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3232 /* umulcc */, SP::UMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3232 /* umulcc */, SP::UMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3239 /* umulxhi */, SP::UMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3247 /* unimp */, SP::UNIMP, Convert__imm_95_0, AMFBS_None, {  }, },
  { 3247 /* unimp */, SP::UNIMP, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 3253 /* wr */, SP::WRPSRrr, Convert__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__PCT_psr }, },
  { 3253 /* wr */, SP::WRTBRrr, Convert__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__PCT_tbr }, },
  { 3253 /* wr */, SP::WRWIMrr, Convert__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK__PCT_wim }, },
  { 3253 /* wr */, SP::WRASRrr, Convert__Reg1_1__regG0__Reg1_0, AMFBS_None, { MCK_IntRegs, MCK_ASRRegs }, },
  { 3253 /* wr */, SP::WRPSRri, Convert__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_psr }, },
  { 3253 /* wr */, SP::WRTBRri, Convert__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_tbr }, },
  { 3253 /* wr */, SP::WRWIMri, Convert__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK__PCT_wim }, },
  { 3253 /* wr */, SP::WRASRri, Convert__Reg1_1__regG0__Imm1_0, AMFBS_None, { MCK_Imm, MCK_ASRRegs }, },
  { 3253 /* wr */, SP::WRPSRrr, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_psr }, },
  { 3253 /* wr */, SP::WRTBRrr, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_tbr }, },
  { 3253 /* wr */, SP::WRWIMrr, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_wim }, },
  { 3253 /* wr */, SP::WRASRrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_ASRRegs }, },
  { 3253 /* wr */, SP::WRPSRri, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK__PCT_psr }, },
  { 3253 /* wr */, SP::WRTBRri, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK__PCT_tbr }, },
  { 3253 /* wr */, SP::WRWIMri, Convert__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK__PCT_wim }, },
  { 3253 /* wr */, SP::WRASRri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_ASRRegs }, },
  { 3256 /* wrpr */, SP::WRPRrr, Convert__Reg1_1__Reg1_0__regG0, AMFBS_HasV9, { MCK_IntRegs, MCK_PRRegs }, },
  { 3256 /* wrpr */, SP::WRPRri, Convert__Reg1_1__regG0__Imm1_0, AMFBS_HasV9, { MCK_Imm, MCK_PRRegs }, },
  { 3256 /* wrpr */, SP::WRPRrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasV9, { MCK_IntRegs, MCK_IntRegs, MCK_PRRegs }, },
  { 3256 /* wrpr */, SP::WRPRri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_HasV9, { MCK_IntRegs, MCK_Imm, MCK_PRRegs }, },
  { 3261 /* xmulx */, SP::XMULX, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3267 /* xmulxhi */, SP::XMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3275 /* xnor */, SP::XNORrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3275 /* xnor */, SP::XNORri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3280 /* xnorcc */, SP::XNORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3280 /* xnorcc */, SP::XNORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3287 /* xor */, SP::XORrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3287 /* xor */, SP::XORri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3291 /* xorcc */, SP::XORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, AMFBS_None, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3291 /* xorcc */, SP::XORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, AMFBS_None, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned SparcAsmParser::
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
  StringRef Mnemonic = ((SparcOperand &)*Operands[0]).getToken();

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

namespace {
  struct OperandMatchEntry {
    uint16_t Mnemonic;
    uint8_t OperandMask;
    uint8_t Class;
    uint8_t RequiredFeaturesIdx;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const OperandMatchEntry OperandMatchTable[123] = {
  /* Operand List Mnemonic, Mask, Operand Class, Features */
  { 0 /* add */, 8 /* 3 */, MCK_TailRelocSymAdd_TLS, AMFBS_None },
  { 252 /* call */, 1 /* 0 */, MCK_CallTarget, AMFBS_None },
  { 252 /* call */, 1 /* 0 */, MCK_MEMri, AMFBS_None },
  { 252 /* call */, 1 /* 0 */, MCK_MEMrr, AMFBS_None },
  { 252 /* call */, 1 /* 0 */, MCK_CallTarget, AMFBS_None },
  { 252 /* call */, 2 /* 1 */, MCK_TailRelocSymCall_TLS, AMFBS_None },
  { 352 /* clr */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 352 /* clr */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 356 /* clrb */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 356 /* clrb */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 361 /* clrh */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 361 /* clrh */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 915 /* flush */, 1 /* 0 */, MCK_MEMri, AMFBS_None },
  { 915 /* flush */, 1 /* 0 */, MCK_MEMrr, AMFBS_None },
  { 2429 /* jmp */, 1 /* 0 */, MCK_MEMri, AMFBS_None },
  { 2429 /* jmp */, 1 /* 0 */, MCK_MEMrr, AMFBS_None },
  { 2433 /* jmpl */, 1 /* 0 */, MCK_MEMri, AMFBS_None },
  { 2433 /* jmpl */, 1 /* 0 */, MCK_MEMrr, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2438 /* ld */, 16 /* 4 */, MCK_TailRelocSymLoad_GOT, AMFBS_None },
  { 2438 /* ld */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2438 /* ld */, 16 /* 4 */, MCK_TailRelocSymLoad_TLS, AMFBS_None },
  { 2441 /* lda */, 2 /* 1 */, MCK_MEMrr, AMFBS_HasV9 },
  { 2441 /* lda */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2445 /* ldd */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2445 /* ldd */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2445 /* ldd */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2445 /* ldd */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2445 /* ldd */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2445 /* ldd */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2449 /* ldda */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2449 /* ldda */, 2 /* 1 */, MCK_MEMrr, AMFBS_HasV9 },
  { 2454 /* ldq */, 2 /* 1 */, MCK_MEMri, AMFBS_HasV9 },
  { 2454 /* ldq */, 2 /* 1 */, MCK_MEMrr, AMFBS_HasV9 },
  { 2458 /* ldqa */, 2 /* 1 */, MCK_MEMrr, AMFBS_HasV9 },
  { 2463 /* ldsb */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2463 /* ldsb */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2468 /* ldsba */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2474 /* ldsh */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2474 /* ldsh */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2479 /* ldsha */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2485 /* ldstub */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2485 /* ldstub */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2492 /* ldstuba */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2500 /* ldsw */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2500 /* ldsw */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2505 /* ldub */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2505 /* ldub */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2510 /* lduba */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2516 /* lduh */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2516 /* lduh */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2521 /* lduha */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2527 /* ldx */, 2 /* 1 */, MCK_MEMri, AMFBS_HasV9 },
  { 2527 /* ldx */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 2527 /* ldx */, 2 /* 1 */, MCK_MEMrr, AMFBS_HasV9 },
  { 2527 /* ldx */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2527 /* ldx */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2527 /* ldx */, 16 /* 4 */, MCK_TailRelocSymLoad_GOT, AMFBS_None },
  { 2527 /* ldx */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 2527 /* ldx */, 16 /* 4 */, MCK_TailRelocSymLoad_TLS, AMFBS_None },
  { 2537 /* membar */, 1 /* 0 */, MCK_MembarTag, AMFBS_HasV9 },
  { 2854 /* prefetch */, 2 /* 1 */, MCK_MEMri, AMFBS_HasV9 },
  { 2854 /* prefetch */, 8 /* 3 */, MCK_ShiftAmtImm5, AMFBS_HasV9 },
  { 2854 /* prefetch */, 2 /* 1 */, MCK_MEMrr, AMFBS_HasV9 },
  { 2854 /* prefetch */, 8 /* 3 */, MCK_ShiftAmtImm5, AMFBS_HasV9 },
  { 2892 /* rett */, 1 /* 0 */, MCK_MEMri, AMFBS_None },
  { 2892 /* rett */, 1 /* 0 */, MCK_MEMrr, AMFBS_None },
  { 2954 /* sll */, 2 /* 1 */, MCK_ShiftAmtImm5, AMFBS_None },
  { 2958 /* sllx */, 2 /* 1 */, MCK_ShiftAmtImm6, AMFBS_None },
  { 2980 /* sra */, 2 /* 1 */, MCK_ShiftAmtImm5, AMFBS_None },
  { 2984 /* srax */, 2 /* 1 */, MCK_ShiftAmtImm6, AMFBS_None },
  { 2989 /* srl */, 2 /* 1 */, MCK_ShiftAmtImm5, AMFBS_None },
  { 2993 /* srlx */, 2 /* 1 */, MCK_ShiftAmtImm6, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 2998 /* st */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3001 /* sta */, 4 /* 2 */, MCK_MEMrr, AMFBS_HasV9 },
  { 3001 /* sta */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3005 /* stb */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 3005 /* stb */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3009 /* stba */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 3020 /* std */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3024 /* stda */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3024 /* stda */, 4 /* 2 */, MCK_MEMrr, AMFBS_HasV9 },
  { 3029 /* sth */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 3029 /* sth */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3033 /* stha */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3038 /* stq */, 4 /* 2 */, MCK_MEMri, AMFBS_HasV9 },
  { 3038 /* stq */, 4 /* 2 */, MCK_MEMrr, AMFBS_HasV9 },
  { 3042 /* stqa */, 4 /* 2 */, MCK_MEMrr, AMFBS_HasV9 },
  { 3047 /* stx */, 4 /* 2 */, MCK_MEMri, AMFBS_HasV9 },
  { 3047 /* stx */, 4 /* 2 */, MCK_MEMrr, AMFBS_HasV9 },
  { 3047 /* stx */, 4 /* 2 */, MCK_MEMri, AMFBS_None },
  { 3047 /* stx */, 4 /* 2 */, MCK_MEMrr, AMFBS_None },
  { 3073 /* swap */, 2 /* 1 */, MCK_MEMri, AMFBS_None },
  { 3073 /* swap */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
  { 3078 /* swapa */, 2 /* 1 */, MCK_MEMrr, AMFBS_None },
};

OperandMatchResultTy SparcAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_CallTarget:
    return parseCallTarget(Operands);
  case MCK_MEMri:
    return parseMEMOperand(Operands);
  case MCK_MEMrr:
    return parseMEMOperand(Operands);
  case MCK_MembarTag:
    return parseMembarTag(Operands);
  case MCK_ShiftAmtImm5:
    return parseShiftAmtImm<5>(Operands);
  case MCK_ShiftAmtImm6:
    return parseShiftAmtImm<6>(Operands);
  case MCK_TailRelocSymLoad_GOT:
    return parseTailRelocSym<TailRelocKind::Load_GOT>(Operands);
  case MCK_TailRelocSymAdd_TLS:
    return parseTailRelocSym<TailRelocKind::Add_TLS>(Operands);
  case MCK_TailRelocSymLoad_TLS:
    return parseTailRelocSym<TailRelocKind::Load_TLS>(Operands);
  case MCK_TailRelocSymCall_TLS:
    return parseTailRelocSym<TailRelocKind::Call_TLS>(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy SparcAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic,
                       bool ParseForAllFeatures) {
  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    if (!ParseForAllFeatures && (AvailableFeatures & RequiredFeatures) != RequiredFeatures)
      continue;

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string SparcMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
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

static bool SparcCheckMnemonic(StringRef Mnemonic,
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

