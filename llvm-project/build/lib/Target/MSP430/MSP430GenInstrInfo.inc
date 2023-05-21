/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace MSP430 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_VALUE_LIST	= 14,
    DBG_INSTR_REF	= 15,
    DBG_PHI	= 16,
    DBG_LABEL	= 17,
    REG_SEQUENCE	= 18,
    COPY	= 19,
    BUNDLE	= 20,
    LIFETIME_START	= 21,
    LIFETIME_END	= 22,
    PSEUDO_PROBE	= 23,
    ARITH_FENCE	= 24,
    STACKMAP	= 25,
    FENTRY_CALL	= 26,
    PATCHPOINT	= 27,
    LOAD_STACK_GUARD	= 28,
    PREALLOCATED_SETUP	= 29,
    PREALLOCATED_ARG	= 30,
    STATEPOINT	= 31,
    LOCAL_ESCAPE	= 32,
    FAULTING_OP	= 33,
    PATCHABLE_OP	= 34,
    PATCHABLE_FUNCTION_ENTER	= 35,
    PATCHABLE_RET	= 36,
    PATCHABLE_FUNCTION_EXIT	= 37,
    PATCHABLE_TAIL_CALL	= 38,
    PATCHABLE_EVENT_CALL	= 39,
    PATCHABLE_TYPED_EVENT_CALL	= 40,
    ICALL_BRANCH_FUNNEL	= 41,
    MEMBARRIER	= 42,
    G_ASSERT_SEXT	= 43,
    G_ASSERT_ZEXT	= 44,
    G_ASSERT_ALIGN	= 45,
    G_ADD	= 46,
    G_SUB	= 47,
    G_MUL	= 48,
    G_SDIV	= 49,
    G_UDIV	= 50,
    G_SREM	= 51,
    G_UREM	= 52,
    G_SDIVREM	= 53,
    G_UDIVREM	= 54,
    G_AND	= 55,
    G_OR	= 56,
    G_XOR	= 57,
    G_IMPLICIT_DEF	= 58,
    G_PHI	= 59,
    G_FRAME_INDEX	= 60,
    G_GLOBAL_VALUE	= 61,
    G_CONSTANT_POOL	= 62,
    G_EXTRACT	= 63,
    G_UNMERGE_VALUES	= 64,
    G_INSERT	= 65,
    G_MERGE_VALUES	= 66,
    G_BUILD_VECTOR	= 67,
    G_BUILD_VECTOR_TRUNC	= 68,
    G_CONCAT_VECTORS	= 69,
    G_PTRTOINT	= 70,
    G_INTTOPTR	= 71,
    G_BITCAST	= 72,
    G_FREEZE	= 73,
    G_INTRINSIC_FPTRUNC_ROUND	= 74,
    G_INTRINSIC_TRUNC	= 75,
    G_INTRINSIC_ROUND	= 76,
    G_INTRINSIC_LRINT	= 77,
    G_INTRINSIC_ROUNDEVEN	= 78,
    G_READCYCLECOUNTER	= 79,
    G_LOAD	= 80,
    G_SEXTLOAD	= 81,
    G_ZEXTLOAD	= 82,
    G_INDEXED_LOAD	= 83,
    G_INDEXED_SEXTLOAD	= 84,
    G_INDEXED_ZEXTLOAD	= 85,
    G_STORE	= 86,
    G_INDEXED_STORE	= 87,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 88,
    G_ATOMIC_CMPXCHG	= 89,
    G_ATOMICRMW_XCHG	= 90,
    G_ATOMICRMW_ADD	= 91,
    G_ATOMICRMW_SUB	= 92,
    G_ATOMICRMW_AND	= 93,
    G_ATOMICRMW_NAND	= 94,
    G_ATOMICRMW_OR	= 95,
    G_ATOMICRMW_XOR	= 96,
    G_ATOMICRMW_MAX	= 97,
    G_ATOMICRMW_MIN	= 98,
    G_ATOMICRMW_UMAX	= 99,
    G_ATOMICRMW_UMIN	= 100,
    G_ATOMICRMW_FADD	= 101,
    G_ATOMICRMW_FSUB	= 102,
    G_ATOMICRMW_FMAX	= 103,
    G_ATOMICRMW_FMIN	= 104,
    G_ATOMICRMW_UINC_WRAP	= 105,
    G_ATOMICRMW_UDEC_WRAP	= 106,
    G_FENCE	= 107,
    G_BRCOND	= 108,
    G_BRINDIRECT	= 109,
    G_INVOKE_REGION_START	= 110,
    G_INTRINSIC	= 111,
    G_INTRINSIC_W_SIDE_EFFECTS	= 112,
    G_ANYEXT	= 113,
    G_TRUNC	= 114,
    G_CONSTANT	= 115,
    G_FCONSTANT	= 116,
    G_VASTART	= 117,
    G_VAARG	= 118,
    G_SEXT	= 119,
    G_SEXT_INREG	= 120,
    G_ZEXT	= 121,
    G_SHL	= 122,
    G_LSHR	= 123,
    G_ASHR	= 124,
    G_FSHL	= 125,
    G_FSHR	= 126,
    G_ROTR	= 127,
    G_ROTL	= 128,
    G_ICMP	= 129,
    G_FCMP	= 130,
    G_SELECT	= 131,
    G_UADDO	= 132,
    G_UADDE	= 133,
    G_USUBO	= 134,
    G_USUBE	= 135,
    G_SADDO	= 136,
    G_SADDE	= 137,
    G_SSUBO	= 138,
    G_SSUBE	= 139,
    G_UMULO	= 140,
    G_SMULO	= 141,
    G_UMULH	= 142,
    G_SMULH	= 143,
    G_UADDSAT	= 144,
    G_SADDSAT	= 145,
    G_USUBSAT	= 146,
    G_SSUBSAT	= 147,
    G_USHLSAT	= 148,
    G_SSHLSAT	= 149,
    G_SMULFIX	= 150,
    G_UMULFIX	= 151,
    G_SMULFIXSAT	= 152,
    G_UMULFIXSAT	= 153,
    G_SDIVFIX	= 154,
    G_UDIVFIX	= 155,
    G_SDIVFIXSAT	= 156,
    G_UDIVFIXSAT	= 157,
    G_FADD	= 158,
    G_FSUB	= 159,
    G_FMUL	= 160,
    G_FMA	= 161,
    G_FMAD	= 162,
    G_FDIV	= 163,
    G_FREM	= 164,
    G_FPOW	= 165,
    G_FPOWI	= 166,
    G_FEXP	= 167,
    G_FEXP2	= 168,
    G_FLOG	= 169,
    G_FLOG2	= 170,
    G_FLOG10	= 171,
    G_FNEG	= 172,
    G_FPEXT	= 173,
    G_FPTRUNC	= 174,
    G_FPTOSI	= 175,
    G_FPTOUI	= 176,
    G_SITOFP	= 177,
    G_UITOFP	= 178,
    G_FABS	= 179,
    G_FCOPYSIGN	= 180,
    G_IS_FPCLASS	= 181,
    G_FCANONICALIZE	= 182,
    G_FMINNUM	= 183,
    G_FMAXNUM	= 184,
    G_FMINNUM_IEEE	= 185,
    G_FMAXNUM_IEEE	= 186,
    G_FMINIMUM	= 187,
    G_FMAXIMUM	= 188,
    G_PTR_ADD	= 189,
    G_PTRMASK	= 190,
    G_SMIN	= 191,
    G_SMAX	= 192,
    G_UMIN	= 193,
    G_UMAX	= 194,
    G_ABS	= 195,
    G_LROUND	= 196,
    G_LLROUND	= 197,
    G_BR	= 198,
    G_BRJT	= 199,
    G_INSERT_VECTOR_ELT	= 200,
    G_EXTRACT_VECTOR_ELT	= 201,
    G_SHUFFLE_VECTOR	= 202,
    G_CTTZ	= 203,
    G_CTTZ_ZERO_UNDEF	= 204,
    G_CTLZ	= 205,
    G_CTLZ_ZERO_UNDEF	= 206,
    G_CTPOP	= 207,
    G_BSWAP	= 208,
    G_BITREVERSE	= 209,
    G_FCEIL	= 210,
    G_FCOS	= 211,
    G_FSIN	= 212,
    G_FSQRT	= 213,
    G_FFLOOR	= 214,
    G_FRINT	= 215,
    G_FNEARBYINT	= 216,
    G_ADDRSPACE_CAST	= 217,
    G_BLOCK_ADDR	= 218,
    G_JUMP_TABLE	= 219,
    G_DYN_STACKALLOC	= 220,
    G_STRICT_FADD	= 221,
    G_STRICT_FSUB	= 222,
    G_STRICT_FMUL	= 223,
    G_STRICT_FDIV	= 224,
    G_STRICT_FREM	= 225,
    G_STRICT_FMA	= 226,
    G_STRICT_FSQRT	= 227,
    G_READ_REGISTER	= 228,
    G_WRITE_REGISTER	= 229,
    G_MEMCPY	= 230,
    G_MEMCPY_INLINE	= 231,
    G_MEMMOVE	= 232,
    G_MEMSET	= 233,
    G_BZERO	= 234,
    G_VECREDUCE_SEQ_FADD	= 235,
    G_VECREDUCE_SEQ_FMUL	= 236,
    G_VECREDUCE_FADD	= 237,
    G_VECREDUCE_FMUL	= 238,
    G_VECREDUCE_FMAX	= 239,
    G_VECREDUCE_FMIN	= 240,
    G_VECREDUCE_ADD	= 241,
    G_VECREDUCE_MUL	= 242,
    G_VECREDUCE_AND	= 243,
    G_VECREDUCE_OR	= 244,
    G_VECREDUCE_XOR	= 245,
    G_VECREDUCE_SMAX	= 246,
    G_VECREDUCE_SMIN	= 247,
    G_VECREDUCE_UMAX	= 248,
    G_VECREDUCE_UMIN	= 249,
    G_SBFX	= 250,
    G_UBFX	= 251,
    ADD16mc	= 252,
    ADD16mi	= 253,
    ADD16mm	= 254,
    ADD16mn	= 255,
    ADD16mp	= 256,
    ADD16mr	= 257,
    ADD16rc	= 258,
    ADD16ri	= 259,
    ADD16rm	= 260,
    ADD16rn	= 261,
    ADD16rp	= 262,
    ADD16rr	= 263,
    ADD8mc	= 264,
    ADD8mi	= 265,
    ADD8mm	= 266,
    ADD8mn	= 267,
    ADD8mp	= 268,
    ADD8mr	= 269,
    ADD8rc	= 270,
    ADD8ri	= 271,
    ADD8rm	= 272,
    ADD8rn	= 273,
    ADD8rp	= 274,
    ADD8rr	= 275,
    ADDC16mc	= 276,
    ADDC16mi	= 277,
    ADDC16mm	= 278,
    ADDC16mn	= 279,
    ADDC16mp	= 280,
    ADDC16mr	= 281,
    ADDC16rc	= 282,
    ADDC16ri	= 283,
    ADDC16rm	= 284,
    ADDC16rn	= 285,
    ADDC16rp	= 286,
    ADDC16rr	= 287,
    ADDC8mc	= 288,
    ADDC8mi	= 289,
    ADDC8mm	= 290,
    ADDC8mn	= 291,
    ADDC8mp	= 292,
    ADDC8mr	= 293,
    ADDC8rc	= 294,
    ADDC8ri	= 295,
    ADDC8rm	= 296,
    ADDC8rn	= 297,
    ADDC8rp	= 298,
    ADDC8rr	= 299,
    ADDframe	= 300,
    ADJCALLSTACKDOWN	= 301,
    ADJCALLSTACKUP	= 302,
    AND16mc	= 303,
    AND16mi	= 304,
    AND16mm	= 305,
    AND16mn	= 306,
    AND16mp	= 307,
    AND16mr	= 308,
    AND16rc	= 309,
    AND16ri	= 310,
    AND16rm	= 311,
    AND16rn	= 312,
    AND16rp	= 313,
    AND16rr	= 314,
    AND8mc	= 315,
    AND8mi	= 316,
    AND8mm	= 317,
    AND8mn	= 318,
    AND8mp	= 319,
    AND8mr	= 320,
    AND8rc	= 321,
    AND8ri	= 322,
    AND8rm	= 323,
    AND8rn	= 324,
    AND8rp	= 325,
    AND8rr	= 326,
    BIC16mc	= 327,
    BIC16mi	= 328,
    BIC16mm	= 329,
    BIC16mn	= 330,
    BIC16mp	= 331,
    BIC16mr	= 332,
    BIC16rc	= 333,
    BIC16ri	= 334,
    BIC16rm	= 335,
    BIC16rn	= 336,
    BIC16rp	= 337,
    BIC16rr	= 338,
    BIC8mc	= 339,
    BIC8mi	= 340,
    BIC8mm	= 341,
    BIC8mn	= 342,
    BIC8mp	= 343,
    BIC8mr	= 344,
    BIC8rc	= 345,
    BIC8ri	= 346,
    BIC8rm	= 347,
    BIC8rn	= 348,
    BIC8rp	= 349,
    BIC8rr	= 350,
    BIS16mc	= 351,
    BIS16mi	= 352,
    BIS16mm	= 353,
    BIS16mn	= 354,
    BIS16mp	= 355,
    BIS16mr	= 356,
    BIS16rc	= 357,
    BIS16ri	= 358,
    BIS16rm	= 359,
    BIS16rn	= 360,
    BIS16rp	= 361,
    BIS16rr	= 362,
    BIS8mc	= 363,
    BIS8mi	= 364,
    BIS8mm	= 365,
    BIS8mn	= 366,
    BIS8mp	= 367,
    BIS8mr	= 368,
    BIS8rc	= 369,
    BIS8ri	= 370,
    BIS8rm	= 371,
    BIS8rn	= 372,
    BIS8rp	= 373,
    BIS8rr	= 374,
    BIT16mc	= 375,
    BIT16mi	= 376,
    BIT16mm	= 377,
    BIT16mn	= 378,
    BIT16mp	= 379,
    BIT16mr	= 380,
    BIT16rc	= 381,
    BIT16ri	= 382,
    BIT16rm	= 383,
    BIT16rn	= 384,
    BIT16rp	= 385,
    BIT16rr	= 386,
    BIT8mc	= 387,
    BIT8mi	= 388,
    BIT8mm	= 389,
    BIT8mn	= 390,
    BIT8mp	= 391,
    BIT8mr	= 392,
    BIT8rc	= 393,
    BIT8ri	= 394,
    BIT8rm	= 395,
    BIT8rn	= 396,
    BIT8rp	= 397,
    BIT8rr	= 398,
    Bi	= 399,
    Bm	= 400,
    Br	= 401,
    CALLi	= 402,
    CALLm	= 403,
    CALLn	= 404,
    CALLp	= 405,
    CALLr	= 406,
    CMP16mc	= 407,
    CMP16mi	= 408,
    CMP16mm	= 409,
    CMP16mn	= 410,
    CMP16mp	= 411,
    CMP16mr	= 412,
    CMP16rc	= 413,
    CMP16ri	= 414,
    CMP16rm	= 415,
    CMP16rn	= 416,
    CMP16rp	= 417,
    CMP16rr	= 418,
    CMP8mc	= 419,
    CMP8mi	= 420,
    CMP8mm	= 421,
    CMP8mn	= 422,
    CMP8mp	= 423,
    CMP8mr	= 424,
    CMP8rc	= 425,
    CMP8ri	= 426,
    CMP8rm	= 427,
    CMP8rn	= 428,
    CMP8rp	= 429,
    CMP8rr	= 430,
    DADD16mc	= 431,
    DADD16mi	= 432,
    DADD16mm	= 433,
    DADD16mn	= 434,
    DADD16mp	= 435,
    DADD16mr	= 436,
    DADD16rc	= 437,
    DADD16ri	= 438,
    DADD16rm	= 439,
    DADD16rn	= 440,
    DADD16rp	= 441,
    DADD16rr	= 442,
    DADD8mc	= 443,
    DADD8mi	= 444,
    DADD8mm	= 445,
    DADD8mn	= 446,
    DADD8mp	= 447,
    DADD8mr	= 448,
    DADD8rc	= 449,
    DADD8ri	= 450,
    DADD8rm	= 451,
    DADD8rn	= 452,
    DADD8rp	= 453,
    DADD8rr	= 454,
    JCC	= 455,
    JMP	= 456,
    MOV16mc	= 457,
    MOV16mi	= 458,
    MOV16mm	= 459,
    MOV16mn	= 460,
    MOV16mr	= 461,
    MOV16rc	= 462,
    MOV16ri	= 463,
    MOV16rm	= 464,
    MOV16rn	= 465,
    MOV16rp	= 466,
    MOV16rr	= 467,
    MOV8mc	= 468,
    MOV8mi	= 469,
    MOV8mm	= 470,
    MOV8mn	= 471,
    MOV8mr	= 472,
    MOV8rc	= 473,
    MOV8ri	= 474,
    MOV8rm	= 475,
    MOV8rn	= 476,
    MOV8rp	= 477,
    MOV8rr	= 478,
    MOVZX16rm8	= 479,
    MOVZX16rr8	= 480,
    POP16r	= 481,
    PUSH16c	= 482,
    PUSH16i	= 483,
    PUSH16r	= 484,
    PUSH8r	= 485,
    RET	= 486,
    RETI	= 487,
    RRA16m	= 488,
    RRA16n	= 489,
    RRA16p	= 490,
    RRA16r	= 491,
    RRA8m	= 492,
    RRA8n	= 493,
    RRA8p	= 494,
    RRA8r	= 495,
    RRC16m	= 496,
    RRC16n	= 497,
    RRC16p	= 498,
    RRC16r	= 499,
    RRC8m	= 500,
    RRC8n	= 501,
    RRC8p	= 502,
    RRC8r	= 503,
    Rrcl16	= 504,
    Rrcl8	= 505,
    SEXT16m	= 506,
    SEXT16n	= 507,
    SEXT16p	= 508,
    SEXT16r	= 509,
    SUB16mc	= 510,
    SUB16mi	= 511,
    SUB16mm	= 512,
    SUB16mn	= 513,
    SUB16mp	= 514,
    SUB16mr	= 515,
    SUB16rc	= 516,
    SUB16ri	= 517,
    SUB16rm	= 518,
    SUB16rn	= 519,
    SUB16rp	= 520,
    SUB16rr	= 521,
    SUB8mc	= 522,
    SUB8mi	= 523,
    SUB8mm	= 524,
    SUB8mn	= 525,
    SUB8mp	= 526,
    SUB8mr	= 527,
    SUB8rc	= 528,
    SUB8ri	= 529,
    SUB8rm	= 530,
    SUB8rn	= 531,
    SUB8rp	= 532,
    SUB8rr	= 533,
    SUBC16mc	= 534,
    SUBC16mi	= 535,
    SUBC16mm	= 536,
    SUBC16mn	= 537,
    SUBC16mp	= 538,
    SUBC16mr	= 539,
    SUBC16rc	= 540,
    SUBC16ri	= 541,
    SUBC16rm	= 542,
    SUBC16rn	= 543,
    SUBC16rp	= 544,
    SUBC16rr	= 545,
    SUBC8mc	= 546,
    SUBC8mi	= 547,
    SUBC8mm	= 548,
    SUBC8mn	= 549,
    SUBC8mp	= 550,
    SUBC8mr	= 551,
    SUBC8rc	= 552,
    SUBC8ri	= 553,
    SUBC8rm	= 554,
    SUBC8rn	= 555,
    SUBC8rp	= 556,
    SUBC8rr	= 557,
    SWPB16m	= 558,
    SWPB16n	= 559,
    SWPB16p	= 560,
    SWPB16r	= 561,
    Select16	= 562,
    Select8	= 563,
    Shl16	= 564,
    Shl8	= 565,
    Sra16	= 566,
    Sra8	= 567,
    Srl16	= 568,
    Srl8	= 569,
    XOR16mc	= 570,
    XOR16mi	= 571,
    XOR16mm	= 572,
    XOR16mn	= 573,
    XOR16mp	= 574,
    XOR16mr	= 575,
    XOR16rc	= 576,
    XOR16ri	= 577,
    XOR16rm	= 578,
    XOR16rn	= 579,
    XOR16rp	= 580,
    XOR16rr	= 581,
    XOR8mc	= 582,
    XOR8mi	= 583,
    XOR8mm	= 584,
    XOR8mn	= 585,
    XOR8mp	= 586,
    XOR8mr	= 587,
    XOR8rc	= 588,
    XOR8ri	= 589,
    XOR8rm	= 590,
    XOR8rn	= 591,
    XOR8rp	= 592,
    XOR8rr	= 593,
    ZEXT16r	= 594,
    INSTRUCTION_LIST_END = 595
  };

} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace MSP430 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { MSP430::SR };
static const MCPhysReg ImplicitList2[] = { MSP430::SR, MSP430::SR };
static const MCPhysReg ImplicitList3[] = { MSP430::SP, MSP430::SR };
static const MCPhysReg ImplicitList4[] = { MSP430::SP, MSP430::SP, MSP430::SR };
static const MCPhysReg ImplicitList5[] = { MSP430::SP, MSP430::R11, MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR };
static const MCPhysReg ImplicitList6[] = { MSP430::SP, MSP430::SP };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo55[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo62[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo78[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo79[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo82[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo83[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
  { 594,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo81 },  // Inst #594 = ZEXT16r
  { 593,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo62 },  // Inst #593 = XOR8rr
  { 592,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo61 },  // Inst #592 = XOR8rp
  { 591,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo60 },  // Inst #591 = XOR8rn
  { 590,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo59 },  // Inst #590 = XOR8rm
  { 589,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo58 },  // Inst #589 = XOR8ri
  { 588,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo57 },  // Inst #588 = XOR8rc
  { 587,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo56 },  // Inst #587 = XOR8mr
  { 586,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #586 = XOR8mp
  { 585,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #585 = XOR8mn
  { 584,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #584 = XOR8mm
  { 583,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #583 = XOR8mi
  { 582,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #582 = XOR8mc
  { 581,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo55 },  // Inst #581 = XOR16rr
  { 580,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo54 },  // Inst #580 = XOR16rp
  { 579,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo53 },  // Inst #579 = XOR16rn
  { 578,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo52 },  // Inst #578 = XOR16rm
  { 577,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo51 },  // Inst #577 = XOR16ri
  { 576,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo50 },  // Inst #576 = XOR16rc
  { 575,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo49 },  // Inst #575 = XOR16mr
  { 574,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #574 = XOR16mp
  { 573,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #573 = XOR16mn
  { 572,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #572 = XOR16mm
  { 571,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #571 = XOR16mi
  { 570,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #570 = XOR16mc
  { 569,	3,	1,	0,	0,	0,	1,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo86 },  // Inst #569 = Srl8
  { 568,	3,	1,	0,	0,	0,	1,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo85 },  // Inst #568 = Srl16
  { 567,	3,	1,	0,	0,	0,	1,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo86 },  // Inst #567 = Sra8
  { 566,	3,	1,	0,	0,	0,	1,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo85 },  // Inst #566 = Sra16
  { 565,	3,	1,	0,	0,	0,	1,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo86 },  // Inst #565 = Shl8
  { 564,	3,	1,	0,	0,	0,	1,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo85 },  // Inst #564 = Shl16
  { 563,	4,	1,	0,	0,	1,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo84 },  // Inst #563 = Select8
  { 562,	4,	1,	0,	0,	1,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo83 },  // Inst #562 = Select16
  { 561,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo81 },  // Inst #561 = SWPB16r
  { 560,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo76 },  // Inst #560 = SWPB16p
  { 559,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo76 },  // Inst #559 = SWPB16n
  { 558,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo74 },  // Inst #558 = SWPB16m
  { 557,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo62 },  // Inst #557 = SUBC8rr
  { 556,	4,	2,	2,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo61 },  // Inst #556 = SUBC8rp
  { 555,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo60 },  // Inst #555 = SUBC8rn
  { 554,	4,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo59 },  // Inst #554 = SUBC8rm
  { 553,	3,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo58 },  // Inst #553 = SUBC8ri
  { 552,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo57 },  // Inst #552 = SUBC8rc
  { 551,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo56 },  // Inst #551 = SUBC8mr
  { 550,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #550 = SUBC8mp
  { 549,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #549 = SUBC8mn
  { 548,	4,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo47 },  // Inst #548 = SUBC8mm
  { 547,	3,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo46 },  // Inst #547 = SUBC8mi
  { 546,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo45 },  // Inst #546 = SUBC8mc
  { 545,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo55 },  // Inst #545 = SUBC16rr
  { 544,	4,	2,	2,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo54 },  // Inst #544 = SUBC16rp
  { 543,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo53 },  // Inst #543 = SUBC16rn
  { 542,	4,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo52 },  // Inst #542 = SUBC16rm
  { 541,	3,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo51 },  // Inst #541 = SUBC16ri
  { 540,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo50 },  // Inst #540 = SUBC16rc
  { 539,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo49 },  // Inst #539 = SUBC16mr
  { 538,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #538 = SUBC16mp
  { 537,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #537 = SUBC16mn
  { 536,	4,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo47 },  // Inst #536 = SUBC16mm
  { 535,	3,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo46 },  // Inst #535 = SUBC16mi
  { 534,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo45 },  // Inst #534 = SUBC16mc
  { 533,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo62 },  // Inst #533 = SUB8rr
  { 532,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo61 },  // Inst #532 = SUB8rp
  { 531,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo60 },  // Inst #531 = SUB8rn
  { 530,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo59 },  // Inst #530 = SUB8rm
  { 529,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo58 },  // Inst #529 = SUB8ri
  { 528,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo57 },  // Inst #528 = SUB8rc
  { 527,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo56 },  // Inst #527 = SUB8mr
  { 526,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #526 = SUB8mp
  { 525,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #525 = SUB8mn
  { 524,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #524 = SUB8mm
  { 523,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #523 = SUB8mi
  { 522,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #522 = SUB8mc
  { 521,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo55 },  // Inst #521 = SUB16rr
  { 520,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo54 },  // Inst #520 = SUB16rp
  { 519,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo53 },  // Inst #519 = SUB16rn
  { 518,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo52 },  // Inst #518 = SUB16rm
  { 517,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo51 },  // Inst #517 = SUB16ri
  { 516,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo50 },  // Inst #516 = SUB16rc
  { 515,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo49 },  // Inst #515 = SUB16mr
  { 514,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #514 = SUB16mp
  { 513,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #513 = SUB16mn
  { 512,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #512 = SUB16mm
  { 511,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #511 = SUB16mi
  { 510,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #510 = SUB16mc
  { 509,	2,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo81 },  // Inst #509 = SEXT16r
  { 508,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo76 },  // Inst #508 = SEXT16p
  { 507,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo76 },  // Inst #507 = SEXT16n
  { 506,	2,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo74 },  // Inst #506 = SEXT16m
  { 505,	2,	1,	0,	0,	0,	1,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo73 },  // Inst #505 = Rrcl8
  { 504,	2,	1,	0,	0,	0,	1,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo68 },  // Inst #504 = Rrcl16
  { 503,	2,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo82 },  // Inst #503 = RRC8r
  { 502,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo76 },  // Inst #502 = RRC8p
  { 501,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo76 },  // Inst #501 = RRC8n
  { 500,	2,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo74 },  // Inst #500 = RRC8m
  { 499,	2,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo81 },  // Inst #499 = RRC16r
  { 498,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo76 },  // Inst #498 = RRC16p
  { 497,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo76 },  // Inst #497 = RRC16n
  { 496,	2,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo74 },  // Inst #496 = RRC16m
  { 495,	2,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo82 },  // Inst #495 = RRA8r
  { 494,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo76 },  // Inst #494 = RRA8p
  { 493,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo76 },  // Inst #493 = RRA8n
  { 492,	2,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo74 },  // Inst #492 = RRA8m
  { 491,	2,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo81 },  // Inst #491 = RRA16r
  { 490,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo76 },  // Inst #490 = RRA16p
  { 489,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo76 },  // Inst #489 = RRA16n
  { 488,	2,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo74 },  // Inst #488 = RRA16m
  { 487,	0,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #487 = RETI
  { 486,	0,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #486 = RET
  { 485,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList6, OperandInfo80 },  // Inst #485 = PUSH8r
  { 484,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList6, OperandInfo75 },  // Inst #484 = PUSH16r
  { 483,	1,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList6, OperandInfo3 },  // Inst #483 = PUSH16i
  { 482,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList6, OperandInfo2 },  // Inst #482 = PUSH16c
  { 481,	1,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList6, OperandInfo75 },  // Inst #481 = POP16r
  { 480,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo79 },  // Inst #480 = MOVZX16rr8
  { 479,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo66 },  // Inst #479 = MOVZX16rm8
  { 478,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo73 },  // Inst #478 = MOV8rr
  { 477,	3,	2,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo78 },  // Inst #477 = MOV8rp
  { 476,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo72 },  // Inst #476 = MOV8rn
  { 475,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo71 },  // Inst #475 = MOV8rm
  { 474,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo70 },  // Inst #474 = MOV8ri
  { 473,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo69 },  // Inst #473 = MOV8rc
  { 472,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo56 },  // Inst #472 = MOV8mr
  { 471,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #471 = MOV8mn
  { 470,	4,	0,	6,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #470 = MOV8mm
  { 469,	3,	0,	6,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #469 = MOV8mi
  { 468,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo45 },  // Inst #468 = MOV8mc
  { 467,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo68 },  // Inst #467 = MOV16rr
  { 466,	3,	2,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo77 },  // Inst #466 = MOV16rp
  { 465,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo67 },  // Inst #465 = MOV16rn
  { 464,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo66 },  // Inst #464 = MOV16rm
  { 463,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo65 },  // Inst #463 = MOV16ri
  { 462,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo64 },  // Inst #462 = MOV16rc
  { 461,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo49 },  // Inst #461 = MOV16mr
  { 460,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #460 = MOV16mn
  { 459,	4,	0,	6,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #459 = MOV16mm
  { 458,	3,	0,	6,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #458 = MOV16mi
  { 457,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo45 },  // Inst #457 = MOV16mc
  { 456,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #456 = JMP
  { 455,	2,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo7 },  // Inst #455 = JCC
  { 454,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo62 },  // Inst #454 = DADD8rr
  { 453,	4,	2,	2,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo61 },  // Inst #453 = DADD8rp
  { 452,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo60 },  // Inst #452 = DADD8rn
  { 451,	4,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo59 },  // Inst #451 = DADD8rm
  { 450,	3,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo58 },  // Inst #450 = DADD8ri
  { 449,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo57 },  // Inst #449 = DADD8rc
  { 448,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo56 },  // Inst #448 = DADD8mr
  { 447,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #447 = DADD8mp
  { 446,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #446 = DADD8mn
  { 445,	4,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo47 },  // Inst #445 = DADD8mm
  { 444,	3,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo46 },  // Inst #444 = DADD8mi
  { 443,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo45 },  // Inst #443 = DADD8mc
  { 442,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo55 },  // Inst #442 = DADD16rr
  { 441,	4,	2,	2,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo54 },  // Inst #441 = DADD16rp
  { 440,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo53 },  // Inst #440 = DADD16rn
  { 439,	4,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo52 },  // Inst #439 = DADD16rm
  { 438,	3,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo51 },  // Inst #438 = DADD16ri
  { 437,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo50 },  // Inst #437 = DADD16rc
  { 436,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo49 },  // Inst #436 = DADD16mr
  { 435,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #435 = DADD16mp
  { 434,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #434 = DADD16mn
  { 433,	4,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo47 },  // Inst #433 = DADD16mm
  { 432,	3,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo46 },  // Inst #432 = DADD16mi
  { 431,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo45 },  // Inst #431 = DADD16mc
  { 430,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo73 },  // Inst #430 = CMP8rr
  { 429,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo72 },  // Inst #429 = CMP8rp
  { 428,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo72 },  // Inst #428 = CMP8rn
  { 427,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo71 },  // Inst #427 = CMP8rm
  { 426,	2,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo70 },  // Inst #426 = CMP8ri
  { 425,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo69 },  // Inst #425 = CMP8rc
  { 424,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo56 },  // Inst #424 = CMP8mr
  { 423,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #423 = CMP8mp
  { 422,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #422 = CMP8mn
  { 421,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #421 = CMP8mm
  { 420,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #420 = CMP8mi
  { 419,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #419 = CMP8mc
  { 418,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo68 },  // Inst #418 = CMP16rr
  { 417,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo67 },  // Inst #417 = CMP16rp
  { 416,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo67 },  // Inst #416 = CMP16rn
  { 415,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo66 },  // Inst #415 = CMP16rm
  { 414,	2,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo65 },  // Inst #414 = CMP16ri
  { 413,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo64 },  // Inst #413 = CMP16rc
  { 412,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo49 },  // Inst #412 = CMP16mr
  { 411,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #411 = CMP16mp
  { 410,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #410 = CMP16mn
  { 409,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #409 = CMP16mm
  { 408,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #408 = CMP16mi
  { 407,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #407 = CMP16mc
  { 406,	1,	0,	2,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, OperandInfo75 },  // Inst #406 = CALLr
  { 405,	1,	0,	2,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, OperandInfo76 },  // Inst #405 = CALLp
  { 404,	1,	0,	2,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, OperandInfo76 },  // Inst #404 = CALLn
  { 403,	2,	0,	4,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, OperandInfo74 },  // Inst #403 = CALLm
  { 402,	1,	0,	4,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, OperandInfo3 },  // Inst #402 = CALLi
  { 401,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo75 },  // Inst #401 = Br
  { 400,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo74 },  // Inst #400 = Bm
  { 399,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #399 = Bi
  { 398,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo73 },  // Inst #398 = BIT8rr
  { 397,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo72 },  // Inst #397 = BIT8rp
  { 396,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo72 },  // Inst #396 = BIT8rn
  { 395,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo71 },  // Inst #395 = BIT8rm
  { 394,	2,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo70 },  // Inst #394 = BIT8ri
  { 393,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo69 },  // Inst #393 = BIT8rc
  { 392,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo56 },  // Inst #392 = BIT8mr
  { 391,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #391 = BIT8mp
  { 390,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #390 = BIT8mn
  { 389,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #389 = BIT8mm
  { 388,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #388 = BIT8mi
  { 387,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #387 = BIT8mc
  { 386,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo68 },  // Inst #386 = BIT16rr
  { 385,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo67 },  // Inst #385 = BIT16rp
  { 384,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo67 },  // Inst #384 = BIT16rn
  { 383,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo66 },  // Inst #383 = BIT16rm
  { 382,	2,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo65 },  // Inst #382 = BIT16ri
  { 381,	2,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo64 },  // Inst #381 = BIT16rc
  { 380,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo49 },  // Inst #380 = BIT16mr
  { 379,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #379 = BIT16mp
  { 378,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #378 = BIT16mn
  { 377,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #377 = BIT16mm
  { 376,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #376 = BIT16mi
  { 375,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #375 = BIT16mc
  { 374,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo62 },  // Inst #374 = BIS8rr
  { 373,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo61 },  // Inst #373 = BIS8rp
  { 372,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo60 },  // Inst #372 = BIS8rn
  { 371,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo59 },  // Inst #371 = BIS8rm
  { 370,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo58 },  // Inst #370 = BIS8ri
  { 369,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo57 },  // Inst #369 = BIS8rc
  { 368,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo56 },  // Inst #368 = BIS8mr
  { 367,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #367 = BIS8mp
  { 366,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #366 = BIS8mn
  { 365,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #365 = BIS8mm
  { 364,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #364 = BIS8mi
  { 363,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #363 = BIS8mc
  { 362,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo55 },  // Inst #362 = BIS16rr
  { 361,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo54 },  // Inst #361 = BIS16rp
  { 360,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo53 },  // Inst #360 = BIS16rn
  { 359,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo52 },  // Inst #359 = BIS16rm
  { 358,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo51 },  // Inst #358 = BIS16ri
  { 357,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo50 },  // Inst #357 = BIS16rc
  { 356,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo49 },  // Inst #356 = BIS16mr
  { 355,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #355 = BIS16mp
  { 354,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #354 = BIS16mn
  { 353,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #353 = BIS16mm
  { 352,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #352 = BIS16mi
  { 351,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #351 = BIS16mc
  { 350,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo62 },  // Inst #350 = BIC8rr
  { 349,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo61 },  // Inst #349 = BIC8rp
  { 348,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo60 },  // Inst #348 = BIC8rn
  { 347,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo59 },  // Inst #347 = BIC8rm
  { 346,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo58 },  // Inst #346 = BIC8ri
  { 345,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo57 },  // Inst #345 = BIC8rc
  { 344,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo56 },  // Inst #344 = BIC8mr
  { 343,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #343 = BIC8mp
  { 342,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #342 = BIC8mn
  { 341,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #341 = BIC8mm
  { 340,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #340 = BIC8mi
  { 339,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #339 = BIC8mc
  { 338,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo55 },  // Inst #338 = BIC16rr
  { 337,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo54 },  // Inst #337 = BIC16rp
  { 336,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo53 },  // Inst #336 = BIC16rn
  { 335,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo52 },  // Inst #335 = BIC16rm
  { 334,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo51 },  // Inst #334 = BIC16ri
  { 333,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo50 },  // Inst #333 = BIC16rc
  { 332,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo49 },  // Inst #332 = BIC16mr
  { 331,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #331 = BIC16mp
  { 330,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #330 = BIC16mn
  { 329,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #329 = BIC16mm
  { 328,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #328 = BIC16mi
  { 327,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #327 = BIC16mc
  { 326,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo62 },  // Inst #326 = AND8rr
  { 325,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo61 },  // Inst #325 = AND8rp
  { 324,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo60 },  // Inst #324 = AND8rn
  { 323,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo59 },  // Inst #323 = AND8rm
  { 322,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo58 },  // Inst #322 = AND8ri
  { 321,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo57 },  // Inst #321 = AND8rc
  { 320,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo56 },  // Inst #320 = AND8mr
  { 319,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #319 = AND8mp
  { 318,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #318 = AND8mn
  { 317,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #317 = AND8mm
  { 316,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #316 = AND8mi
  { 315,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #315 = AND8mc
  { 314,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo55 },  // Inst #314 = AND16rr
  { 313,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo54 },  // Inst #313 = AND16rp
  { 312,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo53 },  // Inst #312 = AND16rn
  { 311,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo52 },  // Inst #311 = AND16rm
  { 310,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo51 },  // Inst #310 = AND16ri
  { 309,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo50 },  // Inst #309 = AND16rc
  { 308,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo49 },  // Inst #308 = AND16mr
  { 307,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #307 = AND16mp
  { 306,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #306 = AND16mn
  { 305,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #305 = AND16mm
  { 304,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #304 = AND16mi
  { 303,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #303 = AND16mc
  { 302,	2,	0,	0,	0,	1,	2,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo10 },  // Inst #302 = ADJCALLSTACKUP
  { 301,	2,	0,	0,	0,	1,	2,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo10 },  // Inst #301 = ADJCALLSTACKDOWN
  { 300,	3,	1,	0,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo63 },  // Inst #300 = ADDframe
  { 299,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo62 },  // Inst #299 = ADDC8rr
  { 298,	4,	2,	2,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo61 },  // Inst #298 = ADDC8rp
  { 297,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo60 },  // Inst #297 = ADDC8rn
  { 296,	4,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo59 },  // Inst #296 = ADDC8rm
  { 295,	3,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo58 },  // Inst #295 = ADDC8ri
  { 294,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo57 },  // Inst #294 = ADDC8rc
  { 293,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo56 },  // Inst #293 = ADDC8mr
  { 292,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #292 = ADDC8mp
  { 291,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #291 = ADDC8mn
  { 290,	4,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo47 },  // Inst #290 = ADDC8mm
  { 289,	3,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo46 },  // Inst #289 = ADDC8mi
  { 288,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo45 },  // Inst #288 = ADDC8mc
  { 287,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo55 },  // Inst #287 = ADDC16rr
  { 286,	4,	2,	2,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo54 },  // Inst #286 = ADDC16rp
  { 285,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo53 },  // Inst #285 = ADDC16rn
  { 284,	4,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo52 },  // Inst #284 = ADDC16rm
  { 283,	3,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo51 },  // Inst #283 = ADDC16ri
  { 282,	3,	1,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo50 },  // Inst #282 = ADDC16rc
  { 281,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo49 },  // Inst #281 = ADDC16mr
  { 280,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #280 = ADDC16mp
  { 279,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo48 },  // Inst #279 = ADDC16mn
  { 278,	4,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo47 },  // Inst #278 = ADDC16mm
  { 277,	3,	0,	6,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo46 },  // Inst #277 = ADDC16mi
  { 276,	3,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo45 },  // Inst #276 = ADDC16mc
  { 275,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo62 },  // Inst #275 = ADD8rr
  { 274,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo61 },  // Inst #274 = ADD8rp
  { 273,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo60 },  // Inst #273 = ADD8rn
  { 272,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo59 },  // Inst #272 = ADD8rm
  { 271,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo58 },  // Inst #271 = ADD8ri
  { 270,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo57 },  // Inst #270 = ADD8rc
  { 269,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo56 },  // Inst #269 = ADD8mr
  { 268,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #268 = ADD8mp
  { 267,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #267 = ADD8mn
  { 266,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #266 = ADD8mm
  { 265,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #265 = ADD8mi
  { 264,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #264 = ADD8mc
  { 263,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo55 },  // Inst #263 = ADD16rr
  { 262,	4,	2,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo54 },  // Inst #262 = ADD16rp
  { 261,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo53 },  // Inst #261 = ADD16rn
  { 260,	4,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo52 },  // Inst #260 = ADD16rm
  { 259,	3,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo51 },  // Inst #259 = ADD16ri
  { 258,	3,	1,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo50 },  // Inst #258 = ADD16rc
  { 257,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo49 },  // Inst #257 = ADD16mr
  { 256,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #256 = ADD16mp
  { 255,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo48 },  // Inst #255 = ADD16mn
  { 254,	4,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo47 },  // Inst #254 = ADD16mm
  { 253,	3,	0,	6,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo46 },  // Inst #253 = ADD16mi
  { 252,	3,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #252 = ADD16mc
  { 251,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo44 },  // Inst #251 = G_UBFX
  { 250,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo44 },  // Inst #250 = G_SBFX
  { 249,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #249 = G_VECREDUCE_UMIN
  { 248,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #248 = G_VECREDUCE_UMAX
  { 247,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #247 = G_VECREDUCE_SMIN
  { 246,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #246 = G_VECREDUCE_SMAX
  { 245,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #245 = G_VECREDUCE_XOR
  { 244,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #244 = G_VECREDUCE_OR
  { 243,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #243 = G_VECREDUCE_AND
  { 242,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #242 = G_VECREDUCE_MUL
  { 241,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #241 = G_VECREDUCE_ADD
  { 240,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #240 = G_VECREDUCE_FMIN
  { 239,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #239 = G_VECREDUCE_FMAX
  { 238,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #238 = G_VECREDUCE_FMUL
  { 237,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #237 = G_VECREDUCE_FADD
  { 236,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo40 },  // Inst #236 = G_VECREDUCE_SEQ_FMUL
  { 235,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo40 },  // Inst #235 = G_VECREDUCE_SEQ_FADD
  { 234,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo22 },  // Inst #234 = G_BZERO
  { 233,	4,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo43 },  // Inst #233 = G_MEMSET
  { 232,	4,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo43 },  // Inst #232 = G_MEMMOVE
  { 231,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo40 },  // Inst #231 = G_MEMCPY_INLINE
  { 230,	4,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo43 },  // Inst #230 = G_MEMCPY
  { 229,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, OperandInfo42 },  // Inst #229 = G_WRITE_REGISTER
  { 228,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, OperandInfo21 },  // Inst #228 = G_READ_REGISTER
  { 227,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #227 = G_STRICT_FSQRT
  { 226,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo19 },  // Inst #226 = G_STRICT_FMA
  { 225,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #225 = G_STRICT_FREM
  { 224,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #224 = G_STRICT_FDIV
  { 223,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #223 = G_STRICT_FMUL
  { 222,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #222 = G_STRICT_FSUB
  { 221,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #221 = G_STRICT_FADD
  { 220,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo26 },  // Inst #220 = G_DYN_STACKALLOC
  { 219,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo21 },  // Inst #219 = G_JUMP_TABLE
  { 218,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo21 },  // Inst #218 = G_BLOCK_ADDR
  { 217,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #217 = G_ADDRSPACE_CAST
  { 216,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #216 = G_FNEARBYINT
  { 215,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #215 = G_FRINT
  { 214,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #214 = G_FFLOOR
  { 213,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #213 = G_FSQRT
  { 212,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #212 = G_FSIN
  { 211,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #211 = G_FCOS
  { 210,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #210 = G_FCEIL
  { 209,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #209 = G_BITREVERSE
  { 208,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #208 = G_BSWAP
  { 207,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #207 = G_CTPOP
  { 206,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #206 = G_CTLZ_ZERO_UNDEF
  { 205,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #205 = G_CTLZ
  { 204,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #204 = G_CTTZ_ZERO_UNDEF
  { 203,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #203 = G_CTTZ
  { 202,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo41 },  // Inst #202 = G_SHUFFLE_VECTOR
  { 201,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo40 },  // Inst #201 = G_EXTRACT_VECTOR_ELT
  { 200,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo39 },  // Inst #200 = G_INSERT_VECTOR_ELT
  { 199,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo38 },  // Inst #199 = G_BRJT
  { 198,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #198 = G_BR
  { 197,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #197 = G_LLROUND
  { 196,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #196 = G_LROUND
  { 195,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #195 = G_ABS
  { 194,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #194 = G_UMAX
  { 193,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #193 = G_UMIN
  { 192,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #192 = G_SMAX
  { 191,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #191 = G_SMIN
  { 190,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #190 = G_PTRMASK
  { 189,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #189 = G_PTR_ADD
  { 188,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #188 = G_FMAXIMUM
  { 187,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #187 = G_FMINIMUM
  { 186,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #186 = G_FMAXNUM_IEEE
  { 185,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #185 = G_FMINNUM_IEEE
  { 184,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #184 = G_FMAXNUM
  { 183,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #183 = G_FMINNUM
  { 182,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #182 = G_FCANONICALIZE
  { 181,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo32 },  // Inst #181 = G_IS_FPCLASS
  { 180,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #180 = G_FCOPYSIGN
  { 179,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #179 = G_FABS
  { 178,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #178 = G_UITOFP
  { 177,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #177 = G_SITOFP
  { 176,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #176 = G_FPTOUI
  { 175,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #175 = G_FPTOSI
  { 174,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #174 = G_FPTRUNC
  { 173,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #173 = G_FPEXT
  { 172,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #172 = G_FNEG
  { 171,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #171 = G_FLOG10
  { 170,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #170 = G_FLOG2
  { 169,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #169 = G_FLOG
  { 168,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #168 = G_FEXP2
  { 167,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #167 = G_FEXP
  { 166,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #166 = G_FPOWI
  { 165,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #165 = G_FPOW
  { 164,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #164 = G_FREM
  { 163,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #163 = G_FDIV
  { 162,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo19 },  // Inst #162 = G_FMAD
  { 161,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo19 },  // Inst #161 = G_FMA
  { 160,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #160 = G_FMUL
  { 159,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #159 = G_FSUB
  { 158,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #158 = G_FADD
  { 157,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo37 },  // Inst #157 = G_UDIVFIXSAT
  { 156,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo37 },  // Inst #156 = G_SDIVFIXSAT
  { 155,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo37 },  // Inst #155 = G_UDIVFIX
  { 154,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo37 },  // Inst #154 = G_SDIVFIX
  { 153,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo37 },  // Inst #153 = G_UMULFIXSAT
  { 152,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo37 },  // Inst #152 = G_SMULFIXSAT
  { 151,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo37 },  // Inst #151 = G_UMULFIX
  { 150,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo37 },  // Inst #150 = G_SMULFIX
  { 149,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #149 = G_SSHLSAT
  { 148,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #148 = G_USHLSAT
  { 147,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #147 = G_SSUBSAT
  { 146,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #146 = G_USUBSAT
  { 145,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #145 = G_SADDSAT
  { 144,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #144 = G_UADDSAT
  { 143,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #143 = G_SMULH
  { 142,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #142 = G_UMULH
  { 141,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo30 },  // Inst #141 = G_SMULO
  { 140,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo30 },  // Inst #140 = G_UMULO
  { 139,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo36 },  // Inst #139 = G_SSUBE
  { 138,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo30 },  // Inst #138 = G_SSUBO
  { 137,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo36 },  // Inst #137 = G_SADDE
  { 136,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo30 },  // Inst #136 = G_SADDO
  { 135,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo36 },  // Inst #135 = G_USUBE
  { 134,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo30 },  // Inst #134 = G_USUBO
  { 133,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo36 },  // Inst #133 = G_UADDE
  { 132,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo30 },  // Inst #132 = G_UADDO
  { 131,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo30 },  // Inst #131 = G_SELECT
  { 130,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo35 },  // Inst #130 = G_FCMP
  { 129,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo35 },  // Inst #129 = G_ICMP
  { 128,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #128 = G_ROTL
  { 127,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #127 = G_ROTR
  { 126,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo34 },  // Inst #126 = G_FSHR
  { 125,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo34 },  // Inst #125 = G_FSHL
  { 124,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #124 = G_ASHR
  { 123,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #123 = G_LSHR
  { 122,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo33 },  // Inst #122 = G_SHL
  { 121,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #121 = G_ZEXT
  { 120,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo17 },  // Inst #120 = G_SEXT_INREG
  { 119,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #119 = G_SEXT
  { 118,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo32 },  // Inst #118 = G_VAARG
  { 117,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo20 },  // Inst #117 = G_VASTART
  { 116,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo21 },  // Inst #116 = G_FCONSTANT
  { 115,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo21 },  // Inst #115 = G_CONSTANT
  { 114,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #114 = G_TRUNC
  { 113,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #113 = G_ANYEXT
  { 112,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, OperandInfo2 },  // Inst #112 = G_INTRINSIC_W_SIDE_EFFECTS
  { 111,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, OperandInfo2 },  // Inst #111 = G_INTRINSIC
  { 110,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #110 = G_INVOKE_REGION_START
  { 109,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo20 },  // Inst #109 = G_BRINDIRECT
  { 108,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo21 },  // Inst #108 = G_BRCOND
  { 107,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo10 },  // Inst #107 = G_FENCE
  { 106,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #106 = G_ATOMICRMW_UDEC_WRAP
  { 105,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #105 = G_ATOMICRMW_UINC_WRAP
  { 104,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #104 = G_ATOMICRMW_FMIN
  { 103,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #103 = G_ATOMICRMW_FMAX
  { 102,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #102 = G_ATOMICRMW_FSUB
  { 101,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #101 = G_ATOMICRMW_FADD
  { 100,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #100 = G_ATOMICRMW_UMIN
  { 99,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #99 = G_ATOMICRMW_UMAX
  { 98,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #98 = G_ATOMICRMW_MIN
  { 97,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #97 = G_ATOMICRMW_MAX
  { 96,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #96 = G_ATOMICRMW_XOR
  { 95,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #95 = G_ATOMICRMW_OR
  { 94,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #94 = G_ATOMICRMW_NAND
  { 93,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #93 = G_ATOMICRMW_AND
  { 92,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #92 = G_ATOMICRMW_SUB
  { 91,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #91 = G_ATOMICRMW_ADD
  { 90,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo31 },  // Inst #90 = G_ATOMICRMW_XCHG
  { 89,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo30 },  // Inst #89 = G_ATOMIC_CMPXCHG
  { 88,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo29 },  // Inst #88 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 87,	5,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo28 },  // Inst #87 = G_INDEXED_STORE
  { 86,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #86 = G_STORE
  { 85,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo27 },  // Inst #85 = G_INDEXED_ZEXTLOAD
  { 84,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo27 },  // Inst #84 = G_INDEXED_SEXTLOAD
  { 83,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo27 },  // Inst #83 = G_INDEXED_LOAD
  { 82,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #82 = G_ZEXTLOAD
  { 81,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #81 = G_SEXTLOAD
  { 80,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #80 = G_LOAD
  { 79,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo20 },  // Inst #79 = G_READCYCLECOUNTER
  { 78,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #78 = G_INTRINSIC_ROUNDEVEN
  { 77,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #77 = G_INTRINSIC_LRINT
  { 76,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #76 = G_INTRINSIC_ROUND
  { 75,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #75 = G_INTRINSIC_TRUNC
  { 74,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo26 },  // Inst #74 = G_INTRINSIC_FPTRUNC_ROUND
  { 73,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo25 },  // Inst #73 = G_FREEZE
  { 72,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #72 = G_BITCAST
  { 71,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #71 = G_INTTOPTR
  { 70,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #70 = G_PTRTOINT
  { 69,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #69 = G_CONCAT_VECTORS
  { 68,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #68 = G_BUILD_VECTOR_TRUNC
  { 67,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #67 = G_BUILD_VECTOR
  { 66,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #66 = G_MERGE_VALUES
  { 65,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo24 },  // Inst #65 = G_INSERT
  { 64,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo23 },  // Inst #64 = G_UNMERGE_VALUES
  { 63,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo22 },  // Inst #63 = G_EXTRACT
  { 62,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo21 },  // Inst #62 = G_CONSTANT_POOL
  { 61,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo21 },  // Inst #61 = G_GLOBAL_VALUE
  { 60,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo21 },  // Inst #60 = G_FRAME_INDEX
  { 59,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo20 },  // Inst #59 = G_PHI
  { 58,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo20 },  // Inst #58 = G_IMPLICIT_DEF
  { 57,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #57 = G_XOR
  { 56,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #56 = G_OR
  { 55,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #55 = G_AND
  { 54,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo19 },  // Inst #54 = G_UDIVREM
  { 53,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo19 },  // Inst #53 = G_SDIVREM
  { 52,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #52 = G_UREM
  { 51,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #51 = G_SREM
  { 50,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #50 = G_UDIV
  { 49,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #49 = G_SDIV
  { 48,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #48 = G_MUL
  { 47,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #47 = G_SUB
  { 46,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo18 },  // Inst #46 = G_ADD
  { 45,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo17 },  // Inst #45 = G_ASSERT_ALIGN
  { 44,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo17 },  // Inst #44 = G_ASSERT_ZEXT
  { 43,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo17 },  // Inst #43 = G_ASSERT_SEXT
  { 42,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #42 = MEMBARRIER
  { 41,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #41 = ICALL_BRANCH_FUNNEL
  { 40,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo16 },  // Inst #40 = PATCHABLE_TYPED_EVENT_CALL
  { 39,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo15 },  // Inst #39 = PATCHABLE_EVENT_CALL
  { 38,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #38 = PATCHABLE_TAIL_CALL
  { 37,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #37 = PATCHABLE_FUNCTION_EXIT
  { 36,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #36 = PATCHABLE_RET
  { 35,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #35 = PATCHABLE_FUNCTION_ENTER
  { 34,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #34 = PATCHABLE_OP
  { 33,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #33 = FAULTING_OP
  { 32,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo14 },  // Inst #32 = LOCAL_ESCAPE
  { 31,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #31 = STATEPOINT
  { 30,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo13 },  // Inst #30 = PREALLOCATED_ARG
  { 29,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #29 = PREALLOCATED_SETUP
  { 28,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo12 },  // Inst #28 = LOAD_STACK_GUARD
  { 27,	6,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo11 },  // Inst #27 = PATCHPOINT
  { 26,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #26 = FENTRY_CALL
  { 25,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo10 },  // Inst #25 = STACKMAP
  { 24,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo9 },  // Inst #24 = ARITH_FENCE
  { 23,	4,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo8 },  // Inst #23 = PSEUDO_PROBE
  { 22,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #22 = LIFETIME_END
  { 21,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #21 = LIFETIME_START
  { 20,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #20 = BUNDLE
  { 19,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo7 },  // Inst #19 = COPY
  { 18,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo7 },  // Inst #18 = REG_SEQUENCE
  { 17,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #17 = DBG_LABEL
  { 16,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #16 = DBG_PHI
  { 15,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #15 = DBG_INSTR_REF
  { 14,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #14 = DBG_VALUE_LIST
  { 13,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 12,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 11,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 10,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 8,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 7,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #7 = KILL
  { 6,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 5,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 4,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 3,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 2,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 1,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 0,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #0 = PHI
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char MSP430InstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "G_FLOG2\0"
  /* 17 */ "G_FEXP2\0"
  /* 25 */ "Sra16\0"
  /* 31 */ "Rrcl16\0"
  /* 38 */ "Shl16\0"
  /* 44 */ "Srl16\0"
  /* 50 */ "Select16\0"
  /* 59 */ "Sra8\0"
  /* 64 */ "Rrcl8\0"
  /* 70 */ "Shl8\0"
  /* 75 */ "Srl8\0"
  /* 80 */ "MOVZX16rm8\0"
  /* 91 */ "MOVZX16rr8\0"
  /* 102 */ "Select8\0"
  /* 110 */ "G_FMA\0"
  /* 116 */ "G_STRICT_FMA\0"
  /* 129 */ "G_FSUB\0"
  /* 136 */ "G_STRICT_FSUB\0"
  /* 150 */ "G_ATOMICRMW_FSUB\0"
  /* 167 */ "G_SUB\0"
  /* 173 */ "G_ATOMICRMW_SUB\0"
  /* 189 */ "JCC\0"
  /* 193 */ "G_INTRINSIC\0"
  /* 205 */ "G_FPTRUNC\0"
  /* 215 */ "G_INTRINSIC_TRUNC\0"
  /* 233 */ "G_TRUNC\0"
  /* 241 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 262 */ "G_DYN_STACKALLOC\0"
  /* 279 */ "G_FMAD\0"
  /* 286 */ "G_INDEXED_SEXTLOAD\0"
  /* 305 */ "G_SEXTLOAD\0"
  /* 316 */ "G_INDEXED_ZEXTLOAD\0"
  /* 335 */ "G_ZEXTLOAD\0"
  /* 346 */ "G_INDEXED_LOAD\0"
  /* 361 */ "G_LOAD\0"
  /* 368 */ "G_VECREDUCE_FADD\0"
  /* 385 */ "G_FADD\0"
  /* 392 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 413 */ "G_STRICT_FADD\0"
  /* 427 */ "G_ATOMICRMW_FADD\0"
  /* 444 */ "G_VECREDUCE_ADD\0"
  /* 460 */ "G_ADD\0"
  /* 466 */ "G_PTR_ADD\0"
  /* 476 */ "G_ATOMICRMW_ADD\0"
  /* 492 */ "G_ATOMICRMW_NAND\0"
  /* 509 */ "G_VECREDUCE_AND\0"
  /* 525 */ "G_AND\0"
  /* 531 */ "G_ATOMICRMW_AND\0"
  /* 547 */ "LIFETIME_END\0"
  /* 560 */ "G_BRCOND\0"
  /* 569 */ "G_LLROUND\0"
  /* 579 */ "G_LROUND\0"
  /* 588 */ "G_INTRINSIC_ROUND\0"
  /* 606 */ "G_INTRINSIC_FPTRUNC_ROUND\0"
  /* 632 */ "LOAD_STACK_GUARD\0"
  /* 649 */ "PSEUDO_PROBE\0"
  /* 662 */ "G_SSUBE\0"
  /* 670 */ "G_USUBE\0"
  /* 678 */ "G_FENCE\0"
  /* 686 */ "ARITH_FENCE\0"
  /* 698 */ "REG_SEQUENCE\0"
  /* 711 */ "G_SADDE\0"
  /* 719 */ "G_UADDE\0"
  /* 727 */ "G_FMINNUM_IEEE\0"
  /* 742 */ "G_FMAXNUM_IEEE\0"
  /* 757 */ "G_JUMP_TABLE\0"
  /* 770 */ "BUNDLE\0"
  /* 777 */ "G_MEMCPY_INLINE\0"
  /* 793 */ "LOCAL_ESCAPE\0"
  /* 806 */ "G_INDEXED_STORE\0"
  /* 822 */ "G_STORE\0"
  /* 830 */ "G_BITREVERSE\0"
  /* 843 */ "DBG_VALUE\0"
  /* 853 */ "G_GLOBAL_VALUE\0"
  /* 868 */ "G_MEMMOVE\0"
  /* 878 */ "G_FREEZE\0"
  /* 887 */ "G_FCANONICALIZE\0"
  /* 903 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 921 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 939 */ "G_IMPLICIT_DEF\0"
  /* 954 */ "DBG_INSTR_REF\0"
  /* 968 */ "G_FNEG\0"
  /* 975 */ "EXTRACT_SUBREG\0"
  /* 990 */ "INSERT_SUBREG\0"
  /* 1004 */ "G_SEXT_INREG\0"
  /* 1017 */ "SUBREG_TO_REG\0"
  /* 1031 */ "G_ATOMIC_CMPXCHG\0"
  /* 1048 */ "G_ATOMICRMW_XCHG\0"
  /* 1065 */ "G_FLOG\0"
  /* 1072 */ "G_VAARG\0"
  /* 1080 */ "PREALLOCATED_ARG\0"
  /* 1097 */ "G_SMULH\0"
  /* 1105 */ "G_UMULH\0"
  /* 1113 */ "DBG_PHI\0"
  /* 1121 */ "G_FPTOSI\0"
  /* 1130 */ "RETI\0"
  /* 1135 */ "G_FPTOUI\0"
  /* 1144 */ "G_FPOWI\0"
  /* 1152 */ "G_PTRMASK\0"
  /* 1162 */ "GC_LABEL\0"
  /* 1171 */ "DBG_LABEL\0"
  /* 1181 */ "EH_LABEL\0"
  /* 1190 */ "ANNOTATION_LABEL\0"
  /* 1207 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1227 */ "G_FSHL\0"
  /* 1234 */ "G_SHL\0"
  /* 1240 */ "G_FCEIL\0"
  /* 1248 */ "PATCHABLE_TAIL_CALL\0"
  /* 1268 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1295 */ "PATCHABLE_EVENT_CALL\0"
  /* 1316 */ "FENTRY_CALL\0"
  /* 1328 */ "KILL\0"
  /* 1333 */ "G_CONSTANT_POOL\0"
  /* 1349 */ "G_ROTL\0"
  /* 1356 */ "G_VECREDUCE_FMUL\0"
  /* 1373 */ "G_FMUL\0"
  /* 1380 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 1401 */ "G_STRICT_FMUL\0"
  /* 1415 */ "G_VECREDUCE_MUL\0"
  /* 1431 */ "G_MUL\0"
  /* 1437 */ "G_FREM\0"
  /* 1444 */ "G_STRICT_FREM\0"
  /* 1458 */ "G_SREM\0"
  /* 1465 */ "G_UREM\0"
  /* 1472 */ "G_SDIVREM\0"
  /* 1482 */ "G_UDIVREM\0"
  /* 1492 */ "INLINEASM\0"
  /* 1502 */ "G_FMINIMUM\0"
  /* 1513 */ "G_FMAXIMUM\0"
  /* 1524 */ "G_FMINNUM\0"
  /* 1534 */ "G_FMAXNUM\0"
  /* 1544 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 1566 */ "G_ASSERT_ALIGN\0"
  /* 1581 */ "G_FCOPYSIGN\0"
  /* 1593 */ "G_VECREDUCE_FMIN\0"
  /* 1610 */ "G_ATOMICRMW_FMIN\0"
  /* 1627 */ "G_VECREDUCE_SMIN\0"
  /* 1644 */ "G_SMIN\0"
  /* 1651 */ "G_VECREDUCE_UMIN\0"
  /* 1668 */ "G_UMIN\0"
  /* 1675 */ "G_ATOMICRMW_UMIN\0"
  /* 1692 */ "G_ATOMICRMW_MIN\0"
  /* 1708 */ "G_FSIN\0"
  /* 1715 */ "CFI_INSTRUCTION\0"
  /* 1731 */ "ADJCALLSTACKDOWN\0"
  /* 1748 */ "G_SSUBO\0"
  /* 1756 */ "G_USUBO\0"
  /* 1764 */ "G_SADDO\0"
  /* 1772 */ "G_UADDO\0"
  /* 1780 */ "G_SMULO\0"
  /* 1788 */ "G_UMULO\0"
  /* 1796 */ "G_BZERO\0"
  /* 1804 */ "STACKMAP\0"
  /* 1813 */ "G_ATOMICRMW_UDEC_WRAP\0"
  /* 1835 */ "G_ATOMICRMW_UINC_WRAP\0"
  /* 1857 */ "G_BSWAP\0"
  /* 1865 */ "G_SITOFP\0"
  /* 1874 */ "G_UITOFP\0"
  /* 1883 */ "G_FCMP\0"
  /* 1890 */ "G_ICMP\0"
  /* 1897 */ "JMP\0"
  /* 1901 */ "G_CTPOP\0"
  /* 1909 */ "PATCHABLE_OP\0"
  /* 1922 */ "FAULTING_OP\0"
  /* 1934 */ "ADJCALLSTACKUP\0"
  /* 1949 */ "PREALLOCATED_SETUP\0"
  /* 1968 */ "G_FEXP\0"
  /* 1975 */ "G_BR\0"
  /* 1980 */ "INLINEASM_BR\0"
  /* 1993 */ "G_BLOCK_ADDR\0"
  /* 2006 */ "MEMBARRIER\0"
  /* 2017 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 2042 */ "G_READCYCLECOUNTER\0"
  /* 2061 */ "G_READ_REGISTER\0"
  /* 2077 */ "G_WRITE_REGISTER\0"
  /* 2094 */ "G_ASHR\0"
  /* 2101 */ "G_FSHR\0"
  /* 2108 */ "G_LSHR\0"
  /* 2115 */ "G_FFLOOR\0"
  /* 2124 */ "G_BUILD_VECTOR\0"
  /* 2139 */ "G_SHUFFLE_VECTOR\0"
  /* 2156 */ "G_VECREDUCE_XOR\0"
  /* 2172 */ "G_XOR\0"
  /* 2178 */ "G_ATOMICRMW_XOR\0"
  /* 2194 */ "G_VECREDUCE_OR\0"
  /* 2209 */ "G_OR\0"
  /* 2214 */ "G_ATOMICRMW_OR\0"
  /* 2229 */ "G_ROTR\0"
  /* 2236 */ "G_INTTOPTR\0"
  /* 2247 */ "G_FABS\0"
  /* 2254 */ "G_ABS\0"
  /* 2260 */ "G_UNMERGE_VALUES\0"
  /* 2277 */ "G_MERGE_VALUES\0"
  /* 2292 */ "G_FCOS\0"
  /* 2299 */ "G_CONCAT_VECTORS\0"
  /* 2316 */ "COPY_TO_REGCLASS\0"
  /* 2333 */ "G_IS_FPCLASS\0"
  /* 2346 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 2376 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 2403 */ "G_SSUBSAT\0"
  /* 2413 */ "G_USUBSAT\0"
  /* 2423 */ "G_SADDSAT\0"
  /* 2433 */ "G_UADDSAT\0"
  /* 2443 */ "G_SSHLSAT\0"
  /* 2453 */ "G_USHLSAT\0"
  /* 2463 */ "G_SMULFIXSAT\0"
  /* 2476 */ "G_UMULFIXSAT\0"
  /* 2489 */ "G_SDIVFIXSAT\0"
  /* 2502 */ "G_UDIVFIXSAT\0"
  /* 2515 */ "G_EXTRACT\0"
  /* 2525 */ "G_SELECT\0"
  /* 2534 */ "G_BRINDIRECT\0"
  /* 2547 */ "PATCHABLE_RET\0"
  /* 2561 */ "G_MEMSET\0"
  /* 2570 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 2594 */ "G_BRJT\0"
  /* 2601 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 2622 */ "G_INSERT_VECTOR_ELT\0"
  /* 2642 */ "G_FCONSTANT\0"
  /* 2654 */ "G_CONSTANT\0"
  /* 2665 */ "STATEPOINT\0"
  /* 2676 */ "PATCHPOINT\0"
  /* 2687 */ "G_PTRTOINT\0"
  /* 2698 */ "G_FRINT\0"
  /* 2706 */ "G_INTRINSIC_LRINT\0"
  /* 2724 */ "G_FNEARBYINT\0"
  /* 2737 */ "G_VASTART\0"
  /* 2747 */ "LIFETIME_START\0"
  /* 2762 */ "G_INVOKE_REGION_START\0"
  /* 2784 */ "G_INSERT\0"
  /* 2793 */ "G_FSQRT\0"
  /* 2801 */ "G_STRICT_FSQRT\0"
  /* 2816 */ "G_BITCAST\0"
  /* 2826 */ "G_ADDRSPACE_CAST\0"
  /* 2843 */ "DBG_VALUE_LIST\0"
  /* 2858 */ "G_FPEXT\0"
  /* 2866 */ "G_SEXT\0"
  /* 2873 */ "G_ASSERT_SEXT\0"
  /* 2887 */ "G_ANYEXT\0"
  /* 2896 */ "G_ZEXT\0"
  /* 2903 */ "G_ASSERT_ZEXT\0"
  /* 2917 */ "G_FDIV\0"
  /* 2924 */ "G_STRICT_FDIV\0"
  /* 2938 */ "G_SDIV\0"
  /* 2945 */ "G_UDIV\0"
  /* 2952 */ "G_FPOW\0"
  /* 2959 */ "G_VECREDUCE_FMAX\0"
  /* 2976 */ "G_ATOMICRMW_FMAX\0"
  /* 2993 */ "G_VECREDUCE_SMAX\0"
  /* 3010 */ "G_SMAX\0"
  /* 3017 */ "G_VECREDUCE_UMAX\0"
  /* 3034 */ "G_UMAX\0"
  /* 3041 */ "G_ATOMICRMW_UMAX\0"
  /* 3058 */ "G_ATOMICRMW_MAX\0"
  /* 3074 */ "G_FRAME_INDEX\0"
  /* 3088 */ "G_SBFX\0"
  /* 3095 */ "G_UBFX\0"
  /* 3102 */ "G_SMULFIX\0"
  /* 3112 */ "G_UMULFIX\0"
  /* 3122 */ "G_SDIVFIX\0"
  /* 3132 */ "G_UDIVFIX\0"
  /* 3142 */ "G_MEMCPY\0"
  /* 3151 */ "COPY\0"
  /* 3156 */ "G_CTLZ\0"
  /* 3163 */ "G_CTTZ\0"
  /* 3170 */ "PUSH16c\0"
  /* 3178 */ "SUB16mc\0"
  /* 3186 */ "SUBC16mc\0"
  /* 3195 */ "ADDC16mc\0"
  /* 3204 */ "BIC16mc\0"
  /* 3212 */ "DADD16mc\0"
  /* 3221 */ "AND16mc\0"
  /* 3229 */ "CMP16mc\0"
  /* 3237 */ "XOR16mc\0"
  /* 3245 */ "BIS16mc\0"
  /* 3253 */ "BIT16mc\0"
  /* 3261 */ "MOV16mc\0"
  /* 3269 */ "SUB8mc\0"
  /* 3276 */ "SUBC8mc\0"
  /* 3284 */ "ADDC8mc\0"
  /* 3292 */ "BIC8mc\0"
  /* 3299 */ "DADD8mc\0"
  /* 3307 */ "AND8mc\0"
  /* 3314 */ "CMP8mc\0"
  /* 3321 */ "XOR8mc\0"
  /* 3328 */ "BIS8mc\0"
  /* 3335 */ "BIT8mc\0"
  /* 3342 */ "MOV8mc\0"
  /* 3349 */ "SUB16rc\0"
  /* 3357 */ "SUBC16rc\0"
  /* 3366 */ "ADDC16rc\0"
  /* 3375 */ "BIC16rc\0"
  /* 3383 */ "DADD16rc\0"
  /* 3392 */ "AND16rc\0"
  /* 3400 */ "CMP16rc\0"
  /* 3408 */ "XOR16rc\0"
  /* 3416 */ "BIS16rc\0"
  /* 3424 */ "BIT16rc\0"
  /* 3432 */ "MOV16rc\0"
  /* 3440 */ "SUB8rc\0"
  /* 3447 */ "SUBC8rc\0"
  /* 3455 */ "ADDC8rc\0"
  /* 3463 */ "BIC8rc\0"
  /* 3470 */ "DADD8rc\0"
  /* 3478 */ "AND8rc\0"
  /* 3485 */ "CMP8rc\0"
  /* 3492 */ "XOR8rc\0"
  /* 3499 */ "BIS8rc\0"
  /* 3506 */ "BIT8rc\0"
  /* 3513 */ "MOV8rc\0"
  /* 3520 */ "ADDframe\0"
  /* 3529 */ "PUSH16i\0"
  /* 3537 */ "Bi\0"
  /* 3540 */ "CALLi\0"
  /* 3546 */ "SUB16mi\0"
  /* 3554 */ "SUBC16mi\0"
  /* 3563 */ "ADDC16mi\0"
  /* 3572 */ "BIC16mi\0"
  /* 3580 */ "DADD16mi\0"
  /* 3589 */ "AND16mi\0"
  /* 3597 */ "CMP16mi\0"
  /* 3605 */ "XOR16mi\0"
  /* 3613 */ "BIS16mi\0"
  /* 3621 */ "BIT16mi\0"
  /* 3629 */ "MOV16mi\0"
  /* 3637 */ "SUB8mi\0"
  /* 3644 */ "SUBC8mi\0"
  /* 3652 */ "ADDC8mi\0"
  /* 3660 */ "BIC8mi\0"
  /* 3667 */ "DADD8mi\0"
  /* 3675 */ "AND8mi\0"
  /* 3682 */ "CMP8mi\0"
  /* 3689 */ "XOR8mi\0"
  /* 3696 */ "BIS8mi\0"
  /* 3703 */ "BIT8mi\0"
  /* 3710 */ "MOV8mi\0"
  /* 3717 */ "SUB16ri\0"
  /* 3725 */ "SUBC16ri\0"
  /* 3734 */ "ADDC16ri\0"
  /* 3743 */ "BIC16ri\0"
  /* 3751 */ "DADD16ri\0"
  /* 3760 */ "AND16ri\0"
  /* 3768 */ "CMP16ri\0"
  /* 3776 */ "XOR16ri\0"
  /* 3784 */ "BIS16ri\0"
  /* 3792 */ "BIT16ri\0"
  /* 3800 */ "MOV16ri\0"
  /* 3808 */ "SUB8ri\0"
  /* 3815 */ "SUBC8ri\0"
  /* 3823 */ "ADDC8ri\0"
  /* 3831 */ "BIC8ri\0"
  /* 3838 */ "DADD8ri\0"
  /* 3846 */ "AND8ri\0"
  /* 3853 */ "CMP8ri\0"
  /* 3860 */ "XOR8ri\0"
  /* 3867 */ "BIS8ri\0"
  /* 3874 */ "BIT8ri\0"
  /* 3881 */ "MOV8ri\0"
  /* 3888 */ "RRA16m\0"
  /* 3895 */ "SWPB16m\0"
  /* 3903 */ "RRC16m\0"
  /* 3910 */ "SEXT16m\0"
  /* 3918 */ "RRA8m\0"
  /* 3924 */ "RRC8m\0"
  /* 3930 */ "Bm\0"
  /* 3933 */ "CALLm\0"
  /* 3939 */ "SUB16mm\0"
  /* 3947 */ "SUBC16mm\0"
  /* 3956 */ "ADDC16mm\0"
  /* 3965 */ "BIC16mm\0"
  /* 3973 */ "DADD16mm\0"
  /* 3982 */ "AND16mm\0"
  /* 3990 */ "CMP16mm\0"
  /* 3998 */ "XOR16mm\0"
  /* 4006 */ "BIS16mm\0"
  /* 4014 */ "BIT16mm\0"
  /* 4022 */ "MOV16mm\0"
  /* 4030 */ "SUB8mm\0"
  /* 4037 */ "SUBC8mm\0"
  /* 4045 */ "ADDC8mm\0"
  /* 4053 */ "BIC8mm\0"
  /* 4060 */ "DADD8mm\0"
  /* 4068 */ "AND8mm\0"
  /* 4075 */ "CMP8mm\0"
  /* 4082 */ "XOR8mm\0"
  /* 4089 */ "BIS8mm\0"
  /* 4096 */ "BIT8mm\0"
  /* 4103 */ "MOV8mm\0"
  /* 4110 */ "SUB16rm\0"
  /* 4118 */ "SUBC16rm\0"
  /* 4127 */ "ADDC16rm\0"
  /* 4136 */ "BIC16rm\0"
  /* 4144 */ "DADD16rm\0"
  /* 4153 */ "AND16rm\0"
  /* 4161 */ "CMP16rm\0"
  /* 4169 */ "XOR16rm\0"
  /* 4177 */ "BIS16rm\0"
  /* 4185 */ "BIT16rm\0"
  /* 4193 */ "MOV16rm\0"
  /* 4201 */ "SUB8rm\0"
  /* 4208 */ "SUBC8rm\0"
  /* 4216 */ "ADDC8rm\0"
  /* 4224 */ "BIC8rm\0"
  /* 4231 */ "DADD8rm\0"
  /* 4239 */ "AND8rm\0"
  /* 4246 */ "CMP8rm\0"
  /* 4253 */ "XOR8rm\0"
  /* 4260 */ "BIS8rm\0"
  /* 4267 */ "BIT8rm\0"
  /* 4274 */ "MOV8rm\0"
  /* 4281 */ "RRA16n\0"
  /* 4288 */ "SWPB16n\0"
  /* 4296 */ "RRC16n\0"
  /* 4303 */ "SEXT16n\0"
  /* 4311 */ "RRA8n\0"
  /* 4317 */ "RRC8n\0"
  /* 4323 */ "CALLn\0"
  /* 4329 */ "SUB16mn\0"
  /* 4337 */ "SUBC16mn\0"
  /* 4346 */ "ADDC16mn\0"
  /* 4355 */ "BIC16mn\0"
  /* 4363 */ "DADD16mn\0"
  /* 4372 */ "AND16mn\0"
  /* 4380 */ "CMP16mn\0"
  /* 4388 */ "XOR16mn\0"
  /* 4396 */ "BIS16mn\0"
  /* 4404 */ "BIT16mn\0"
  /* 4412 */ "MOV16mn\0"
  /* 4420 */ "SUB8mn\0"
  /* 4427 */ "SUBC8mn\0"
  /* 4435 */ "ADDC8mn\0"
  /* 4443 */ "BIC8mn\0"
  /* 4450 */ "DADD8mn\0"
  /* 4458 */ "AND8mn\0"
  /* 4465 */ "CMP8mn\0"
  /* 4472 */ "XOR8mn\0"
  /* 4479 */ "BIS8mn\0"
  /* 4486 */ "BIT8mn\0"
  /* 4493 */ "MOV8mn\0"
  /* 4500 */ "SUB16rn\0"
  /* 4508 */ "SUBC16rn\0"
  /* 4517 */ "ADDC16rn\0"
  /* 4526 */ "BIC16rn\0"
  /* 4534 */ "DADD16rn\0"
  /* 4543 */ "AND16rn\0"
  /* 4551 */ "CMP16rn\0"
  /* 4559 */ "XOR16rn\0"
  /* 4567 */ "BIS16rn\0"
  /* 4575 */ "BIT16rn\0"
  /* 4583 */ "MOV16rn\0"
  /* 4591 */ "SUB8rn\0"
  /* 4598 */ "SUBC8rn\0"
  /* 4606 */ "ADDC8rn\0"
  /* 4614 */ "BIC8rn\0"
  /* 4621 */ "DADD8rn\0"
  /* 4629 */ "AND8rn\0"
  /* 4636 */ "CMP8rn\0"
  /* 4643 */ "XOR8rn\0"
  /* 4650 */ "BIS8rn\0"
  /* 4657 */ "BIT8rn\0"
  /* 4664 */ "MOV8rn\0"
  /* 4671 */ "RRA16p\0"
  /* 4678 */ "SWPB16p\0"
  /* 4686 */ "RRC16p\0"
  /* 4693 */ "SEXT16p\0"
  /* 4701 */ "RRA8p\0"
  /* 4707 */ "RRC8p\0"
  /* 4713 */ "CALLp\0"
  /* 4719 */ "SUB16mp\0"
  /* 4727 */ "SUBC16mp\0"
  /* 4736 */ "ADDC16mp\0"
  /* 4745 */ "BIC16mp\0"
  /* 4753 */ "DADD16mp\0"
  /* 4762 */ "AND16mp\0"
  /* 4770 */ "CMP16mp\0"
  /* 4778 */ "XOR16mp\0"
  /* 4786 */ "BIS16mp\0"
  /* 4794 */ "BIT16mp\0"
  /* 4802 */ "SUB8mp\0"
  /* 4809 */ "SUBC8mp\0"
  /* 4817 */ "ADDC8mp\0"
  /* 4825 */ "BIC8mp\0"
  /* 4832 */ "DADD8mp\0"
  /* 4840 */ "AND8mp\0"
  /* 4847 */ "CMP8mp\0"
  /* 4854 */ "XOR8mp\0"
  /* 4861 */ "BIS8mp\0"
  /* 4868 */ "BIT8mp\0"
  /* 4875 */ "SUB16rp\0"
  /* 4883 */ "SUBC16rp\0"
  /* 4892 */ "ADDC16rp\0"
  /* 4901 */ "BIC16rp\0"
  /* 4909 */ "DADD16rp\0"
  /* 4918 */ "AND16rp\0"
  /* 4926 */ "CMP16rp\0"
  /* 4934 */ "XOR16rp\0"
  /* 4942 */ "BIS16rp\0"
  /* 4950 */ "BIT16rp\0"
  /* 4958 */ "MOV16rp\0"
  /* 4966 */ "SUB8rp\0"
  /* 4973 */ "SUBC8rp\0"
  /* 4981 */ "ADDC8rp\0"
  /* 4989 */ "BIC8rp\0"
  /* 4996 */ "DADD8rp\0"
  /* 5004 */ "AND8rp\0"
  /* 5011 */ "CMP8rp\0"
  /* 5018 */ "XOR8rp\0"
  /* 5025 */ "BIS8rp\0"
  /* 5032 */ "BIT8rp\0"
  /* 5039 */ "MOV8rp\0"
  /* 5046 */ "RRA16r\0"
  /* 5053 */ "SWPB16r\0"
  /* 5061 */ "RRC16r\0"
  /* 5068 */ "PUSH16r\0"
  /* 5076 */ "POP16r\0"
  /* 5083 */ "SEXT16r\0"
  /* 5091 */ "ZEXT16r\0"
  /* 5099 */ "RRA8r\0"
  /* 5105 */ "RRC8r\0"
  /* 5111 */ "PUSH8r\0"
  /* 5118 */ "Br\0"
  /* 5121 */ "CALLr\0"
  /* 5127 */ "SUB16mr\0"
  /* 5135 */ "SUBC16mr\0"
  /* 5144 */ "ADDC16mr\0"
  /* 5153 */ "BIC16mr\0"
  /* 5161 */ "DADD16mr\0"
  /* 5170 */ "AND16mr\0"
  /* 5178 */ "CMP16mr\0"
  /* 5186 */ "XOR16mr\0"
  /* 5194 */ "BIS16mr\0"
  /* 5202 */ "BIT16mr\0"
  /* 5210 */ "MOV16mr\0"
  /* 5218 */ "SUB8mr\0"
  /* 5225 */ "SUBC8mr\0"
  /* 5233 */ "ADDC8mr\0"
  /* 5241 */ "BIC8mr\0"
  /* 5248 */ "DADD8mr\0"
  /* 5256 */ "AND8mr\0"
  /* 5263 */ "CMP8mr\0"
  /* 5270 */ "XOR8mr\0"
  /* 5277 */ "BIS8mr\0"
  /* 5284 */ "BIT8mr\0"
  /* 5291 */ "MOV8mr\0"
  /* 5298 */ "SUB16rr\0"
  /* 5306 */ "SUBC16rr\0"
  /* 5315 */ "ADDC16rr\0"
  /* 5324 */ "BIC16rr\0"
  /* 5332 */ "DADD16rr\0"
  /* 5341 */ "AND16rr\0"
  /* 5349 */ "CMP16rr\0"
  /* 5357 */ "XOR16rr\0"
  /* 5365 */ "BIS16rr\0"
  /* 5373 */ "BIT16rr\0"
  /* 5381 */ "MOV16rr\0"
  /* 5389 */ "SUB8rr\0"
  /* 5396 */ "SUBC8rr\0"
  /* 5404 */ "ADDC8rr\0"
  /* 5412 */ "BIC8rr\0"
  /* 5419 */ "DADD8rr\0"
  /* 5427 */ "AND8rr\0"
  /* 5434 */ "CMP8rr\0"
  /* 5441 */ "XOR8rr\0"
  /* 5448 */ "BIS8rr\0"
  /* 5455 */ "BIT8rr\0"
  /* 5462 */ "MOV8rr\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned MSP430InstrNameIndices[] = {
    1117U, 1492U, 1980U, 1715U, 1181U, 1162U, 1190U, 1328U, 
    975U, 990U, 941U, 1017U, 2316U, 843U, 2843U, 954U, 
    1113U, 1171U, 698U, 3151U, 770U, 2747U, 547U, 649U, 
    686U, 1804U, 1316U, 2676U, 632U, 1949U, 1080U, 2665U, 
    793U, 1922U, 1909U, 2017U, 2547U, 2570U, 1248U, 1295U, 
    1268U, 1207U, 2006U, 2873U, 2903U, 1566U, 460U, 167U, 
    1431U, 2938U, 2945U, 1458U, 1465U, 1472U, 1482U, 525U, 
    2209U, 2172U, 939U, 1115U, 3074U, 853U, 1333U, 2515U, 
    2260U, 2784U, 2277U, 2124U, 241U, 2299U, 2687U, 2236U, 
    2816U, 878U, 606U, 215U, 588U, 2706U, 1544U, 2042U, 
    361U, 305U, 335U, 346U, 286U, 316U, 822U, 806U, 
    2346U, 1031U, 1048U, 476U, 173U, 531U, 492U, 2214U, 
    2178U, 3058U, 1692U, 3041U, 1675U, 427U, 150U, 2976U, 
    1610U, 1835U, 1813U, 678U, 560U, 2534U, 2762U, 193U, 
    2376U, 2887U, 233U, 2654U, 2642U, 2737U, 1072U, 2866U, 
    1004U, 2896U, 1234U, 2108U, 2094U, 1227U, 2101U, 2229U, 
    1349U, 1890U, 1883U, 2525U, 1772U, 719U, 1756U, 670U, 
    1764U, 711U, 1748U, 662U, 1788U, 1780U, 1105U, 1097U, 
    2433U, 2423U, 2413U, 2403U, 2453U, 2443U, 3102U, 3112U, 
    2463U, 2476U, 3122U, 3132U, 2489U, 2502U, 385U, 129U, 
    1373U, 110U, 279U, 2917U, 1437U, 2952U, 1144U, 1968U, 
    17U, 1065U, 9U, 0U, 968U, 2858U, 205U, 1121U, 
    1135U, 1865U, 1874U, 2247U, 1581U, 2333U, 887U, 1524U, 
    1534U, 727U, 742U, 1502U, 1513U, 466U, 1152U, 1644U, 
    3010U, 1668U, 3034U, 2254U, 579U, 569U, 1975U, 2594U, 
    2622U, 2601U, 2139U, 3163U, 921U, 3156U, 903U, 1901U, 
    1857U, 830U, 1240U, 2292U, 1708U, 2793U, 2115U, 2698U, 
    2724U, 2826U, 1993U, 757U, 262U, 413U, 136U, 1401U, 
    2924U, 1444U, 116U, 2801U, 2061U, 2077U, 3142U, 777U, 
    868U, 2561U, 1796U, 392U, 1380U, 368U, 1356U, 2959U, 
    1593U, 444U, 1415U, 509U, 2194U, 2156U, 2993U, 1627U, 
    3017U, 1651U, 3088U, 3095U, 3213U, 3581U, 3974U, 4364U, 
    4754U, 5162U, 3384U, 3752U, 4145U, 4535U, 4910U, 5333U, 
    3300U, 3668U, 4061U, 4451U, 4833U, 5249U, 3471U, 3839U, 
    4232U, 4622U, 4997U, 5420U, 3195U, 3563U, 3956U, 4346U, 
    4736U, 5144U, 3366U, 3734U, 4127U, 4517U, 4892U, 5315U, 
    3284U, 3652U, 4045U, 4435U, 4817U, 5233U, 3455U, 3823U, 
    4216U, 4606U, 4981U, 5404U, 3520U, 1731U, 1934U, 3221U, 
    3589U, 3982U, 4372U, 4762U, 5170U, 3392U, 3760U, 4153U, 
    4543U, 4918U, 5341U, 3307U, 3675U, 4068U, 4458U, 4840U, 
    5256U, 3478U, 3846U, 4239U, 4629U, 5004U, 5427U, 3204U, 
    3572U, 3965U, 4355U, 4745U, 5153U, 3375U, 3743U, 4136U, 
    4526U, 4901U, 5324U, 3292U, 3660U, 4053U, 4443U, 4825U, 
    5241U, 3463U, 3831U, 4224U, 4614U, 4989U, 5412U, 3245U, 
    3613U, 4006U, 4396U, 4786U, 5194U, 3416U, 3784U, 4177U, 
    4567U, 4942U, 5365U, 3328U, 3696U, 4089U, 4479U, 4861U, 
    5277U, 3499U, 3867U, 4260U, 4650U, 5025U, 5448U, 3253U, 
    3621U, 4014U, 4404U, 4794U, 5202U, 3424U, 3792U, 4185U, 
    4575U, 4950U, 5373U, 3335U, 3703U, 4096U, 4486U, 4868U, 
    5284U, 3506U, 3874U, 4267U, 4657U, 5032U, 5455U, 3537U, 
    3930U, 5118U, 3540U, 3933U, 4323U, 4713U, 5121U, 3229U, 
    3597U, 3990U, 4380U, 4770U, 5178U, 3400U, 3768U, 4161U, 
    4551U, 4926U, 5349U, 3314U, 3682U, 4075U, 4465U, 4847U, 
    5263U, 3485U, 3853U, 4246U, 4636U, 5011U, 5434U, 3212U, 
    3580U, 3973U, 4363U, 4753U, 5161U, 3383U, 3751U, 4144U, 
    4534U, 4909U, 5332U, 3299U, 3667U, 4060U, 4450U, 4832U, 
    5248U, 3470U, 3838U, 4231U, 4621U, 4996U, 5419U, 189U, 
    1897U, 3261U, 3629U, 4022U, 4412U, 5210U, 3432U, 3800U, 
    4193U, 4583U, 4958U, 5381U, 3342U, 3710U, 4103U, 4493U, 
    5291U, 3513U, 3881U, 4274U, 4664U, 5039U, 5462U, 80U, 
    91U, 5076U, 3170U, 3529U, 5068U, 5111U, 2557U, 1130U, 
    3888U, 4281U, 4671U, 5046U, 3918U, 4311U, 4701U, 5099U, 
    3903U, 4296U, 4686U, 5061U, 3924U, 4317U, 4707U, 5105U, 
    31U, 64U, 3910U, 4303U, 4693U, 5083U, 3178U, 3546U, 
    3939U, 4329U, 4719U, 5127U, 3349U, 3717U, 4110U, 4500U, 
    4875U, 5298U, 3269U, 3637U, 4030U, 4420U, 4802U, 5218U, 
    3440U, 3808U, 4201U, 4591U, 4966U, 5389U, 3186U, 3554U, 
    3947U, 4337U, 4727U, 5135U, 3357U, 3725U, 4118U, 4508U, 
    4883U, 5306U, 3276U, 3644U, 4037U, 4427U, 4809U, 5225U, 
    3447U, 3815U, 4208U, 4598U, 4973U, 5396U, 3895U, 4288U, 
    4678U, 5053U, 50U, 102U, 38U, 70U, 25U, 59U, 
    44U, 75U, 3237U, 3605U, 3998U, 4388U, 4778U, 5186U, 
    3408U, 3776U, 4169U, 4559U, 4934U, 5357U, 3321U, 3689U, 
    4082U, 4472U, 4854U, 5270U, 3492U, 3860U, 4253U, 4643U, 
    5018U, 5441U, 5091U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, nullptr, nullptr, 595);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(unsigned CFSetupOpcode = ~0u, unsigned CFDestroyOpcode = ~0u, unsigned CatchRetOpcode = ~0u, unsigned ReturnOpcode = ~0u);
  ~MSP430GenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(unsigned CFSetupOpcode, unsigned CFDestroyOpcode, unsigned CatchRetOpcode, unsigned ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, nullptr, nullptr, 595);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes {
enum OperandType {
  cc = 0,
  cg16imm = 1,
  cg8imm = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  indreg = 10,
  jmptarget = 11,
  memdst = 12,
  memsrc = 13,
  postreg = 14,
  ptype0 = 15,
  ptype1 = 16,
  ptype2 = 17,
  ptype3 = 18,
  ptype4 = 19,
  ptype5 = 20,
  type0 = 21,
  type1 = 22,
  type2 = 23,
  type3 = 24,
  type4 = 25,
  type5 = 26,
  untyped_imm_0 = 27,
  GR16 = 28,
  GR8 = 29,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace MSP430 {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  static const uint16_t Offsets[] = {
    /* PHI */
    0,
    /* INLINEASM */
    1,
    /* INLINEASM_BR */
    1,
    /* CFI_INSTRUCTION */
    1,
    /* EH_LABEL */
    2,
    /* GC_LABEL */
    3,
    /* ANNOTATION_LABEL */
    4,
    /* KILL */
    5,
    /* EXTRACT_SUBREG */
    5,
    /* INSERT_SUBREG */
    8,
    /* IMPLICIT_DEF */
    12,
    /* SUBREG_TO_REG */
    13,
    /* COPY_TO_REGCLASS */
    17,
    /* DBG_VALUE */
    20,
    /* DBG_VALUE_LIST */
    20,
    /* DBG_INSTR_REF */
    20,
    /* DBG_PHI */
    20,
    /* DBG_LABEL */
    20,
    /* REG_SEQUENCE */
    21,
    /* COPY */
    23,
    /* BUNDLE */
    25,
    /* LIFETIME_START */
    25,
    /* LIFETIME_END */
    26,
    /* PSEUDO_PROBE */
    27,
    /* ARITH_FENCE */
    31,
    /* STACKMAP */
    33,
    /* FENTRY_CALL */
    35,
    /* PATCHPOINT */
    35,
    /* LOAD_STACK_GUARD */
    41,
    /* PREALLOCATED_SETUP */
    42,
    /* PREALLOCATED_ARG */
    43,
    /* STATEPOINT */
    46,
    /* LOCAL_ESCAPE */
    46,
    /* FAULTING_OP */
    48,
    /* PATCHABLE_OP */
    49,
    /* PATCHABLE_FUNCTION_ENTER */
    49,
    /* PATCHABLE_RET */
    49,
    /* PATCHABLE_FUNCTION_EXIT */
    49,
    /* PATCHABLE_TAIL_CALL */
    49,
    /* PATCHABLE_EVENT_CALL */
    49,
    /* PATCHABLE_TYPED_EVENT_CALL */
    51,
    /* ICALL_BRANCH_FUNNEL */
    54,
    /* MEMBARRIER */
    54,
    /* G_ASSERT_SEXT */
    54,
    /* G_ASSERT_ZEXT */
    57,
    /* G_ASSERT_ALIGN */
    60,
    /* G_ADD */
    63,
    /* G_SUB */
    66,
    /* G_MUL */
    69,
    /* G_SDIV */
    72,
    /* G_UDIV */
    75,
    /* G_SREM */
    78,
    /* G_UREM */
    81,
    /* G_SDIVREM */
    84,
    /* G_UDIVREM */
    88,
    /* G_AND */
    92,
    /* G_OR */
    95,
    /* G_XOR */
    98,
    /* G_IMPLICIT_DEF */
    101,
    /* G_PHI */
    102,
    /* G_FRAME_INDEX */
    103,
    /* G_GLOBAL_VALUE */
    105,
    /* G_CONSTANT_POOL */
    107,
    /* G_EXTRACT */
    109,
    /* G_UNMERGE_VALUES */
    112,
    /* G_INSERT */
    114,
    /* G_MERGE_VALUES */
    118,
    /* G_BUILD_VECTOR */
    120,
    /* G_BUILD_VECTOR_TRUNC */
    122,
    /* G_CONCAT_VECTORS */
    124,
    /* G_PTRTOINT */
    126,
    /* G_INTTOPTR */
    128,
    /* G_BITCAST */
    130,
    /* G_FREEZE */
    132,
    /* G_INTRINSIC_FPTRUNC_ROUND */
    134,
    /* G_INTRINSIC_TRUNC */
    137,
    /* G_INTRINSIC_ROUND */
    139,
    /* G_INTRINSIC_LRINT */
    141,
    /* G_INTRINSIC_ROUNDEVEN */
    143,
    /* G_READCYCLECOUNTER */
    145,
    /* G_LOAD */
    146,
    /* G_SEXTLOAD */
    148,
    /* G_ZEXTLOAD */
    150,
    /* G_INDEXED_LOAD */
    152,
    /* G_INDEXED_SEXTLOAD */
    157,
    /* G_INDEXED_ZEXTLOAD */
    162,
    /* G_STORE */
    167,
    /* G_INDEXED_STORE */
    169,
    /* G_ATOMIC_CMPXCHG_WITH_SUCCESS */
    174,
    /* G_ATOMIC_CMPXCHG */
    179,
    /* G_ATOMICRMW_XCHG */
    183,
    /* G_ATOMICRMW_ADD */
    186,
    /* G_ATOMICRMW_SUB */
    189,
    /* G_ATOMICRMW_AND */
    192,
    /* G_ATOMICRMW_NAND */
    195,
    /* G_ATOMICRMW_OR */
    198,
    /* G_ATOMICRMW_XOR */
    201,
    /* G_ATOMICRMW_MAX */
    204,
    /* G_ATOMICRMW_MIN */
    207,
    /* G_ATOMICRMW_UMAX */
    210,
    /* G_ATOMICRMW_UMIN */
    213,
    /* G_ATOMICRMW_FADD */
    216,
    /* G_ATOMICRMW_FSUB */
    219,
    /* G_ATOMICRMW_FMAX */
    222,
    /* G_ATOMICRMW_FMIN */
    225,
    /* G_ATOMICRMW_UINC_WRAP */
    228,
    /* G_ATOMICRMW_UDEC_WRAP */
    231,
    /* G_FENCE */
    234,
    /* G_BRCOND */
    236,
    /* G_BRINDIRECT */
    238,
    /* G_INVOKE_REGION_START */
    239,
    /* G_INTRINSIC */
    239,
    /* G_INTRINSIC_W_SIDE_EFFECTS */
    240,
    /* G_ANYEXT */
    241,
    /* G_TRUNC */
    243,
    /* G_CONSTANT */
    245,
    /* G_FCONSTANT */
    247,
    /* G_VASTART */
    249,
    /* G_VAARG */
    250,
    /* G_SEXT */
    253,
    /* G_SEXT_INREG */
    255,
    /* G_ZEXT */
    258,
    /* G_SHL */
    260,
    /* G_LSHR */
    263,
    /* G_ASHR */
    266,
    /* G_FSHL */
    269,
    /* G_FSHR */
    273,
    /* G_ROTR */
    277,
    /* G_ROTL */
    280,
    /* G_ICMP */
    283,
    /* G_FCMP */
    287,
    /* G_SELECT */
    291,
    /* G_UADDO */
    295,
    /* G_UADDE */
    299,
    /* G_USUBO */
    304,
    /* G_USUBE */
    308,
    /* G_SADDO */
    313,
    /* G_SADDE */
    317,
    /* G_SSUBO */
    322,
    /* G_SSUBE */
    326,
    /* G_UMULO */
    331,
    /* G_SMULO */
    335,
    /* G_UMULH */
    339,
    /* G_SMULH */
    342,
    /* G_UADDSAT */
    345,
    /* G_SADDSAT */
    348,
    /* G_USUBSAT */
    351,
    /* G_SSUBSAT */
    354,
    /* G_USHLSAT */
    357,
    /* G_SSHLSAT */
    360,
    /* G_SMULFIX */
    363,
    /* G_UMULFIX */
    367,
    /* G_SMULFIXSAT */
    371,
    /* G_UMULFIXSAT */
    375,
    /* G_SDIVFIX */
    379,
    /* G_UDIVFIX */
    383,
    /* G_SDIVFIXSAT */
    387,
    /* G_UDIVFIXSAT */
    391,
    /* G_FADD */
    395,
    /* G_FSUB */
    398,
    /* G_FMUL */
    401,
    /* G_FMA */
    404,
    /* G_FMAD */
    408,
    /* G_FDIV */
    412,
    /* G_FREM */
    415,
    /* G_FPOW */
    418,
    /* G_FPOWI */
    421,
    /* G_FEXP */
    424,
    /* G_FEXP2 */
    426,
    /* G_FLOG */
    428,
    /* G_FLOG2 */
    430,
    /* G_FLOG10 */
    432,
    /* G_FNEG */
    434,
    /* G_FPEXT */
    436,
    /* G_FPTRUNC */
    438,
    /* G_FPTOSI */
    440,
    /* G_FPTOUI */
    442,
    /* G_SITOFP */
    444,
    /* G_UITOFP */
    446,
    /* G_FABS */
    448,
    /* G_FCOPYSIGN */
    450,
    /* G_IS_FPCLASS */
    453,
    /* G_FCANONICALIZE */
    456,
    /* G_FMINNUM */
    458,
    /* G_FMAXNUM */
    461,
    /* G_FMINNUM_IEEE */
    464,
    /* G_FMAXNUM_IEEE */
    467,
    /* G_FMINIMUM */
    470,
    /* G_FMAXIMUM */
    473,
    /* G_PTR_ADD */
    476,
    /* G_PTRMASK */
    479,
    /* G_SMIN */
    482,
    /* G_SMAX */
    485,
    /* G_UMIN */
    488,
    /* G_UMAX */
    491,
    /* G_ABS */
    494,
    /* G_LROUND */
    496,
    /* G_LLROUND */
    498,
    /* G_BR */
    500,
    /* G_BRJT */
    501,
    /* G_INSERT_VECTOR_ELT */
    504,
    /* G_EXTRACT_VECTOR_ELT */
    508,
    /* G_SHUFFLE_VECTOR */
    511,
    /* G_CTTZ */
    515,
    /* G_CTTZ_ZERO_UNDEF */
    517,
    /* G_CTLZ */
    519,
    /* G_CTLZ_ZERO_UNDEF */
    521,
    /* G_CTPOP */
    523,
    /* G_BSWAP */
    525,
    /* G_BITREVERSE */
    527,
    /* G_FCEIL */
    529,
    /* G_FCOS */
    531,
    /* G_FSIN */
    533,
    /* G_FSQRT */
    535,
    /* G_FFLOOR */
    537,
    /* G_FRINT */
    539,
    /* G_FNEARBYINT */
    541,
    /* G_ADDRSPACE_CAST */
    543,
    /* G_BLOCK_ADDR */
    545,
    /* G_JUMP_TABLE */
    547,
    /* G_DYN_STACKALLOC */
    549,
    /* G_STRICT_FADD */
    552,
    /* G_STRICT_FSUB */
    555,
    /* G_STRICT_FMUL */
    558,
    /* G_STRICT_FDIV */
    561,
    /* G_STRICT_FREM */
    564,
    /* G_STRICT_FMA */
    567,
    /* G_STRICT_FSQRT */
    571,
    /* G_READ_REGISTER */
    573,
    /* G_WRITE_REGISTER */
    575,
    /* G_MEMCPY */
    577,
    /* G_MEMCPY_INLINE */
    581,
    /* G_MEMMOVE */
    584,
    /* G_MEMSET */
    588,
    /* G_BZERO */
    592,
    /* G_VECREDUCE_SEQ_FADD */
    595,
    /* G_VECREDUCE_SEQ_FMUL */
    598,
    /* G_VECREDUCE_FADD */
    601,
    /* G_VECREDUCE_FMUL */
    603,
    /* G_VECREDUCE_FMAX */
    605,
    /* G_VECREDUCE_FMIN */
    607,
    /* G_VECREDUCE_ADD */
    609,
    /* G_VECREDUCE_MUL */
    611,
    /* G_VECREDUCE_AND */
    613,
    /* G_VECREDUCE_OR */
    615,
    /* G_VECREDUCE_XOR */
    617,
    /* G_VECREDUCE_SMAX */
    619,
    /* G_VECREDUCE_SMIN */
    621,
    /* G_VECREDUCE_UMAX */
    623,
    /* G_VECREDUCE_UMIN */
    625,
    /* G_SBFX */
    627,
    /* G_UBFX */
    631,
    /* ADD16mc */
    635,
    /* ADD16mi */
    638,
    /* ADD16mm */
    641,
    /* ADD16mn */
    645,
    /* ADD16mp */
    648,
    /* ADD16mr */
    651,
    /* ADD16rc */
    654,
    /* ADD16ri */
    657,
    /* ADD16rm */
    660,
    /* ADD16rn */
    664,
    /* ADD16rp */
    667,
    /* ADD16rr */
    671,
    /* ADD8mc */
    674,
    /* ADD8mi */
    677,
    /* ADD8mm */
    680,
    /* ADD8mn */
    684,
    /* ADD8mp */
    687,
    /* ADD8mr */
    690,
    /* ADD8rc */
    693,
    /* ADD8ri */
    696,
    /* ADD8rm */
    699,
    /* ADD8rn */
    703,
    /* ADD8rp */
    706,
    /* ADD8rr */
    710,
    /* ADDC16mc */
    713,
    /* ADDC16mi */
    716,
    /* ADDC16mm */
    719,
    /* ADDC16mn */
    723,
    /* ADDC16mp */
    726,
    /* ADDC16mr */
    729,
    /* ADDC16rc */
    732,
    /* ADDC16ri */
    735,
    /* ADDC16rm */
    738,
    /* ADDC16rn */
    742,
    /* ADDC16rp */
    745,
    /* ADDC16rr */
    749,
    /* ADDC8mc */
    752,
    /* ADDC8mi */
    755,
    /* ADDC8mm */
    758,
    /* ADDC8mn */
    762,
    /* ADDC8mp */
    765,
    /* ADDC8mr */
    768,
    /* ADDC8rc */
    771,
    /* ADDC8ri */
    774,
    /* ADDC8rm */
    777,
    /* ADDC8rn */
    781,
    /* ADDC8rp */
    784,
    /* ADDC8rr */
    788,
    /* ADDframe */
    791,
    /* ADJCALLSTACKDOWN */
    794,
    /* ADJCALLSTACKUP */
    796,
    /* AND16mc */
    798,
    /* AND16mi */
    801,
    /* AND16mm */
    804,
    /* AND16mn */
    808,
    /* AND16mp */
    811,
    /* AND16mr */
    814,
    /* AND16rc */
    817,
    /* AND16ri */
    820,
    /* AND16rm */
    823,
    /* AND16rn */
    827,
    /* AND16rp */
    830,
    /* AND16rr */
    834,
    /* AND8mc */
    837,
    /* AND8mi */
    840,
    /* AND8mm */
    843,
    /* AND8mn */
    847,
    /* AND8mp */
    850,
    /* AND8mr */
    853,
    /* AND8rc */
    856,
    /* AND8ri */
    859,
    /* AND8rm */
    862,
    /* AND8rn */
    866,
    /* AND8rp */
    869,
    /* AND8rr */
    873,
    /* BIC16mc */
    876,
    /* BIC16mi */
    879,
    /* BIC16mm */
    882,
    /* BIC16mn */
    886,
    /* BIC16mp */
    889,
    /* BIC16mr */
    892,
    /* BIC16rc */
    895,
    /* BIC16ri */
    898,
    /* BIC16rm */
    901,
    /* BIC16rn */
    905,
    /* BIC16rp */
    908,
    /* BIC16rr */
    912,
    /* BIC8mc */
    915,
    /* BIC8mi */
    918,
    /* BIC8mm */
    921,
    /* BIC8mn */
    925,
    /* BIC8mp */
    928,
    /* BIC8mr */
    931,
    /* BIC8rc */
    934,
    /* BIC8ri */
    937,
    /* BIC8rm */
    940,
    /* BIC8rn */
    944,
    /* BIC8rp */
    947,
    /* BIC8rr */
    951,
    /* BIS16mc */
    954,
    /* BIS16mi */
    957,
    /* BIS16mm */
    960,
    /* BIS16mn */
    964,
    /* BIS16mp */
    967,
    /* BIS16mr */
    970,
    /* BIS16rc */
    973,
    /* BIS16ri */
    976,
    /* BIS16rm */
    979,
    /* BIS16rn */
    983,
    /* BIS16rp */
    986,
    /* BIS16rr */
    990,
    /* BIS8mc */
    993,
    /* BIS8mi */
    996,
    /* BIS8mm */
    999,
    /* BIS8mn */
    1003,
    /* BIS8mp */
    1006,
    /* BIS8mr */
    1009,
    /* BIS8rc */
    1012,
    /* BIS8ri */
    1015,
    /* BIS8rm */
    1018,
    /* BIS8rn */
    1022,
    /* BIS8rp */
    1025,
    /* BIS8rr */
    1029,
    /* BIT16mc */
    1032,
    /* BIT16mi */
    1035,
    /* BIT16mm */
    1038,
    /* BIT16mn */
    1042,
    /* BIT16mp */
    1045,
    /* BIT16mr */
    1048,
    /* BIT16rc */
    1051,
    /* BIT16ri */
    1053,
    /* BIT16rm */
    1055,
    /* BIT16rn */
    1058,
    /* BIT16rp */
    1060,
    /* BIT16rr */
    1062,
    /* BIT8mc */
    1064,
    /* BIT8mi */
    1067,
    /* BIT8mm */
    1070,
    /* BIT8mn */
    1074,
    /* BIT8mp */
    1077,
    /* BIT8mr */
    1080,
    /* BIT8rc */
    1083,
    /* BIT8ri */
    1085,
    /* BIT8rm */
    1087,
    /* BIT8rn */
    1090,
    /* BIT8rp */
    1092,
    /* BIT8rr */
    1094,
    /* Bi */
    1096,
    /* Bm */
    1097,
    /* Br */
    1099,
    /* CALLi */
    1100,
    /* CALLm */
    1101,
    /* CALLn */
    1103,
    /* CALLp */
    1104,
    /* CALLr */
    1105,
    /* CMP16mc */
    1106,
    /* CMP16mi */
    1109,
    /* CMP16mm */
    1112,
    /* CMP16mn */
    1116,
    /* CMP16mp */
    1119,
    /* CMP16mr */
    1122,
    /* CMP16rc */
    1125,
    /* CMP16ri */
    1127,
    /* CMP16rm */
    1129,
    /* CMP16rn */
    1132,
    /* CMP16rp */
    1134,
    /* CMP16rr */
    1136,
    /* CMP8mc */
    1138,
    /* CMP8mi */
    1141,
    /* CMP8mm */
    1144,
    /* CMP8mn */
    1148,
    /* CMP8mp */
    1151,
    /* CMP8mr */
    1154,
    /* CMP8rc */
    1157,
    /* CMP8ri */
    1159,
    /* CMP8rm */
    1161,
    /* CMP8rn */
    1164,
    /* CMP8rp */
    1166,
    /* CMP8rr */
    1168,
    /* DADD16mc */
    1170,
    /* DADD16mi */
    1173,
    /* DADD16mm */
    1176,
    /* DADD16mn */
    1180,
    /* DADD16mp */
    1183,
    /* DADD16mr */
    1186,
    /* DADD16rc */
    1189,
    /* DADD16ri */
    1192,
    /* DADD16rm */
    1195,
    /* DADD16rn */
    1199,
    /* DADD16rp */
    1202,
    /* DADD16rr */
    1206,
    /* DADD8mc */
    1209,
    /* DADD8mi */
    1212,
    /* DADD8mm */
    1215,
    /* DADD8mn */
    1219,
    /* DADD8mp */
    1222,
    /* DADD8mr */
    1225,
    /* DADD8rc */
    1228,
    /* DADD8ri */
    1231,
    /* DADD8rm */
    1234,
    /* DADD8rn */
    1238,
    /* DADD8rp */
    1241,
    /* DADD8rr */
    1245,
    /* JCC */
    1248,
    /* JMP */
    1250,
    /* MOV16mc */
    1251,
    /* MOV16mi */
    1254,
    /* MOV16mm */
    1257,
    /* MOV16mn */
    1261,
    /* MOV16mr */
    1264,
    /* MOV16rc */
    1267,
    /* MOV16ri */
    1269,
    /* MOV16rm */
    1271,
    /* MOV16rn */
    1274,
    /* MOV16rp */
    1276,
    /* MOV16rr */
    1279,
    /* MOV8mc */
    1281,
    /* MOV8mi */
    1284,
    /* MOV8mm */
    1287,
    /* MOV8mn */
    1291,
    /* MOV8mr */
    1294,
    /* MOV8rc */
    1297,
    /* MOV8ri */
    1299,
    /* MOV8rm */
    1301,
    /* MOV8rn */
    1304,
    /* MOV8rp */
    1306,
    /* MOV8rr */
    1309,
    /* MOVZX16rm8 */
    1311,
    /* MOVZX16rr8 */
    1314,
    /* POP16r */
    1316,
    /* PUSH16c */
    1317,
    /* PUSH16i */
    1318,
    /* PUSH16r */
    1319,
    /* PUSH8r */
    1320,
    /* RET */
    1321,
    /* RETI */
    1321,
    /* RRA16m */
    1321,
    /* RRA16n */
    1323,
    /* RRA16p */
    1324,
    /* RRA16r */
    1325,
    /* RRA8m */
    1327,
    /* RRA8n */
    1329,
    /* RRA8p */
    1330,
    /* RRA8r */
    1331,
    /* RRC16m */
    1333,
    /* RRC16n */
    1335,
    /* RRC16p */
    1336,
    /* RRC16r */
    1337,
    /* RRC8m */
    1339,
    /* RRC8n */
    1341,
    /* RRC8p */
    1342,
    /* RRC8r */
    1343,
    /* Rrcl16 */
    1345,
    /* Rrcl8 */
    1347,
    /* SEXT16m */
    1349,
    /* SEXT16n */
    1351,
    /* SEXT16p */
    1352,
    /* SEXT16r */
    1353,
    /* SUB16mc */
    1355,
    /* SUB16mi */
    1358,
    /* SUB16mm */
    1361,
    /* SUB16mn */
    1365,
    /* SUB16mp */
    1368,
    /* SUB16mr */
    1371,
    /* SUB16rc */
    1374,
    /* SUB16ri */
    1377,
    /* SUB16rm */
    1380,
    /* SUB16rn */
    1384,
    /* SUB16rp */
    1387,
    /* SUB16rr */
    1391,
    /* SUB8mc */
    1394,
    /* SUB8mi */
    1397,
    /* SUB8mm */
    1400,
    /* SUB8mn */
    1404,
    /* SUB8mp */
    1407,
    /* SUB8mr */
    1410,
    /* SUB8rc */
    1413,
    /* SUB8ri */
    1416,
    /* SUB8rm */
    1419,
    /* SUB8rn */
    1423,
    /* SUB8rp */
    1426,
    /* SUB8rr */
    1430,
    /* SUBC16mc */
    1433,
    /* SUBC16mi */
    1436,
    /* SUBC16mm */
    1439,
    /* SUBC16mn */
    1443,
    /* SUBC16mp */
    1446,
    /* SUBC16mr */
    1449,
    /* SUBC16rc */
    1452,
    /* SUBC16ri */
    1455,
    /* SUBC16rm */
    1458,
    /* SUBC16rn */
    1462,
    /* SUBC16rp */
    1465,
    /* SUBC16rr */
    1469,
    /* SUBC8mc */
    1472,
    /* SUBC8mi */
    1475,
    /* SUBC8mm */
    1478,
    /* SUBC8mn */
    1482,
    /* SUBC8mp */
    1485,
    /* SUBC8mr */
    1488,
    /* SUBC8rc */
    1491,
    /* SUBC8ri */
    1494,
    /* SUBC8rm */
    1497,
    /* SUBC8rn */
    1501,
    /* SUBC8rp */
    1504,
    /* SUBC8rr */
    1508,
    /* SWPB16m */
    1511,
    /* SWPB16n */
    1513,
    /* SWPB16p */
    1514,
    /* SWPB16r */
    1515,
    /* Select16 */
    1517,
    /* Select8 */
    1521,
    /* Shl16 */
    1525,
    /* Shl8 */
    1528,
    /* Sra16 */
    1531,
    /* Sra8 */
    1534,
    /* Srl16 */
    1537,
    /* Srl8 */
    1540,
    /* XOR16mc */
    1543,
    /* XOR16mi */
    1546,
    /* XOR16mm */
    1549,
    /* XOR16mn */
    1553,
    /* XOR16mp */
    1556,
    /* XOR16mr */
    1559,
    /* XOR16rc */
    1562,
    /* XOR16ri */
    1565,
    /* XOR16rm */
    1568,
    /* XOR16rn */
    1572,
    /* XOR16rp */
    1575,
    /* XOR16rr */
    1579,
    /* XOR8mc */
    1582,
    /* XOR8mi */
    1585,
    /* XOR8mm */
    1588,
    /* XOR8mn */
    1592,
    /* XOR8mp */
    1595,
    /* XOR8mr */
    1598,
    /* XOR8rc */
    1601,
    /* XOR8ri */
    1604,
    /* XOR8rm */
    1607,
    /* XOR8rn */
    1611,
    /* XOR8rp */
    1614,
    /* XOR8rr */
    1618,
    /* ZEXT16r */
    1621,
  };

  using namespace OpTypes;
  static const int8_t OpcodeOperandTypes[] = {
    
    /* PHI */
    -1, 
    /* INLINEASM */
    /* INLINEASM_BR */
    /* CFI_INSTRUCTION */
    i32imm, 
    /* EH_LABEL */
    i32imm, 
    /* GC_LABEL */
    i32imm, 
    /* ANNOTATION_LABEL */
    i32imm, 
    /* KILL */
    /* EXTRACT_SUBREG */
    -1, -1, i32imm, 
    /* INSERT_SUBREG */
    -1, -1, -1, i32imm, 
    /* IMPLICIT_DEF */
    -1, 
    /* SUBREG_TO_REG */
    -1, -1, -1, i32imm, 
    /* COPY_TO_REGCLASS */
    -1, -1, i32imm, 
    /* DBG_VALUE */
    /* DBG_VALUE_LIST */
    /* DBG_INSTR_REF */
    /* DBG_PHI */
    /* DBG_LABEL */
    -1, 
    /* REG_SEQUENCE */
    -1, -1, 
    /* COPY */
    -1, -1, 
    /* BUNDLE */
    /* LIFETIME_START */
    i32imm, 
    /* LIFETIME_END */
    i32imm, 
    /* PSEUDO_PROBE */
    i64imm, i64imm, i8imm, i32imm, 
    /* ARITH_FENCE */
    -1, -1, 
    /* STACKMAP */
    i64imm, i32imm, 
    /* FENTRY_CALL */
    /* PATCHPOINT */
    -1, i64imm, i32imm, -1, i32imm, i32imm, 
    /* LOAD_STACK_GUARD */
    -1, 
    /* PREALLOCATED_SETUP */
    i32imm, 
    /* PREALLOCATED_ARG */
    -1, i32imm, i32imm, 
    /* STATEPOINT */
    /* LOCAL_ESCAPE */
    -1, i32imm, 
    /* FAULTING_OP */
    -1, 
    /* PATCHABLE_OP */
    /* PATCHABLE_FUNCTION_ENTER */
    /* PATCHABLE_RET */
    /* PATCHABLE_FUNCTION_EXIT */
    /* PATCHABLE_TAIL_CALL */
    /* PATCHABLE_EVENT_CALL */
    -1, -1, 
    /* PATCHABLE_TYPED_EVENT_CALL */
    -1, -1, -1, 
    /* ICALL_BRANCH_FUNNEL */
    /* MEMBARRIER */
    /* G_ASSERT_SEXT */
    type0, type0, untyped_imm_0, 
    /* G_ASSERT_ZEXT */
    type0, type0, untyped_imm_0, 
    /* G_ASSERT_ALIGN */
    type0, type0, untyped_imm_0, 
    /* G_ADD */
    type0, type0, type0, 
    /* G_SUB */
    type0, type0, type0, 
    /* G_MUL */
    type0, type0, type0, 
    /* G_SDIV */
    type0, type0, type0, 
    /* G_UDIV */
    type0, type0, type0, 
    /* G_SREM */
    type0, type0, type0, 
    /* G_UREM */
    type0, type0, type0, 
    /* G_SDIVREM */
    type0, type0, type0, type0, 
    /* G_UDIVREM */
    type0, type0, type0, type0, 
    /* G_AND */
    type0, type0, type0, 
    /* G_OR */
    type0, type0, type0, 
    /* G_XOR */
    type0, type0, type0, 
    /* G_IMPLICIT_DEF */
    type0, 
    /* G_PHI */
    type0, 
    /* G_FRAME_INDEX */
    type0, -1, 
    /* G_GLOBAL_VALUE */
    type0, -1, 
    /* G_CONSTANT_POOL */
    type0, -1, 
    /* G_EXTRACT */
    type0, type1, untyped_imm_0, 
    /* G_UNMERGE_VALUES */
    type0, type1, 
    /* G_INSERT */
    type0, type0, type1, untyped_imm_0, 
    /* G_MERGE_VALUES */
    type0, type1, 
    /* G_BUILD_VECTOR */
    type0, type1, 
    /* G_BUILD_VECTOR_TRUNC */
    type0, type1, 
    /* G_CONCAT_VECTORS */
    type0, type1, 
    /* G_PTRTOINT */
    type0, type1, 
    /* G_INTTOPTR */
    type0, type1, 
    /* G_BITCAST */
    type0, type1, 
    /* G_FREEZE */
    type0, type0, 
    /* G_INTRINSIC_FPTRUNC_ROUND */
    type0, type1, i32imm, 
    /* G_INTRINSIC_TRUNC */
    type0, type0, 
    /* G_INTRINSIC_ROUND */
    type0, type0, 
    /* G_INTRINSIC_LRINT */
    type0, type1, 
    /* G_INTRINSIC_ROUNDEVEN */
    type0, type0, 
    /* G_READCYCLECOUNTER */
    type0, 
    /* G_LOAD */
    type0, ptype1, 
    /* G_SEXTLOAD */
    type0, ptype1, 
    /* G_ZEXTLOAD */
    type0, ptype1, 
    /* G_INDEXED_LOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_INDEXED_SEXTLOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_INDEXED_ZEXTLOAD */
    type0, ptype1, ptype1, type2, -1, 
    /* G_STORE */
    type0, ptype1, 
    /* G_INDEXED_STORE */
    ptype0, type1, ptype0, ptype2, -1, 
    /* G_ATOMIC_CMPXCHG_WITH_SUCCESS */
    type0, type1, type2, type0, type0, 
    /* G_ATOMIC_CMPXCHG */
    type0, ptype1, type0, type0, 
    /* G_ATOMICRMW_XCHG */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_ADD */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_SUB */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_AND */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_NAND */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_OR */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_XOR */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_MAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_MIN */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UMAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UMIN */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FADD */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FSUB */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FMAX */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_FMIN */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UINC_WRAP */
    type0, ptype1, type0, 
    /* G_ATOMICRMW_UDEC_WRAP */
    type0, ptype1, type0, 
    /* G_FENCE */
    i32imm, i32imm, 
    /* G_BRCOND */
    type0, -1, 
    /* G_BRINDIRECT */
    type0, 
    /* G_INVOKE_REGION_START */
    /* G_INTRINSIC */
    -1, 
    /* G_INTRINSIC_W_SIDE_EFFECTS */
    -1, 
    /* G_ANYEXT */
    type0, type1, 
    /* G_TRUNC */
    type0, type1, 
    /* G_CONSTANT */
    type0, -1, 
    /* G_FCONSTANT */
    type0, -1, 
    /* G_VASTART */
    type0, 
    /* G_VAARG */
    type0, type1, -1, 
    /* G_SEXT */
    type0, type1, 
    /* G_SEXT_INREG */
    type0, type0, untyped_imm_0, 
    /* G_ZEXT */
    type0, type1, 
    /* G_SHL */
    type0, type0, type1, 
    /* G_LSHR */
    type0, type0, type1, 
    /* G_ASHR */
    type0, type0, type1, 
    /* G_FSHL */
    type0, type0, type0, type1, 
    /* G_FSHR */
    type0, type0, type0, type1, 
    /* G_ROTR */
    type0, type0, type1, 
    /* G_ROTL */
    type0, type0, type1, 
    /* G_ICMP */
    type0, -1, type1, type1, 
    /* G_FCMP */
    type0, -1, type1, type1, 
    /* G_SELECT */
    type0, type1, type0, type0, 
    /* G_UADDO */
    type0, type1, type0, type0, 
    /* G_UADDE */
    type0, type1, type0, type0, type1, 
    /* G_USUBO */
    type0, type1, type0, type0, 
    /* G_USUBE */
    type0, type1, type0, type0, type1, 
    /* G_SADDO */
    type0, type1, type0, type0, 
    /* G_SADDE */
    type0, type1, type0, type0, type1, 
    /* G_SSUBO */
    type0, type1, type0, type0, 
    /* G_SSUBE */
    type0, type1, type0, type0, type1, 
    /* G_UMULO */
    type0, type1, type0, type0, 
    /* G_SMULO */
    type0, type1, type0, type0, 
    /* G_UMULH */
    type0, type0, type0, 
    /* G_SMULH */
    type0, type0, type0, 
    /* G_UADDSAT */
    type0, type0, type0, 
    /* G_SADDSAT */
    type0, type0, type0, 
    /* G_USUBSAT */
    type0, type0, type0, 
    /* G_SSUBSAT */
    type0, type0, type0, 
    /* G_USHLSAT */
    type0, type0, type1, 
    /* G_SSHLSAT */
    type0, type0, type1, 
    /* G_SMULFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_UMULFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_SMULFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_UMULFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_SDIVFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_UDIVFIX */
    type0, type0, type0, untyped_imm_0, 
    /* G_SDIVFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_UDIVFIXSAT */
    type0, type0, type0, untyped_imm_0, 
    /* G_FADD */
    type0, type0, type0, 
    /* G_FSUB */
    type0, type0, type0, 
    /* G_FMUL */
    type0, type0, type0, 
    /* G_FMA */
    type0, type0, type0, type0, 
    /* G_FMAD */
    type0, type0, type0, type0, 
    /* G_FDIV */
    type0, type0, type0, 
    /* G_FREM */
    type0, type0, type0, 
    /* G_FPOW */
    type0, type0, type0, 
    /* G_FPOWI */
    type0, type0, type1, 
    /* G_FEXP */
    type0, type0, 
    /* G_FEXP2 */
    type0, type0, 
    /* G_FLOG */
    type0, type0, 
    /* G_FLOG2 */
    type0, type0, 
    /* G_FLOG10 */
    type0, type0, 
    /* G_FNEG */
    type0, type0, 
    /* G_FPEXT */
    type0, type1, 
    /* G_FPTRUNC */
    type0, type1, 
    /* G_FPTOSI */
    type0, type1, 
    /* G_FPTOUI */
    type0, type1, 
    /* G_SITOFP */
    type0, type1, 
    /* G_UITOFP */
    type0, type1, 
    /* G_FABS */
    type0, type0, 
    /* G_FCOPYSIGN */
    type0, type0, type1, 
    /* G_IS_FPCLASS */
    type0, type1, -1, 
    /* G_FCANONICALIZE */
    type0, type0, 
    /* G_FMINNUM */
    type0, type0, type0, 
    /* G_FMAXNUM */
    type0, type0, type0, 
    /* G_FMINNUM_IEEE */
    type0, type0, type0, 
    /* G_FMAXNUM_IEEE */
    type0, type0, type0, 
    /* G_FMINIMUM */
    type0, type0, type0, 
    /* G_FMAXIMUM */
    type0, type0, type0, 
    /* G_PTR_ADD */
    ptype0, ptype0, type1, 
    /* G_PTRMASK */
    ptype0, ptype0, type1, 
    /* G_SMIN */
    type0, type0, type0, 
    /* G_SMAX */
    type0, type0, type0, 
    /* G_UMIN */
    type0, type0, type0, 
    /* G_UMAX */
    type0, type0, type0, 
    /* G_ABS */
    type0, type0, 
    /* G_LROUND */
    type0, type1, 
    /* G_LLROUND */
    type0, type1, 
    /* G_BR */
    -1, 
    /* G_BRJT */
    ptype0, -1, type1, 
    /* G_INSERT_VECTOR_ELT */
    type0, type0, type1, type2, 
    /* G_EXTRACT_VECTOR_ELT */
    type0, type1, type2, 
    /* G_SHUFFLE_VECTOR */
    type0, type1, type1, -1, 
    /* G_CTTZ */
    type0, type1, 
    /* G_CTTZ_ZERO_UNDEF */
    type0, type1, 
    /* G_CTLZ */
    type0, type1, 
    /* G_CTLZ_ZERO_UNDEF */
    type0, type1, 
    /* G_CTPOP */
    type0, type1, 
    /* G_BSWAP */
    type0, type0, 
    /* G_BITREVERSE */
    type0, type0, 
    /* G_FCEIL */
    type0, type0, 
    /* G_FCOS */
    type0, type0, 
    /* G_FSIN */
    type0, type0, 
    /* G_FSQRT */
    type0, type0, 
    /* G_FFLOOR */
    type0, type0, 
    /* G_FRINT */
    type0, type0, 
    /* G_FNEARBYINT */
    type0, type0, 
    /* G_ADDRSPACE_CAST */
    type0, type1, 
    /* G_BLOCK_ADDR */
    type0, -1, 
    /* G_JUMP_TABLE */
    type0, -1, 
    /* G_DYN_STACKALLOC */
    ptype0, type1, i32imm, 
    /* G_STRICT_FADD */
    type0, type0, type0, 
    /* G_STRICT_FSUB */
    type0, type0, type0, 
    /* G_STRICT_FMUL */
    type0, type0, type0, 
    /* G_STRICT_FDIV */
    type0, type0, type0, 
    /* G_STRICT_FREM */
    type0, type0, type0, 
    /* G_STRICT_FMA */
    type0, type0, type0, type0, 
    /* G_STRICT_FSQRT */
    type0, type0, 
    /* G_READ_REGISTER */
    type0, -1, 
    /* G_WRITE_REGISTER */
    -1, type0, 
    /* G_MEMCPY */
    ptype0, ptype1, type2, untyped_imm_0, 
    /* G_MEMCPY_INLINE */
    ptype0, ptype1, type2, 
    /* G_MEMMOVE */
    ptype0, ptype1, type2, untyped_imm_0, 
    /* G_MEMSET */
    ptype0, type1, type2, untyped_imm_0, 
    /* G_BZERO */
    ptype0, type1, untyped_imm_0, 
    /* G_VECREDUCE_SEQ_FADD */
    type0, type1, type2, 
    /* G_VECREDUCE_SEQ_FMUL */
    type0, type1, type2, 
    /* G_VECREDUCE_FADD */
    type0, type1, 
    /* G_VECREDUCE_FMUL */
    type0, type1, 
    /* G_VECREDUCE_FMAX */
    type0, type1, 
    /* G_VECREDUCE_FMIN */
    type0, type1, 
    /* G_VECREDUCE_ADD */
    type0, type1, 
    /* G_VECREDUCE_MUL */
    type0, type1, 
    /* G_VECREDUCE_AND */
    type0, type1, 
    /* G_VECREDUCE_OR */
    type0, type1, 
    /* G_VECREDUCE_XOR */
    type0, type1, 
    /* G_VECREDUCE_SMAX */
    type0, type1, 
    /* G_VECREDUCE_SMIN */
    type0, type1, 
    /* G_VECREDUCE_UMAX */
    type0, type1, 
    /* G_VECREDUCE_UMIN */
    type0, type1, 
    /* G_SBFX */
    type0, type0, type1, type1, 
    /* G_UBFX */
    type0, type0, type1, type1, 
    /* ADD16mc */
    GR16, i16imm, cg16imm, 
    /* ADD16mi */
    GR16, i16imm, i16imm, 
    /* ADD16mm */
    GR16, i16imm, GR16, i16imm, 
    /* ADD16mn */
    GR16, i16imm, GR16, 
    /* ADD16mp */
    GR16, i16imm, GR16, 
    /* ADD16mr */
    GR16, i16imm, GR16, 
    /* ADD16rc */
    GR16, GR16, cg16imm, 
    /* ADD16ri */
    GR16, GR16, i16imm, 
    /* ADD16rm */
    GR16, GR16, GR16, i16imm, 
    /* ADD16rn */
    GR16, GR16, GR16, 
    /* ADD16rp */
    GR16, GR16, GR16, GR16, 
    /* ADD16rr */
    GR16, GR16, GR16, 
    /* ADD8mc */
    GR16, i16imm, cg8imm, 
    /* ADD8mi */
    GR16, i16imm, i8imm, 
    /* ADD8mm */
    GR16, i16imm, GR16, i16imm, 
    /* ADD8mn */
    GR16, i16imm, GR16, 
    /* ADD8mp */
    GR16, i16imm, GR16, 
    /* ADD8mr */
    GR16, i16imm, GR8, 
    /* ADD8rc */
    GR8, GR8, cg8imm, 
    /* ADD8ri */
    GR8, GR8, i8imm, 
    /* ADD8rm */
    GR8, GR8, GR16, i16imm, 
    /* ADD8rn */
    GR8, GR8, GR16, 
    /* ADD8rp */
    GR8, GR16, GR8, GR16, 
    /* ADD8rr */
    GR8, GR8, GR8, 
    /* ADDC16mc */
    GR16, i16imm, cg16imm, 
    /* ADDC16mi */
    GR16, i16imm, i16imm, 
    /* ADDC16mm */
    GR16, i16imm, GR16, i16imm, 
    /* ADDC16mn */
    GR16, i16imm, GR16, 
    /* ADDC16mp */
    GR16, i16imm, GR16, 
    /* ADDC16mr */
    GR16, i16imm, GR16, 
    /* ADDC16rc */
    GR16, GR16, cg16imm, 
    /* ADDC16ri */
    GR16, GR16, i16imm, 
    /* ADDC16rm */
    GR16, GR16, GR16, i16imm, 
    /* ADDC16rn */
    GR16, GR16, GR16, 
    /* ADDC16rp */
    GR16, GR16, GR16, GR16, 
    /* ADDC16rr */
    GR16, GR16, GR16, 
    /* ADDC8mc */
    GR16, i16imm, cg8imm, 
    /* ADDC8mi */
    GR16, i16imm, i8imm, 
    /* ADDC8mm */
    GR16, i16imm, GR16, i16imm, 
    /* ADDC8mn */
    GR16, i16imm, GR16, 
    /* ADDC8mp */
    GR16, i16imm, GR16, 
    /* ADDC8mr */
    GR16, i16imm, GR8, 
    /* ADDC8rc */
    GR8, GR8, cg8imm, 
    /* ADDC8ri */
    GR8, GR8, i8imm, 
    /* ADDC8rm */
    GR8, GR8, GR16, i16imm, 
    /* ADDC8rn */
    GR8, GR8, GR16, 
    /* ADDC8rp */
    GR8, GR16, GR8, GR16, 
    /* ADDC8rr */
    GR8, GR8, GR8, 
    /* ADDframe */
    GR16, i16imm, i16imm, 
    /* ADJCALLSTACKDOWN */
    i16imm, i16imm, 
    /* ADJCALLSTACKUP */
    i16imm, i16imm, 
    /* AND16mc */
    GR16, i16imm, cg16imm, 
    /* AND16mi */
    GR16, i16imm, i16imm, 
    /* AND16mm */
    GR16, i16imm, GR16, i16imm, 
    /* AND16mn */
    GR16, i16imm, GR16, 
    /* AND16mp */
    GR16, i16imm, GR16, 
    /* AND16mr */
    GR16, i16imm, GR16, 
    /* AND16rc */
    GR16, GR16, cg16imm, 
    /* AND16ri */
    GR16, GR16, i16imm, 
    /* AND16rm */
    GR16, GR16, GR16, i16imm, 
    /* AND16rn */
    GR16, GR16, GR16, 
    /* AND16rp */
    GR16, GR16, GR16, GR16, 
    /* AND16rr */
    GR16, GR16, GR16, 
    /* AND8mc */
    GR16, i16imm, cg8imm, 
    /* AND8mi */
    GR16, i16imm, i8imm, 
    /* AND8mm */
    GR16, i16imm, GR16, i16imm, 
    /* AND8mn */
    GR16, i16imm, GR16, 
    /* AND8mp */
    GR16, i16imm, GR16, 
    /* AND8mr */
    GR16, i16imm, GR8, 
    /* AND8rc */
    GR8, GR8, cg8imm, 
    /* AND8ri */
    GR8, GR8, i8imm, 
    /* AND8rm */
    GR8, GR8, GR16, i16imm, 
    /* AND8rn */
    GR8, GR8, GR16, 
    /* AND8rp */
    GR8, GR16, GR8, GR16, 
    /* AND8rr */
    GR8, GR8, GR8, 
    /* BIC16mc */
    GR16, i16imm, cg16imm, 
    /* BIC16mi */
    GR16, i16imm, i16imm, 
    /* BIC16mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIC16mn */
    GR16, i16imm, GR16, 
    /* BIC16mp */
    GR16, i16imm, GR16, 
    /* BIC16mr */
    GR16, i16imm, GR16, 
    /* BIC16rc */
    GR16, GR16, cg16imm, 
    /* BIC16ri */
    GR16, GR16, i16imm, 
    /* BIC16rm */
    GR16, GR16, GR16, i16imm, 
    /* BIC16rn */
    GR16, GR16, GR16, 
    /* BIC16rp */
    GR16, GR16, GR16, GR16, 
    /* BIC16rr */
    GR16, GR16, GR16, 
    /* BIC8mc */
    GR16, i16imm, cg8imm, 
    /* BIC8mi */
    GR16, i16imm, i8imm, 
    /* BIC8mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIC8mn */
    GR16, i16imm, GR16, 
    /* BIC8mp */
    GR16, i16imm, GR16, 
    /* BIC8mr */
    GR16, i16imm, GR8, 
    /* BIC8rc */
    GR8, GR8, cg8imm, 
    /* BIC8ri */
    GR8, GR8, i8imm, 
    /* BIC8rm */
    GR8, GR8, GR16, i16imm, 
    /* BIC8rn */
    GR8, GR8, GR16, 
    /* BIC8rp */
    GR8, GR16, GR8, GR16, 
    /* BIC8rr */
    GR8, GR8, GR8, 
    /* BIS16mc */
    GR16, i16imm, cg16imm, 
    /* BIS16mi */
    GR16, i16imm, i16imm, 
    /* BIS16mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIS16mn */
    GR16, i16imm, GR16, 
    /* BIS16mp */
    GR16, i16imm, GR16, 
    /* BIS16mr */
    GR16, i16imm, GR16, 
    /* BIS16rc */
    GR16, GR16, cg16imm, 
    /* BIS16ri */
    GR16, GR16, i16imm, 
    /* BIS16rm */
    GR16, GR16, GR16, i16imm, 
    /* BIS16rn */
    GR16, GR16, GR16, 
    /* BIS16rp */
    GR16, GR16, GR16, GR16, 
    /* BIS16rr */
    GR16, GR16, GR16, 
    /* BIS8mc */
    GR16, i16imm, cg8imm, 
    /* BIS8mi */
    GR16, i16imm, i8imm, 
    /* BIS8mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIS8mn */
    GR16, i16imm, GR16, 
    /* BIS8mp */
    GR16, i16imm, GR16, 
    /* BIS8mr */
    GR16, i16imm, GR8, 
    /* BIS8rc */
    GR8, GR8, cg8imm, 
    /* BIS8ri */
    GR8, GR8, i8imm, 
    /* BIS8rm */
    GR8, GR8, GR16, i16imm, 
    /* BIS8rn */
    GR8, GR8, GR16, 
    /* BIS8rp */
    GR8, GR16, GR8, GR16, 
    /* BIS8rr */
    GR8, GR8, GR8, 
    /* BIT16mc */
    GR16, i16imm, cg16imm, 
    /* BIT16mi */
    GR16, i16imm, i16imm, 
    /* BIT16mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIT16mn */
    GR16, i16imm, GR16, 
    /* BIT16mp */
    GR16, i16imm, GR16, 
    /* BIT16mr */
    GR16, i16imm, GR16, 
    /* BIT16rc */
    GR16, cg16imm, 
    /* BIT16ri */
    GR16, i16imm, 
    /* BIT16rm */
    GR16, GR16, i16imm, 
    /* BIT16rn */
    GR16, GR16, 
    /* BIT16rp */
    GR16, GR16, 
    /* BIT16rr */
    GR16, GR16, 
    /* BIT8mc */
    GR16, i16imm, cg8imm, 
    /* BIT8mi */
    GR16, i16imm, i8imm, 
    /* BIT8mm */
    GR16, i16imm, GR16, i16imm, 
    /* BIT8mn */
    GR16, i16imm, GR16, 
    /* BIT8mp */
    GR16, i16imm, GR16, 
    /* BIT8mr */
    GR16, i16imm, GR8, 
    /* BIT8rc */
    GR8, cg8imm, 
    /* BIT8ri */
    GR8, i8imm, 
    /* BIT8rm */
    GR8, GR16, i16imm, 
    /* BIT8rn */
    GR8, GR16, 
    /* BIT8rp */
    GR8, GR16, 
    /* BIT8rr */
    GR8, GR8, 
    /* Bi */
    i16imm, 
    /* Bm */
    GR16, i16imm, 
    /* Br */
    GR16, 
    /* CALLi */
    i16imm, 
    /* CALLm */
    GR16, i16imm, 
    /* CALLn */
    GR16, 
    /* CALLp */
    GR16, 
    /* CALLr */
    GR16, 
    /* CMP16mc */
    GR16, i16imm, cg16imm, 
    /* CMP16mi */
    GR16, i16imm, i16imm, 
    /* CMP16mm */
    GR16, i16imm, GR16, i16imm, 
    /* CMP16mn */
    GR16, i16imm, GR16, 
    /* CMP16mp */
    GR16, i16imm, GR16, 
    /* CMP16mr */
    GR16, i16imm, GR16, 
    /* CMP16rc */
    GR16, cg16imm, 
    /* CMP16ri */
    GR16, i16imm, 
    /* CMP16rm */
    GR16, GR16, i16imm, 
    /* CMP16rn */
    GR16, GR16, 
    /* CMP16rp */
    GR16, GR16, 
    /* CMP16rr */
    GR16, GR16, 
    /* CMP8mc */
    GR16, i16imm, cg8imm, 
    /* CMP8mi */
    GR16, i16imm, i8imm, 
    /* CMP8mm */
    GR16, i16imm, GR16, i16imm, 
    /* CMP8mn */
    GR16, i16imm, GR16, 
    /* CMP8mp */
    GR16, i16imm, GR16, 
    /* CMP8mr */
    GR16, i16imm, GR8, 
    /* CMP8rc */
    GR8, cg8imm, 
    /* CMP8ri */
    GR8, i8imm, 
    /* CMP8rm */
    GR8, GR16, i16imm, 
    /* CMP8rn */
    GR8, GR16, 
    /* CMP8rp */
    GR8, GR16, 
    /* CMP8rr */
    GR8, GR8, 
    /* DADD16mc */
    GR16, i16imm, cg16imm, 
    /* DADD16mi */
    GR16, i16imm, i16imm, 
    /* DADD16mm */
    GR16, i16imm, GR16, i16imm, 
    /* DADD16mn */
    GR16, i16imm, GR16, 
    /* DADD16mp */
    GR16, i16imm, GR16, 
    /* DADD16mr */
    GR16, i16imm, GR16, 
    /* DADD16rc */
    GR16, GR16, cg16imm, 
    /* DADD16ri */
    GR16, GR16, i16imm, 
    /* DADD16rm */
    GR16, GR16, GR16, i16imm, 
    /* DADD16rn */
    GR16, GR16, GR16, 
    /* DADD16rp */
    GR16, GR16, GR16, GR16, 
    /* DADD16rr */
    GR16, GR16, GR16, 
    /* DADD8mc */
    GR16, i16imm, cg8imm, 
    /* DADD8mi */
    GR16, i16imm, i8imm, 
    /* DADD8mm */
    GR16, i16imm, GR16, i16imm, 
    /* DADD8mn */
    GR16, i16imm, GR16, 
    /* DADD8mp */
    GR16, i16imm, GR16, 
    /* DADD8mr */
    GR16, i16imm, GR8, 
    /* DADD8rc */
    GR8, GR8, cg8imm, 
    /* DADD8ri */
    GR8, GR8, i8imm, 
    /* DADD8rm */
    GR8, GR8, GR16, i16imm, 
    /* DADD8rn */
    GR8, GR8, GR16, 
    /* DADD8rp */
    GR8, GR16, GR8, GR16, 
    /* DADD8rr */
    GR8, GR8, GR8, 
    /* JCC */
    jmptarget, cc, 
    /* JMP */
    jmptarget, 
    /* MOV16mc */
    GR16, i16imm, cg16imm, 
    /* MOV16mi */
    GR16, i16imm, i16imm, 
    /* MOV16mm */
    GR16, i16imm, GR16, i16imm, 
    /* MOV16mn */
    GR16, i16imm, GR16, 
    /* MOV16mr */
    GR16, i16imm, GR16, 
    /* MOV16rc */
    GR16, cg16imm, 
    /* MOV16ri */
    GR16, i16imm, 
    /* MOV16rm */
    GR16, GR16, i16imm, 
    /* MOV16rn */
    GR16, GR16, 
    /* MOV16rp */
    GR16, GR16, GR16, 
    /* MOV16rr */
    GR16, GR16, 
    /* MOV8mc */
    GR16, i16imm, cg8imm, 
    /* MOV8mi */
    GR16, i16imm, i8imm, 
    /* MOV8mm */
    GR16, i16imm, GR16, i16imm, 
    /* MOV8mn */
    GR16, i16imm, GR16, 
    /* MOV8mr */
    GR16, i16imm, GR8, 
    /* MOV8rc */
    GR8, cg8imm, 
    /* MOV8ri */
    GR8, i8imm, 
    /* MOV8rm */
    GR8, GR16, i16imm, 
    /* MOV8rn */
    GR8, GR16, 
    /* MOV8rp */
    GR8, GR16, GR16, 
    /* MOV8rr */
    GR8, GR8, 
    /* MOVZX16rm8 */
    GR16, GR16, i16imm, 
    /* MOVZX16rr8 */
    GR16, GR8, 
    /* POP16r */
    GR16, 
    /* PUSH16c */
    cg16imm, 
    /* PUSH16i */
    i16imm, 
    /* PUSH16r */
    GR16, 
    /* PUSH8r */
    GR8, 
    /* RET */
    /* RETI */
    /* RRA16m */
    GR16, i16imm, 
    /* RRA16n */
    GR16, 
    /* RRA16p */
    GR16, 
    /* RRA16r */
    GR16, GR16, 
    /* RRA8m */
    GR16, i16imm, 
    /* RRA8n */
    GR16, 
    /* RRA8p */
    GR16, 
    /* RRA8r */
    GR8, GR8, 
    /* RRC16m */
    GR16, i16imm, 
    /* RRC16n */
    GR16, 
    /* RRC16p */
    GR16, 
    /* RRC16r */
    GR16, GR16, 
    /* RRC8m */
    GR16, i16imm, 
    /* RRC8n */
    GR16, 
    /* RRC8p */
    GR16, 
    /* RRC8r */
    GR8, GR8, 
    /* Rrcl16 */
    GR16, GR16, 
    /* Rrcl8 */
    GR8, GR8, 
    /* SEXT16m */
    GR16, i16imm, 
    /* SEXT16n */
    GR16, 
    /* SEXT16p */
    GR16, 
    /* SEXT16r */
    GR16, GR16, 
    /* SUB16mc */
    GR16, i16imm, cg16imm, 
    /* SUB16mi */
    GR16, i16imm, i16imm, 
    /* SUB16mm */
    GR16, i16imm, GR16, i16imm, 
    /* SUB16mn */
    GR16, i16imm, GR16, 
    /* SUB16mp */
    GR16, i16imm, GR16, 
    /* SUB16mr */
    GR16, i16imm, GR16, 
    /* SUB16rc */
    GR16, GR16, cg16imm, 
    /* SUB16ri */
    GR16, GR16, i16imm, 
    /* SUB16rm */
    GR16, GR16, GR16, i16imm, 
    /* SUB16rn */
    GR16, GR16, GR16, 
    /* SUB16rp */
    GR16, GR16, GR16, GR16, 
    /* SUB16rr */
    GR16, GR16, GR16, 
    /* SUB8mc */
    GR16, i16imm, cg8imm, 
    /* SUB8mi */
    GR16, i16imm, i8imm, 
    /* SUB8mm */
    GR16, i16imm, GR16, i16imm, 
    /* SUB8mn */
    GR16, i16imm, GR16, 
    /* SUB8mp */
    GR16, i16imm, GR16, 
    /* SUB8mr */
    GR16, i16imm, GR8, 
    /* SUB8rc */
    GR8, GR8, cg8imm, 
    /* SUB8ri */
    GR8, GR8, i8imm, 
    /* SUB8rm */
    GR8, GR8, GR16, i16imm, 
    /* SUB8rn */
    GR8, GR8, GR16, 
    /* SUB8rp */
    GR8, GR16, GR8, GR16, 
    /* SUB8rr */
    GR8, GR8, GR8, 
    /* SUBC16mc */
    GR16, i16imm, cg16imm, 
    /* SUBC16mi */
    GR16, i16imm, i16imm, 
    /* SUBC16mm */
    GR16, i16imm, GR16, i16imm, 
    /* SUBC16mn */
    GR16, i16imm, GR16, 
    /* SUBC16mp */
    GR16, i16imm, GR16, 
    /* SUBC16mr */
    GR16, i16imm, GR16, 
    /* SUBC16rc */
    GR16, GR16, cg16imm, 
    /* SUBC16ri */
    GR16, GR16, i16imm, 
    /* SUBC16rm */
    GR16, GR16, GR16, i16imm, 
    /* SUBC16rn */
    GR16, GR16, GR16, 
    /* SUBC16rp */
    GR16, GR16, GR16, GR16, 
    /* SUBC16rr */
    GR16, GR16, GR16, 
    /* SUBC8mc */
    GR16, i16imm, cg8imm, 
    /* SUBC8mi */
    GR16, i16imm, i8imm, 
    /* SUBC8mm */
    GR16, i16imm, GR16, i16imm, 
    /* SUBC8mn */
    GR16, i16imm, GR16, 
    /* SUBC8mp */
    GR16, i16imm, GR16, 
    /* SUBC8mr */
    GR16, i16imm, GR8, 
    /* SUBC8rc */
    GR8, GR8, cg8imm, 
    /* SUBC8ri */
    GR8, GR8, i8imm, 
    /* SUBC8rm */
    GR8, GR8, GR16, i16imm, 
    /* SUBC8rn */
    GR8, GR8, GR16, 
    /* SUBC8rp */
    GR8, GR16, GR8, GR16, 
    /* SUBC8rr */
    GR8, GR8, GR8, 
    /* SWPB16m */
    GR16, i16imm, 
    /* SWPB16n */
    GR16, 
    /* SWPB16p */
    GR16, 
    /* SWPB16r */
    GR16, GR16, 
    /* Select16 */
    GR16, GR16, GR16, i8imm, 
    /* Select8 */
    GR8, GR8, GR8, i8imm, 
    /* Shl16 */
    GR16, GR16, GR8, 
    /* Shl8 */
    GR8, GR8, GR8, 
    /* Sra16 */
    GR16, GR16, GR8, 
    /* Sra8 */
    GR8, GR8, GR8, 
    /* Srl16 */
    GR16, GR16, GR8, 
    /* Srl8 */
    GR8, GR8, GR8, 
    /* XOR16mc */
    GR16, i16imm, cg16imm, 
    /* XOR16mi */
    GR16, i16imm, i16imm, 
    /* XOR16mm */
    GR16, i16imm, GR16, i16imm, 
    /* XOR16mn */
    GR16, i16imm, GR16, 
    /* XOR16mp */
    GR16, i16imm, GR16, 
    /* XOR16mr */
    GR16, i16imm, GR16, 
    /* XOR16rc */
    GR16, GR16, cg16imm, 
    /* XOR16ri */
    GR16, GR16, i16imm, 
    /* XOR16rm */
    GR16, GR16, GR16, i16imm, 
    /* XOR16rn */
    GR16, GR16, GR16, 
    /* XOR16rp */
    GR16, GR16, GR16, GR16, 
    /* XOR16rr */
    GR16, GR16, GR16, 
    /* XOR8mc */
    GR16, i16imm, cg8imm, 
    /* XOR8mi */
    GR16, i16imm, i8imm, 
    /* XOR8mm */
    GR16, i16imm, GR16, i16imm, 
    /* XOR8mn */
    GR16, i16imm, GR16, 
    /* XOR8mp */
    GR16, i16imm, GR16, 
    /* XOR8mr */
    GR16, i16imm, GR8, 
    /* XOR8rc */
    GR8, GR8, cg8imm, 
    /* XOR8ri */
    GR8, GR8, i8imm, 
    /* XOR8rm */
    GR8, GR8, GR16, i16imm, 
    /* XOR8rn */
    GR8, GR8, GR16, 
    /* XOR8rp */
    GR8, GR16, GR8, GR16, 
    /* XOR8rr */
    GR8, GR8, GR8, 
    /* ZEXT16r */
    GR16, GR16, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace MSP430 {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace MSP430 {
LLVM_READONLY static unsigned
getLogicalOperandSize(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return LogicalOpIdx;
}
LLVM_READONLY static inline unsigned
getLogicalOperandIdx(uint16_t Opcode, uint16_t LogicalOpIdx) {
  auto S = 0U;
  for (auto i = 0U; i < LogicalOpIdx; ++i)
    S += getLogicalOperandSize(Opcode, i);
  return S;
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace MSP430 {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace MSP430_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace MSP430_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace MSP430_MC {

} // end namespace MSP430_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace MSP430_MC {

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG

FeatureBitset computeAvailableFeatures(const FeatureBitset &FB) {
  FeatureBitset Features;
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
};
#endif // NDEBUG

void verifyInstructionPredicates(
    unsigned Opcode, const FeatureBitset &Features) {
#ifndef NDEBUG
  static uint8_t RequiredFeaturesRefs[] = {
    CEFBS_None, // PHI = 0
    CEFBS_None, // INLINEASM = 1
    CEFBS_None, // INLINEASM_BR = 2
    CEFBS_None, // CFI_INSTRUCTION = 3
    CEFBS_None, // EH_LABEL = 4
    CEFBS_None, // GC_LABEL = 5
    CEFBS_None, // ANNOTATION_LABEL = 6
    CEFBS_None, // KILL = 7
    CEFBS_None, // EXTRACT_SUBREG = 8
    CEFBS_None, // INSERT_SUBREG = 9
    CEFBS_None, // IMPLICIT_DEF = 10
    CEFBS_None, // SUBREG_TO_REG = 11
    CEFBS_None, // COPY_TO_REGCLASS = 12
    CEFBS_None, // DBG_VALUE = 13
    CEFBS_None, // DBG_VALUE_LIST = 14
    CEFBS_None, // DBG_INSTR_REF = 15
    CEFBS_None, // DBG_PHI = 16
    CEFBS_None, // DBG_LABEL = 17
    CEFBS_None, // REG_SEQUENCE = 18
    CEFBS_None, // COPY = 19
    CEFBS_None, // BUNDLE = 20
    CEFBS_None, // LIFETIME_START = 21
    CEFBS_None, // LIFETIME_END = 22
    CEFBS_None, // PSEUDO_PROBE = 23
    CEFBS_None, // ARITH_FENCE = 24
    CEFBS_None, // STACKMAP = 25
    CEFBS_None, // FENTRY_CALL = 26
    CEFBS_None, // PATCHPOINT = 27
    CEFBS_None, // LOAD_STACK_GUARD = 28
    CEFBS_None, // PREALLOCATED_SETUP = 29
    CEFBS_None, // PREALLOCATED_ARG = 30
    CEFBS_None, // STATEPOINT = 31
    CEFBS_None, // LOCAL_ESCAPE = 32
    CEFBS_None, // FAULTING_OP = 33
    CEFBS_None, // PATCHABLE_OP = 34
    CEFBS_None, // PATCHABLE_FUNCTION_ENTER = 35
    CEFBS_None, // PATCHABLE_RET = 36
    CEFBS_None, // PATCHABLE_FUNCTION_EXIT = 37
    CEFBS_None, // PATCHABLE_TAIL_CALL = 38
    CEFBS_None, // PATCHABLE_EVENT_CALL = 39
    CEFBS_None, // PATCHABLE_TYPED_EVENT_CALL = 40
    CEFBS_None, // ICALL_BRANCH_FUNNEL = 41
    CEFBS_None, // MEMBARRIER = 42
    CEFBS_None, // G_ASSERT_SEXT = 43
    CEFBS_None, // G_ASSERT_ZEXT = 44
    CEFBS_None, // G_ASSERT_ALIGN = 45
    CEFBS_None, // G_ADD = 46
    CEFBS_None, // G_SUB = 47
    CEFBS_None, // G_MUL = 48
    CEFBS_None, // G_SDIV = 49
    CEFBS_None, // G_UDIV = 50
    CEFBS_None, // G_SREM = 51
    CEFBS_None, // G_UREM = 52
    CEFBS_None, // G_SDIVREM = 53
    CEFBS_None, // G_UDIVREM = 54
    CEFBS_None, // G_AND = 55
    CEFBS_None, // G_OR = 56
    CEFBS_None, // G_XOR = 57
    CEFBS_None, // G_IMPLICIT_DEF = 58
    CEFBS_None, // G_PHI = 59
    CEFBS_None, // G_FRAME_INDEX = 60
    CEFBS_None, // G_GLOBAL_VALUE = 61
    CEFBS_None, // G_CONSTANT_POOL = 62
    CEFBS_None, // G_EXTRACT = 63
    CEFBS_None, // G_UNMERGE_VALUES = 64
    CEFBS_None, // G_INSERT = 65
    CEFBS_None, // G_MERGE_VALUES = 66
    CEFBS_None, // G_BUILD_VECTOR = 67
    CEFBS_None, // G_BUILD_VECTOR_TRUNC = 68
    CEFBS_None, // G_CONCAT_VECTORS = 69
    CEFBS_None, // G_PTRTOINT = 70
    CEFBS_None, // G_INTTOPTR = 71
    CEFBS_None, // G_BITCAST = 72
    CEFBS_None, // G_FREEZE = 73
    CEFBS_None, // G_INTRINSIC_FPTRUNC_ROUND = 74
    CEFBS_None, // G_INTRINSIC_TRUNC = 75
    CEFBS_None, // G_INTRINSIC_ROUND = 76
    CEFBS_None, // G_INTRINSIC_LRINT = 77
    CEFBS_None, // G_INTRINSIC_ROUNDEVEN = 78
    CEFBS_None, // G_READCYCLECOUNTER = 79
    CEFBS_None, // G_LOAD = 80
    CEFBS_None, // G_SEXTLOAD = 81
    CEFBS_None, // G_ZEXTLOAD = 82
    CEFBS_None, // G_INDEXED_LOAD = 83
    CEFBS_None, // G_INDEXED_SEXTLOAD = 84
    CEFBS_None, // G_INDEXED_ZEXTLOAD = 85
    CEFBS_None, // G_STORE = 86
    CEFBS_None, // G_INDEXED_STORE = 87
    CEFBS_None, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 88
    CEFBS_None, // G_ATOMIC_CMPXCHG = 89
    CEFBS_None, // G_ATOMICRMW_XCHG = 90
    CEFBS_None, // G_ATOMICRMW_ADD = 91
    CEFBS_None, // G_ATOMICRMW_SUB = 92
    CEFBS_None, // G_ATOMICRMW_AND = 93
    CEFBS_None, // G_ATOMICRMW_NAND = 94
    CEFBS_None, // G_ATOMICRMW_OR = 95
    CEFBS_None, // G_ATOMICRMW_XOR = 96
    CEFBS_None, // G_ATOMICRMW_MAX = 97
    CEFBS_None, // G_ATOMICRMW_MIN = 98
    CEFBS_None, // G_ATOMICRMW_UMAX = 99
    CEFBS_None, // G_ATOMICRMW_UMIN = 100
    CEFBS_None, // G_ATOMICRMW_FADD = 101
    CEFBS_None, // G_ATOMICRMW_FSUB = 102
    CEFBS_None, // G_ATOMICRMW_FMAX = 103
    CEFBS_None, // G_ATOMICRMW_FMIN = 104
    CEFBS_None, // G_ATOMICRMW_UINC_WRAP = 105
    CEFBS_None, // G_ATOMICRMW_UDEC_WRAP = 106
    CEFBS_None, // G_FENCE = 107
    CEFBS_None, // G_BRCOND = 108
    CEFBS_None, // G_BRINDIRECT = 109
    CEFBS_None, // G_INVOKE_REGION_START = 110
    CEFBS_None, // G_INTRINSIC = 111
    CEFBS_None, // G_INTRINSIC_W_SIDE_EFFECTS = 112
    CEFBS_None, // G_ANYEXT = 113
    CEFBS_None, // G_TRUNC = 114
    CEFBS_None, // G_CONSTANT = 115
    CEFBS_None, // G_FCONSTANT = 116
    CEFBS_None, // G_VASTART = 117
    CEFBS_None, // G_VAARG = 118
    CEFBS_None, // G_SEXT = 119
    CEFBS_None, // G_SEXT_INREG = 120
    CEFBS_None, // G_ZEXT = 121
    CEFBS_None, // G_SHL = 122
    CEFBS_None, // G_LSHR = 123
    CEFBS_None, // G_ASHR = 124
    CEFBS_None, // G_FSHL = 125
    CEFBS_None, // G_FSHR = 126
    CEFBS_None, // G_ROTR = 127
    CEFBS_None, // G_ROTL = 128
    CEFBS_None, // G_ICMP = 129
    CEFBS_None, // G_FCMP = 130
    CEFBS_None, // G_SELECT = 131
    CEFBS_None, // G_UADDO = 132
    CEFBS_None, // G_UADDE = 133
    CEFBS_None, // G_USUBO = 134
    CEFBS_None, // G_USUBE = 135
    CEFBS_None, // G_SADDO = 136
    CEFBS_None, // G_SADDE = 137
    CEFBS_None, // G_SSUBO = 138
    CEFBS_None, // G_SSUBE = 139
    CEFBS_None, // G_UMULO = 140
    CEFBS_None, // G_SMULO = 141
    CEFBS_None, // G_UMULH = 142
    CEFBS_None, // G_SMULH = 143
    CEFBS_None, // G_UADDSAT = 144
    CEFBS_None, // G_SADDSAT = 145
    CEFBS_None, // G_USUBSAT = 146
    CEFBS_None, // G_SSUBSAT = 147
    CEFBS_None, // G_USHLSAT = 148
    CEFBS_None, // G_SSHLSAT = 149
    CEFBS_None, // G_SMULFIX = 150
    CEFBS_None, // G_UMULFIX = 151
    CEFBS_None, // G_SMULFIXSAT = 152
    CEFBS_None, // G_UMULFIXSAT = 153
    CEFBS_None, // G_SDIVFIX = 154
    CEFBS_None, // G_UDIVFIX = 155
    CEFBS_None, // G_SDIVFIXSAT = 156
    CEFBS_None, // G_UDIVFIXSAT = 157
    CEFBS_None, // G_FADD = 158
    CEFBS_None, // G_FSUB = 159
    CEFBS_None, // G_FMUL = 160
    CEFBS_None, // G_FMA = 161
    CEFBS_None, // G_FMAD = 162
    CEFBS_None, // G_FDIV = 163
    CEFBS_None, // G_FREM = 164
    CEFBS_None, // G_FPOW = 165
    CEFBS_None, // G_FPOWI = 166
    CEFBS_None, // G_FEXP = 167
    CEFBS_None, // G_FEXP2 = 168
    CEFBS_None, // G_FLOG = 169
    CEFBS_None, // G_FLOG2 = 170
    CEFBS_None, // G_FLOG10 = 171
    CEFBS_None, // G_FNEG = 172
    CEFBS_None, // G_FPEXT = 173
    CEFBS_None, // G_FPTRUNC = 174
    CEFBS_None, // G_FPTOSI = 175
    CEFBS_None, // G_FPTOUI = 176
    CEFBS_None, // G_SITOFP = 177
    CEFBS_None, // G_UITOFP = 178
    CEFBS_None, // G_FABS = 179
    CEFBS_None, // G_FCOPYSIGN = 180
    CEFBS_None, // G_IS_FPCLASS = 181
    CEFBS_None, // G_FCANONICALIZE = 182
    CEFBS_None, // G_FMINNUM = 183
    CEFBS_None, // G_FMAXNUM = 184
    CEFBS_None, // G_FMINNUM_IEEE = 185
    CEFBS_None, // G_FMAXNUM_IEEE = 186
    CEFBS_None, // G_FMINIMUM = 187
    CEFBS_None, // G_FMAXIMUM = 188
    CEFBS_None, // G_PTR_ADD = 189
    CEFBS_None, // G_PTRMASK = 190
    CEFBS_None, // G_SMIN = 191
    CEFBS_None, // G_SMAX = 192
    CEFBS_None, // G_UMIN = 193
    CEFBS_None, // G_UMAX = 194
    CEFBS_None, // G_ABS = 195
    CEFBS_None, // G_LROUND = 196
    CEFBS_None, // G_LLROUND = 197
    CEFBS_None, // G_BR = 198
    CEFBS_None, // G_BRJT = 199
    CEFBS_None, // G_INSERT_VECTOR_ELT = 200
    CEFBS_None, // G_EXTRACT_VECTOR_ELT = 201
    CEFBS_None, // G_SHUFFLE_VECTOR = 202
    CEFBS_None, // G_CTTZ = 203
    CEFBS_None, // G_CTTZ_ZERO_UNDEF = 204
    CEFBS_None, // G_CTLZ = 205
    CEFBS_None, // G_CTLZ_ZERO_UNDEF = 206
    CEFBS_None, // G_CTPOP = 207
    CEFBS_None, // G_BSWAP = 208
    CEFBS_None, // G_BITREVERSE = 209
    CEFBS_None, // G_FCEIL = 210
    CEFBS_None, // G_FCOS = 211
    CEFBS_None, // G_FSIN = 212
    CEFBS_None, // G_FSQRT = 213
    CEFBS_None, // G_FFLOOR = 214
    CEFBS_None, // G_FRINT = 215
    CEFBS_None, // G_FNEARBYINT = 216
    CEFBS_None, // G_ADDRSPACE_CAST = 217
    CEFBS_None, // G_BLOCK_ADDR = 218
    CEFBS_None, // G_JUMP_TABLE = 219
    CEFBS_None, // G_DYN_STACKALLOC = 220
    CEFBS_None, // G_STRICT_FADD = 221
    CEFBS_None, // G_STRICT_FSUB = 222
    CEFBS_None, // G_STRICT_FMUL = 223
    CEFBS_None, // G_STRICT_FDIV = 224
    CEFBS_None, // G_STRICT_FREM = 225
    CEFBS_None, // G_STRICT_FMA = 226
    CEFBS_None, // G_STRICT_FSQRT = 227
    CEFBS_None, // G_READ_REGISTER = 228
    CEFBS_None, // G_WRITE_REGISTER = 229
    CEFBS_None, // G_MEMCPY = 230
    CEFBS_None, // G_MEMCPY_INLINE = 231
    CEFBS_None, // G_MEMMOVE = 232
    CEFBS_None, // G_MEMSET = 233
    CEFBS_None, // G_BZERO = 234
    CEFBS_None, // G_VECREDUCE_SEQ_FADD = 235
    CEFBS_None, // G_VECREDUCE_SEQ_FMUL = 236
    CEFBS_None, // G_VECREDUCE_FADD = 237
    CEFBS_None, // G_VECREDUCE_FMUL = 238
    CEFBS_None, // G_VECREDUCE_FMAX = 239
    CEFBS_None, // G_VECREDUCE_FMIN = 240
    CEFBS_None, // G_VECREDUCE_ADD = 241
    CEFBS_None, // G_VECREDUCE_MUL = 242
    CEFBS_None, // G_VECREDUCE_AND = 243
    CEFBS_None, // G_VECREDUCE_OR = 244
    CEFBS_None, // G_VECREDUCE_XOR = 245
    CEFBS_None, // G_VECREDUCE_SMAX = 246
    CEFBS_None, // G_VECREDUCE_SMIN = 247
    CEFBS_None, // G_VECREDUCE_UMAX = 248
    CEFBS_None, // G_VECREDUCE_UMIN = 249
    CEFBS_None, // G_SBFX = 250
    CEFBS_None, // G_UBFX = 251
    CEFBS_None, // ADD16mc = 252
    CEFBS_None, // ADD16mi = 253
    CEFBS_None, // ADD16mm = 254
    CEFBS_None, // ADD16mn = 255
    CEFBS_None, // ADD16mp = 256
    CEFBS_None, // ADD16mr = 257
    CEFBS_None, // ADD16rc = 258
    CEFBS_None, // ADD16ri = 259
    CEFBS_None, // ADD16rm = 260
    CEFBS_None, // ADD16rn = 261
    CEFBS_None, // ADD16rp = 262
    CEFBS_None, // ADD16rr = 263
    CEFBS_None, // ADD8mc = 264
    CEFBS_None, // ADD8mi = 265
    CEFBS_None, // ADD8mm = 266
    CEFBS_None, // ADD8mn = 267
    CEFBS_None, // ADD8mp = 268
    CEFBS_None, // ADD8mr = 269
    CEFBS_None, // ADD8rc = 270
    CEFBS_None, // ADD8ri = 271
    CEFBS_None, // ADD8rm = 272
    CEFBS_None, // ADD8rn = 273
    CEFBS_None, // ADD8rp = 274
    CEFBS_None, // ADD8rr = 275
    CEFBS_None, // ADDC16mc = 276
    CEFBS_None, // ADDC16mi = 277
    CEFBS_None, // ADDC16mm = 278
    CEFBS_None, // ADDC16mn = 279
    CEFBS_None, // ADDC16mp = 280
    CEFBS_None, // ADDC16mr = 281
    CEFBS_None, // ADDC16rc = 282
    CEFBS_None, // ADDC16ri = 283
    CEFBS_None, // ADDC16rm = 284
    CEFBS_None, // ADDC16rn = 285
    CEFBS_None, // ADDC16rp = 286
    CEFBS_None, // ADDC16rr = 287
    CEFBS_None, // ADDC8mc = 288
    CEFBS_None, // ADDC8mi = 289
    CEFBS_None, // ADDC8mm = 290
    CEFBS_None, // ADDC8mn = 291
    CEFBS_None, // ADDC8mp = 292
    CEFBS_None, // ADDC8mr = 293
    CEFBS_None, // ADDC8rc = 294
    CEFBS_None, // ADDC8ri = 295
    CEFBS_None, // ADDC8rm = 296
    CEFBS_None, // ADDC8rn = 297
    CEFBS_None, // ADDC8rp = 298
    CEFBS_None, // ADDC8rr = 299
    CEFBS_None, // ADDframe = 300
    CEFBS_None, // ADJCALLSTACKDOWN = 301
    CEFBS_None, // ADJCALLSTACKUP = 302
    CEFBS_None, // AND16mc = 303
    CEFBS_None, // AND16mi = 304
    CEFBS_None, // AND16mm = 305
    CEFBS_None, // AND16mn = 306
    CEFBS_None, // AND16mp = 307
    CEFBS_None, // AND16mr = 308
    CEFBS_None, // AND16rc = 309
    CEFBS_None, // AND16ri = 310
    CEFBS_None, // AND16rm = 311
    CEFBS_None, // AND16rn = 312
    CEFBS_None, // AND16rp = 313
    CEFBS_None, // AND16rr = 314
    CEFBS_None, // AND8mc = 315
    CEFBS_None, // AND8mi = 316
    CEFBS_None, // AND8mm = 317
    CEFBS_None, // AND8mn = 318
    CEFBS_None, // AND8mp = 319
    CEFBS_None, // AND8mr = 320
    CEFBS_None, // AND8rc = 321
    CEFBS_None, // AND8ri = 322
    CEFBS_None, // AND8rm = 323
    CEFBS_None, // AND8rn = 324
    CEFBS_None, // AND8rp = 325
    CEFBS_None, // AND8rr = 326
    CEFBS_None, // BIC16mc = 327
    CEFBS_None, // BIC16mi = 328
    CEFBS_None, // BIC16mm = 329
    CEFBS_None, // BIC16mn = 330
    CEFBS_None, // BIC16mp = 331
    CEFBS_None, // BIC16mr = 332
    CEFBS_None, // BIC16rc = 333
    CEFBS_None, // BIC16ri = 334
    CEFBS_None, // BIC16rm = 335
    CEFBS_None, // BIC16rn = 336
    CEFBS_None, // BIC16rp = 337
    CEFBS_None, // BIC16rr = 338
    CEFBS_None, // BIC8mc = 339
    CEFBS_None, // BIC8mi = 340
    CEFBS_None, // BIC8mm = 341
    CEFBS_None, // BIC8mn = 342
    CEFBS_None, // BIC8mp = 343
    CEFBS_None, // BIC8mr = 344
    CEFBS_None, // BIC8rc = 345
    CEFBS_None, // BIC8ri = 346
    CEFBS_None, // BIC8rm = 347
    CEFBS_None, // BIC8rn = 348
    CEFBS_None, // BIC8rp = 349
    CEFBS_None, // BIC8rr = 350
    CEFBS_None, // BIS16mc = 351
    CEFBS_None, // BIS16mi = 352
    CEFBS_None, // BIS16mm = 353
    CEFBS_None, // BIS16mn = 354
    CEFBS_None, // BIS16mp = 355
    CEFBS_None, // BIS16mr = 356
    CEFBS_None, // BIS16rc = 357
    CEFBS_None, // BIS16ri = 358
    CEFBS_None, // BIS16rm = 359
    CEFBS_None, // BIS16rn = 360
    CEFBS_None, // BIS16rp = 361
    CEFBS_None, // BIS16rr = 362
    CEFBS_None, // BIS8mc = 363
    CEFBS_None, // BIS8mi = 364
    CEFBS_None, // BIS8mm = 365
    CEFBS_None, // BIS8mn = 366
    CEFBS_None, // BIS8mp = 367
    CEFBS_None, // BIS8mr = 368
    CEFBS_None, // BIS8rc = 369
    CEFBS_None, // BIS8ri = 370
    CEFBS_None, // BIS8rm = 371
    CEFBS_None, // BIS8rn = 372
    CEFBS_None, // BIS8rp = 373
    CEFBS_None, // BIS8rr = 374
    CEFBS_None, // BIT16mc = 375
    CEFBS_None, // BIT16mi = 376
    CEFBS_None, // BIT16mm = 377
    CEFBS_None, // BIT16mn = 378
    CEFBS_None, // BIT16mp = 379
    CEFBS_None, // BIT16mr = 380
    CEFBS_None, // BIT16rc = 381
    CEFBS_None, // BIT16ri = 382
    CEFBS_None, // BIT16rm = 383
    CEFBS_None, // BIT16rn = 384
    CEFBS_None, // BIT16rp = 385
    CEFBS_None, // BIT16rr = 386
    CEFBS_None, // BIT8mc = 387
    CEFBS_None, // BIT8mi = 388
    CEFBS_None, // BIT8mm = 389
    CEFBS_None, // BIT8mn = 390
    CEFBS_None, // BIT8mp = 391
    CEFBS_None, // BIT8mr = 392
    CEFBS_None, // BIT8rc = 393
    CEFBS_None, // BIT8ri = 394
    CEFBS_None, // BIT8rm = 395
    CEFBS_None, // BIT8rn = 396
    CEFBS_None, // BIT8rp = 397
    CEFBS_None, // BIT8rr = 398
    CEFBS_None, // Bi = 399
    CEFBS_None, // Bm = 400
    CEFBS_None, // Br = 401
    CEFBS_None, // CALLi = 402
    CEFBS_None, // CALLm = 403
    CEFBS_None, // CALLn = 404
    CEFBS_None, // CALLp = 405
    CEFBS_None, // CALLr = 406
    CEFBS_None, // CMP16mc = 407
    CEFBS_None, // CMP16mi = 408
    CEFBS_None, // CMP16mm = 409
    CEFBS_None, // CMP16mn = 410
    CEFBS_None, // CMP16mp = 411
    CEFBS_None, // CMP16mr = 412
    CEFBS_None, // CMP16rc = 413
    CEFBS_None, // CMP16ri = 414
    CEFBS_None, // CMP16rm = 415
    CEFBS_None, // CMP16rn = 416
    CEFBS_None, // CMP16rp = 417
    CEFBS_None, // CMP16rr = 418
    CEFBS_None, // CMP8mc = 419
    CEFBS_None, // CMP8mi = 420
    CEFBS_None, // CMP8mm = 421
    CEFBS_None, // CMP8mn = 422
    CEFBS_None, // CMP8mp = 423
    CEFBS_None, // CMP8mr = 424
    CEFBS_None, // CMP8rc = 425
    CEFBS_None, // CMP8ri = 426
    CEFBS_None, // CMP8rm = 427
    CEFBS_None, // CMP8rn = 428
    CEFBS_None, // CMP8rp = 429
    CEFBS_None, // CMP8rr = 430
    CEFBS_None, // DADD16mc = 431
    CEFBS_None, // DADD16mi = 432
    CEFBS_None, // DADD16mm = 433
    CEFBS_None, // DADD16mn = 434
    CEFBS_None, // DADD16mp = 435
    CEFBS_None, // DADD16mr = 436
    CEFBS_None, // DADD16rc = 437
    CEFBS_None, // DADD16ri = 438
    CEFBS_None, // DADD16rm = 439
    CEFBS_None, // DADD16rn = 440
    CEFBS_None, // DADD16rp = 441
    CEFBS_None, // DADD16rr = 442
    CEFBS_None, // DADD8mc = 443
    CEFBS_None, // DADD8mi = 444
    CEFBS_None, // DADD8mm = 445
    CEFBS_None, // DADD8mn = 446
    CEFBS_None, // DADD8mp = 447
    CEFBS_None, // DADD8mr = 448
    CEFBS_None, // DADD8rc = 449
    CEFBS_None, // DADD8ri = 450
    CEFBS_None, // DADD8rm = 451
    CEFBS_None, // DADD8rn = 452
    CEFBS_None, // DADD8rp = 453
    CEFBS_None, // DADD8rr = 454
    CEFBS_None, // JCC = 455
    CEFBS_None, // JMP = 456
    CEFBS_None, // MOV16mc = 457
    CEFBS_None, // MOV16mi = 458
    CEFBS_None, // MOV16mm = 459
    CEFBS_None, // MOV16mn = 460
    CEFBS_None, // MOV16mr = 461
    CEFBS_None, // MOV16rc = 462
    CEFBS_None, // MOV16ri = 463
    CEFBS_None, // MOV16rm = 464
    CEFBS_None, // MOV16rn = 465
    CEFBS_None, // MOV16rp = 466
    CEFBS_None, // MOV16rr = 467
    CEFBS_None, // MOV8mc = 468
    CEFBS_None, // MOV8mi = 469
    CEFBS_None, // MOV8mm = 470
    CEFBS_None, // MOV8mn = 471
    CEFBS_None, // MOV8mr = 472
    CEFBS_None, // MOV8rc = 473
    CEFBS_None, // MOV8ri = 474
    CEFBS_None, // MOV8rm = 475
    CEFBS_None, // MOV8rn = 476
    CEFBS_None, // MOV8rp = 477
    CEFBS_None, // MOV8rr = 478
    CEFBS_None, // MOVZX16rm8 = 479
    CEFBS_None, // MOVZX16rr8 = 480
    CEFBS_None, // POP16r = 481
    CEFBS_None, // PUSH16c = 482
    CEFBS_None, // PUSH16i = 483
    CEFBS_None, // PUSH16r = 484
    CEFBS_None, // PUSH8r = 485
    CEFBS_None, // RET = 486
    CEFBS_None, // RETI = 487
    CEFBS_None, // RRA16m = 488
    CEFBS_None, // RRA16n = 489
    CEFBS_None, // RRA16p = 490
    CEFBS_None, // RRA16r = 491
    CEFBS_None, // RRA8m = 492
    CEFBS_None, // RRA8n = 493
    CEFBS_None, // RRA8p = 494
    CEFBS_None, // RRA8r = 495
    CEFBS_None, // RRC16m = 496
    CEFBS_None, // RRC16n = 497
    CEFBS_None, // RRC16p = 498
    CEFBS_None, // RRC16r = 499
    CEFBS_None, // RRC8m = 500
    CEFBS_None, // RRC8n = 501
    CEFBS_None, // RRC8p = 502
    CEFBS_None, // RRC8r = 503
    CEFBS_None, // Rrcl16 = 504
    CEFBS_None, // Rrcl8 = 505
    CEFBS_None, // SEXT16m = 506
    CEFBS_None, // SEXT16n = 507
    CEFBS_None, // SEXT16p = 508
    CEFBS_None, // SEXT16r = 509
    CEFBS_None, // SUB16mc = 510
    CEFBS_None, // SUB16mi = 511
    CEFBS_None, // SUB16mm = 512
    CEFBS_None, // SUB16mn = 513
    CEFBS_None, // SUB16mp = 514
    CEFBS_None, // SUB16mr = 515
    CEFBS_None, // SUB16rc = 516
    CEFBS_None, // SUB16ri = 517
    CEFBS_None, // SUB16rm = 518
    CEFBS_None, // SUB16rn = 519
    CEFBS_None, // SUB16rp = 520
    CEFBS_None, // SUB16rr = 521
    CEFBS_None, // SUB8mc = 522
    CEFBS_None, // SUB8mi = 523
    CEFBS_None, // SUB8mm = 524
    CEFBS_None, // SUB8mn = 525
    CEFBS_None, // SUB8mp = 526
    CEFBS_None, // SUB8mr = 527
    CEFBS_None, // SUB8rc = 528
    CEFBS_None, // SUB8ri = 529
    CEFBS_None, // SUB8rm = 530
    CEFBS_None, // SUB8rn = 531
    CEFBS_None, // SUB8rp = 532
    CEFBS_None, // SUB8rr = 533
    CEFBS_None, // SUBC16mc = 534
    CEFBS_None, // SUBC16mi = 535
    CEFBS_None, // SUBC16mm = 536
    CEFBS_None, // SUBC16mn = 537
    CEFBS_None, // SUBC16mp = 538
    CEFBS_None, // SUBC16mr = 539
    CEFBS_None, // SUBC16rc = 540
    CEFBS_None, // SUBC16ri = 541
    CEFBS_None, // SUBC16rm = 542
    CEFBS_None, // SUBC16rn = 543
    CEFBS_None, // SUBC16rp = 544
    CEFBS_None, // SUBC16rr = 545
    CEFBS_None, // SUBC8mc = 546
    CEFBS_None, // SUBC8mi = 547
    CEFBS_None, // SUBC8mm = 548
    CEFBS_None, // SUBC8mn = 549
    CEFBS_None, // SUBC8mp = 550
    CEFBS_None, // SUBC8mr = 551
    CEFBS_None, // SUBC8rc = 552
    CEFBS_None, // SUBC8ri = 553
    CEFBS_None, // SUBC8rm = 554
    CEFBS_None, // SUBC8rn = 555
    CEFBS_None, // SUBC8rp = 556
    CEFBS_None, // SUBC8rr = 557
    CEFBS_None, // SWPB16m = 558
    CEFBS_None, // SWPB16n = 559
    CEFBS_None, // SWPB16p = 560
    CEFBS_None, // SWPB16r = 561
    CEFBS_None, // Select16 = 562
    CEFBS_None, // Select8 = 563
    CEFBS_None, // Shl16 = 564
    CEFBS_None, // Shl8 = 565
    CEFBS_None, // Sra16 = 566
    CEFBS_None, // Sra8 = 567
    CEFBS_None, // Srl16 = 568
    CEFBS_None, // Srl8 = 569
    CEFBS_None, // XOR16mc = 570
    CEFBS_None, // XOR16mi = 571
    CEFBS_None, // XOR16mm = 572
    CEFBS_None, // XOR16mn = 573
    CEFBS_None, // XOR16mp = 574
    CEFBS_None, // XOR16mr = 575
    CEFBS_None, // XOR16rc = 576
    CEFBS_None, // XOR16ri = 577
    CEFBS_None, // XOR16rm = 578
    CEFBS_None, // XOR16rn = 579
    CEFBS_None, // XOR16rp = 580
    CEFBS_None, // XOR16rr = 581
    CEFBS_None, // XOR8mc = 582
    CEFBS_None, // XOR8mi = 583
    CEFBS_None, // XOR8mm = 584
    CEFBS_None, // XOR8mn = 585
    CEFBS_None, // XOR8mp = 586
    CEFBS_None, // XOR8mr = 587
    CEFBS_None, // XOR8rc = 588
    CEFBS_None, // XOR8ri = 589
    CEFBS_None, // XOR8rm = 590
    CEFBS_None, // XOR8rn = 591
    CEFBS_None, // XOR8rp = 592
    CEFBS_None, // XOR8rr = 593
    CEFBS_None, // ZEXT16r = 594
  };

  assert(Opcode < 595);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &MSP430InstrNameData[MSP430InstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace MSP430_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

