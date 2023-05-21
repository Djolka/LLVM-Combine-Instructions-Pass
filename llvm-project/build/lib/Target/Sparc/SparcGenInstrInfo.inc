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

namespace SP {
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
    ADJCALLSTACKDOWN	= 252,
    ADJCALLSTACKUP	= 253,
    GETPCX	= 254,
    SELECT_CC_DFP_FCC	= 255,
    SELECT_CC_DFP_ICC	= 256,
    SELECT_CC_DFP_XCC	= 257,
    SELECT_CC_FP_FCC	= 258,
    SELECT_CC_FP_ICC	= 259,
    SELECT_CC_FP_XCC	= 260,
    SELECT_CC_Int_FCC	= 261,
    SELECT_CC_Int_ICC	= 262,
    SELECT_CC_Int_XCC	= 263,
    SELECT_CC_QFP_FCC	= 264,
    SELECT_CC_QFP_ICC	= 265,
    SELECT_CC_QFP_XCC	= 266,
    SET	= 267,
    ADDCCri	= 268,
    ADDCCrr	= 269,
    ADDCri	= 270,
    ADDCrr	= 271,
    ADDEri	= 272,
    ADDErr	= 273,
    ADDXC	= 274,
    ADDXCCC	= 275,
    ADDXri	= 276,
    ADDXrr	= 277,
    ADDri	= 278,
    ADDrr	= 279,
    ALIGNADDR	= 280,
    ALIGNADDRL	= 281,
    ANDCCri	= 282,
    ANDCCrr	= 283,
    ANDNCCri	= 284,
    ANDNCCrr	= 285,
    ANDNri	= 286,
    ANDNrr	= 287,
    ANDXNrr	= 288,
    ANDXri	= 289,
    ANDXrr	= 290,
    ANDri	= 291,
    ANDrr	= 292,
    ARRAY16	= 293,
    ARRAY32	= 294,
    ARRAY8	= 295,
    BA	= 296,
    BCOND	= 297,
    BCONDA	= 298,
    BINDri	= 299,
    BINDrr	= 300,
    BMASK	= 301,
    BPA	= 302,
    BPFCC	= 303,
    BPFCCA	= 304,
    BPFCCANT	= 305,
    BPFCCNT	= 306,
    BPGEZapn	= 307,
    BPGEZapt	= 308,
    BPGEZnapn	= 309,
    BPGEZnapt	= 310,
    BPGZapn	= 311,
    BPGZapt	= 312,
    BPGZnapn	= 313,
    BPGZnapt	= 314,
    BPICC	= 315,
    BPICCA	= 316,
    BPICCANT	= 317,
    BPICCNT	= 318,
    BPLEZapn	= 319,
    BPLEZapt	= 320,
    BPLEZnapn	= 321,
    BPLEZnapt	= 322,
    BPLZapn	= 323,
    BPLZapt	= 324,
    BPLZnapn	= 325,
    BPLZnapt	= 326,
    BPNZapn	= 327,
    BPNZapt	= 328,
    BPNZnapn	= 329,
    BPNZnapt	= 330,
    BPXCC	= 331,
    BPXCCA	= 332,
    BPXCCANT	= 333,
    BPXCCNT	= 334,
    BPZapn	= 335,
    BPZapt	= 336,
    BPZnapn	= 337,
    BPZnapt	= 338,
    BSHUFFLE	= 339,
    CALL	= 340,
    CALLri	= 341,
    CALLrr	= 342,
    CASAasi10	= 343,
    CASArr	= 344,
    CASXrr	= 345,
    CASrr	= 346,
    CBCOND	= 347,
    CBCONDA	= 348,
    CMASK16	= 349,
    CMASK32	= 350,
    CMASK8	= 351,
    CMPri	= 352,
    CMPrr	= 353,
    EDGE16	= 354,
    EDGE16L	= 355,
    EDGE16LN	= 356,
    EDGE16N	= 357,
    EDGE32	= 358,
    EDGE32L	= 359,
    EDGE32LN	= 360,
    EDGE32N	= 361,
    EDGE8	= 362,
    EDGE8L	= 363,
    EDGE8LN	= 364,
    EDGE8N	= 365,
    FABSD	= 366,
    FABSQ	= 367,
    FABSS	= 368,
    FADDD	= 369,
    FADDQ	= 370,
    FADDS	= 371,
    FALIGNADATA	= 372,
    FAND	= 373,
    FANDNOT1	= 374,
    FANDNOT1S	= 375,
    FANDNOT2	= 376,
    FANDNOT2S	= 377,
    FANDS	= 378,
    FBCOND	= 379,
    FBCONDA	= 380,
    FBCONDA_V9	= 381,
    FBCOND_V9	= 382,
    FCHKSM16	= 383,
    FCMPD	= 384,
    FCMPD_V9	= 385,
    FCMPEQ16	= 386,
    FCMPEQ32	= 387,
    FCMPGT16	= 388,
    FCMPGT32	= 389,
    FCMPLE16	= 390,
    FCMPLE32	= 391,
    FCMPNE16	= 392,
    FCMPNE32	= 393,
    FCMPQ	= 394,
    FCMPQ_V9	= 395,
    FCMPS	= 396,
    FCMPS_V9	= 397,
    FDIVD	= 398,
    FDIVQ	= 399,
    FDIVS	= 400,
    FDMULQ	= 401,
    FDTOI	= 402,
    FDTOQ	= 403,
    FDTOS	= 404,
    FDTOX	= 405,
    FEXPAND	= 406,
    FHADDD	= 407,
    FHADDS	= 408,
    FHSUBD	= 409,
    FHSUBS	= 410,
    FITOD	= 411,
    FITOQ	= 412,
    FITOS	= 413,
    FLCMPD	= 414,
    FLCMPS	= 415,
    FLUSH	= 416,
    FLUSHW	= 417,
    FLUSHri	= 418,
    FLUSHrr	= 419,
    FMEAN16	= 420,
    FMOVD	= 421,
    FMOVD_FCC	= 422,
    FMOVD_ICC	= 423,
    FMOVD_XCC	= 424,
    FMOVQ	= 425,
    FMOVQ_FCC	= 426,
    FMOVQ_ICC	= 427,
    FMOVQ_XCC	= 428,
    FMOVRD	= 429,
    FMOVRQ	= 430,
    FMOVRS	= 431,
    FMOVS	= 432,
    FMOVS_FCC	= 433,
    FMOVS_ICC	= 434,
    FMOVS_XCC	= 435,
    FMUL8SUX16	= 436,
    FMUL8ULX16	= 437,
    FMUL8X16	= 438,
    FMUL8X16AL	= 439,
    FMUL8X16AU	= 440,
    FMULD	= 441,
    FMULD8SUX16	= 442,
    FMULD8ULX16	= 443,
    FMULQ	= 444,
    FMULS	= 445,
    FNADDD	= 446,
    FNADDS	= 447,
    FNAND	= 448,
    FNANDS	= 449,
    FNEGD	= 450,
    FNEGQ	= 451,
    FNEGS	= 452,
    FNHADDD	= 453,
    FNHADDS	= 454,
    FNMULD	= 455,
    FNMULS	= 456,
    FNOR	= 457,
    FNORS	= 458,
    FNOT1	= 459,
    FNOT1S	= 460,
    FNOT2	= 461,
    FNOT2S	= 462,
    FNSMULD	= 463,
    FONE	= 464,
    FONES	= 465,
    FOR	= 466,
    FORNOT1	= 467,
    FORNOT1S	= 468,
    FORNOT2	= 469,
    FORNOT2S	= 470,
    FORS	= 471,
    FPACK16	= 472,
    FPACK32	= 473,
    FPACKFIX	= 474,
    FPADD16	= 475,
    FPADD16S	= 476,
    FPADD32	= 477,
    FPADD32S	= 478,
    FPADD64	= 479,
    FPMERGE	= 480,
    FPSUB16	= 481,
    FPSUB16S	= 482,
    FPSUB32	= 483,
    FPSUB32S	= 484,
    FQTOD	= 485,
    FQTOI	= 486,
    FQTOS	= 487,
    FQTOX	= 488,
    FSLAS16	= 489,
    FSLAS32	= 490,
    FSLL16	= 491,
    FSLL32	= 492,
    FSMULD	= 493,
    FSQRTD	= 494,
    FSQRTQ	= 495,
    FSQRTS	= 496,
    FSRA16	= 497,
    FSRA32	= 498,
    FSRC1	= 499,
    FSRC1S	= 500,
    FSRC2	= 501,
    FSRC2S	= 502,
    FSRL16	= 503,
    FSRL32	= 504,
    FSTOD	= 505,
    FSTOI	= 506,
    FSTOQ	= 507,
    FSTOX	= 508,
    FSUBD	= 509,
    FSUBQ	= 510,
    FSUBS	= 511,
    FXNOR	= 512,
    FXNORS	= 513,
    FXOR	= 514,
    FXORS	= 515,
    FXTOD	= 516,
    FXTOQ	= 517,
    FXTOS	= 518,
    FZERO	= 519,
    FZEROS	= 520,
    GDOP_LDXrr	= 521,
    GDOP_LDrr	= 522,
    JMPLri	= 523,
    JMPLrr	= 524,
    LDArr	= 525,
    LDCSRri	= 526,
    LDCSRrr	= 527,
    LDCri	= 528,
    LDCrr	= 529,
    LDDArr	= 530,
    LDDCri	= 531,
    LDDCrr	= 532,
    LDDFArr	= 533,
    LDDFri	= 534,
    LDDFrr	= 535,
    LDDri	= 536,
    LDDrr	= 537,
    LDFArr	= 538,
    LDFSRri	= 539,
    LDFSRrr	= 540,
    LDFri	= 541,
    LDFrr	= 542,
    LDQFArr	= 543,
    LDQFri	= 544,
    LDQFrr	= 545,
    LDSBArr	= 546,
    LDSBri	= 547,
    LDSBrr	= 548,
    LDSHArr	= 549,
    LDSHri	= 550,
    LDSHrr	= 551,
    LDSTUBArr	= 552,
    LDSTUBri	= 553,
    LDSTUBrr	= 554,
    LDSWri	= 555,
    LDSWrr	= 556,
    LDUBArr	= 557,
    LDUBri	= 558,
    LDUBrr	= 559,
    LDUHArr	= 560,
    LDUHri	= 561,
    LDUHrr	= 562,
    LDXFSRri	= 563,
    LDXFSRrr	= 564,
    LDXri	= 565,
    LDXrr	= 566,
    LDri	= 567,
    LDrr	= 568,
    LEAX_ADDri	= 569,
    LEA_ADDri	= 570,
    LZCNT	= 571,
    MEMBARi	= 572,
    MOVDTOX	= 573,
    MOVFCCri	= 574,
    MOVFCCrr	= 575,
    MOVICCri	= 576,
    MOVICCrr	= 577,
    MOVRri	= 578,
    MOVRrr	= 579,
    MOVSTOSW	= 580,
    MOVSTOUW	= 581,
    MOVWTOS	= 582,
    MOVXCCri	= 583,
    MOVXCCrr	= 584,
    MOVXTOD	= 585,
    MULSCCri	= 586,
    MULSCCrr	= 587,
    MULXri	= 588,
    MULXrr	= 589,
    NOP	= 590,
    ORCCri	= 591,
    ORCCrr	= 592,
    ORNCCri	= 593,
    ORNCCrr	= 594,
    ORNri	= 595,
    ORNrr	= 596,
    ORXNrr	= 597,
    ORXri	= 598,
    ORXrr	= 599,
    ORri	= 600,
    ORrr	= 601,
    PDIST	= 602,
    PDISTN	= 603,
    POPCrr	= 604,
    PREFETCHi	= 605,
    PREFETCHr	= 606,
    PWRPSRri	= 607,
    PWRPSRrr	= 608,
    RDASR	= 609,
    RDPC	= 610,
    RDPR	= 611,
    RDPSR	= 612,
    RDTBR	= 613,
    RDWIM	= 614,
    RESTOREri	= 615,
    RESTORErr	= 616,
    RET	= 617,
    RETL	= 618,
    RETTri	= 619,
    RETTrr	= 620,
    SAVEri	= 621,
    SAVErr	= 622,
    SDIVCCri	= 623,
    SDIVCCrr	= 624,
    SDIVXri	= 625,
    SDIVXrr	= 626,
    SDIVri	= 627,
    SDIVrr	= 628,
    SETHIXi	= 629,
    SETHIi	= 630,
    SHUTDOWN	= 631,
    SIAM	= 632,
    SIR	= 633,
    SLLXri	= 634,
    SLLXrr	= 635,
    SLLri	= 636,
    SLLrr	= 637,
    SMACri	= 638,
    SMACrr	= 639,
    SMULCCri	= 640,
    SMULCCrr	= 641,
    SMULri	= 642,
    SMULrr	= 643,
    SRAXri	= 644,
    SRAXrr	= 645,
    SRAri	= 646,
    SRArr	= 647,
    SRLXri	= 648,
    SRLXrr	= 649,
    SRLri	= 650,
    SRLrr	= 651,
    STArr	= 652,
    STBAR	= 653,
    STBArr	= 654,
    STBri	= 655,
    STBrr	= 656,
    STCSRri	= 657,
    STCSRrr	= 658,
    STCri	= 659,
    STCrr	= 660,
    STDArr	= 661,
    STDCQri	= 662,
    STDCQrr	= 663,
    STDCri	= 664,
    STDCrr	= 665,
    STDFArr	= 666,
    STDFQri	= 667,
    STDFQrr	= 668,
    STDFri	= 669,
    STDFrr	= 670,
    STDri	= 671,
    STDrr	= 672,
    STFArr	= 673,
    STFSRri	= 674,
    STFSRrr	= 675,
    STFri	= 676,
    STFrr	= 677,
    STHArr	= 678,
    STHri	= 679,
    STHrr	= 680,
    STQFArr	= 681,
    STQFri	= 682,
    STQFrr	= 683,
    STXFSRri	= 684,
    STXFSRrr	= 685,
    STXri	= 686,
    STXrr	= 687,
    STri	= 688,
    STrr	= 689,
    SUBCCri	= 690,
    SUBCCrr	= 691,
    SUBCri	= 692,
    SUBCrr	= 693,
    SUBEri	= 694,
    SUBErr	= 695,
    SUBXri	= 696,
    SUBXrr	= 697,
    SUBri	= 698,
    SUBrr	= 699,
    SWAPArr	= 700,
    SWAPri	= 701,
    SWAPrr	= 702,
    TA1	= 703,
    TA3	= 704,
    TA5	= 705,
    TADDCCTVri	= 706,
    TADDCCTVrr	= 707,
    TADDCCri	= 708,
    TADDCCrr	= 709,
    TAIL_CALL	= 710,
    TAIL_CALLri	= 711,
    TICCri	= 712,
    TICCrr	= 713,
    TLS_ADDXrr	= 714,
    TLS_ADDrr	= 715,
    TLS_CALL	= 716,
    TLS_LDXrr	= 717,
    TLS_LDrr	= 718,
    TRAPri	= 719,
    TRAPrr	= 720,
    TSUBCCTVri	= 721,
    TSUBCCTVrr	= 722,
    TSUBCCri	= 723,
    TSUBCCrr	= 724,
    TXCCri	= 725,
    TXCCrr	= 726,
    UDIVCCri	= 727,
    UDIVCCrr	= 728,
    UDIVXri	= 729,
    UDIVXrr	= 730,
    UDIVri	= 731,
    UDIVrr	= 732,
    UMACri	= 733,
    UMACrr	= 734,
    UMULCCri	= 735,
    UMULCCrr	= 736,
    UMULXHI	= 737,
    UMULri	= 738,
    UMULrr	= 739,
    UNIMP	= 740,
    V9FCMPD	= 741,
    V9FCMPED	= 742,
    V9FCMPEQ	= 743,
    V9FCMPES	= 744,
    V9FCMPQ	= 745,
    V9FCMPS	= 746,
    V9FMOVD_FCC	= 747,
    V9FMOVQ_FCC	= 748,
    V9FMOVS_FCC	= 749,
    V9MOVFCCri	= 750,
    V9MOVFCCrr	= 751,
    WRASRri	= 752,
    WRASRrr	= 753,
    WRPRri	= 754,
    WRPRrr	= 755,
    WRPSRri	= 756,
    WRPSRrr	= 757,
    WRTBRri	= 758,
    WRTBRrr	= 759,
    WRWIMri	= 760,
    WRWIMrr	= 761,
    XMULX	= 762,
    XMULXHI	= 763,
    XNORCCri	= 764,
    XNORCCrr	= 765,
    XNORXrr	= 766,
    XNORri	= 767,
    XNORrr	= 768,
    XORCCri	= 769,
    XORCCrr	= 770,
    XORXri	= 771,
    XORXrr	= 772,
    XORri	= 773,
    XORrr	= 774,
    INSTRUCTION_LIST_END = 775
  };

} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace SP {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_iu_instr	= 1,
    IIC_fpu_normal_instr	= 2,
    IIC_jmp_or_call	= 3,
    IIC_fpu_abs	= 4,
    IIC_fpu_fast_instr	= 5,
    IIC_fpu_divd	= 6,
    IIC_fpu_divs	= 7,
    IIC_fpu_muld	= 8,
    IIC_fpu_muls	= 9,
    IIC_fpu_negs	= 10,
    IIC_fpu_sqrtd	= 11,
    IIC_fpu_sqrts	= 12,
    IIC_fpu_stod	= 13,
    IIC_ldd	= 14,
    IIC_iu_or_fpu_instr	= 15,
    IIC_iu_div	= 16,
    IIC_smac_umac	= 17,
    IIC_iu_smul	= 18,
    IIC_st	= 19,
    IIC_std	= 20,
    IIC_iu_umul	= 21,
    SCHED_LIST_END = 22
  };
} // end namespace Sched
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { SP::O6, SP::O6 };
static const MCPhysReg ImplicitList2[] = { SP::O7 };
static const MCPhysReg ImplicitList3[] = { SP::FCC0 };
static const MCPhysReg ImplicitList4[] = { SP::ICC };
static const MCPhysReg ImplicitList5[] = { SP::ICC, SP::ICC };
static const MCPhysReg ImplicitList6[] = { SP::O6 };
static const MCPhysReg ImplicitList7[] = { SP::CPSR };
static const MCPhysReg ImplicitList8[] = { SP::FSR };
static const MCPhysReg ImplicitList9[] = { SP::Y, SP::ICC, SP::Y, SP::ICC };
static const MCPhysReg ImplicitList10[] = { SP::PSR };
static const MCPhysReg ImplicitList11[] = { SP::TBR };
static const MCPhysReg ImplicitList12[] = { SP::WIM };
static const MCPhysReg ImplicitList13[] = { SP::Y, SP::Y, SP::ICC };
static const MCPhysReg ImplicitList14[] = { SP::Y, SP::Y };
static const MCPhysReg ImplicitList15[] = { SP::Y, SP::ASR18, SP::Y, SP::ASR18 };
static const MCPhysReg ImplicitList16[] = { SP::Y, SP::ICC };
static const MCPhysReg ImplicitList17[] = { SP::Y };
static const MCPhysReg ImplicitList18[] = { SP::CPQ };
static const MCPhysReg ImplicitList19[] = { SP::FQ };

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
static const MCOperandInfo OperandInfo45[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo59[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo61[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo83[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo84[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo149[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo150[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo151[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
  { 774,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #774 = XORrr
  { 773,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #773 = XORri
  { 772,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #772 = XORXrr
  { 771,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo53 },  // Inst #771 = XORXri
  { 770,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #770 = XORCCrr
  { 769,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #769 = XORCCri
  { 768,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #768 = XNORrr
  { 767,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #767 = XNORri
  { 766,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #766 = XNORXrr
  { 765,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #765 = XNORCCrr
  { 764,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #764 = XNORCCri
  { 763,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #763 = XMULXHI
  { 762,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #762 = XMULX
  { 761,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, OperandInfo63 },  // Inst #761 = WRWIMrr
  { 760,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, OperandInfo62 },  // Inst #760 = WRWIMri
  { 759,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, OperandInfo63 },  // Inst #759 = WRTBRrr
  { 758,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, OperandInfo62 },  // Inst #758 = WRTBRri
  { 757,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, OperandInfo63 },  // Inst #757 = WRPSRrr
  { 756,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, OperandInfo62 },  // Inst #756 = WRPSRri
  { 755,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo164 },  // Inst #755 = WRPRrr
  { 754,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo163 },  // Inst #754 = WRPRri
  { 753,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo162 },  // Inst #753 = WRASRrr
  { 752,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo161 },  // Inst #752 = WRASRri
  { 751,	5,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo160 },  // Inst #751 = V9MOVFCCrr
  { 750,	5,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo159 },  // Inst #750 = V9MOVFCCri
  { 749,	5,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo158 },  // Inst #749 = V9FMOVS_FCC
  { 748,	5,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo157 },  // Inst #748 = V9FMOVQ_FCC
  { 747,	5,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo156 },  // Inst #747 = V9FMOVD_FCC
  { 746,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo155 },  // Inst #746 = V9FCMPS
  { 745,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo154 },  // Inst #745 = V9FCMPQ
  { 744,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo155 },  // Inst #744 = V9FCMPES
  { 743,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo154 },  // Inst #743 = V9FCMPEQ
  { 742,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo75 },  // Inst #742 = V9FCMPED
  { 741,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo75 },  // Inst #741 = V9FCMPD
  { 740,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #740 = UNIMP
  { 739,	3,	1,	4,	21,	0,	1,	0, 0x0ULL, ImplicitList17, OperandInfo51 },  // Inst #739 = UMULrr
  { 738,	3,	1,	4,	21,	0,	1,	0, 0x0ULL, ImplicitList17, OperandInfo50 },  // Inst #738 = UMULri
  { 737,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #737 = UMULXHI
  { 736,	3,	1,	4,	21,	0,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList16, OperandInfo51 },  // Inst #736 = UMULCCrr
  { 735,	3,	1,	4,	21,	0,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList16, OperandInfo50 },  // Inst #735 = UMULCCri
  { 734,	4,	1,	4,	17,	2,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList15, OperandInfo126 },  // Inst #734 = UMACrr
  { 733,	4,	1,	4,	17,	2,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList15, OperandInfo125 },  // Inst #733 = UMACri
  { 732,	3,	1,	4,	16,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList14, OperandInfo51 },  // Inst #732 = UDIVrr
  { 731,	3,	1,	4,	16,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList14, OperandInfo50 },  // Inst #731 = UDIVri
  { 730,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #730 = UDIVXrr
  { 729,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo117 },  // Inst #729 = UDIVXri
  { 728,	3,	1,	4,	16,	1,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList13, OperandInfo51 },  // Inst #728 = UDIVCCrr
  { 727,	3,	1,	4,	16,	1,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList13, OperandInfo50 },  // Inst #727 = UDIVCCri
  { 726,	3,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #726 = TXCCrr
  { 725,	3,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo151 },  // Inst #725 = TXCCri
  { 724,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #724 = TSUBCCrr
  { 723,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #723 = TSUBCCri
  { 722,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #722 = TSUBCCTVrr
  { 721,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #721 = TSUBCCTVri
  { 720,	3,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #720 = TRAPrr
  { 719,	3,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo151 },  // Inst #719 = TRAPri
  { 718,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo88 },  // Inst #718 = TLS_LDrr
  { 717,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo88 },  // Inst #717 = TLS_LDXrr
  { 716,	2,	0,	4,	3,	1,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList6, OperandInfo7 },  // Inst #716 = TLS_CALL
  { 715,	4,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo153 },  // Inst #715 = TLS_ADDrr
  { 714,	4,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo152 },  // Inst #714 = TLS_ADDXrr
  { 713,	3,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #713 = TICCrr
  { 712,	3,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo151 },  // Inst #712 = TICCri
  { 711,	2,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo15 },  // Inst #711 = TAIL_CALLri
  { 710,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo2 },  // Inst #710 = TAIL_CALL
  { 709,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #709 = TADDCCrr
  { 708,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #708 = TADDCCri
  { 707,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #707 = TADDCCTVrr
  { 706,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #706 = TADDCCTVri
  { 705,	0,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #705 = TA5
  { 704,	0,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #704 = TA3
  { 703,	0,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #703 = TA1
  { 702,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo150 },  // Inst #702 = SWAPrr
  { 701,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo149 },  // Inst #701 = SWAPri
  { 700,	5,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo148 },  // Inst #700 = SWAPArr
  { 699,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #699 = SUBrr
  { 698,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #698 = SUBri
  { 697,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #697 = SUBXrr
  { 696,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo53 },  // Inst #696 = SUBXri
  { 695,	3,	1,	4,	1,	1,	1,	0, 0x0ULL, ImplicitList5, OperandInfo51 },  // Inst #695 = SUBErr
  { 694,	3,	1,	4,	1,	1,	1,	0, 0x0ULL, ImplicitList5, OperandInfo50 },  // Inst #694 = SUBEri
  { 693,	3,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #693 = SUBCrr
  { 692,	3,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #692 = SUBCri
  { 691,	3,	1,	4,	1,	0,	1,	0, 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #691 = SUBCCrr
  { 690,	3,	1,	4,	1,	0,	1,	0, 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #690 = SUBCCri
  { 689,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo129 },  // Inst #689 = STrr
  { 688,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo128 },  // Inst #688 = STri
  { 687,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo147 },  // Inst #687 = STXrr
  { 686,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo146 },  // Inst #686 = STXri
  { 685,	2,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, OperandInfo54 },  // Inst #685 = STXFSRrr
  { 684,	2,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, OperandInfo15 },  // Inst #684 = STXFSRri
  { 683,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo145 },  // Inst #683 = STQFrr
  { 682,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo144 },  // Inst #682 = STQFri
  { 681,	4,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo143 },  // Inst #681 = STQFArr
  { 680,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo129 },  // Inst #680 = STHrr
  { 679,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo128 },  // Inst #679 = STHri
  { 678,	4,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo127 },  // Inst #678 = STHArr
  { 677,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo142 },  // Inst #677 = STFrr
  { 676,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo141 },  // Inst #676 = STFri
  { 675,	2,	1,	4,	19,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, OperandInfo54 },  // Inst #675 = STFSRrr
  { 674,	2,	1,	4,	19,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, OperandInfo15 },  // Inst #674 = STFSRri
  { 673,	4,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo140 },  // Inst #673 = STFArr
  { 672,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo139 },  // Inst #672 = STDrr
  { 671,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo138 },  // Inst #671 = STDri
  { 670,	3,	0,	4,	20,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo137 },  // Inst #670 = STDFrr
  { 669,	3,	0,	4,	20,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo136 },  // Inst #669 = STDFri
  { 668,	2,	1,	4,	20,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList19, OperandInfo54 },  // Inst #668 = STDFQrr
  { 667,	2,	1,	4,	20,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList19, OperandInfo15 },  // Inst #667 = STDFQri
  { 666,	4,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo135 },  // Inst #666 = STDFArr
  { 665,	3,	0,	4,	20,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo134 },  // Inst #665 = STDCrr
  { 664,	3,	0,	4,	20,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo133 },  // Inst #664 = STDCri
  { 663,	2,	1,	4,	20,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList18, OperandInfo54 },  // Inst #663 = STDCQrr
  { 662,	2,	1,	4,	20,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList18, OperandInfo15 },  // Inst #662 = STDCQri
  { 661,	4,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo132 },  // Inst #661 = STDArr
  { 660,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo131 },  // Inst #660 = STCrr
  { 659,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo130 },  // Inst #659 = STCri
  { 658,	2,	1,	4,	19,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, OperandInfo54 },  // Inst #658 = STCSRrr
  { 657,	2,	1,	4,	19,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, OperandInfo15 },  // Inst #657 = STCSRri
  { 656,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo129 },  // Inst #656 = STBrr
  { 655,	3,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo128 },  // Inst #655 = STBri
  { 654,	4,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo127 },  // Inst #654 = STBArr
  { 653,	0,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #653 = STBAR
  { 652,	4,	0,	4,	19,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo127 },  // Inst #652 = STArr
  { 651,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #651 = SRLrr
  { 650,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #650 = SRLri
  { 649,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo124 },  // Inst #649 = SRLXrr
  { 648,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo123 },  // Inst #648 = SRLXri
  { 647,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #647 = SRArr
  { 646,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #646 = SRAri
  { 645,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo124 },  // Inst #645 = SRAXrr
  { 644,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo123 },  // Inst #644 = SRAXri
  { 643,	3,	1,	4,	18,	0,	1,	0, 0x0ULL, ImplicitList17, OperandInfo51 },  // Inst #643 = SMULrr
  { 642,	3,	1,	4,	18,	0,	1,	0, 0x0ULL, ImplicitList17, OperandInfo50 },  // Inst #642 = SMULri
  { 641,	3,	1,	4,	18,	0,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList16, OperandInfo51 },  // Inst #641 = SMULCCrr
  { 640,	3,	1,	4,	18,	0,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList16, OperandInfo50 },  // Inst #640 = SMULCCri
  { 639,	4,	1,	4,	17,	2,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList15, OperandInfo126 },  // Inst #639 = SMACrr
  { 638,	4,	1,	4,	17,	2,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList15, OperandInfo125 },  // Inst #638 = SMACri
  { 637,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #637 = SLLrr
  { 636,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #636 = SLLri
  { 635,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo124 },  // Inst #635 = SLLXrr
  { 634,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo123 },  // Inst #634 = SLLXri
  { 633,	1,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #633 = SIR
  { 632,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #632 = SIAM
  { 631,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #631 = SHUTDOWN
  { 630,	2,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo49 },  // Inst #630 = SETHIi
  { 629,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo49 },  // Inst #629 = SETHIXi
  { 628,	3,	1,	4,	16,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList14, OperandInfo51 },  // Inst #628 = SDIVrr
  { 627,	3,	1,	4,	16,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList14, OperandInfo50 },  // Inst #627 = SDIVri
  { 626,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #626 = SDIVXrr
  { 625,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo117 },  // Inst #625 = SDIVXri
  { 624,	3,	1,	4,	16,	1,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList13, OperandInfo51 },  // Inst #624 = SDIVCCrr
  { 623,	3,	1,	4,	16,	1,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList13, OperandInfo50 },  // Inst #623 = SDIVCCri
  { 622,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo51 },  // Inst #622 = SAVErr
  { 621,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #621 = SAVEri
  { 620,	2,	0,	4,	3,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo54 },  // Inst #620 = RETTrr
  { 619,	2,	0,	4,	3,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo15 },  // Inst #619 = RETTri
  { 618,	1,	0,	4,	3,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo3 },  // Inst #618 = RETL
  { 617,	1,	0,	4,	3,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #617 = RET
  { 616,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo51 },  // Inst #616 = RESTORErr
  { 615,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #615 = RESTOREri
  { 614,	1,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, OperandInfo121 },  // Inst #614 = RDWIM
  { 613,	1,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, OperandInfo121 },  // Inst #613 = RDTBR
  { 612,	1,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, OperandInfo121 },  // Inst #612 = RDPSR
  { 611,	2,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo122 },  // Inst #611 = RDPR
  { 610,	1,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo121 },  // Inst #610 = RDPC
  { 609,	2,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo120 },  // Inst #609 = RDASR
  { 608,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, OperandInfo63 },  // Inst #608 = PWRPSRrr
  { 607,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, OperandInfo62 },  // Inst #607 = PWRPSRri
  { 606,	3,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo119 },  // Inst #606 = PREFETCHr
  { 605,	3,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo118 },  // Inst #605 = PREFETCHi
  { 604,	2,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo63 },  // Inst #604 = POPCrr
  { 603,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #603 = PDISTN
  { 602,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #602 = PDIST
  { 601,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #601 = ORrr
  { 600,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #600 = ORri
  { 599,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #599 = ORXrr
  { 598,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo53 },  // Inst #598 = ORXri
  { 597,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #597 = ORXNrr
  { 596,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #596 = ORNrr
  { 595,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #595 = ORNri
  { 594,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #594 = ORNCCrr
  { 593,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #593 = ORNCCri
  { 592,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #592 = ORCCrr
  { 591,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #591 = ORCCri
  { 590,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #590 = NOP
  { 589,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #589 = MULXrr
  { 588,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo117 },  // Inst #588 = MULXri
  { 587,	3,	1,	4,	1,	2,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, OperandInfo51 },  // Inst #587 = MULSCCrr
  { 586,	3,	1,	4,	1,	2,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, OperandInfo50 },  // Inst #586 = MULSCCri
  { 585,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo116 },  // Inst #585 = MOVXTOD
  { 584,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo113 },  // Inst #584 = MOVXCCrr
  { 583,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo112 },  // Inst #583 = MOVXCCri
  { 582,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo116 },  // Inst #582 = MOVWTOS
  { 581,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo111 },  // Inst #581 = MOVSTOUW
  { 580,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo111 },  // Inst #580 = MOVSTOSW
  { 579,	5,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo115 },  // Inst #579 = MOVRrr
  { 578,	5,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo114 },  // Inst #578 = MOVRri
  { 577,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo113 },  // Inst #577 = MOVICCrr
  { 576,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo112 },  // Inst #576 = MOVICCri
  { 575,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList3, OperandInfo113 },  // Inst #575 = MOVFCCrr
  { 574,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList3, OperandInfo112 },  // Inst #574 = MOVFCCri
  { 573,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo111 },  // Inst #573 = MOVDTOX
  { 572,	1,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #572 = MEMBARi
  { 571,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo110 },  // Inst #571 = LZCNT
  { 570,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo89 },  // Inst #570 = LEA_ADDri
  { 569,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo108 },  // Inst #569 = LEAX_ADDri
  { 568,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo90 },  // Inst #568 = LDrr
  { 567,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo89 },  // Inst #567 = LDri
  { 566,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo109 },  // Inst #566 = LDXrr
  { 565,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo108 },  // Inst #565 = LDXri
  { 564,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, OperandInfo54 },  // Inst #564 = LDXFSRrr
  { 563,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, OperandInfo15 },  // Inst #563 = LDXFSRri
  { 562,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo90 },  // Inst #562 = LDUHrr
  { 561,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo89 },  // Inst #561 = LDUHri
  { 560,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo91 },  // Inst #560 = LDUHArr
  { 559,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo90 },  // Inst #559 = LDUBrr
  { 558,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo89 },  // Inst #558 = LDUBri
  { 557,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo91 },  // Inst #557 = LDUBArr
  { 556,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo109 },  // Inst #556 = LDSWrr
  { 555,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo108 },  // Inst #555 = LDSWri
  { 554,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo90 },  // Inst #554 = LDSTUBrr
  { 553,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo89 },  // Inst #553 = LDSTUBri
  { 552,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo91 },  // Inst #552 = LDSTUBArr
  { 551,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo90 },  // Inst #551 = LDSHrr
  { 550,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo89 },  // Inst #550 = LDSHri
  { 549,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo91 },  // Inst #549 = LDSHArr
  { 548,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo90 },  // Inst #548 = LDSBrr
  { 547,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo89 },  // Inst #547 = LDSBri
  { 546,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo91 },  // Inst #546 = LDSBArr
  { 545,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo107 },  // Inst #545 = LDQFrr
  { 544,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo106 },  // Inst #544 = LDQFri
  { 543,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo105 },  // Inst #543 = LDQFArr
  { 542,	3,	1,	4,	15,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo104 },  // Inst #542 = LDFrr
  { 541,	3,	1,	4,	15,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo103 },  // Inst #541 = LDFri
  { 540,	2,	0,	4,	15,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, OperandInfo54 },  // Inst #540 = LDFSRrr
  { 539,	2,	0,	4,	15,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, OperandInfo15 },  // Inst #539 = LDFSRri
  { 538,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo102 },  // Inst #538 = LDFArr
  { 537,	3,	1,	4,	14,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo101 },  // Inst #537 = LDDrr
  { 536,	3,	1,	4,	14,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo100 },  // Inst #536 = LDDri
  { 535,	3,	1,	4,	14,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo99 },  // Inst #535 = LDDFrr
  { 534,	3,	1,	4,	14,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo98 },  // Inst #534 = LDDFri
  { 533,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo97 },  // Inst #533 = LDDFArr
  { 532,	3,	1,	4,	14,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo96 },  // Inst #532 = LDDCrr
  { 531,	3,	1,	4,	14,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo95 },  // Inst #531 = LDDCri
  { 530,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo94 },  // Inst #530 = LDDArr
  { 529,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo93 },  // Inst #529 = LDCrr
  { 528,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo92 },  // Inst #528 = LDCri
  { 527,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, OperandInfo54 },  // Inst #527 = LDCSRrr
  { 526,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, OperandInfo15 },  // Inst #526 = LDCSRri
  { 525,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo91 },  // Inst #525 = LDArr
  { 524,	3,	1,	4,	3,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo90 },  // Inst #524 = JMPLrr
  { 523,	3,	1,	4,	3,	0,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo89 },  // Inst #523 = JMPLri
  { 522,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo88 },  // Inst #522 = GDOP_LDrr
  { 521,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo87 },  // Inst #521 = GDOP_LDXrr
  { 520,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo83 },  // Inst #520 = FZEROS
  { 519,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo82 },  // Inst #519 = FZERO
  { 518,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #518 = FXTOS
  { 517,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #517 = FXTOQ
  { 516,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo64 },  // Inst #516 = FXTOD
  { 515,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #515 = FXORS
  { 514,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #514 = FXOR
  { 513,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #513 = FXNORS
  { 512,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #512 = FXNOR
  { 511,	3,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #511 = FSUBS
  { 510,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #510 = FSUBQ
  { 509,	3,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo57 },  // Inst #509 = FSUBD
  { 508,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo73 },  // Inst #508 = FSTOX
  { 507,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo74 },  // Inst #507 = FSTOQ
  { 506,	2,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo66 },  // Inst #506 = FSTOI
  { 505,	2,	1,	4,	13,	0,	0,	0, 0x0ULL, nullptr, OperandInfo73 },  // Inst #505 = FSTOD
  { 504,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #504 = FSRL32
  { 503,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #503 = FSRL16
  { 502,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #502 = FSRC2S
  { 501,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #501 = FSRC2
  { 500,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #500 = FSRC1S
  { 499,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #499 = FSRC1
  { 498,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #498 = FSRA32
  { 497,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #497 = FSRA16
  { 496,	2,	1,	4,	12,	0,	0,	0, 0x0ULL, nullptr, OperandInfo66 },  // Inst #496 = FSQRTS
  { 495,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo65 },  // Inst #495 = FSQRTQ
  { 494,	2,	1,	4,	11,	0,	0,	0, 0x0ULL, nullptr, OperandInfo64 },  // Inst #494 = FSQRTD
  { 493,	3,	1,	4,	8,	0,	0,	0, 0x0ULL, nullptr, OperandInfo86 },  // Inst #493 = FSMULD
  { 492,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #492 = FSLL32
  { 491,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #491 = FSLL16
  { 490,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #490 = FSLAS32
  { 489,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #489 = FSLAS16
  { 488,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo84 },  // Inst #488 = FQTOX
  { 487,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo85 },  // Inst #487 = FQTOS
  { 486,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo85 },  // Inst #486 = FQTOI
  { 485,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo84 },  // Inst #485 = FQTOD
  { 484,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #484 = FPSUB32S
  { 483,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #483 = FPSUB32
  { 482,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #482 = FPSUB16S
  { 481,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #481 = FPSUB16
  { 480,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #480 = FPMERGE
  { 479,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #479 = FPADD64
  { 478,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #478 = FPADD32S
  { 477,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #477 = FPADD32
  { 476,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #476 = FPADD16S
  { 475,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #475 = FPADD16
  { 474,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #474 = FPACKFIX
  { 473,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #473 = FPACK32
  { 472,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #472 = FPACK16
  { 471,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #471 = FORS
  { 470,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #470 = FORNOT2S
  { 469,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #469 = FORNOT2
  { 468,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #468 = FORNOT1S
  { 467,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #467 = FORNOT1
  { 466,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #466 = FOR
  { 465,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo83 },  // Inst #465 = FONES
  { 464,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo82 },  // Inst #464 = FONE
  { 463,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #463 = FNSMULD
  { 462,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #462 = FNOT2S
  { 461,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #461 = FNOT2
  { 460,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #460 = FNOT1S
  { 459,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #459 = FNOT1
  { 458,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #458 = FNORS
  { 457,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #457 = FNOR
  { 456,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #456 = FNMULS
  { 455,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #455 = FNMULD
  { 454,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #454 = FNHADDS
  { 453,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #453 = FNHADDD
  { 452,	2,	1,	4,	10,	0,	0,	0, 0x0ULL, nullptr, OperandInfo66 },  // Inst #452 = FNEGS
  { 451,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo65 },  // Inst #451 = FNEGQ
  { 450,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo64 },  // Inst #450 = FNEGD
  { 449,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #449 = FNANDS
  { 448,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #448 = FNAND
  { 447,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #447 = FNADDS
  { 446,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #446 = FNADDD
  { 445,	3,	1,	4,	9,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #445 = FMULS
  { 444,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #444 = FMULQ
  { 443,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #443 = FMULD8ULX16
  { 442,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #442 = FMULD8SUX16
  { 441,	3,	1,	4,	8,	0,	0,	0, 0x0ULL, nullptr, OperandInfo57 },  // Inst #441 = FMULD
  { 440,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #440 = FMUL8X16AU
  { 439,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #439 = FMUL8X16AL
  { 438,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #438 = FMUL8X16
  { 437,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #437 = FMUL8ULX16
  { 436,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #436 = FMUL8SUX16
  { 435,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo81 },  // Inst #435 = FMOVS_XCC
  { 434,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo81 },  // Inst #434 = FMOVS_ICC
  { 433,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList3, OperandInfo81 },  // Inst #433 = FMOVS_FCC
  { 432,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #432 = FMOVS
  { 431,	5,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo80 },  // Inst #431 = FMOVRS
  { 430,	5,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo79 },  // Inst #430 = FMOVRQ
  { 429,	5,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo78 },  // Inst #429 = FMOVRD
  { 428,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo77 },  // Inst #428 = FMOVQ_XCC
  { 427,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo77 },  // Inst #427 = FMOVQ_ICC
  { 426,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList3, OperandInfo77 },  // Inst #426 = FMOVQ_FCC
  { 425,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo65 },  // Inst #425 = FMOVQ
  { 424,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo76 },  // Inst #424 = FMOVD_XCC
  { 423,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList4, OperandInfo76 },  // Inst #423 = FMOVD_ICC
  { 422,	4,	1,	4,	0,	1,	0,	0, 0x0ULL, ImplicitList3, OperandInfo76 },  // Inst #422 = FMOVD_FCC
  { 421,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #421 = FMOVD
  { 420,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #420 = FMEAN16
  { 419,	2,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo54 },  // Inst #419 = FLUSHrr
  { 418,	2,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo15 },  // Inst #418 = FLUSHri
  { 417,	0,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #417 = FLUSHW
  { 416,	0,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #416 = FLUSH
  { 415,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo75 },  // Inst #415 = FLCMPS
  { 414,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo75 },  // Inst #414 = FLCMPD
  { 413,	2,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo66 },  // Inst #413 = FITOS
  { 412,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo74 },  // Inst #412 = FITOQ
  { 411,	2,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo73 },  // Inst #411 = FITOD
  { 410,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #410 = FHSUBS
  { 409,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #409 = FHSUBD
  { 408,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #408 = FHADDS
  { 407,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #407 = FHADDD
  { 406,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #406 = FEXPAND
  { 405,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo64 },  // Inst #405 = FDTOX
  { 404,	2,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #404 = FDTOS
  { 403,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #403 = FDTOQ
  { 402,	2,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #402 = FDTOI
  { 401,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo70 },  // Inst #401 = FDMULQ
  { 400,	3,	1,	4,	7,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #400 = FDIVS
  { 399,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #399 = FDIVQ
  { 398,	3,	1,	4,	6,	0,	0,	0, 0x0ULL, nullptr, OperandInfo57 },  // Inst #398 = FDIVD
  { 397,	2,	0,	4,	5,	0,	1,	0, 0x0ULL, ImplicitList3, OperandInfo66 },  // Inst #397 = FCMPS_V9
  { 396,	2,	0,	4,	5,	0,	1,	0, 0x0ULL, ImplicitList3, OperandInfo66 },  // Inst #396 = FCMPS
  { 395,	2,	0,	4,	0,	0,	1,	0, 0x0ULL, ImplicitList3, OperandInfo65 },  // Inst #395 = FCMPQ_V9
  { 394,	2,	0,	4,	0,	0,	1,	0, 0x0ULL, ImplicitList3, OperandInfo65 },  // Inst #394 = FCMPQ
  { 393,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #393 = FCMPNE32
  { 392,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #392 = FCMPNE16
  { 391,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #391 = FCMPLE32
  { 390,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #390 = FCMPLE16
  { 389,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #389 = FCMPGT32
  { 388,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #388 = FCMPGT16
  { 387,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #387 = FCMPEQ32
  { 386,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #386 = FCMPEQ16
  { 385,	2,	0,	4,	5,	0,	1,	0, 0x0ULL, ImplicitList3, OperandInfo64 },  // Inst #385 = FCMPD_V9
  { 384,	2,	0,	4,	5,	0,	1,	0, 0x0ULL, ImplicitList3, OperandInfo64 },  // Inst #384 = FCMPD
  { 383,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #383 = FCHKSM16
  { 382,	2,	0,	4,	2,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, OperandInfo7 },  // Inst #382 = FBCOND_V9
  { 381,	2,	0,	4,	2,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, OperandInfo7 },  // Inst #381 = FBCONDA_V9
  { 380,	2,	0,	4,	2,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, OperandInfo7 },  // Inst #380 = FBCONDA
  { 379,	2,	0,	4,	2,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, OperandInfo7 },  // Inst #379 = FBCOND
  { 378,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #378 = FANDS
  { 377,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #377 = FANDNOT2S
  { 376,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #376 = FANDNOT2
  { 375,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #375 = FANDNOT1S
  { 374,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #374 = FANDNOT1
  { 373,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #373 = FAND
  { 372,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #372 = FALIGNADATA
  { 371,	3,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #371 = FADDS
  { 370,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #370 = FADDQ
  { 369,	3,	1,	4,	5,	0,	0,	0, 0x0ULL, nullptr, OperandInfo57 },  // Inst #369 = FADDD
  { 368,	2,	1,	4,	4,	0,	0,	0, 0x0ULL, nullptr, OperandInfo66 },  // Inst #368 = FABSS
  { 367,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo65 },  // Inst #367 = FABSQ
  { 366,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo64 },  // Inst #366 = FABSD
  { 365,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #365 = EDGE8N
  { 364,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #364 = EDGE8LN
  { 363,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #363 = EDGE8L
  { 362,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #362 = EDGE8
  { 361,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #361 = EDGE32N
  { 360,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #360 = EDGE32LN
  { 359,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #359 = EDGE32L
  { 358,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #358 = EDGE32
  { 357,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #357 = EDGE16N
  { 356,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #356 = EDGE16LN
  { 355,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #355 = EDGE16L
  { 354,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #354 = EDGE16
  { 353,	2,	0,	4,	1,	0,	1,	0, 0x0ULL, ImplicitList4, OperandInfo63 },  // Inst #353 = CMPrr
  { 352,	2,	0,	4,	1,	0,	1,	0, 0x0ULL, ImplicitList4, OperandInfo62 },  // Inst #352 = CMPri
  { 351,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo61 },  // Inst #351 = CMASK8
  { 350,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo61 },  // Inst #350 = CMASK32
  { 349,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo61 },  // Inst #349 = CMASK16
  { 348,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo7 },  // Inst #348 = CBCONDA
  { 347,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo7 },  // Inst #347 = CBCOND
  { 346,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo58 },  // Inst #346 = CASrr
  { 345,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo60 },  // Inst #345 = CASXrr
  { 344,	5,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #344 = CASArr
  { 343,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo58 },  // Inst #343 = CASAasi10
  { 342,	2,	0,	4,	3,	1,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList6, OperandInfo54 },  // Inst #342 = CALLrr
  { 341,	2,	0,	4,	3,	1,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList6, OperandInfo15 },  // Inst #341 = CALLri
  { 340,	1,	0,	4,	3,	1,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList6, OperandInfo2 },  // Inst #340 = CALL
  { 339,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #339 = BSHUFFLE
  { 338,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #338 = BPZnapt
  { 337,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #337 = BPZnapn
  { 336,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #336 = BPZapt
  { 335,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #335 = BPZapn
  { 334,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #334 = BPXCCNT
  { 333,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #333 = BPXCCANT
  { 332,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #332 = BPXCCA
  { 331,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #331 = BPXCC
  { 330,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #330 = BPNZnapt
  { 329,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #329 = BPNZnapn
  { 328,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #328 = BPNZapt
  { 327,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #327 = BPNZapn
  { 326,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #326 = BPLZnapt
  { 325,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #325 = BPLZnapn
  { 324,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #324 = BPLZapt
  { 323,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #323 = BPLZapn
  { 322,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #322 = BPLEZnapt
  { 321,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #321 = BPLEZnapn
  { 320,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #320 = BPLEZapt
  { 319,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #319 = BPLEZapn
  { 318,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #318 = BPICCNT
  { 317,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #317 = BPICCANT
  { 316,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #316 = BPICCA
  { 315,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #315 = BPICC
  { 314,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #314 = BPGZnapt
  { 313,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #313 = BPGZnapn
  { 312,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #312 = BPGZapt
  { 311,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #311 = BPGZapn
  { 310,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #310 = BPGEZnapt
  { 309,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #309 = BPGEZnapn
  { 308,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #308 = BPGEZapt
  { 307,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo56 },  // Inst #307 = BPGEZapn
  { 306,	3,	0,	4,	2,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo55 },  // Inst #306 = BPFCCNT
  { 305,	3,	0,	4,	2,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo55 },  // Inst #305 = BPFCCANT
  { 304,	3,	0,	4,	2,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo55 },  // Inst #304 = BPFCCA
  { 303,	3,	0,	4,	2,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo55 },  // Inst #303 = BPFCC
  { 302,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo2 },  // Inst #302 = BPA
  { 301,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #301 = BMASK
  { 300,	2,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo54 },  // Inst #300 = BINDrr
  { 299,	2,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo15 },  // Inst #299 = BINDri
  { 298,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #298 = BCONDA
  { 297,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #297 = BCOND
  { 296,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo2 },  // Inst #296 = BA
  { 295,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #295 = ARRAY8
  { 294,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #294 = ARRAY32
  { 293,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #293 = ARRAY16
  { 292,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #292 = ANDrr
  { 291,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #291 = ANDri
  { 290,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #290 = ANDXrr
  { 289,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo53 },  // Inst #289 = ANDXri
  { 288,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #288 = ANDXNrr
  { 287,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #287 = ANDNrr
  { 286,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #286 = ANDNri
  { 285,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #285 = ANDNCCrr
  { 284,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #284 = ANDNCCri
  { 283,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #283 = ANDCCrr
  { 282,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #282 = ANDCCri
  { 281,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #281 = ALIGNADDRL
  { 280,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo52 },  // Inst #280 = ALIGNADDR
  { 279,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo51 },  // Inst #279 = ADDrr
  { 278,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #278 = ADDri
  { 277,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo52 },  // Inst #277 = ADDXrr
  { 276,	3,	1,	4,	1,	0,	0,	0, 0x0ULL, nullptr, OperandInfo53 },  // Inst #276 = ADDXri
  { 275,	3,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList5, OperandInfo52 },  // Inst #275 = ADDXCCC
  { 274,	3,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo52 },  // Inst #274 = ADDXC
  { 273,	3,	1,	4,	1,	1,	1,	0, 0x0ULL, ImplicitList5, OperandInfo51 },  // Inst #273 = ADDErr
  { 272,	3,	1,	4,	1,	1,	1,	0, 0x0ULL, ImplicitList5, OperandInfo50 },  // Inst #272 = ADDEri
  { 271,	3,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #271 = ADDCrr
  { 270,	3,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #270 = ADDCri
  { 269,	3,	1,	4,	1,	0,	1,	0, 0x0ULL, ImplicitList4, OperandInfo51 },  // Inst #269 = ADDCCrr
  { 268,	3,	1,	4,	1,	0,	1,	0, 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #268 = ADDCCri
  { 267,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo49 },  // Inst #267 = SET
  { 266,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #266 = SELECT_CC_QFP_XCC
  { 265,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #265 = SELECT_CC_QFP_ICC
  { 264,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, OperandInfo48 },  // Inst #264 = SELECT_CC_QFP_FCC
  { 263,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #263 = SELECT_CC_Int_XCC
  { 262,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #262 = SELECT_CC_Int_ICC
  { 261,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, OperandInfo47 },  // Inst #261 = SELECT_CC_Int_FCC
  { 260,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, OperandInfo46 },  // Inst #260 = SELECT_CC_FP_XCC
  { 259,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, OperandInfo46 },  // Inst #259 = SELECT_CC_FP_ICC
  { 258,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, OperandInfo46 },  // Inst #258 = SELECT_CC_FP_FCC
  { 257,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, OperandInfo45 },  // Inst #257 = SELECT_CC_DFP_XCC
  { 256,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, OperandInfo45 },  // Inst #256 = SELECT_CC_DFP_ICC
  { 255,	4,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, OperandInfo45 },  // Inst #255 = SELECT_CC_DFP_FCC
  { 254,	1,	1,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, OperandInfo2 },  // Inst #254 = GETPCX
  { 253,	2,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, OperandInfo10 },  // Inst #253 = ADJCALLSTACKUP
  { 252,	2,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, OperandInfo10 },  // Inst #252 = ADJCALLSTACKDOWN
  { 251,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo44 },  // Inst #251 = G_UBFX
  { 250,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo44 },  // Inst #250 = G_SBFX
  { 249,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #249 = G_VECREDUCE_UMIN
  { 248,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #248 = G_VECREDUCE_UMAX
  { 247,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #247 = G_VECREDUCE_SMIN
  { 246,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #246 = G_VECREDUCE_SMAX
  { 245,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #245 = G_VECREDUCE_XOR
  { 244,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #244 = G_VECREDUCE_OR
  { 243,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #243 = G_VECREDUCE_AND
  { 242,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #242 = G_VECREDUCE_MUL
  { 241,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #241 = G_VECREDUCE_ADD
  { 240,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #240 = G_VECREDUCE_FMIN
  { 239,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #239 = G_VECREDUCE_FMAX
  { 238,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #238 = G_VECREDUCE_FMUL
  { 237,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #237 = G_VECREDUCE_FADD
  { 236,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo40 },  // Inst #236 = G_VECREDUCE_SEQ_FMUL
  { 235,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo40 },  // Inst #235 = G_VECREDUCE_SEQ_FADD
  { 234,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo22 },  // Inst #234 = G_BZERO
  { 233,	4,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo43 },  // Inst #233 = G_MEMSET
  { 232,	4,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo43 },  // Inst #232 = G_MEMMOVE
  { 231,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo40 },  // Inst #231 = G_MEMCPY_INLINE
  { 230,	4,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo43 },  // Inst #230 = G_MEMCPY
  { 229,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, OperandInfo42 },  // Inst #229 = G_WRITE_REGISTER
  { 228,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, OperandInfo21 },  // Inst #228 = G_READ_REGISTER
  { 227,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo25 },  // Inst #227 = G_STRICT_FSQRT
  { 226,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo19 },  // Inst #226 = G_STRICT_FMA
  { 225,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo18 },  // Inst #225 = G_STRICT_FREM
  { 224,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo18 },  // Inst #224 = G_STRICT_FDIV
  { 223,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo18 },  // Inst #223 = G_STRICT_FMUL
  { 222,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo18 },  // Inst #222 = G_STRICT_FSUB
  { 221,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo18 },  // Inst #221 = G_STRICT_FADD
  { 220,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo26 },  // Inst #220 = G_DYN_STACKALLOC
  { 219,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo21 },  // Inst #219 = G_JUMP_TABLE
  { 218,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo21 },  // Inst #218 = G_BLOCK_ADDR
  { 217,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #217 = G_ADDRSPACE_CAST
  { 216,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #216 = G_FNEARBYINT
  { 215,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #215 = G_FRINT
  { 214,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #214 = G_FFLOOR
  { 213,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #213 = G_FSQRT
  { 212,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #212 = G_FSIN
  { 211,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #211 = G_FCOS
  { 210,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #210 = G_FCEIL
  { 209,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #209 = G_BITREVERSE
  { 208,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #208 = G_BSWAP
  { 207,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #207 = G_CTPOP
  { 206,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #206 = G_CTLZ_ZERO_UNDEF
  { 205,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #205 = G_CTLZ
  { 204,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #204 = G_CTTZ_ZERO_UNDEF
  { 203,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #203 = G_CTTZ
  { 202,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo41 },  // Inst #202 = G_SHUFFLE_VECTOR
  { 201,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo40 },  // Inst #201 = G_EXTRACT_VECTOR_ELT
  { 200,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo39 },  // Inst #200 = G_INSERT_VECTOR_ELT
  { 199,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo38 },  // Inst #199 = G_BRJT
  { 198,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo2 },  // Inst #198 = G_BR
  { 197,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #197 = G_LLROUND
  { 196,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #196 = G_LROUND
  { 195,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #195 = G_ABS
  { 194,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #194 = G_UMAX
  { 193,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #193 = G_UMIN
  { 192,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #192 = G_SMAX
  { 191,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #191 = G_SMIN
  { 190,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #190 = G_PTRMASK
  { 189,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #189 = G_PTR_ADD
  { 188,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #188 = G_FMAXIMUM
  { 187,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #187 = G_FMINIMUM
  { 186,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #186 = G_FMAXNUM_IEEE
  { 185,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #185 = G_FMINNUM_IEEE
  { 184,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #184 = G_FMAXNUM
  { 183,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #183 = G_FMINNUM
  { 182,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #182 = G_FCANONICALIZE
  { 181,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo32 },  // Inst #181 = G_IS_FPCLASS
  { 180,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #180 = G_FCOPYSIGN
  { 179,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #179 = G_FABS
  { 178,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #178 = G_UITOFP
  { 177,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #177 = G_SITOFP
  { 176,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #176 = G_FPTOUI
  { 175,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #175 = G_FPTOSI
  { 174,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #174 = G_FPTRUNC
  { 173,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #173 = G_FPEXT
  { 172,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #172 = G_FNEG
  { 171,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #171 = G_FLOG10
  { 170,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #170 = G_FLOG2
  { 169,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #169 = G_FLOG
  { 168,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #168 = G_FEXP2
  { 167,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #167 = G_FEXP
  { 166,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #166 = G_FPOWI
  { 165,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #165 = G_FPOW
  { 164,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #164 = G_FREM
  { 163,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #163 = G_FDIV
  { 162,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo19 },  // Inst #162 = G_FMAD
  { 161,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo19 },  // Inst #161 = G_FMA
  { 160,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #160 = G_FMUL
  { 159,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #159 = G_FSUB
  { 158,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #158 = G_FADD
  { 157,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo37 },  // Inst #157 = G_UDIVFIXSAT
  { 156,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo37 },  // Inst #156 = G_SDIVFIXSAT
  { 155,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo37 },  // Inst #155 = G_UDIVFIX
  { 154,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo37 },  // Inst #154 = G_SDIVFIX
  { 153,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo37 },  // Inst #153 = G_UMULFIXSAT
  { 152,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo37 },  // Inst #152 = G_SMULFIXSAT
  { 151,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo37 },  // Inst #151 = G_UMULFIX
  { 150,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo37 },  // Inst #150 = G_SMULFIX
  { 149,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #149 = G_SSHLSAT
  { 148,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #148 = G_USHLSAT
  { 147,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #147 = G_SSUBSAT
  { 146,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #146 = G_USUBSAT
  { 145,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #145 = G_SADDSAT
  { 144,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #144 = G_UADDSAT
  { 143,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #143 = G_SMULH
  { 142,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #142 = G_UMULH
  { 141,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo30 },  // Inst #141 = G_SMULO
  { 140,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo30 },  // Inst #140 = G_UMULO
  { 139,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo36 },  // Inst #139 = G_SSUBE
  { 138,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo30 },  // Inst #138 = G_SSUBO
  { 137,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo36 },  // Inst #137 = G_SADDE
  { 136,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo30 },  // Inst #136 = G_SADDO
  { 135,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo36 },  // Inst #135 = G_USUBE
  { 134,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo30 },  // Inst #134 = G_USUBO
  { 133,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo36 },  // Inst #133 = G_UADDE
  { 132,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo30 },  // Inst #132 = G_UADDO
  { 131,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo30 },  // Inst #131 = G_SELECT
  { 130,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo35 },  // Inst #130 = G_FCMP
  { 129,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo35 },  // Inst #129 = G_ICMP
  { 128,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #128 = G_ROTL
  { 127,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #127 = G_ROTR
  { 126,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo34 },  // Inst #126 = G_FSHR
  { 125,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo34 },  // Inst #125 = G_FSHL
  { 124,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #124 = G_ASHR
  { 123,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #123 = G_LSHR
  { 122,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo33 },  // Inst #122 = G_SHL
  { 121,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #121 = G_ZEXT
  { 120,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo17 },  // Inst #120 = G_SEXT_INREG
  { 119,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #119 = G_SEXT
  { 118,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo32 },  // Inst #118 = G_VAARG
  { 117,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo20 },  // Inst #117 = G_VASTART
  { 116,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo21 },  // Inst #116 = G_FCONSTANT
  { 115,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo21 },  // Inst #115 = G_CONSTANT
  { 114,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #114 = G_TRUNC
  { 113,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #113 = G_ANYEXT
  { 112,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, OperandInfo2 },  // Inst #112 = G_INTRINSIC_W_SIDE_EFFECTS
  { 111,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, OperandInfo2 },  // Inst #111 = G_INTRINSIC
  { 110,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #110 = G_INVOKE_REGION_START
  { 109,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo20 },  // Inst #109 = G_BRINDIRECT
  { 108,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo21 },  // Inst #108 = G_BRCOND
  { 107,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #107 = G_FENCE
  { 106,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #106 = G_ATOMICRMW_UDEC_WRAP
  { 105,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #105 = G_ATOMICRMW_UINC_WRAP
  { 104,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #104 = G_ATOMICRMW_FMIN
  { 103,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #103 = G_ATOMICRMW_FMAX
  { 102,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #102 = G_ATOMICRMW_FSUB
  { 101,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #101 = G_ATOMICRMW_FADD
  { 100,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #100 = G_ATOMICRMW_UMIN
  { 99,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #99 = G_ATOMICRMW_UMAX
  { 98,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #98 = G_ATOMICRMW_MIN
  { 97,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #97 = G_ATOMICRMW_MAX
  { 96,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #96 = G_ATOMICRMW_XOR
  { 95,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #95 = G_ATOMICRMW_OR
  { 94,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #94 = G_ATOMICRMW_NAND
  { 93,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #93 = G_ATOMICRMW_AND
  { 92,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #92 = G_ATOMICRMW_SUB
  { 91,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #91 = G_ATOMICRMW_ADD
  { 90,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo31 },  // Inst #90 = G_ATOMICRMW_XCHG
  { 89,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo30 },  // Inst #89 = G_ATOMIC_CMPXCHG
  { 88,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo29 },  // Inst #88 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 87,	5,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo28 },  // Inst #87 = G_INDEXED_STORE
  { 86,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo23 },  // Inst #86 = G_STORE
  { 85,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo27 },  // Inst #85 = G_INDEXED_ZEXTLOAD
  { 84,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo27 },  // Inst #84 = G_INDEXED_SEXTLOAD
  { 83,	5,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo27 },  // Inst #83 = G_INDEXED_LOAD
  { 82,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo23 },  // Inst #82 = G_ZEXTLOAD
  { 81,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo23 },  // Inst #81 = G_SEXTLOAD
  { 80,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo23 },  // Inst #80 = G_LOAD
  { 79,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo20 },  // Inst #79 = G_READCYCLECOUNTER
  { 78,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #78 = G_INTRINSIC_ROUNDEVEN
  { 77,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #77 = G_INTRINSIC_LRINT
  { 76,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #76 = G_INTRINSIC_ROUND
  { 75,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #75 = G_INTRINSIC_TRUNC
  { 74,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo26 },  // Inst #74 = G_INTRINSIC_FPTRUNC_ROUND
  { 73,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo25 },  // Inst #73 = G_FREEZE
  { 72,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #72 = G_BITCAST
  { 71,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #71 = G_INTTOPTR
  { 70,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo23 },  // Inst #70 = G_PTRTOINT
  { 69,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo23 },  // Inst #69 = G_CONCAT_VECTORS
  { 68,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo23 },  // Inst #68 = G_BUILD_VECTOR_TRUNC
  { 67,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo23 },  // Inst #67 = G_BUILD_VECTOR
  { 66,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo23 },  // Inst #66 = G_MERGE_VALUES
  { 65,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo24 },  // Inst #65 = G_INSERT
  { 64,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo23 },  // Inst #64 = G_UNMERGE_VALUES
  { 63,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo22 },  // Inst #63 = G_EXTRACT
  { 62,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo21 },  // Inst #62 = G_CONSTANT_POOL
  { 61,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo21 },  // Inst #61 = G_GLOBAL_VALUE
  { 60,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo21 },  // Inst #60 = G_FRAME_INDEX
  { 59,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo20 },  // Inst #59 = G_PHI
  { 58,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo20 },  // Inst #58 = G_IMPLICIT_DEF
  { 57,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #57 = G_XOR
  { 56,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #56 = G_OR
  { 55,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #55 = G_AND
  { 54,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo19 },  // Inst #54 = G_UDIVREM
  { 53,	4,	2,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo19 },  // Inst #53 = G_SDIVREM
  { 52,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #52 = G_UREM
  { 51,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #51 = G_SREM
  { 50,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #50 = G_UDIV
  { 49,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #49 = G_SDIV
  { 48,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #48 = G_MUL
  { 47,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo18 },  // Inst #47 = G_SUB
  { 46,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, OperandInfo18 },  // Inst #46 = G_ADD
  { 45,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo17 },  // Inst #45 = G_ASSERT_ALIGN
  { 44,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo17 },  // Inst #44 = G_ASSERT_ZEXT
  { 43,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo17 },  // Inst #43 = G_ASSERT_SEXT
  { 42,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #42 = MEMBARRIER
  { 41,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #41 = ICALL_BRANCH_FUNNEL
  { 40,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo16 },  // Inst #40 = PATCHABLE_TYPED_EVENT_CALL
  { 39,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo15 },  // Inst #39 = PATCHABLE_EVENT_CALL
  { 38,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #38 = PATCHABLE_TAIL_CALL
  { 37,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #37 = PATCHABLE_FUNCTION_EXIT
  { 36,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #36 = PATCHABLE_RET
  { 35,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #35 = PATCHABLE_FUNCTION_ENTER
  { 34,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #34 = PATCHABLE_OP
  { 33,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #33 = FAULTING_OP
  { 32,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo14 },  // Inst #32 = LOCAL_ESCAPE
  { 31,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #31 = STATEPOINT
  { 30,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo13 },  // Inst #30 = PREALLOCATED_ARG
  { 29,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #29 = PREALLOCATED_SETUP
  { 28,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, OperandInfo12 },  // Inst #28 = LOAD_STACK_GUARD
  { 27,	6,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo11 },  // Inst #27 = PATCHPOINT
  { 26,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #26 = FENTRY_CALL
  { 25,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #25 = STACKMAP
  { 24,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta), 0x0ULL, nullptr, OperandInfo9 },  // Inst #24 = ARITH_FENCE
  { 23,	4,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo8 },  // Inst #23 = PSEUDO_PROBE
  { 22,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta), 0x0ULL, nullptr, OperandInfo3 },  // Inst #22 = LIFETIME_END
  { 21,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta), 0x0ULL, nullptr, OperandInfo3 },  // Inst #21 = LIFETIME_START
  { 20,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr },  // Inst #20 = BUNDLE
  { 19,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, OperandInfo7 },  // Inst #19 = COPY
  { 18,	2,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, OperandInfo7 },  // Inst #18 = REG_SEQUENCE
  { 17,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta), 0x0ULL, nullptr, OperandInfo2 },  // Inst #17 = DBG_LABEL
  { 16,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr },  // Inst #16 = DBG_PHI
  { 15,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr },  // Inst #15 = DBG_INSTR_REF
  { 14,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr },  // Inst #14 = DBG_VALUE_LIST
  { 13,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 12,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 11,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 10,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 8,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 7,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr },  // Inst #7 = KILL
  { 6,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 5,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 4,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 3,	1,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Meta)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 2,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 1,	0,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 0,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, OperandInfo2 },  // Inst #0 = PHI
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char SparcInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "CASAasi10\0"
  /* 19 */ "TA1\0"
  /* 23 */ "FSRC1\0"
  /* 29 */ "FANDNOT1\0"
  /* 38 */ "FNOT1\0"
  /* 44 */ "FORNOT1\0"
  /* 52 */ "FSRA32\0"
  /* 59 */ "FPSUB32\0"
  /* 67 */ "FPADD32\0"
  /* 75 */ "EDGE32\0"
  /* 82 */ "FCMPLE32\0"
  /* 91 */ "FCMPNE32\0"
  /* 100 */ "FPACK32\0"
  /* 108 */ "CMASK32\0"
  /* 116 */ "FSLL32\0"
  /* 123 */ "FSRL32\0"
  /* 130 */ "FCMPEQ32\0"
  /* 139 */ "FSLAS32\0"
  /* 147 */ "FCMPGT32\0"
  /* 156 */ "ARRAY32\0"
  /* 164 */ "FSRC2\0"
  /* 170 */ "G_FLOG2\0"
  /* 178 */ "G_FEXP2\0"
  /* 186 */ "FANDNOT2\0"
  /* 195 */ "FNOT2\0"
  /* 201 */ "FORNOT2\0"
  /* 209 */ "TA3\0"
  /* 213 */ "FPADD64\0"
  /* 221 */ "TA5\0"
  /* 225 */ "FSRA16\0"
  /* 232 */ "FPSUB16\0"
  /* 240 */ "FPADD16\0"
  /* 248 */ "EDGE16\0"
  /* 255 */ "FCMPLE16\0"
  /* 264 */ "FCMPNE16\0"
  /* 273 */ "FPACK16\0"
  /* 281 */ "CMASK16\0"
  /* 289 */ "FSLL16\0"
  /* 296 */ "FSRL16\0"
  /* 303 */ "FCHKSM16\0"
  /* 312 */ "FMEAN16\0"
  /* 320 */ "FCMPEQ16\0"
  /* 329 */ "FSLAS16\0"
  /* 337 */ "FCMPGT16\0"
  /* 346 */ "FMUL8X16\0"
  /* 355 */ "FMULD8ULX16\0"
  /* 367 */ "FMUL8ULX16\0"
  /* 378 */ "FMULD8SUX16\0"
  /* 390 */ "FMUL8SUX16\0"
  /* 401 */ "ARRAY16\0"
  /* 409 */ "EDGE8\0"
  /* 415 */ "CMASK8\0"
  /* 422 */ "ARRAY8\0"
  /* 429 */ "FBCONDA_V9\0"
  /* 440 */ "FBCOND_V9\0"
  /* 450 */ "FCMPD_V9\0"
  /* 459 */ "FCMPQ_V9\0"
  /* 468 */ "FCMPS_V9\0"
  /* 477 */ "BA\0"
  /* 480 */ "BPFCCA\0"
  /* 487 */ "BPICCA\0"
  /* 494 */ "BPXCCA\0"
  /* 501 */ "CBCONDA\0"
  /* 509 */ "FBCONDA\0"
  /* 517 */ "G_FMA\0"
  /* 523 */ "G_STRICT_FMA\0"
  /* 536 */ "BPA\0"
  /* 540 */ "FALIGNADATA\0"
  /* 552 */ "G_FSUB\0"
  /* 559 */ "G_STRICT_FSUB\0"
  /* 573 */ "G_ATOMICRMW_FSUB\0"
  /* 590 */ "G_SUB\0"
  /* 596 */ "G_ATOMICRMW_SUB\0"
  /* 612 */ "ADDXCCC\0"
  /* 620 */ "BPFCC\0"
  /* 626 */ "V9FMOVD_FCC\0"
  /* 638 */ "SELECT_CC_DFP_FCC\0"
  /* 656 */ "SELECT_CC_QFP_FCC\0"
  /* 674 */ "SELECT_CC_FP_FCC\0"
  /* 691 */ "V9FMOVQ_FCC\0"
  /* 703 */ "V9FMOVS_FCC\0"
  /* 715 */ "SELECT_CC_Int_FCC\0"
  /* 733 */ "BPICC\0"
  /* 739 */ "FMOVD_ICC\0"
  /* 749 */ "SELECT_CC_DFP_ICC\0"
  /* 767 */ "SELECT_CC_QFP_ICC\0"
  /* 785 */ "SELECT_CC_FP_ICC\0"
  /* 802 */ "FMOVQ_ICC\0"
  /* 812 */ "FMOVS_ICC\0"
  /* 822 */ "SELECT_CC_Int_ICC\0"
  /* 840 */ "BPXCC\0"
  /* 846 */ "FMOVD_XCC\0"
  /* 856 */ "SELECT_CC_DFP_XCC\0"
  /* 874 */ "SELECT_CC_QFP_XCC\0"
  /* 892 */ "SELECT_CC_FP_XCC\0"
  /* 909 */ "FMOVQ_XCC\0"
  /* 919 */ "FMOVS_XCC\0"
  /* 929 */ "SELECT_CC_Int_XCC\0"
  /* 947 */ "G_INTRINSIC\0"
  /* 959 */ "G_FPTRUNC\0"
  /* 969 */ "G_INTRINSIC_TRUNC\0"
  /* 987 */ "G_TRUNC\0"
  /* 995 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 1016 */ "G_DYN_STACKALLOC\0"
  /* 1033 */ "RDPC\0"
  /* 1038 */ "ADDXC\0"
  /* 1044 */ "G_FMAD\0"
  /* 1051 */ "G_INDEXED_SEXTLOAD\0"
  /* 1070 */ "G_SEXTLOAD\0"
  /* 1081 */ "G_INDEXED_ZEXTLOAD\0"
  /* 1100 */ "G_ZEXTLOAD\0"
  /* 1111 */ "G_INDEXED_LOAD\0"
  /* 1126 */ "G_LOAD\0"
  /* 1133 */ "FSUBD\0"
  /* 1139 */ "FHSUBD\0"
  /* 1146 */ "G_VECREDUCE_FADD\0"
  /* 1163 */ "G_FADD\0"
  /* 1170 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 1191 */ "G_STRICT_FADD\0"
  /* 1205 */ "G_ATOMICRMW_FADD\0"
  /* 1222 */ "G_VECREDUCE_ADD\0"
  /* 1238 */ "G_ADD\0"
  /* 1244 */ "G_PTR_ADD\0"
  /* 1254 */ "G_ATOMICRMW_ADD\0"
  /* 1270 */ "FADDD\0"
  /* 1276 */ "FHADDD\0"
  /* 1283 */ "FNHADDD\0"
  /* 1291 */ "FNADDD\0"
  /* 1298 */ "V9FCMPED\0"
  /* 1307 */ "FNEGD\0"
  /* 1313 */ "FMULD\0"
  /* 1319 */ "FNMULD\0"
  /* 1326 */ "FSMULD\0"
  /* 1333 */ "FNSMULD\0"
  /* 1341 */ "FAND\0"
  /* 1346 */ "FNAND\0"
  /* 1352 */ "G_ATOMICRMW_NAND\0"
  /* 1369 */ "FEXPAND\0"
  /* 1377 */ "G_VECREDUCE_AND\0"
  /* 1393 */ "G_AND\0"
  /* 1399 */ "G_ATOMICRMW_AND\0"
  /* 1415 */ "LIFETIME_END\0"
  /* 1428 */ "CBCOND\0"
  /* 1435 */ "FBCOND\0"
  /* 1442 */ "G_BRCOND\0"
  /* 1451 */ "G_LLROUND\0"
  /* 1461 */ "G_LROUND\0"
  /* 1470 */ "G_INTRINSIC_ROUND\0"
  /* 1488 */ "G_INTRINSIC_FPTRUNC_ROUND\0"
  /* 1514 */ "FITOD\0"
  /* 1520 */ "FQTOD\0"
  /* 1526 */ "FSTOD\0"
  /* 1532 */ "FXTOD\0"
  /* 1538 */ "MOVXTOD\0"
  /* 1546 */ "V9FCMPD\0"
  /* 1554 */ "FLCMPD\0"
  /* 1561 */ "LOAD_STACK_GUARD\0"
  /* 1578 */ "FMOVRD\0"
  /* 1585 */ "FABSD\0"
  /* 1591 */ "FSQRTD\0"
  /* 1598 */ "FDIVD\0"
  /* 1604 */ "FMOVD\0"
  /* 1610 */ "PSEUDO_PROBE\0"
  /* 1623 */ "G_SSUBE\0"
  /* 1631 */ "G_USUBE\0"
  /* 1639 */ "G_FENCE\0"
  /* 1647 */ "ARITH_FENCE\0"
  /* 1659 */ "REG_SEQUENCE\0"
  /* 1672 */ "G_SADDE\0"
  /* 1680 */ "G_UADDE\0"
  /* 1688 */ "G_FMINNUM_IEEE\0"
  /* 1703 */ "G_FMAXNUM_IEEE\0"
  /* 1718 */ "FPMERGE\0"
  /* 1726 */ "G_JUMP_TABLE\0"
  /* 1739 */ "BUNDLE\0"
  /* 1746 */ "BSHUFFLE\0"
  /* 1755 */ "G_MEMCPY_INLINE\0"
  /* 1771 */ "FONE\0"
  /* 1776 */ "LOCAL_ESCAPE\0"
  /* 1789 */ "G_INDEXED_STORE\0"
  /* 1805 */ "G_STORE\0"
  /* 1813 */ "G_BITREVERSE\0"
  /* 1826 */ "DBG_VALUE\0"
  /* 1836 */ "G_GLOBAL_VALUE\0"
  /* 1851 */ "G_MEMMOVE\0"
  /* 1861 */ "G_FREEZE\0"
  /* 1870 */ "G_FCANONICALIZE\0"
  /* 1886 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 1904 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 1922 */ "G_IMPLICIT_DEF\0"
  /* 1937 */ "DBG_INSTR_REF\0"
  /* 1951 */ "G_FNEG\0"
  /* 1958 */ "EXTRACT_SUBREG\0"
  /* 1973 */ "INSERT_SUBREG\0"
  /* 1987 */ "G_SEXT_INREG\0"
  /* 2000 */ "SUBREG_TO_REG\0"
  /* 2014 */ "G_ATOMIC_CMPXCHG\0"
  /* 2031 */ "G_ATOMICRMW_XCHG\0"
  /* 2048 */ "G_FLOG\0"
  /* 2055 */ "G_VAARG\0"
  /* 2063 */ "PREALLOCATED_ARG\0"
  /* 2080 */ "G_SMULH\0"
  /* 2088 */ "G_UMULH\0"
  /* 2096 */ "FLUSH\0"
  /* 2102 */ "DBG_PHI\0"
  /* 2110 */ "UMULXHI\0"
  /* 2118 */ "XMULXHI\0"
  /* 2126 */ "FDTOI\0"
  /* 2132 */ "FQTOI\0"
  /* 2138 */ "FSTOI\0"
  /* 2144 */ "G_FPTOSI\0"
  /* 2153 */ "G_FPTOUI\0"
  /* 2162 */ "G_FPOWI\0"
  /* 2170 */ "BMASK\0"
  /* 2176 */ "G_PTRMASK\0"
  /* 2186 */ "EDGE32L\0"
  /* 2194 */ "EDGE16L\0"
  /* 2202 */ "EDGE8L\0"
  /* 2209 */ "FMUL8X16AL\0"
  /* 2220 */ "GC_LABEL\0"
  /* 2229 */ "DBG_LABEL\0"
  /* 2239 */ "EH_LABEL\0"
  /* 2248 */ "ANNOTATION_LABEL\0"
  /* 2265 */ "ICALL_BRANCH_FUNNEL\0"
  /* 2285 */ "G_FSHL\0"
  /* 2292 */ "G_SHL\0"
  /* 2298 */ "G_FCEIL\0"
  /* 2306 */ "PATCHABLE_TAIL_CALL\0"
  /* 2326 */ "TLS_CALL\0"
  /* 2335 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 2362 */ "PATCHABLE_EVENT_CALL\0"
  /* 2383 */ "FENTRY_CALL\0"
  /* 2395 */ "KILL\0"
  /* 2400 */ "G_CONSTANT_POOL\0"
  /* 2416 */ "ALIGNADDRL\0"
  /* 2427 */ "RETL\0"
  /* 2432 */ "G_ROTL\0"
  /* 2439 */ "G_VECREDUCE_FMUL\0"
  /* 2456 */ "G_FMUL\0"
  /* 2463 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 2484 */ "G_STRICT_FMUL\0"
  /* 2498 */ "G_VECREDUCE_MUL\0"
  /* 2514 */ "G_MUL\0"
  /* 2520 */ "SIAM\0"
  /* 2525 */ "G_FREM\0"
  /* 2532 */ "G_STRICT_FREM\0"
  /* 2546 */ "G_SREM\0"
  /* 2553 */ "G_UREM\0"
  /* 2560 */ "G_SDIVREM\0"
  /* 2570 */ "G_UDIVREM\0"
  /* 2580 */ "RDWIM\0"
  /* 2586 */ "INLINEASM\0"
  /* 2596 */ "G_FMINIMUM\0"
  /* 2607 */ "G_FMAXIMUM\0"
  /* 2618 */ "G_FMINNUM\0"
  /* 2628 */ "G_FMAXNUM\0"
  /* 2638 */ "EDGE32N\0"
  /* 2646 */ "EDGE16N\0"
  /* 2654 */ "EDGE8N\0"
  /* 2661 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 2683 */ "G_ASSERT_ALIGN\0"
  /* 2698 */ "G_FCOPYSIGN\0"
  /* 2710 */ "G_VECREDUCE_FMIN\0"
  /* 2727 */ "G_ATOMICRMW_FMIN\0"
  /* 2744 */ "G_VECREDUCE_SMIN\0"
  /* 2761 */ "G_SMIN\0"
  /* 2768 */ "G_VECREDUCE_UMIN\0"
  /* 2785 */ "G_UMIN\0"
  /* 2792 */ "G_ATOMICRMW_UMIN\0"
  /* 2809 */ "G_ATOMICRMW_MIN\0"
  /* 2825 */ "G_FSIN\0"
  /* 2832 */ "EDGE32LN\0"
  /* 2841 */ "EDGE16LN\0"
  /* 2850 */ "EDGE8LN\0"
  /* 2858 */ "CFI_INSTRUCTION\0"
  /* 2874 */ "PDISTN\0"
  /* 2881 */ "ADJCALLSTACKDOWN\0"
  /* 2898 */ "SHUTDOWN\0"
  /* 2907 */ "G_SSUBO\0"
  /* 2915 */ "G_USUBO\0"
  /* 2923 */ "G_SADDO\0"
  /* 2931 */ "G_UADDO\0"
  /* 2939 */ "G_SMULO\0"
  /* 2947 */ "G_UMULO\0"
  /* 2955 */ "G_BZERO\0"
  /* 2963 */ "FZERO\0"
  /* 2969 */ "STACKMAP\0"
  /* 2978 */ "G_ATOMICRMW_UDEC_WRAP\0"
  /* 3000 */ "G_ATOMICRMW_UINC_WRAP\0"
  /* 3022 */ "G_BSWAP\0"
  /* 3030 */ "G_SITOFP\0"
  /* 3039 */ "G_UITOFP\0"
  /* 3048 */ "G_FCMP\0"
  /* 3055 */ "G_ICMP\0"
  /* 3062 */ "UNIMP\0"
  /* 3068 */ "NOP\0"
  /* 3072 */ "G_CTPOP\0"
  /* 3080 */ "PATCHABLE_OP\0"
  /* 3093 */ "FAULTING_OP\0"
  /* 3105 */ "ADJCALLSTACKUP\0"
  /* 3120 */ "PREALLOCATED_SETUP\0"
  /* 3139 */ "G_FEXP\0"
  /* 3146 */ "FSUBQ\0"
  /* 3152 */ "FADDQ\0"
  /* 3158 */ "V9FCMPEQ\0"
  /* 3167 */ "FNEGQ\0"
  /* 3173 */ "FDMULQ\0"
  /* 3180 */ "FMULQ\0"
  /* 3186 */ "FDTOQ\0"
  /* 3192 */ "FITOQ\0"
  /* 3198 */ "FSTOQ\0"
  /* 3204 */ "FXTOQ\0"
  /* 3210 */ "V9FCMPQ\0"
  /* 3218 */ "FMOVRQ\0"
  /* 3225 */ "FABSQ\0"
  /* 3231 */ "FSQRTQ\0"
  /* 3238 */ "FDIVQ\0"
  /* 3244 */ "FMOVQ\0"
  /* 3250 */ "STBAR\0"
  /* 3256 */ "RDTBR\0"
  /* 3262 */ "G_BR\0"
  /* 3267 */ "INLINEASM_BR\0"
  /* 3280 */ "ALIGNADDR\0"
  /* 3290 */ "G_BLOCK_ADDR\0"
  /* 3303 */ "MEMBARRIER\0"
  /* 3314 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 3339 */ "G_READCYCLECOUNTER\0"
  /* 3358 */ "G_READ_REGISTER\0"
  /* 3374 */ "G_WRITE_REGISTER\0"
  /* 3391 */ "G_ASHR\0"
  /* 3398 */ "G_FSHR\0"
  /* 3405 */ "G_LSHR\0"
  /* 3412 */ "SIR\0"
  /* 3416 */ "FOR\0"
  /* 3420 */ "FNOR\0"
  /* 3425 */ "FXNOR\0"
  /* 3431 */ "G_FFLOOR\0"
  /* 3440 */ "G_BUILD_VECTOR\0"
  /* 3455 */ "G_SHUFFLE_VECTOR\0"
  /* 3472 */ "FXOR\0"
  /* 3477 */ "G_VECREDUCE_XOR\0"
  /* 3493 */ "G_XOR\0"
  /* 3499 */ "G_ATOMICRMW_XOR\0"
  /* 3515 */ "G_VECREDUCE_OR\0"
  /* 3530 */ "G_OR\0"
  /* 3535 */ "G_ATOMICRMW_OR\0"
  /* 3550 */ "RDPR\0"
  /* 3555 */ "RDASR\0"
  /* 3561 */ "RDPSR\0"
  /* 3567 */ "G_ROTR\0"
  /* 3574 */ "G_INTTOPTR\0"
  /* 3585 */ "FSRC1S\0"
  /* 3592 */ "FANDNOT1S\0"
  /* 3602 */ "FNOT1S\0"
  /* 3609 */ "FORNOT1S\0"
  /* 3618 */ "FPSUB32S\0"
  /* 3627 */ "FPADD32S\0"
  /* 3636 */ "FSRC2S\0"
  /* 3643 */ "FANDNOT2S\0"
  /* 3653 */ "FNOT2S\0"
  /* 3660 */ "FORNOT2S\0"
  /* 3669 */ "FPSUB16S\0"
  /* 3678 */ "FPADD16S\0"
  /* 3687 */ "G_FABS\0"
  /* 3694 */ "G_ABS\0"
  /* 3700 */ "FSUBS\0"
  /* 3706 */ "FHSUBS\0"
  /* 3713 */ "FADDS\0"
  /* 3719 */ "FHADDS\0"
  /* 3726 */ "FNHADDS\0"
  /* 3734 */ "FNADDS\0"
  /* 3741 */ "FANDS\0"
  /* 3747 */ "FNANDS\0"
  /* 3754 */ "FONES\0"
  /* 3760 */ "V9FCMPES\0"
  /* 3769 */ "G_UNMERGE_VALUES\0"
  /* 3786 */ "G_MERGE_VALUES\0"
  /* 3801 */ "FNEGS\0"
  /* 3807 */ "FMULS\0"
  /* 3813 */ "FNMULS\0"
  /* 3820 */ "G_FCOS\0"
  /* 3827 */ "FZEROS\0"
  /* 3834 */ "FDTOS\0"
  /* 3840 */ "FITOS\0"
  /* 3846 */ "FQTOS\0"
  /* 3852 */ "MOVWTOS\0"
  /* 3860 */ "FXTOS\0"
  /* 3866 */ "V9FCMPS\0"
  /* 3874 */ "FLCMPS\0"
  /* 3881 */ "FORS\0"
  /* 3886 */ "FNORS\0"
  /* 3892 */ "FXNORS\0"
  /* 3899 */ "G_CONCAT_VECTORS\0"
  /* 3916 */ "FXORS\0"
  /* 3922 */ "FMOVRS\0"
  /* 3929 */ "COPY_TO_REGCLASS\0"
  /* 3946 */ "G_IS_FPCLASS\0"
  /* 3959 */ "FABSS\0"
  /* 3965 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 3995 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 4022 */ "FSQRTS\0"
  /* 4029 */ "FDIVS\0"
  /* 4035 */ "FMOVS\0"
  /* 4041 */ "G_SSUBSAT\0"
  /* 4051 */ "G_USUBSAT\0"
  /* 4061 */ "G_SADDSAT\0"
  /* 4071 */ "G_UADDSAT\0"
  /* 4081 */ "G_SSHLSAT\0"
  /* 4091 */ "G_USHLSAT\0"
  /* 4101 */ "G_SMULFIXSAT\0"
  /* 4114 */ "G_UMULFIXSAT\0"
  /* 4127 */ "G_SDIVFIXSAT\0"
  /* 4140 */ "G_UDIVFIXSAT\0"
  /* 4153 */ "G_EXTRACT\0"
  /* 4163 */ "G_SELECT\0"
  /* 4172 */ "G_BRINDIRECT\0"
  /* 4185 */ "PATCHABLE_RET\0"
  /* 4199 */ "G_MEMSET\0"
  /* 4208 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 4232 */ "G_BRJT\0"
  /* 4239 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 4260 */ "G_INSERT_VECTOR_ELT\0"
  /* 4280 */ "BPFCCANT\0"
  /* 4289 */ "BPICCANT\0"
  /* 4298 */ "BPXCCANT\0"
  /* 4307 */ "G_FCONSTANT\0"
  /* 4319 */ "G_CONSTANT\0"
  /* 4330 */ "BPFCCNT\0"
  /* 4338 */ "BPICCNT\0"
  /* 4346 */ "BPXCCNT\0"
  /* 4354 */ "LZCNT\0"
  /* 4360 */ "STATEPOINT\0"
  /* 4371 */ "PATCHPOINT\0"
  /* 4382 */ "G_PTRTOINT\0"
  /* 4393 */ "G_FRINT\0"
  /* 4401 */ "G_INTRINSIC_LRINT\0"
  /* 4419 */ "G_FNEARBYINT\0"
  /* 4432 */ "G_VASTART\0"
  /* 4442 */ "LIFETIME_START\0"
  /* 4457 */ "G_INVOKE_REGION_START\0"
  /* 4479 */ "G_INSERT\0"
  /* 4488 */ "G_FSQRT\0"
  /* 4496 */ "G_STRICT_FSQRT\0"
  /* 4511 */ "G_BITCAST\0"
  /* 4521 */ "G_ADDRSPACE_CAST\0"
  /* 4538 */ "PDIST\0"
  /* 4544 */ "DBG_VALUE_LIST\0"
  /* 4559 */ "G_FPEXT\0"
  /* 4567 */ "G_SEXT\0"
  /* 4574 */ "G_ASSERT_SEXT\0"
  /* 4588 */ "G_ANYEXT\0"
  /* 4597 */ "G_ZEXT\0"
  /* 4604 */ "G_ASSERT_ZEXT\0"
  /* 4618 */ "FMUL8X16AU\0"
  /* 4629 */ "G_FDIV\0"
  /* 4636 */ "G_STRICT_FDIV\0"
  /* 4650 */ "G_SDIV\0"
  /* 4657 */ "G_UDIV\0"
  /* 4664 */ "FLUSHW\0"
  /* 4671 */ "G_FPOW\0"
  /* 4678 */ "MOVSTOSW\0"
  /* 4687 */ "MOVSTOUW\0"
  /* 4696 */ "G_VECREDUCE_FMAX\0"
  /* 4713 */ "G_ATOMICRMW_FMAX\0"
  /* 4730 */ "G_VECREDUCE_SMAX\0"
  /* 4747 */ "G_SMAX\0"
  /* 4754 */ "G_VECREDUCE_UMAX\0"
  /* 4771 */ "G_UMAX\0"
  /* 4778 */ "G_ATOMICRMW_UMAX\0"
  /* 4795 */ "G_ATOMICRMW_MAX\0"
  /* 4811 */ "GETPCX\0"
  /* 4818 */ "G_FRAME_INDEX\0"
  /* 4832 */ "G_SBFX\0"
  /* 4839 */ "G_UBFX\0"
  /* 4846 */ "FPACKFIX\0"
  /* 4855 */ "G_SMULFIX\0"
  /* 4865 */ "G_UMULFIX\0"
  /* 4875 */ "G_SDIVFIX\0"
  /* 4885 */ "G_UDIVFIX\0"
  /* 4895 */ "XMULX\0"
  /* 4901 */ "FDTOX\0"
  /* 4907 */ "MOVDTOX\0"
  /* 4915 */ "FQTOX\0"
  /* 4921 */ "FSTOX\0"
  /* 4927 */ "G_MEMCPY\0"
  /* 4936 */ "COPY\0"
  /* 4941 */ "G_CTLZ\0"
  /* 4948 */ "G_CTTZ\0"
  /* 4955 */ "PREFETCHi\0"
  /* 4965 */ "SETHIi\0"
  /* 4972 */ "MEMBARi\0"
  /* 4980 */ "SETHIXi\0"
  /* 4988 */ "SRAri\0"
  /* 4994 */ "LDSBri\0"
  /* 5001 */ "STBri\0"
  /* 5007 */ "LDUBri\0"
  /* 5014 */ "SUBri\0"
  /* 5020 */ "LDSTUBri\0"
  /* 5029 */ "SMACri\0"
  /* 5036 */ "UMACri\0"
  /* 5043 */ "SUBCri\0"
  /* 5050 */ "TSUBCCri\0"
  /* 5059 */ "TADDCCri\0"
  /* 5068 */ "ANDCCri\0"
  /* 5076 */ "V9MOVFCCri\0"
  /* 5087 */ "TICCri\0"
  /* 5094 */ "MOVICCri\0"
  /* 5103 */ "SMULCCri\0"
  /* 5112 */ "UMULCCri\0"
  /* 5121 */ "ANDNCCri\0"
  /* 5130 */ "ORNCCri\0"
  /* 5138 */ "XNORCCri\0"
  /* 5147 */ "XORCCri\0"
  /* 5155 */ "MULSCCri\0"
  /* 5164 */ "SDIVCCri\0"
  /* 5173 */ "UDIVCCri\0"
  /* 5182 */ "TXCCri\0"
  /* 5189 */ "MOVXCCri\0"
  /* 5198 */ "ADDCri\0"
  /* 5205 */ "LDDCri\0"
  /* 5212 */ "LDCri\0"
  /* 5218 */ "STDCri\0"
  /* 5225 */ "STCri\0"
  /* 5231 */ "LEA_ADDri\0"
  /* 5241 */ "LEAX_ADDri\0"
  /* 5252 */ "LDDri\0"
  /* 5258 */ "LDri\0"
  /* 5263 */ "ANDri\0"
  /* 5269 */ "BINDri\0"
  /* 5276 */ "STDri\0"
  /* 5282 */ "SUBEri\0"
  /* 5289 */ "ADDEri\0"
  /* 5296 */ "RESTOREri\0"
  /* 5306 */ "SAVEri\0"
  /* 5313 */ "LDDFri\0"
  /* 5320 */ "LDFri\0"
  /* 5326 */ "STDFri\0"
  /* 5333 */ "LDQFri\0"
  /* 5340 */ "STQFri\0"
  /* 5347 */ "STFri\0"
  /* 5353 */ "LDSHri\0"
  /* 5360 */ "FLUSHri\0"
  /* 5368 */ "STHri\0"
  /* 5374 */ "LDUHri\0"
  /* 5381 */ "TAIL_CALLri\0"
  /* 5393 */ "SLLri\0"
  /* 5399 */ "JMPLri\0"
  /* 5406 */ "SRLri\0"
  /* 5412 */ "SMULri\0"
  /* 5419 */ "UMULri\0"
  /* 5426 */ "WRWIMri\0"
  /* 5434 */ "ANDNri\0"
  /* 5441 */ "ORNri\0"
  /* 5447 */ "TRAPri\0"
  /* 5454 */ "SWAPri\0"
  /* 5461 */ "CMPri\0"
  /* 5467 */ "STDCQri\0"
  /* 5475 */ "STDFQri\0"
  /* 5483 */ "WRTBRri\0"
  /* 5491 */ "XNORri\0"
  /* 5498 */ "XORri\0"
  /* 5504 */ "WRPRri\0"
  /* 5511 */ "WRASRri\0"
  /* 5519 */ "LDCSRri\0"
  /* 5527 */ "STCSRri\0"
  /* 5535 */ "LDFSRri\0"
  /* 5543 */ "STFSRri\0"
  /* 5551 */ "LDXFSRri\0"
  /* 5560 */ "STXFSRri\0"
  /* 5569 */ "PWRPSRri\0"
  /* 5578 */ "MOVRri\0"
  /* 5585 */ "STri\0"
  /* 5590 */ "RETTri\0"
  /* 5597 */ "SDIVri\0"
  /* 5604 */ "UDIVri\0"
  /* 5611 */ "TSUBCCTVri\0"
  /* 5622 */ "TADDCCTVri\0"
  /* 5633 */ "LDSWri\0"
  /* 5640 */ "SRAXri\0"
  /* 5647 */ "SUBXri\0"
  /* 5654 */ "ADDXri\0"
  /* 5661 */ "LDXri\0"
  /* 5667 */ "ANDXri\0"
  /* 5674 */ "SLLXri\0"
  /* 5681 */ "SRLXri\0"
  /* 5688 */ "MULXri\0"
  /* 5695 */ "XORXri\0"
  /* 5702 */ "STXri\0"
  /* 5708 */ "SDIVXri\0"
  /* 5716 */ "UDIVXri\0"
  /* 5724 */ "BPGEZapn\0"
  /* 5733 */ "BPLEZapn\0"
  /* 5742 */ "BPGZapn\0"
  /* 5750 */ "BPLZapn\0"
  /* 5758 */ "BPNZapn\0"
  /* 5766 */ "BPZapn\0"
  /* 5773 */ "BPGEZnapn\0"
  /* 5783 */ "BPLEZnapn\0"
  /* 5793 */ "BPGZnapn\0"
  /* 5802 */ "BPLZnapn\0"
  /* 5811 */ "BPNZnapn\0"
  /* 5820 */ "BPZnapn\0"
  /* 5828 */ "PREFETCHr\0"
  /* 5838 */ "LDSBArr\0"
  /* 5846 */ "STBArr\0"
  /* 5853 */ "LDUBArr\0"
  /* 5861 */ "LDSTUBArr\0"
  /* 5871 */ "LDDArr\0"
  /* 5878 */ "LDArr\0"
  /* 5884 */ "STDArr\0"
  /* 5891 */ "LDDFArr\0"
  /* 5899 */ "LDFArr\0"
  /* 5906 */ "STDFArr\0"
  /* 5914 */ "LDQFArr\0"
  /* 5922 */ "STQFArr\0"
  /* 5930 */ "STFArr\0"
  /* 5937 */ "LDSHArr\0"
  /* 5945 */ "STHArr\0"
  /* 5952 */ "LDUHArr\0"
  /* 5960 */ "SWAPArr\0"
  /* 5968 */ "SRArr\0"
  /* 5974 */ "CASArr\0"
  /* 5981 */ "STArr\0"
  /* 5987 */ "LDSBrr\0"
  /* 5994 */ "STBrr\0"
  /* 6000 */ "LDUBrr\0"
  /* 6007 */ "SUBrr\0"
  /* 6013 */ "LDSTUBrr\0"
  /* 6022 */ "SMACrr\0"
  /* 6029 */ "UMACrr\0"
  /* 6036 */ "SUBCrr\0"
  /* 6043 */ "TSUBCCrr\0"
  /* 6052 */ "TADDCCrr\0"
  /* 6061 */ "ANDCCrr\0"
  /* 6069 */ "V9MOVFCCrr\0"
  /* 6080 */ "TICCrr\0"
  /* 6087 */ "MOVICCrr\0"
  /* 6096 */ "SMULCCrr\0"
  /* 6105 */ "UMULCCrr\0"
  /* 6114 */ "ANDNCCrr\0"
  /* 6123 */ "ORNCCrr\0"
  /* 6131 */ "XNORCCrr\0"
  /* 6140 */ "XORCCrr\0"
  /* 6148 */ "MULSCCrr\0"
  /* 6157 */ "SDIVCCrr\0"
  /* 6166 */ "UDIVCCrr\0"
  /* 6175 */ "TXCCrr\0"
  /* 6182 */ "MOVXCCrr\0"
  /* 6191 */ "ADDCrr\0"
  /* 6198 */ "LDDCrr\0"
  /* 6205 */ "LDCrr\0"
  /* 6211 */ "STDCrr\0"
  /* 6218 */ "POPCrr\0"
  /* 6225 */ "STCrr\0"
  /* 6231 */ "TLS_ADDrr\0"
  /* 6241 */ "LDDrr\0"
  /* 6247 */ "GDOP_LDrr\0"
  /* 6257 */ "TLS_LDrr\0"
  /* 6266 */ "ANDrr\0"
  /* 6272 */ "BINDrr\0"
  /* 6279 */ "STDrr\0"
  /* 6285 */ "SUBErr\0"
  /* 6292 */ "ADDErr\0"
  /* 6299 */ "RESTORErr\0"
  /* 6309 */ "SAVErr\0"
  /* 6316 */ "LDDFrr\0"
  /* 6323 */ "LDFrr\0"
  /* 6329 */ "STDFrr\0"
  /* 6336 */ "LDQFrr\0"
  /* 6343 */ "STQFrr\0"
  /* 6350 */ "STFrr\0"
  /* 6356 */ "LDSHrr\0"
  /* 6363 */ "FLUSHrr\0"
  /* 6371 */ "STHrr\0"
  /* 6377 */ "LDUHrr\0"
  /* 6384 */ "CALLrr\0"
  /* 6391 */ "SLLrr\0"
  /* 6397 */ "JMPLrr\0"
  /* 6404 */ "SRLrr\0"
  /* 6410 */ "SMULrr\0"
  /* 6417 */ "UMULrr\0"
  /* 6424 */ "WRWIMrr\0"
  /* 6432 */ "ANDNrr\0"
  /* 6439 */ "ORNrr\0"
  /* 6445 */ "ANDXNrr\0"
  /* 6453 */ "ORXNrr\0"
  /* 6460 */ "TRAPrr\0"
  /* 6467 */ "SWAPrr\0"
  /* 6474 */ "CMPrr\0"
  /* 6480 */ "STDCQrr\0"
  /* 6488 */ "STDFQrr\0"
  /* 6496 */ "WRTBRrr\0"
  /* 6504 */ "XNORrr\0"
  /* 6511 */ "XORrr\0"
  /* 6517 */ "WRPRrr\0"
  /* 6524 */ "WRASRrr\0"
  /* 6532 */ "LDCSRrr\0"
  /* 6540 */ "STCSRrr\0"
  /* 6548 */ "LDFSRrr\0"
  /* 6556 */ "STFSRrr\0"
  /* 6564 */ "LDXFSRrr\0"
  /* 6573 */ "STXFSRrr\0"
  /* 6582 */ "PWRPSRrr\0"
  /* 6591 */ "MOVRrr\0"
  /* 6598 */ "CASrr\0"
  /* 6604 */ "STrr\0"
  /* 6609 */ "RETTrr\0"
  /* 6616 */ "SDIVrr\0"
  /* 6623 */ "UDIVrr\0"
  /* 6630 */ "TSUBCCTVrr\0"
  /* 6641 */ "TADDCCTVrr\0"
  /* 6652 */ "LDSWrr\0"
  /* 6659 */ "SRAXrr\0"
  /* 6666 */ "SUBXrr\0"
  /* 6673 */ "TLS_ADDXrr\0"
  /* 6684 */ "GDOP_LDXrr\0"
  /* 6695 */ "TLS_LDXrr\0"
  /* 6705 */ "ANDXrr\0"
  /* 6712 */ "SLLXrr\0"
  /* 6719 */ "SRLXrr\0"
  /* 6726 */ "MULXrr\0"
  /* 6733 */ "XNORXrr\0"
  /* 6741 */ "XORXrr\0"
  /* 6748 */ "CASXrr\0"
  /* 6755 */ "STXrr\0"
  /* 6761 */ "SDIVXrr\0"
  /* 6769 */ "UDIVXrr\0"
  /* 6777 */ "BPGEZapt\0"
  /* 6786 */ "BPLEZapt\0"
  /* 6795 */ "BPGZapt\0"
  /* 6803 */ "BPLZapt\0"
  /* 6811 */ "BPNZapt\0"
  /* 6819 */ "BPZapt\0"
  /* 6826 */ "BPGEZnapt\0"
  /* 6836 */ "BPLEZnapt\0"
  /* 6846 */ "BPGZnapt\0"
  /* 6855 */ "BPLZnapt\0"
  /* 6864 */ "BPNZnapt\0"
  /* 6873 */ "BPZnapt\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned SparcInstrNameIndices[] = {
    2106U, 2586U, 3267U, 2858U, 2239U, 2220U, 2248U, 2395U, 
    1958U, 1973U, 1924U, 2000U, 3929U, 1826U, 4544U, 1937U, 
    2102U, 2229U, 1659U, 4936U, 1739U, 4442U, 1415U, 1610U, 
    1647U, 2969U, 2383U, 4371U, 1561U, 3120U, 2063U, 4360U, 
    1776U, 3093U, 3080U, 3314U, 4185U, 4208U, 2306U, 2362U, 
    2335U, 2265U, 3303U, 4574U, 4604U, 2683U, 1238U, 590U, 
    2514U, 4650U, 4657U, 2546U, 2553U, 2560U, 2570U, 1393U, 
    3530U, 3493U, 1922U, 2104U, 4818U, 1836U, 2400U, 4153U, 
    3769U, 4479U, 3786U, 3440U, 995U, 3899U, 4382U, 3574U, 
    4511U, 1861U, 1488U, 969U, 1470U, 4401U, 2661U, 3339U, 
    1126U, 1070U, 1100U, 1111U, 1051U, 1081U, 1805U, 1789U, 
    3965U, 2014U, 2031U, 1254U, 596U, 1399U, 1352U, 3535U, 
    3499U, 4795U, 2809U, 4778U, 2792U, 1205U, 573U, 4713U, 
    2727U, 3000U, 2978U, 1639U, 1442U, 4172U, 4457U, 947U, 
    3995U, 4588U, 987U, 4319U, 4307U, 4432U, 2055U, 4567U, 
    1987U, 4597U, 2292U, 3405U, 3391U, 2285U, 3398U, 3567U, 
    2432U, 3055U, 3048U, 4163U, 2931U, 1680U, 2915U, 1631U, 
    2923U, 1672U, 2907U, 1623U, 2947U, 2939U, 2088U, 2080U, 
    4071U, 4061U, 4051U, 4041U, 4091U, 4081U, 4855U, 4865U, 
    4101U, 4114U, 4875U, 4885U, 4127U, 4140U, 1163U, 552U, 
    2456U, 517U, 1044U, 4629U, 2525U, 4671U, 2162U, 3139U, 
    178U, 2048U, 170U, 0U, 1951U, 4559U, 959U, 2144U, 
    2153U, 3030U, 3039U, 3687U, 2698U, 3946U, 1870U, 2618U, 
    2628U, 1688U, 1703U, 2596U, 2607U, 1244U, 2176U, 2761U, 
    4747U, 2785U, 4771U, 3694U, 1461U, 1451U, 3262U, 4232U, 
    4260U, 4239U, 3455U, 4948U, 1904U, 4941U, 1886U, 3072U, 
    3022U, 1813U, 2298U, 3820U, 2825U, 4488U, 3431U, 4393U, 
    4419U, 4521U, 3290U, 1726U, 1016U, 1191U, 559U, 2484U, 
    4636U, 2532U, 523U, 4496U, 3358U, 3374U, 4927U, 1755U, 
    1851U, 4199U, 2955U, 1170U, 2463U, 1146U, 2439U, 4696U, 
    2710U, 1222U, 2498U, 1377U, 3515U, 3477U, 4730U, 2744U, 
    4754U, 2768U, 4832U, 4839U, 2881U, 3105U, 4811U, 638U, 
    749U, 856U, 674U, 785U, 892U, 715U, 822U, 929U, 
    656U, 767U, 874U, 4204U, 5060U, 6053U, 5198U, 6191U, 
    5289U, 6292U, 1038U, 612U, 5654U, 6677U, 5235U, 6235U, 
    3280U, 2416U, 5068U, 6061U, 5121U, 6114U, 5434U, 6432U, 
    6445U, 5667U, 6705U, 5263U, 6266U, 401U, 156U, 422U, 
    477U, 1429U, 502U, 5269U, 6272U, 2170U, 536U, 620U, 
    480U, 4280U, 4330U, 5724U, 6777U, 5773U, 6826U, 5742U, 
    6795U, 5793U, 6846U, 733U, 487U, 4289U, 4338U, 5733U, 
    6786U, 5783U, 6836U, 5750U, 6803U, 5802U, 6855U, 5758U, 
    6811U, 5811U, 6864U, 840U, 494U, 4298U, 4346U, 5766U, 
    6819U, 5820U, 6873U, 1746U, 2321U, 5386U, 6384U, 9U, 
    5974U, 6748U, 6598U, 1428U, 501U, 281U, 108U, 415U, 
    5461U, 6474U, 248U, 2194U, 2841U, 2646U, 75U, 2186U, 
    2832U, 2638U, 409U, 2202U, 2850U, 2654U, 1585U, 3225U, 
    3959U, 1270U, 3152U, 3713U, 540U, 1341U, 29U, 3592U, 
    186U, 3643U, 3741U, 1435U, 509U, 429U, 440U, 303U, 
    1548U, 450U, 320U, 130U, 337U, 147U, 255U, 82U, 
    264U, 91U, 3212U, 459U, 3868U, 468U, 1598U, 3238U, 
    4029U, 3173U, 2126U, 3186U, 3834U, 4901U, 1369U, 1276U, 
    3719U, 1139U, 3706U, 1514U, 3192U, 3840U, 1554U, 3874U, 
    2096U, 4664U, 5360U, 6363U, 312U, 1604U, 628U, 739U, 
    846U, 3244U, 693U, 802U, 909U, 1578U, 3218U, 3922U, 
    4035U, 705U, 812U, 919U, 390U, 367U, 346U, 2209U, 
    4618U, 1313U, 378U, 355U, 3180U, 3807U, 1291U, 3734U, 
    1346U, 3747U, 1307U, 3167U, 3801U, 1283U, 3726U, 1319U, 
    3813U, 3420U, 3886U, 38U, 3602U, 195U, 3653U, 1333U, 
    1771U, 3754U, 3416U, 44U, 3609U, 201U, 3660U, 3881U, 
    273U, 100U, 4846U, 240U, 3678U, 67U, 3627U, 213U, 
    1718U, 232U, 3669U, 59U, 3618U, 1520U, 2132U, 3846U, 
    4915U, 329U, 139U, 289U, 116U, 1326U, 1591U, 3231U, 
    4022U, 225U, 52U, 23U, 3585U, 164U, 3636U, 296U, 
    123U, 1526U, 2138U, 3198U, 4921U, 1133U, 3146U, 3700U, 
    3425U, 3892U, 3472U, 3916U, 1532U, 3204U, 3860U, 2963U, 
    3827U, 6684U, 6247U, 5399U, 6397U, 5878U, 5519U, 6532U, 
    5212U, 6205U, 5871U, 5205U, 6198U, 5891U, 5313U, 6316U, 
    5252U, 6241U, 5899U, 5535U, 6548U, 5320U, 6323U, 5914U, 
    5333U, 6336U, 5838U, 4994U, 5987U, 5937U, 5353U, 6356U, 
    5861U, 5020U, 6013U, 5633U, 6652U, 5853U, 5007U, 6000U, 
    5952U, 5374U, 6377U, 5551U, 6564U, 5661U, 6689U, 5258U, 
    6252U, 5241U, 5231U, 4354U, 4972U, 4907U, 5078U, 6071U, 
    5094U, 6087U, 5578U, 6591U, 4678U, 4687U, 3852U, 5189U, 
    6182U, 1538U, 5155U, 6148U, 5688U, 6726U, 3068U, 5140U, 
    6133U, 5130U, 6123U, 5441U, 6439U, 6453U, 5696U, 6735U, 
    5493U, 6506U, 4538U, 2874U, 6218U, 4955U, 5828U, 5569U, 
    6582U, 3555U, 1033U, 3550U, 3561U, 3256U, 2580U, 5296U, 
    6299U, 4195U, 2427U, 5590U, 6609U, 5306U, 6309U, 5164U, 
    6157U, 5708U, 6761U, 5597U, 6616U, 4980U, 4965U, 2898U, 
    2520U, 3412U, 5674U, 6712U, 5393U, 6391U, 5029U, 6022U, 
    5103U, 6096U, 5412U, 6410U, 5640U, 6659U, 4988U, 5968U, 
    5681U, 6719U, 5406U, 6404U, 5981U, 3250U, 5846U, 5001U, 
    5994U, 5527U, 6540U, 5225U, 6225U, 5884U, 5467U, 6480U, 
    5218U, 6211U, 5906U, 5475U, 6488U, 5326U, 6329U, 5276U, 
    6279U, 5930U, 5543U, 6556U, 5347U, 6350U, 5945U, 5368U, 
    6371U, 5922U, 5340U, 6343U, 5560U, 6573U, 5702U, 6755U, 
    5585U, 6604U, 5051U, 6044U, 5043U, 6036U, 5282U, 6285U, 
    5647U, 6666U, 5014U, 6007U, 5960U, 5454U, 6467U, 19U, 
    209U, 221U, 5622U, 6641U, 5059U, 6052U, 2316U, 5381U, 
    5087U, 6080U, 6673U, 6231U, 2326U, 6695U, 6257U, 5447U, 
    6460U, 5611U, 6630U, 5050U, 6043U, 5182U, 6175U, 5173U, 
    6166U, 5716U, 6769U, 5604U, 6623U, 5036U, 6029U, 5112U, 
    6105U, 2110U, 5419U, 6417U, 3062U, 1546U, 1298U, 3158U, 
    3760U, 3210U, 3866U, 626U, 691U, 703U, 5076U, 6069U, 
    5511U, 6524U, 5504U, 6517U, 5570U, 6583U, 5483U, 6496U, 
    5426U, 6424U, 4895U, 2118U, 5138U, 6131U, 6733U, 5491U, 
    6504U, 5147U, 6140U, 5695U, 6741U, 5498U, 6511U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, nullptr, nullptr, 775);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(unsigned CFSetupOpcode = ~0u, unsigned CFDestroyOpcode = ~0u, unsigned CatchRetOpcode = ~0u, unsigned ReturnOpcode = ~0u);
  ~SparcGenInstrInfo() override = default;

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
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(unsigned CFSetupOpcode, unsigned CFDestroyOpcode, unsigned CatchRetOpcode, unsigned ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, nullptr, nullptr, 775);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes {
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  MembarTag = 3,
  RegCCOp = 4,
  TailRelocSymGOTLoad = 5,
  TailRelocSymTLSAdd = 6,
  TailRelocSymTLSCall = 7,
  TailRelocSymTLSLoad = 8,
  bprtarget = 9,
  bprtarget16 = 10,
  brtarget = 11,
  calltarget = 12,
  f32imm = 13,
  f64imm = 14,
  getPCX = 15,
  i16imm = 16,
  i1imm = 17,
  i32imm = 18,
  i64imm = 19,
  i8imm = 20,
  ptype0 = 21,
  ptype1 = 22,
  ptype2 = 23,
  ptype3 = 24,
  ptype4 = 25,
  ptype5 = 26,
  shift_imm5 = 27,
  shift_imm6 = 28,
  simm13Op = 29,
  type0 = 30,
  type1 = 31,
  type2 = 32,
  type3 = 33,
  type4 = 34,
  type5 = 35,
  untyped_imm_0 = 36,
  ASRRegs = 37,
  CoprocPair = 38,
  CoprocRegs = 39,
  DFPRegs = 40,
  FCCRegs = 41,
  FPRegs = 42,
  I64Regs = 43,
  IntPair = 44,
  IntRegs = 45,
  LowDFPRegs = 46,
  LowQFPRegs = 47,
  PRRegs = 48,
  QFPRegs = 49,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace SP {
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
    /* ADJCALLSTACKDOWN */
    635,
    /* ADJCALLSTACKUP */
    637,
    /* GETPCX */
    639,
    /* SELECT_CC_DFP_FCC */
    640,
    /* SELECT_CC_DFP_ICC */
    644,
    /* SELECT_CC_DFP_XCC */
    648,
    /* SELECT_CC_FP_FCC */
    652,
    /* SELECT_CC_FP_ICC */
    656,
    /* SELECT_CC_FP_XCC */
    660,
    /* SELECT_CC_Int_FCC */
    664,
    /* SELECT_CC_Int_ICC */
    668,
    /* SELECT_CC_Int_XCC */
    672,
    /* SELECT_CC_QFP_FCC */
    676,
    /* SELECT_CC_QFP_ICC */
    680,
    /* SELECT_CC_QFP_XCC */
    684,
    /* SET */
    688,
    /* ADDCCri */
    690,
    /* ADDCCrr */
    693,
    /* ADDCri */
    696,
    /* ADDCrr */
    699,
    /* ADDEri */
    702,
    /* ADDErr */
    705,
    /* ADDXC */
    708,
    /* ADDXCCC */
    711,
    /* ADDXri */
    714,
    /* ADDXrr */
    717,
    /* ADDri */
    720,
    /* ADDrr */
    723,
    /* ALIGNADDR */
    726,
    /* ALIGNADDRL */
    729,
    /* ANDCCri */
    732,
    /* ANDCCrr */
    735,
    /* ANDNCCri */
    738,
    /* ANDNCCrr */
    741,
    /* ANDNri */
    744,
    /* ANDNrr */
    747,
    /* ANDXNrr */
    750,
    /* ANDXri */
    753,
    /* ANDXrr */
    756,
    /* ANDri */
    759,
    /* ANDrr */
    762,
    /* ARRAY16 */
    765,
    /* ARRAY32 */
    768,
    /* ARRAY8 */
    771,
    /* BA */
    774,
    /* BCOND */
    775,
    /* BCONDA */
    777,
    /* BINDri */
    779,
    /* BINDrr */
    781,
    /* BMASK */
    783,
    /* BPA */
    786,
    /* BPFCC */
    787,
    /* BPFCCA */
    790,
    /* BPFCCANT */
    793,
    /* BPFCCNT */
    796,
    /* BPGEZapn */
    799,
    /* BPGEZapt */
    801,
    /* BPGEZnapn */
    803,
    /* BPGEZnapt */
    805,
    /* BPGZapn */
    807,
    /* BPGZapt */
    809,
    /* BPGZnapn */
    811,
    /* BPGZnapt */
    813,
    /* BPICC */
    815,
    /* BPICCA */
    817,
    /* BPICCANT */
    819,
    /* BPICCNT */
    821,
    /* BPLEZapn */
    823,
    /* BPLEZapt */
    825,
    /* BPLEZnapn */
    827,
    /* BPLEZnapt */
    829,
    /* BPLZapn */
    831,
    /* BPLZapt */
    833,
    /* BPLZnapn */
    835,
    /* BPLZnapt */
    837,
    /* BPNZapn */
    839,
    /* BPNZapt */
    841,
    /* BPNZnapn */
    843,
    /* BPNZnapt */
    845,
    /* BPXCC */
    847,
    /* BPXCCA */
    849,
    /* BPXCCANT */
    851,
    /* BPXCCNT */
    853,
    /* BPZapn */
    855,
    /* BPZapt */
    857,
    /* BPZnapn */
    859,
    /* BPZnapt */
    861,
    /* BSHUFFLE */
    863,
    /* CALL */
    866,
    /* CALLri */
    867,
    /* CALLrr */
    869,
    /* CASAasi10 */
    871,
    /* CASArr */
    875,
    /* CASXrr */
    880,
    /* CASrr */
    884,
    /* CBCOND */
    888,
    /* CBCONDA */
    890,
    /* CMASK16 */
    892,
    /* CMASK32 */
    893,
    /* CMASK8 */
    894,
    /* CMPri */
    895,
    /* CMPrr */
    897,
    /* EDGE16 */
    899,
    /* EDGE16L */
    902,
    /* EDGE16LN */
    905,
    /* EDGE16N */
    908,
    /* EDGE32 */
    911,
    /* EDGE32L */
    914,
    /* EDGE32LN */
    917,
    /* EDGE32N */
    920,
    /* EDGE8 */
    923,
    /* EDGE8L */
    926,
    /* EDGE8LN */
    929,
    /* EDGE8N */
    932,
    /* FABSD */
    935,
    /* FABSQ */
    937,
    /* FABSS */
    939,
    /* FADDD */
    941,
    /* FADDQ */
    944,
    /* FADDS */
    947,
    /* FALIGNADATA */
    950,
    /* FAND */
    953,
    /* FANDNOT1 */
    956,
    /* FANDNOT1S */
    959,
    /* FANDNOT2 */
    962,
    /* FANDNOT2S */
    965,
    /* FANDS */
    968,
    /* FBCOND */
    971,
    /* FBCONDA */
    973,
    /* FBCONDA_V9 */
    975,
    /* FBCOND_V9 */
    977,
    /* FCHKSM16 */
    979,
    /* FCMPD */
    982,
    /* FCMPD_V9 */
    984,
    /* FCMPEQ16 */
    986,
    /* FCMPEQ32 */
    989,
    /* FCMPGT16 */
    992,
    /* FCMPGT32 */
    995,
    /* FCMPLE16 */
    998,
    /* FCMPLE32 */
    1001,
    /* FCMPNE16 */
    1004,
    /* FCMPNE32 */
    1007,
    /* FCMPQ */
    1010,
    /* FCMPQ_V9 */
    1012,
    /* FCMPS */
    1014,
    /* FCMPS_V9 */
    1016,
    /* FDIVD */
    1018,
    /* FDIVQ */
    1021,
    /* FDIVS */
    1024,
    /* FDMULQ */
    1027,
    /* FDTOI */
    1030,
    /* FDTOQ */
    1032,
    /* FDTOS */
    1034,
    /* FDTOX */
    1036,
    /* FEXPAND */
    1038,
    /* FHADDD */
    1040,
    /* FHADDS */
    1043,
    /* FHSUBD */
    1046,
    /* FHSUBS */
    1049,
    /* FITOD */
    1052,
    /* FITOQ */
    1054,
    /* FITOS */
    1056,
    /* FLCMPD */
    1058,
    /* FLCMPS */
    1061,
    /* FLUSH */
    1064,
    /* FLUSHW */
    1064,
    /* FLUSHri */
    1064,
    /* FLUSHrr */
    1066,
    /* FMEAN16 */
    1068,
    /* FMOVD */
    1071,
    /* FMOVD_FCC */
    1073,
    /* FMOVD_ICC */
    1077,
    /* FMOVD_XCC */
    1081,
    /* FMOVQ */
    1085,
    /* FMOVQ_FCC */
    1087,
    /* FMOVQ_ICC */
    1091,
    /* FMOVQ_XCC */
    1095,
    /* FMOVRD */
    1099,
    /* FMOVRQ */
    1104,
    /* FMOVRS */
    1109,
    /* FMOVS */
    1114,
    /* FMOVS_FCC */
    1116,
    /* FMOVS_ICC */
    1120,
    /* FMOVS_XCC */
    1124,
    /* FMUL8SUX16 */
    1128,
    /* FMUL8ULX16 */
    1131,
    /* FMUL8X16 */
    1134,
    /* FMUL8X16AL */
    1137,
    /* FMUL8X16AU */
    1140,
    /* FMULD */
    1143,
    /* FMULD8SUX16 */
    1146,
    /* FMULD8ULX16 */
    1149,
    /* FMULQ */
    1152,
    /* FMULS */
    1155,
    /* FNADDD */
    1158,
    /* FNADDS */
    1161,
    /* FNAND */
    1164,
    /* FNANDS */
    1167,
    /* FNEGD */
    1170,
    /* FNEGQ */
    1172,
    /* FNEGS */
    1174,
    /* FNHADDD */
    1176,
    /* FNHADDS */
    1179,
    /* FNMULD */
    1182,
    /* FNMULS */
    1185,
    /* FNOR */
    1188,
    /* FNORS */
    1191,
    /* FNOT1 */
    1194,
    /* FNOT1S */
    1196,
    /* FNOT2 */
    1198,
    /* FNOT2S */
    1200,
    /* FNSMULD */
    1202,
    /* FONE */
    1205,
    /* FONES */
    1207,
    /* FOR */
    1209,
    /* FORNOT1 */
    1212,
    /* FORNOT1S */
    1215,
    /* FORNOT2 */
    1218,
    /* FORNOT2S */
    1221,
    /* FORS */
    1224,
    /* FPACK16 */
    1227,
    /* FPACK32 */
    1229,
    /* FPACKFIX */
    1232,
    /* FPADD16 */
    1234,
    /* FPADD16S */
    1237,
    /* FPADD32 */
    1240,
    /* FPADD32S */
    1243,
    /* FPADD64 */
    1246,
    /* FPMERGE */
    1249,
    /* FPSUB16 */
    1252,
    /* FPSUB16S */
    1255,
    /* FPSUB32 */
    1258,
    /* FPSUB32S */
    1261,
    /* FQTOD */
    1264,
    /* FQTOI */
    1266,
    /* FQTOS */
    1268,
    /* FQTOX */
    1270,
    /* FSLAS16 */
    1272,
    /* FSLAS32 */
    1275,
    /* FSLL16 */
    1278,
    /* FSLL32 */
    1281,
    /* FSMULD */
    1284,
    /* FSQRTD */
    1287,
    /* FSQRTQ */
    1289,
    /* FSQRTS */
    1291,
    /* FSRA16 */
    1293,
    /* FSRA32 */
    1296,
    /* FSRC1 */
    1299,
    /* FSRC1S */
    1301,
    /* FSRC2 */
    1303,
    /* FSRC2S */
    1305,
    /* FSRL16 */
    1307,
    /* FSRL32 */
    1310,
    /* FSTOD */
    1313,
    /* FSTOI */
    1315,
    /* FSTOQ */
    1317,
    /* FSTOX */
    1319,
    /* FSUBD */
    1321,
    /* FSUBQ */
    1324,
    /* FSUBS */
    1327,
    /* FXNOR */
    1330,
    /* FXNORS */
    1333,
    /* FXOR */
    1336,
    /* FXORS */
    1339,
    /* FXTOD */
    1342,
    /* FXTOQ */
    1344,
    /* FXTOS */
    1346,
    /* FZERO */
    1348,
    /* FZEROS */
    1350,
    /* GDOP_LDXrr */
    1352,
    /* GDOP_LDrr */
    1356,
    /* JMPLri */
    1360,
    /* JMPLrr */
    1363,
    /* LDArr */
    1366,
    /* LDCSRri */
    1370,
    /* LDCSRrr */
    1372,
    /* LDCri */
    1374,
    /* LDCrr */
    1377,
    /* LDDArr */
    1380,
    /* LDDCri */
    1384,
    /* LDDCrr */
    1387,
    /* LDDFArr */
    1390,
    /* LDDFri */
    1394,
    /* LDDFrr */
    1397,
    /* LDDri */
    1400,
    /* LDDrr */
    1403,
    /* LDFArr */
    1406,
    /* LDFSRri */
    1410,
    /* LDFSRrr */
    1412,
    /* LDFri */
    1414,
    /* LDFrr */
    1417,
    /* LDQFArr */
    1420,
    /* LDQFri */
    1424,
    /* LDQFrr */
    1427,
    /* LDSBArr */
    1430,
    /* LDSBri */
    1434,
    /* LDSBrr */
    1437,
    /* LDSHArr */
    1440,
    /* LDSHri */
    1444,
    /* LDSHrr */
    1447,
    /* LDSTUBArr */
    1450,
    /* LDSTUBri */
    1454,
    /* LDSTUBrr */
    1457,
    /* LDSWri */
    1460,
    /* LDSWrr */
    1463,
    /* LDUBArr */
    1466,
    /* LDUBri */
    1470,
    /* LDUBrr */
    1473,
    /* LDUHArr */
    1476,
    /* LDUHri */
    1480,
    /* LDUHrr */
    1483,
    /* LDXFSRri */
    1486,
    /* LDXFSRrr */
    1488,
    /* LDXri */
    1490,
    /* LDXrr */
    1493,
    /* LDri */
    1496,
    /* LDrr */
    1499,
    /* LEAX_ADDri */
    1502,
    /* LEA_ADDri */
    1505,
    /* LZCNT */
    1508,
    /* MEMBARi */
    1510,
    /* MOVDTOX */
    1511,
    /* MOVFCCri */
    1513,
    /* MOVFCCrr */
    1517,
    /* MOVICCri */
    1521,
    /* MOVICCrr */
    1525,
    /* MOVRri */
    1529,
    /* MOVRrr */
    1534,
    /* MOVSTOSW */
    1539,
    /* MOVSTOUW */
    1541,
    /* MOVWTOS */
    1543,
    /* MOVXCCri */
    1545,
    /* MOVXCCrr */
    1549,
    /* MOVXTOD */
    1553,
    /* MULSCCri */
    1555,
    /* MULSCCrr */
    1558,
    /* MULXri */
    1561,
    /* MULXrr */
    1564,
    /* NOP */
    1567,
    /* ORCCri */
    1567,
    /* ORCCrr */
    1570,
    /* ORNCCri */
    1573,
    /* ORNCCrr */
    1576,
    /* ORNri */
    1579,
    /* ORNrr */
    1582,
    /* ORXNrr */
    1585,
    /* ORXri */
    1588,
    /* ORXrr */
    1591,
    /* ORri */
    1594,
    /* ORrr */
    1597,
    /* PDIST */
    1600,
    /* PDISTN */
    1603,
    /* POPCrr */
    1606,
    /* PREFETCHi */
    1608,
    /* PREFETCHr */
    1611,
    /* PWRPSRri */
    1614,
    /* PWRPSRrr */
    1616,
    /* RDASR */
    1618,
    /* RDPC */
    1620,
    /* RDPR */
    1621,
    /* RDPSR */
    1623,
    /* RDTBR */
    1624,
    /* RDWIM */
    1625,
    /* RESTOREri */
    1626,
    /* RESTORErr */
    1629,
    /* RET */
    1632,
    /* RETL */
    1633,
    /* RETTri */
    1634,
    /* RETTrr */
    1636,
    /* SAVEri */
    1638,
    /* SAVErr */
    1641,
    /* SDIVCCri */
    1644,
    /* SDIVCCrr */
    1647,
    /* SDIVXri */
    1650,
    /* SDIVXrr */
    1653,
    /* SDIVri */
    1656,
    /* SDIVrr */
    1659,
    /* SETHIXi */
    1662,
    /* SETHIi */
    1664,
    /* SHUTDOWN */
    1666,
    /* SIAM */
    1666,
    /* SIR */
    1666,
    /* SLLXri */
    1667,
    /* SLLXrr */
    1670,
    /* SLLri */
    1673,
    /* SLLrr */
    1676,
    /* SMACri */
    1679,
    /* SMACrr */
    1683,
    /* SMULCCri */
    1687,
    /* SMULCCrr */
    1690,
    /* SMULri */
    1693,
    /* SMULrr */
    1696,
    /* SRAXri */
    1699,
    /* SRAXrr */
    1702,
    /* SRAri */
    1705,
    /* SRArr */
    1708,
    /* SRLXri */
    1711,
    /* SRLXrr */
    1714,
    /* SRLri */
    1717,
    /* SRLrr */
    1720,
    /* STArr */
    1723,
    /* STBAR */
    1727,
    /* STBArr */
    1727,
    /* STBri */
    1731,
    /* STBrr */
    1734,
    /* STCSRri */
    1737,
    /* STCSRrr */
    1739,
    /* STCri */
    1741,
    /* STCrr */
    1744,
    /* STDArr */
    1747,
    /* STDCQri */
    1751,
    /* STDCQrr */
    1753,
    /* STDCri */
    1755,
    /* STDCrr */
    1758,
    /* STDFArr */
    1761,
    /* STDFQri */
    1765,
    /* STDFQrr */
    1767,
    /* STDFri */
    1769,
    /* STDFrr */
    1772,
    /* STDri */
    1775,
    /* STDrr */
    1778,
    /* STFArr */
    1781,
    /* STFSRri */
    1785,
    /* STFSRrr */
    1787,
    /* STFri */
    1789,
    /* STFrr */
    1792,
    /* STHArr */
    1795,
    /* STHri */
    1799,
    /* STHrr */
    1802,
    /* STQFArr */
    1805,
    /* STQFri */
    1809,
    /* STQFrr */
    1812,
    /* STXFSRri */
    1815,
    /* STXFSRrr */
    1817,
    /* STXri */
    1819,
    /* STXrr */
    1822,
    /* STri */
    1825,
    /* STrr */
    1828,
    /* SUBCCri */
    1831,
    /* SUBCCrr */
    1834,
    /* SUBCri */
    1837,
    /* SUBCrr */
    1840,
    /* SUBEri */
    1843,
    /* SUBErr */
    1846,
    /* SUBXri */
    1849,
    /* SUBXrr */
    1852,
    /* SUBri */
    1855,
    /* SUBrr */
    1858,
    /* SWAPArr */
    1861,
    /* SWAPri */
    1866,
    /* SWAPrr */
    1870,
    /* TA1 */
    1874,
    /* TA3 */
    1874,
    /* TA5 */
    1874,
    /* TADDCCTVri */
    1874,
    /* TADDCCTVrr */
    1877,
    /* TADDCCri */
    1880,
    /* TADDCCrr */
    1883,
    /* TAIL_CALL */
    1886,
    /* TAIL_CALLri */
    1887,
    /* TICCri */
    1889,
    /* TICCrr */
    1892,
    /* TLS_ADDXrr */
    1895,
    /* TLS_ADDrr */
    1899,
    /* TLS_CALL */
    1903,
    /* TLS_LDXrr */
    1905,
    /* TLS_LDrr */
    1909,
    /* TRAPri */
    1913,
    /* TRAPrr */
    1916,
    /* TSUBCCTVri */
    1919,
    /* TSUBCCTVrr */
    1922,
    /* TSUBCCri */
    1925,
    /* TSUBCCrr */
    1928,
    /* TXCCri */
    1931,
    /* TXCCrr */
    1934,
    /* UDIVCCri */
    1937,
    /* UDIVCCrr */
    1940,
    /* UDIVXri */
    1943,
    /* UDIVXrr */
    1946,
    /* UDIVri */
    1949,
    /* UDIVrr */
    1952,
    /* UMACri */
    1955,
    /* UMACrr */
    1959,
    /* UMULCCri */
    1963,
    /* UMULCCrr */
    1966,
    /* UMULXHI */
    1969,
    /* UMULri */
    1972,
    /* UMULrr */
    1975,
    /* UNIMP */
    1978,
    /* V9FCMPD */
    1979,
    /* V9FCMPED */
    1982,
    /* V9FCMPEQ */
    1985,
    /* V9FCMPES */
    1988,
    /* V9FCMPQ */
    1991,
    /* V9FCMPS */
    1994,
    /* V9FMOVD_FCC */
    1997,
    /* V9FMOVQ_FCC */
    2002,
    /* V9FMOVS_FCC */
    2007,
    /* V9MOVFCCri */
    2012,
    /* V9MOVFCCrr */
    2017,
    /* WRASRri */
    2022,
    /* WRASRrr */
    2025,
    /* WRPRri */
    2028,
    /* WRPRrr */
    2031,
    /* WRPSRri */
    2034,
    /* WRPSRrr */
    2036,
    /* WRTBRri */
    2038,
    /* WRTBRrr */
    2040,
    /* WRWIMri */
    2042,
    /* WRWIMrr */
    2044,
    /* XMULX */
    2046,
    /* XMULXHI */
    2049,
    /* XNORCCri */
    2052,
    /* XNORCCrr */
    2055,
    /* XNORXrr */
    2058,
    /* XNORri */
    2061,
    /* XNORrr */
    2064,
    /* XORCCri */
    2067,
    /* XORCCrr */
    2070,
    /* XORXri */
    2073,
    /* XORXrr */
    2076,
    /* XORri */
    2079,
    /* XORrr */
    2082,
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
    /* ADJCALLSTACKDOWN */
    i32imm, i32imm, 
    /* ADJCALLSTACKUP */
    i32imm, i32imm, 
    /* GETPCX */
    getPCX, 
    /* SELECT_CC_DFP_FCC */
    DFPRegs, DFPRegs, DFPRegs, i32imm, 
    /* SELECT_CC_DFP_ICC */
    DFPRegs, DFPRegs, DFPRegs, i32imm, 
    /* SELECT_CC_DFP_XCC */
    DFPRegs, DFPRegs, DFPRegs, i32imm, 
    /* SELECT_CC_FP_FCC */
    FPRegs, FPRegs, FPRegs, i32imm, 
    /* SELECT_CC_FP_ICC */
    FPRegs, FPRegs, FPRegs, i32imm, 
    /* SELECT_CC_FP_XCC */
    FPRegs, FPRegs, FPRegs, i32imm, 
    /* SELECT_CC_Int_FCC */
    IntRegs, IntRegs, IntRegs, i32imm, 
    /* SELECT_CC_Int_ICC */
    IntRegs, IntRegs, IntRegs, i32imm, 
    /* SELECT_CC_Int_XCC */
    IntRegs, IntRegs, IntRegs, i32imm, 
    /* SELECT_CC_QFP_FCC */
    QFPRegs, QFPRegs, QFPRegs, i32imm, 
    /* SELECT_CC_QFP_ICC */
    QFPRegs, QFPRegs, QFPRegs, i32imm, 
    /* SELECT_CC_QFP_XCC */
    QFPRegs, QFPRegs, QFPRegs, i32imm, 
    /* SET */
    IntRegs, i32imm, 
    /* ADDCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ADDCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ADDCri */
    IntRegs, IntRegs, simm13Op, 
    /* ADDCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ADDEri */
    IntRegs, IntRegs, simm13Op, 
    /* ADDErr */
    IntRegs, IntRegs, IntRegs, 
    /* ADDXC */
    I64Regs, I64Regs, I64Regs, 
    /* ADDXCCC */
    I64Regs, I64Regs, I64Regs, 
    /* ADDXri */
    I64Regs, I64Regs, i64imm, 
    /* ADDXrr */
    I64Regs, I64Regs, I64Regs, 
    /* ADDri */
    IntRegs, IntRegs, simm13Op, 
    /* ADDrr */
    IntRegs, IntRegs, IntRegs, 
    /* ALIGNADDR */
    I64Regs, I64Regs, I64Regs, 
    /* ALIGNADDRL */
    I64Regs, I64Regs, I64Regs, 
    /* ANDCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ANDCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ANDNCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ANDNCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ANDNri */
    IntRegs, IntRegs, simm13Op, 
    /* ANDNrr */
    IntRegs, IntRegs, IntRegs, 
    /* ANDXNrr */
    I64Regs, I64Regs, I64Regs, 
    /* ANDXri */
    I64Regs, I64Regs, i64imm, 
    /* ANDXrr */
    I64Regs, I64Regs, I64Regs, 
    /* ANDri */
    IntRegs, IntRegs, simm13Op, 
    /* ANDrr */
    IntRegs, IntRegs, IntRegs, 
    /* ARRAY16 */
    I64Regs, I64Regs, I64Regs, 
    /* ARRAY32 */
    I64Regs, I64Regs, I64Regs, 
    /* ARRAY8 */
    I64Regs, I64Regs, I64Regs, 
    /* BA */
    brtarget, 
    /* BCOND */
    brtarget, CCOp, 
    /* BCONDA */
    brtarget, CCOp, 
    /* BINDri */
    -1, i32imm, 
    /* BINDrr */
    -1, -1, 
    /* BMASK */
    I64Regs, I64Regs, I64Regs, 
    /* BPA */
    bprtarget, 
    /* BPFCC */
    bprtarget, CCOp, FCCRegs, 
    /* BPFCCA */
    bprtarget, CCOp, FCCRegs, 
    /* BPFCCANT */
    bprtarget, CCOp, FCCRegs, 
    /* BPFCCNT */
    bprtarget, CCOp, FCCRegs, 
    /* BPGEZapn */
    I64Regs, bprtarget16, 
    /* BPGEZapt */
    I64Regs, bprtarget16, 
    /* BPGEZnapn */
    I64Regs, bprtarget16, 
    /* BPGEZnapt */
    I64Regs, bprtarget16, 
    /* BPGZapn */
    I64Regs, bprtarget16, 
    /* BPGZapt */
    I64Regs, bprtarget16, 
    /* BPGZnapn */
    I64Regs, bprtarget16, 
    /* BPGZnapt */
    I64Regs, bprtarget16, 
    /* BPICC */
    bprtarget, CCOp, 
    /* BPICCA */
    bprtarget, CCOp, 
    /* BPICCANT */
    bprtarget, CCOp, 
    /* BPICCNT */
    bprtarget, CCOp, 
    /* BPLEZapn */
    I64Regs, bprtarget16, 
    /* BPLEZapt */
    I64Regs, bprtarget16, 
    /* BPLEZnapn */
    I64Regs, bprtarget16, 
    /* BPLEZnapt */
    I64Regs, bprtarget16, 
    /* BPLZapn */
    I64Regs, bprtarget16, 
    /* BPLZapt */
    I64Regs, bprtarget16, 
    /* BPLZnapn */
    I64Regs, bprtarget16, 
    /* BPLZnapt */
    I64Regs, bprtarget16, 
    /* BPNZapn */
    I64Regs, bprtarget16, 
    /* BPNZapt */
    I64Regs, bprtarget16, 
    /* BPNZnapn */
    I64Regs, bprtarget16, 
    /* BPNZnapt */
    I64Regs, bprtarget16, 
    /* BPXCC */
    bprtarget, CCOp, 
    /* BPXCCA */
    bprtarget, CCOp, 
    /* BPXCCANT */
    bprtarget, CCOp, 
    /* BPXCCNT */
    bprtarget, CCOp, 
    /* BPZapn */
    I64Regs, bprtarget16, 
    /* BPZapt */
    I64Regs, bprtarget16, 
    /* BPZnapn */
    I64Regs, bprtarget16, 
    /* BPZnapt */
    I64Regs, bprtarget16, 
    /* BSHUFFLE */
    DFPRegs, DFPRegs, DFPRegs, 
    /* CALL */
    calltarget, 
    /* CALLri */
    -1, i32imm, 
    /* CALLrr */
    -1, -1, 
    /* CASAasi10 */
    IntRegs, IntRegs, IntRegs, IntRegs, 
    /* CASArr */
    IntRegs, IntRegs, IntRegs, IntRegs, i8imm, 
    /* CASXrr */
    I64Regs, I64Regs, I64Regs, I64Regs, 
    /* CASrr */
    IntRegs, IntRegs, IntRegs, IntRegs, 
    /* CBCOND */
    brtarget, CCOp, 
    /* CBCONDA */
    brtarget, CCOp, 
    /* CMASK16 */
    I64Regs, 
    /* CMASK32 */
    I64Regs, 
    /* CMASK8 */
    I64Regs, 
    /* CMPri */
    IntRegs, simm13Op, 
    /* CMPrr */
    IntRegs, IntRegs, 
    /* EDGE16 */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE16L */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE16LN */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE16N */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE32 */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE32L */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE32LN */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE32N */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE8 */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE8L */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE8LN */
    I64Regs, I64Regs, I64Regs, 
    /* EDGE8N */
    I64Regs, I64Regs, I64Regs, 
    /* FABSD */
    DFPRegs, DFPRegs, 
    /* FABSQ */
    QFPRegs, QFPRegs, 
    /* FABSS */
    FPRegs, FPRegs, 
    /* FADDD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FADDQ */
    QFPRegs, QFPRegs, QFPRegs, 
    /* FADDS */
    FPRegs, FPRegs, FPRegs, 
    /* FALIGNADATA */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FAND */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FANDNOT1 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FANDNOT1S */
    FPRegs, FPRegs, FPRegs, 
    /* FANDNOT2 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FANDNOT2S */
    FPRegs, FPRegs, FPRegs, 
    /* FANDS */
    FPRegs, FPRegs, FPRegs, 
    /* FBCOND */
    brtarget, CCOp, 
    /* FBCONDA */
    brtarget, CCOp, 
    /* FBCONDA_V9 */
    bprtarget, CCOp, 
    /* FBCOND_V9 */
    bprtarget, CCOp, 
    /* FCHKSM16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FCMPD */
    DFPRegs, DFPRegs, 
    /* FCMPD_V9 */
    DFPRegs, DFPRegs, 
    /* FCMPEQ16 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPEQ32 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPGT16 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPGT32 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPLE16 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPLE32 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPNE16 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPNE32 */
    I64Regs, DFPRegs, DFPRegs, 
    /* FCMPQ */
    QFPRegs, QFPRegs, 
    /* FCMPQ_V9 */
    QFPRegs, QFPRegs, 
    /* FCMPS */
    FPRegs, FPRegs, 
    /* FCMPS_V9 */
    FPRegs, FPRegs, 
    /* FDIVD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FDIVQ */
    QFPRegs, QFPRegs, QFPRegs, 
    /* FDIVS */
    FPRegs, FPRegs, FPRegs, 
    /* FDMULQ */
    QFPRegs, DFPRegs, DFPRegs, 
    /* FDTOI */
    FPRegs, DFPRegs, 
    /* FDTOQ */
    QFPRegs, DFPRegs, 
    /* FDTOS */
    FPRegs, DFPRegs, 
    /* FDTOX */
    DFPRegs, DFPRegs, 
    /* FEXPAND */
    DFPRegs, DFPRegs, 
    /* FHADDD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FHADDS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FHSUBD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FHSUBS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FITOD */
    DFPRegs, FPRegs, 
    /* FITOQ */
    QFPRegs, FPRegs, 
    /* FITOS */
    FPRegs, FPRegs, 
    /* FLCMPD */
    FCCRegs, DFPRegs, DFPRegs, 
    /* FLCMPS */
    FCCRegs, DFPRegs, DFPRegs, 
    /* FLUSH */
    /* FLUSHW */
    /* FLUSHri */
    -1, i32imm, 
    /* FLUSHrr */
    -1, -1, 
    /* FMEAN16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMOVD */
    DFPRegs, DFPRegs, 
    /* FMOVD_FCC */
    DFPRegs, DFPRegs, DFPRegs, CCOp, 
    /* FMOVD_ICC */
    DFPRegs, DFPRegs, DFPRegs, CCOp, 
    /* FMOVD_XCC */
    DFPRegs, DFPRegs, DFPRegs, CCOp, 
    /* FMOVQ */
    QFPRegs, QFPRegs, 
    /* FMOVQ_FCC */
    QFPRegs, QFPRegs, QFPRegs, CCOp, 
    /* FMOVQ_ICC */
    QFPRegs, QFPRegs, QFPRegs, CCOp, 
    /* FMOVQ_XCC */
    QFPRegs, QFPRegs, QFPRegs, CCOp, 
    /* FMOVRD */
    DFPRegs, I64Regs, DFPRegs, DFPRegs, RegCCOp, 
    /* FMOVRQ */
    QFPRegs, I64Regs, QFPRegs, QFPRegs, RegCCOp, 
    /* FMOVRS */
    FPRegs, I64Regs, FPRegs, FPRegs, RegCCOp, 
    /* FMOVS */
    FPRegs, FPRegs, 
    /* FMOVS_FCC */
    FPRegs, FPRegs, FPRegs, CCOp, 
    /* FMOVS_ICC */
    FPRegs, FPRegs, FPRegs, CCOp, 
    /* FMOVS_XCC */
    FPRegs, FPRegs, FPRegs, CCOp, 
    /* FMUL8SUX16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMUL8ULX16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMUL8X16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMUL8X16AL */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMUL8X16AU */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMULD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMULD8SUX16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMULD8ULX16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FMULQ */
    QFPRegs, QFPRegs, QFPRegs, 
    /* FMULS */
    FPRegs, FPRegs, FPRegs, 
    /* FNADDD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNADDS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNAND */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNANDS */
    FPRegs, FPRegs, FPRegs, 
    /* FNEGD */
    DFPRegs, DFPRegs, 
    /* FNEGQ */
    QFPRegs, QFPRegs, 
    /* FNEGS */
    FPRegs, FPRegs, 
    /* FNHADDD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNHADDS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNMULD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNMULS */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNOR */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FNORS */
    FPRegs, FPRegs, FPRegs, 
    /* FNOT1 */
    DFPRegs, DFPRegs, 
    /* FNOT1S */
    FPRegs, FPRegs, 
    /* FNOT2 */
    DFPRegs, DFPRegs, 
    /* FNOT2S */
    FPRegs, FPRegs, 
    /* FNSMULD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FONE */
    DFPRegs, DFPRegs, 
    /* FONES */
    FPRegs, FPRegs, 
    /* FOR */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FORNOT1 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FORNOT1S */
    FPRegs, FPRegs, FPRegs, 
    /* FORNOT2 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FORNOT2S */
    FPRegs, FPRegs, FPRegs, 
    /* FORS */
    FPRegs, FPRegs, FPRegs, 
    /* FPACK16 */
    DFPRegs, DFPRegs, 
    /* FPACK32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPACKFIX */
    DFPRegs, DFPRegs, 
    /* FPADD16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPADD16S */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPADD32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPADD32S */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPADD64 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPMERGE */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPSUB16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPSUB16S */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPSUB32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FPSUB32S */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FQTOD */
    DFPRegs, QFPRegs, 
    /* FQTOI */
    FPRegs, QFPRegs, 
    /* FQTOS */
    FPRegs, QFPRegs, 
    /* FQTOX */
    DFPRegs, QFPRegs, 
    /* FSLAS16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSLAS32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSLL16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSLL32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSMULD */
    DFPRegs, FPRegs, FPRegs, 
    /* FSQRTD */
    DFPRegs, DFPRegs, 
    /* FSQRTQ */
    QFPRegs, QFPRegs, 
    /* FSQRTS */
    FPRegs, FPRegs, 
    /* FSRA16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSRA32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSRC1 */
    DFPRegs, DFPRegs, 
    /* FSRC1S */
    FPRegs, FPRegs, 
    /* FSRC2 */
    DFPRegs, DFPRegs, 
    /* FSRC2S */
    FPRegs, FPRegs, 
    /* FSRL16 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSRL32 */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSTOD */
    DFPRegs, FPRegs, 
    /* FSTOI */
    FPRegs, FPRegs, 
    /* FSTOQ */
    QFPRegs, FPRegs, 
    /* FSTOX */
    DFPRegs, FPRegs, 
    /* FSUBD */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FSUBQ */
    QFPRegs, QFPRegs, QFPRegs, 
    /* FSUBS */
    FPRegs, FPRegs, FPRegs, 
    /* FXNOR */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FXNORS */
    FPRegs, FPRegs, FPRegs, 
    /* FXOR */
    DFPRegs, DFPRegs, DFPRegs, 
    /* FXORS */
    FPRegs, FPRegs, FPRegs, 
    /* FXTOD */
    DFPRegs, DFPRegs, 
    /* FXTOQ */
    QFPRegs, DFPRegs, 
    /* FXTOS */
    FPRegs, DFPRegs, 
    /* FZERO */
    DFPRegs, DFPRegs, 
    /* FZEROS */
    FPRegs, FPRegs, 
    /* GDOP_LDXrr */
    I64Regs, -1, -1, TailRelocSymGOTLoad, 
    /* GDOP_LDrr */
    IntRegs, -1, -1, TailRelocSymGOTLoad, 
    /* JMPLri */
    IntRegs, -1, i32imm, 
    /* JMPLrr */
    IntRegs, -1, -1, 
    /* LDArr */
    IntRegs, -1, -1, i8imm, 
    /* LDCSRri */
    -1, i32imm, 
    /* LDCSRrr */
    -1, -1, 
    /* LDCri */
    CoprocRegs, -1, i32imm, 
    /* LDCrr */
    CoprocRegs, -1, -1, 
    /* LDDArr */
    IntPair, -1, -1, i8imm, 
    /* LDDCri */
    CoprocPair, -1, i32imm, 
    /* LDDCrr */
    CoprocPair, -1, -1, 
    /* LDDFArr */
    DFPRegs, -1, -1, i8imm, 
    /* LDDFri */
    DFPRegs, -1, i32imm, 
    /* LDDFrr */
    DFPRegs, -1, -1, 
    /* LDDri */
    IntPair, -1, i32imm, 
    /* LDDrr */
    IntPair, -1, -1, 
    /* LDFArr */
    FPRegs, -1, -1, i8imm, 
    /* LDFSRri */
    -1, i32imm, 
    /* LDFSRrr */
    -1, -1, 
    /* LDFri */
    FPRegs, -1, i32imm, 
    /* LDFrr */
    FPRegs, -1, -1, 
    /* LDQFArr */
    QFPRegs, -1, -1, i8imm, 
    /* LDQFri */
    QFPRegs, -1, i32imm, 
    /* LDQFrr */
    QFPRegs, -1, -1, 
    /* LDSBArr */
    IntRegs, -1, -1, i8imm, 
    /* LDSBri */
    IntRegs, -1, i32imm, 
    /* LDSBrr */
    IntRegs, -1, -1, 
    /* LDSHArr */
    IntRegs, -1, -1, i8imm, 
    /* LDSHri */
    IntRegs, -1, i32imm, 
    /* LDSHrr */
    IntRegs, -1, -1, 
    /* LDSTUBArr */
    IntRegs, -1, -1, i8imm, 
    /* LDSTUBri */
    IntRegs, -1, i32imm, 
    /* LDSTUBrr */
    IntRegs, -1, -1, 
    /* LDSWri */
    I64Regs, -1, i32imm, 
    /* LDSWrr */
    I64Regs, -1, -1, 
    /* LDUBArr */
    IntRegs, -1, -1, i8imm, 
    /* LDUBri */
    IntRegs, -1, i32imm, 
    /* LDUBrr */
    IntRegs, -1, -1, 
    /* LDUHArr */
    IntRegs, -1, -1, i8imm, 
    /* LDUHri */
    IntRegs, -1, i32imm, 
    /* LDUHrr */
    IntRegs, -1, -1, 
    /* LDXFSRri */
    -1, i32imm, 
    /* LDXFSRrr */
    -1, -1, 
    /* LDXri */
    I64Regs, -1, i32imm, 
    /* LDXrr */
    I64Regs, -1, -1, 
    /* LDri */
    IntRegs, -1, i32imm, 
    /* LDrr */
    IntRegs, -1, -1, 
    /* LEAX_ADDri */
    I64Regs, -1, i32imm, 
    /* LEA_ADDri */
    IntRegs, -1, i32imm, 
    /* LZCNT */
    I64Regs, I64Regs, 
    /* MEMBARi */
    MembarTag, 
    /* MOVDTOX */
    I64Regs, DFPRegs, 
    /* MOVFCCri */
    IntRegs, i32imm, IntRegs, CCOp, 
    /* MOVFCCrr */
    IntRegs, IntRegs, IntRegs, CCOp, 
    /* MOVICCri */
    IntRegs, i32imm, IntRegs, CCOp, 
    /* MOVICCrr */
    IntRegs, IntRegs, IntRegs, CCOp, 
    /* MOVRri */
    IntRegs, I64Regs, i32imm, IntRegs, RegCCOp, 
    /* MOVRrr */
    IntRegs, I64Regs, IntRegs, IntRegs, RegCCOp, 
    /* MOVSTOSW */
    I64Regs, DFPRegs, 
    /* MOVSTOUW */
    I64Regs, DFPRegs, 
    /* MOVWTOS */
    DFPRegs, I64Regs, 
    /* MOVXCCri */
    IntRegs, i32imm, IntRegs, CCOp, 
    /* MOVXCCrr */
    IntRegs, IntRegs, IntRegs, CCOp, 
    /* MOVXTOD */
    DFPRegs, I64Regs, 
    /* MULSCCri */
    IntRegs, IntRegs, simm13Op, 
    /* MULSCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* MULXri */
    IntRegs, IntRegs, i64imm, 
    /* MULXrr */
    I64Regs, I64Regs, I64Regs, 
    /* NOP */
    /* ORCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ORCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ORNCCri */
    IntRegs, IntRegs, simm13Op, 
    /* ORNCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* ORNri */
    IntRegs, IntRegs, simm13Op, 
    /* ORNrr */
    IntRegs, IntRegs, IntRegs, 
    /* ORXNrr */
    I64Regs, I64Regs, I64Regs, 
    /* ORXri */
    I64Regs, I64Regs, i64imm, 
    /* ORXrr */
    I64Regs, I64Regs, I64Regs, 
    /* ORri */
    IntRegs, IntRegs, simm13Op, 
    /* ORrr */
    IntRegs, IntRegs, IntRegs, 
    /* PDIST */
    DFPRegs, DFPRegs, DFPRegs, 
    /* PDISTN */
    DFPRegs, DFPRegs, DFPRegs, 
    /* POPCrr */
    IntRegs, IntRegs, 
    /* PREFETCHi */
    -1, i32imm, shift_imm5, 
    /* PREFETCHr */
    -1, -1, shift_imm5, 
    /* PWRPSRri */
    IntRegs, simm13Op, 
    /* PWRPSRrr */
    IntRegs, IntRegs, 
    /* RDASR */
    IntRegs, ASRRegs, 
    /* RDPC */
    IntRegs, 
    /* RDPR */
    IntRegs, PRRegs, 
    /* RDPSR */
    IntRegs, 
    /* RDTBR */
    IntRegs, 
    /* RDWIM */
    IntRegs, 
    /* RESTOREri */
    IntRegs, IntRegs, simm13Op, 
    /* RESTORErr */
    IntRegs, IntRegs, IntRegs, 
    /* RET */
    i32imm, 
    /* RETL */
    i32imm, 
    /* RETTri */
    -1, i32imm, 
    /* RETTrr */
    -1, -1, 
    /* SAVEri */
    IntRegs, IntRegs, simm13Op, 
    /* SAVErr */
    IntRegs, IntRegs, IntRegs, 
    /* SDIVCCri */
    IntRegs, IntRegs, simm13Op, 
    /* SDIVCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* SDIVXri */
    IntRegs, IntRegs, i64imm, 
    /* SDIVXrr */
    I64Regs, I64Regs, I64Regs, 
    /* SDIVri */
    IntRegs, IntRegs, simm13Op, 
    /* SDIVrr */
    IntRegs, IntRegs, IntRegs, 
    /* SETHIXi */
    IntRegs, i64imm, 
    /* SETHIi */
    IntRegs, i32imm, 
    /* SHUTDOWN */
    /* SIAM */
    /* SIR */
    simm13Op, 
    /* SLLXri */
    I64Regs, I64Regs, shift_imm6, 
    /* SLLXrr */
    I64Regs, I64Regs, IntRegs, 
    /* SLLri */
    IntRegs, IntRegs, shift_imm5, 
    /* SLLrr */
    IntRegs, IntRegs, IntRegs, 
    /* SMACri */
    IntRegs, IntRegs, simm13Op, ASRRegs, 
    /* SMACrr */
    IntRegs, IntRegs, IntRegs, ASRRegs, 
    /* SMULCCri */
    IntRegs, IntRegs, simm13Op, 
    /* SMULCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* SMULri */
    IntRegs, IntRegs, simm13Op, 
    /* SMULrr */
    IntRegs, IntRegs, IntRegs, 
    /* SRAXri */
    I64Regs, I64Regs, shift_imm6, 
    /* SRAXrr */
    I64Regs, I64Regs, IntRegs, 
    /* SRAri */
    IntRegs, IntRegs, shift_imm5, 
    /* SRArr */
    IntRegs, IntRegs, IntRegs, 
    /* SRLXri */
    I64Regs, I64Regs, shift_imm6, 
    /* SRLXrr */
    I64Regs, I64Regs, IntRegs, 
    /* SRLri */
    IntRegs, IntRegs, shift_imm5, 
    /* SRLrr */
    IntRegs, IntRegs, IntRegs, 
    /* STArr */
    -1, -1, IntRegs, i8imm, 
    /* STBAR */
    /* STBArr */
    -1, -1, IntRegs, i8imm, 
    /* STBri */
    -1, i32imm, IntRegs, 
    /* STBrr */
    -1, -1, IntRegs, 
    /* STCSRri */
    -1, i32imm, 
    /* STCSRrr */
    -1, -1, 
    /* STCri */
    -1, i32imm, CoprocRegs, 
    /* STCrr */
    -1, -1, CoprocRegs, 
    /* STDArr */
    -1, -1, IntPair, i8imm, 
    /* STDCQri */
    -1, i32imm, 
    /* STDCQrr */
    -1, -1, 
    /* STDCri */
    -1, i32imm, CoprocPair, 
    /* STDCrr */
    -1, -1, CoprocPair, 
    /* STDFArr */
    -1, -1, DFPRegs, i8imm, 
    /* STDFQri */
    -1, i32imm, 
    /* STDFQrr */
    -1, -1, 
    /* STDFri */
    -1, i32imm, DFPRegs, 
    /* STDFrr */
    -1, -1, DFPRegs, 
    /* STDri */
    -1, i32imm, IntPair, 
    /* STDrr */
    -1, -1, IntPair, 
    /* STFArr */
    -1, -1, FPRegs, i8imm, 
    /* STFSRri */
    -1, i32imm, 
    /* STFSRrr */
    -1, -1, 
    /* STFri */
    -1, i32imm, FPRegs, 
    /* STFrr */
    -1, -1, FPRegs, 
    /* STHArr */
    -1, -1, IntRegs, i8imm, 
    /* STHri */
    -1, i32imm, IntRegs, 
    /* STHrr */
    -1, -1, IntRegs, 
    /* STQFArr */
    -1, -1, QFPRegs, i8imm, 
    /* STQFri */
    -1, i32imm, QFPRegs, 
    /* STQFrr */
    -1, -1, QFPRegs, 
    /* STXFSRri */
    -1, i32imm, 
    /* STXFSRrr */
    -1, -1, 
    /* STXri */
    -1, i32imm, I64Regs, 
    /* STXrr */
    -1, -1, I64Regs, 
    /* STri */
    -1, i32imm, IntRegs, 
    /* STrr */
    -1, -1, IntRegs, 
    /* SUBCCri */
    IntRegs, IntRegs, simm13Op, 
    /* SUBCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* SUBCri */
    IntRegs, IntRegs, simm13Op, 
    /* SUBCrr */
    IntRegs, IntRegs, IntRegs, 
    /* SUBEri */
    IntRegs, IntRegs, simm13Op, 
    /* SUBErr */
    IntRegs, IntRegs, IntRegs, 
    /* SUBXri */
    I64Regs, I64Regs, i64imm, 
    /* SUBXrr */
    I64Regs, I64Regs, I64Regs, 
    /* SUBri */
    IntRegs, IntRegs, simm13Op, 
    /* SUBrr */
    IntRegs, IntRegs, IntRegs, 
    /* SWAPArr */
    IntRegs, -1, -1, i8imm, IntRegs, 
    /* SWAPri */
    IntRegs, -1, i32imm, IntRegs, 
    /* SWAPrr */
    IntRegs, -1, -1, IntRegs, 
    /* TA1 */
    /* TA3 */
    /* TA5 */
    /* TADDCCTVri */
    IntRegs, IntRegs, simm13Op, 
    /* TADDCCTVrr */
    IntRegs, IntRegs, IntRegs, 
    /* TADDCCri */
    IntRegs, IntRegs, simm13Op, 
    /* TADDCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* TAIL_CALL */
    calltarget, 
    /* TAIL_CALLri */
    -1, i32imm, 
    /* TICCri */
    IntRegs, i32imm, CCOp, 
    /* TICCrr */
    IntRegs, IntRegs, CCOp, 
    /* TLS_ADDXrr */
    I64Regs, I64Regs, I64Regs, TailRelocSymTLSAdd, 
    /* TLS_ADDrr */
    IntRegs, IntRegs, IntRegs, TailRelocSymTLSAdd, 
    /* TLS_CALL */
    calltarget, TailRelocSymTLSCall, 
    /* TLS_LDXrr */
    IntRegs, -1, -1, TailRelocSymTLSLoad, 
    /* TLS_LDrr */
    IntRegs, -1, -1, TailRelocSymTLSLoad, 
    /* TRAPri */
    IntRegs, i32imm, CCOp, 
    /* TRAPrr */
    IntRegs, IntRegs, CCOp, 
    /* TSUBCCTVri */
    IntRegs, IntRegs, simm13Op, 
    /* TSUBCCTVrr */
    IntRegs, IntRegs, IntRegs, 
    /* TSUBCCri */
    IntRegs, IntRegs, simm13Op, 
    /* TSUBCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* TXCCri */
    IntRegs, i32imm, CCOp, 
    /* TXCCrr */
    IntRegs, IntRegs, CCOp, 
    /* UDIVCCri */
    IntRegs, IntRegs, simm13Op, 
    /* UDIVCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* UDIVXri */
    IntRegs, IntRegs, i64imm, 
    /* UDIVXrr */
    I64Regs, I64Regs, I64Regs, 
    /* UDIVri */
    IntRegs, IntRegs, simm13Op, 
    /* UDIVrr */
    IntRegs, IntRegs, IntRegs, 
    /* UMACri */
    IntRegs, IntRegs, simm13Op, ASRRegs, 
    /* UMACrr */
    IntRegs, IntRegs, IntRegs, ASRRegs, 
    /* UMULCCri */
    IntRegs, IntRegs, simm13Op, 
    /* UMULCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* UMULXHI */
    I64Regs, I64Regs, I64Regs, 
    /* UMULri */
    IntRegs, IntRegs, simm13Op, 
    /* UMULrr */
    IntRegs, IntRegs, IntRegs, 
    /* UNIMP */
    i32imm, 
    /* V9FCMPD */
    FCCRegs, DFPRegs, DFPRegs, 
    /* V9FCMPED */
    FCCRegs, DFPRegs, DFPRegs, 
    /* V9FCMPEQ */
    FCCRegs, QFPRegs, QFPRegs, 
    /* V9FCMPES */
    FCCRegs, FPRegs, FPRegs, 
    /* V9FCMPQ */
    FCCRegs, QFPRegs, QFPRegs, 
    /* V9FCMPS */
    FCCRegs, FPRegs, FPRegs, 
    /* V9FMOVD_FCC */
    DFPRegs, FCCRegs, DFPRegs, DFPRegs, CCOp, 
    /* V9FMOVQ_FCC */
    QFPRegs, FCCRegs, QFPRegs, QFPRegs, CCOp, 
    /* V9FMOVS_FCC */
    FPRegs, FCCRegs, FPRegs, FPRegs, CCOp, 
    /* V9MOVFCCri */
    IntRegs, FCCRegs, i32imm, IntRegs, CCOp, 
    /* V9MOVFCCrr */
    IntRegs, FCCRegs, IntRegs, IntRegs, CCOp, 
    /* WRASRri */
    ASRRegs, IntRegs, simm13Op, 
    /* WRASRrr */
    ASRRegs, IntRegs, IntRegs, 
    /* WRPRri */
    PRRegs, IntRegs, simm13Op, 
    /* WRPRrr */
    PRRegs, IntRegs, IntRegs, 
    /* WRPSRri */
    IntRegs, simm13Op, 
    /* WRPSRrr */
    IntRegs, IntRegs, 
    /* WRTBRri */
    IntRegs, simm13Op, 
    /* WRTBRrr */
    IntRegs, IntRegs, 
    /* WRWIMri */
    IntRegs, simm13Op, 
    /* WRWIMrr */
    IntRegs, IntRegs, 
    /* XMULX */
    I64Regs, I64Regs, I64Regs, 
    /* XMULXHI */
    I64Regs, I64Regs, I64Regs, 
    /* XNORCCri */
    IntRegs, IntRegs, simm13Op, 
    /* XNORCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* XNORXrr */
    I64Regs, I64Regs, I64Regs, 
    /* XNORri */
    IntRegs, IntRegs, simm13Op, 
    /* XNORrr */
    IntRegs, IntRegs, IntRegs, 
    /* XORCCri */
    IntRegs, IntRegs, simm13Op, 
    /* XORCCrr */
    IntRegs, IntRegs, IntRegs, 
    /* XORXri */
    I64Regs, I64Regs, i64imm, 
    /* XORXrr */
    I64Regs, I64Regs, I64Regs, 
    /* XORri */
    IntRegs, IntRegs, simm13Op, 
    /* XORrr */
    IntRegs, IntRegs, IntRegs, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace SP {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace Sparc {
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
} // end namespace Sparc
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace Sparc {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace Sparc
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace Sparc_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace Sparc_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace Sparc_MC {

} // end namespace Sparc_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace Sparc_MC {

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_UseSoftMulDivBit = 5,
  Feature_HasV9Bit = 1,
  Feature_HasVISBit = 2,
  Feature_HasVIS2Bit = 3,
  Feature_HasVIS3Bit = 4,
  Feature_HasPWRPSRBit = 0,
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  "Feature_HasPWRPSR",
  "Feature_HasV9",
  "Feature_HasVIS",
  "Feature_HasVIS2",
  "Feature_HasVIS3",
  "Feature_UseSoftMulDiv",
  nullptr
};

#endif // NDEBUG

FeatureBitset computeAvailableFeatures(const FeatureBitset &FB) {
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

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
  CEFBS_HasPWRPSR,
  CEFBS_HasV9,
  CEFBS_HasVIS,
  CEFBS_HasVIS2,
  CEFBS_HasVIS3,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
  {Feature_HasPWRPSRBit, },
  {Feature_HasV9Bit, },
  {Feature_HasVISBit, },
  {Feature_HasVIS2Bit, },
  {Feature_HasVIS3Bit, },
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
    CEFBS_None, // ADJCALLSTACKDOWN = 252
    CEFBS_None, // ADJCALLSTACKUP = 253
    CEFBS_None, // GETPCX = 254
    CEFBS_None, // SELECT_CC_DFP_FCC = 255
    CEFBS_None, // SELECT_CC_DFP_ICC = 256
    CEFBS_None, // SELECT_CC_DFP_XCC = 257
    CEFBS_None, // SELECT_CC_FP_FCC = 258
    CEFBS_None, // SELECT_CC_FP_ICC = 259
    CEFBS_None, // SELECT_CC_FP_XCC = 260
    CEFBS_None, // SELECT_CC_Int_FCC = 261
    CEFBS_None, // SELECT_CC_Int_ICC = 262
    CEFBS_None, // SELECT_CC_Int_XCC = 263
    CEFBS_None, // SELECT_CC_QFP_FCC = 264
    CEFBS_None, // SELECT_CC_QFP_ICC = 265
    CEFBS_None, // SELECT_CC_QFP_XCC = 266
    CEFBS_None, // SET = 267
    CEFBS_None, // ADDCCri = 268
    CEFBS_None, // ADDCCrr = 269
    CEFBS_None, // ADDCri = 270
    CEFBS_None, // ADDCrr = 271
    CEFBS_None, // ADDEri = 272
    CEFBS_None, // ADDErr = 273
    CEFBS_HasVIS3, // ADDXC = 274
    CEFBS_HasVIS3, // ADDXCCC = 275
    CEFBS_None, // ADDXri = 276
    CEFBS_None, // ADDXrr = 277
    CEFBS_None, // ADDri = 278
    CEFBS_None, // ADDrr = 279
    CEFBS_HasVIS, // ALIGNADDR = 280
    CEFBS_HasVIS, // ALIGNADDRL = 281
    CEFBS_None, // ANDCCri = 282
    CEFBS_None, // ANDCCrr = 283
    CEFBS_None, // ANDNCCri = 284
    CEFBS_None, // ANDNCCrr = 285
    CEFBS_None, // ANDNri = 286
    CEFBS_None, // ANDNrr = 287
    CEFBS_None, // ANDXNrr = 288
    CEFBS_None, // ANDXri = 289
    CEFBS_None, // ANDXrr = 290
    CEFBS_None, // ANDri = 291
    CEFBS_None, // ANDrr = 292
    CEFBS_HasVIS, // ARRAY16 = 293
    CEFBS_HasVIS, // ARRAY32 = 294
    CEFBS_HasVIS, // ARRAY8 = 295
    CEFBS_None, // BA = 296
    CEFBS_None, // BCOND = 297
    CEFBS_None, // BCONDA = 298
    CEFBS_None, // BINDri = 299
    CEFBS_None, // BINDrr = 300
    CEFBS_HasVIS2, // BMASK = 301
    CEFBS_HasV9, // BPA = 302
    CEFBS_HasV9, // BPFCC = 303
    CEFBS_HasV9, // BPFCCA = 304
    CEFBS_HasV9, // BPFCCANT = 305
    CEFBS_HasV9, // BPFCCNT = 306
    CEFBS_None, // BPGEZapn = 307
    CEFBS_None, // BPGEZapt = 308
    CEFBS_None, // BPGEZnapn = 309
    CEFBS_None, // BPGEZnapt = 310
    CEFBS_None, // BPGZapn = 311
    CEFBS_None, // BPGZapt = 312
    CEFBS_None, // BPGZnapn = 313
    CEFBS_None, // BPGZnapt = 314
    CEFBS_HasV9, // BPICC = 315
    CEFBS_HasV9, // BPICCA = 316
    CEFBS_HasV9, // BPICCANT = 317
    CEFBS_HasV9, // BPICCNT = 318
    CEFBS_None, // BPLEZapn = 319
    CEFBS_None, // BPLEZapt = 320
    CEFBS_None, // BPLEZnapn = 321
    CEFBS_None, // BPLEZnapt = 322
    CEFBS_None, // BPLZapn = 323
    CEFBS_None, // BPLZapt = 324
    CEFBS_None, // BPLZnapn = 325
    CEFBS_None, // BPLZnapt = 326
    CEFBS_None, // BPNZapn = 327
    CEFBS_None, // BPNZapt = 328
    CEFBS_None, // BPNZnapn = 329
    CEFBS_None, // BPNZnapt = 330
    CEFBS_None, // BPXCC = 331
    CEFBS_None, // BPXCCA = 332
    CEFBS_None, // BPXCCANT = 333
    CEFBS_None, // BPXCCNT = 334
    CEFBS_None, // BPZapn = 335
    CEFBS_None, // BPZapt = 336
    CEFBS_None, // BPZnapn = 337
    CEFBS_None, // BPZnapt = 338
    CEFBS_HasVIS2, // BSHUFFLE = 339
    CEFBS_None, // CALL = 340
    CEFBS_None, // CALLri = 341
    CEFBS_None, // CALLrr = 342
    CEFBS_None, // CASAasi10 = 343
    CEFBS_None, // CASArr = 344
    CEFBS_None, // CASXrr = 345
    CEFBS_HasV9, // CASrr = 346
    CEFBS_None, // CBCOND = 347
    CEFBS_None, // CBCONDA = 348
    CEFBS_HasVIS3, // CMASK16 = 349
    CEFBS_HasVIS3, // CMASK32 = 350
    CEFBS_HasVIS3, // CMASK8 = 351
    CEFBS_None, // CMPri = 352
    CEFBS_None, // CMPrr = 353
    CEFBS_HasVIS, // EDGE16 = 354
    CEFBS_HasVIS, // EDGE16L = 355
    CEFBS_HasVIS2, // EDGE16LN = 356
    CEFBS_HasVIS2, // EDGE16N = 357
    CEFBS_HasVIS, // EDGE32 = 358
    CEFBS_HasVIS, // EDGE32L = 359
    CEFBS_HasVIS2, // EDGE32LN = 360
    CEFBS_HasVIS2, // EDGE32N = 361
    CEFBS_HasVIS, // EDGE8 = 362
    CEFBS_HasVIS, // EDGE8L = 363
    CEFBS_HasVIS2, // EDGE8LN = 364
    CEFBS_HasVIS2, // EDGE8N = 365
    CEFBS_HasV9, // FABSD = 366
    CEFBS_HasV9, // FABSQ = 367
    CEFBS_None, // FABSS = 368
    CEFBS_None, // FADDD = 369
    CEFBS_None, // FADDQ = 370
    CEFBS_None, // FADDS = 371
    CEFBS_HasVIS, // FALIGNADATA = 372
    CEFBS_HasVIS, // FAND = 373
    CEFBS_HasVIS, // FANDNOT1 = 374
    CEFBS_HasVIS, // FANDNOT1S = 375
    CEFBS_HasVIS, // FANDNOT2 = 376
    CEFBS_HasVIS, // FANDNOT2S = 377
    CEFBS_HasVIS, // FANDS = 378
    CEFBS_None, // FBCOND = 379
    CEFBS_None, // FBCONDA = 380
    CEFBS_HasV9, // FBCONDA_V9 = 381
    CEFBS_HasV9, // FBCOND_V9 = 382
    CEFBS_HasVIS3, // FCHKSM16 = 383
    CEFBS_None, // FCMPD = 384
    CEFBS_HasV9, // FCMPD_V9 = 385
    CEFBS_HasVIS, // FCMPEQ16 = 386
    CEFBS_HasVIS, // FCMPEQ32 = 387
    CEFBS_HasVIS, // FCMPGT16 = 388
    CEFBS_HasVIS, // FCMPGT32 = 389
    CEFBS_HasVIS, // FCMPLE16 = 390
    CEFBS_HasVIS, // FCMPLE32 = 391
    CEFBS_HasVIS, // FCMPNE16 = 392
    CEFBS_HasVIS, // FCMPNE32 = 393
    CEFBS_None, // FCMPQ = 394
    CEFBS_HasV9, // FCMPQ_V9 = 395
    CEFBS_None, // FCMPS = 396
    CEFBS_HasV9, // FCMPS_V9 = 397
    CEFBS_None, // FDIVD = 398
    CEFBS_None, // FDIVQ = 399
    CEFBS_None, // FDIVS = 400
    CEFBS_None, // FDMULQ = 401
    CEFBS_None, // FDTOI = 402
    CEFBS_None, // FDTOQ = 403
    CEFBS_None, // FDTOS = 404
    CEFBS_None, // FDTOX = 405
    CEFBS_HasVIS, // FEXPAND = 406
    CEFBS_HasVIS3, // FHADDD = 407
    CEFBS_HasVIS3, // FHADDS = 408
    CEFBS_HasVIS3, // FHSUBD = 409
    CEFBS_HasVIS3, // FHSUBS = 410
    CEFBS_None, // FITOD = 411
    CEFBS_None, // FITOQ = 412
    CEFBS_None, // FITOS = 413
    CEFBS_HasVIS3, // FLCMPD = 414
    CEFBS_HasVIS3, // FLCMPS = 415
    CEFBS_None, // FLUSH = 416
    CEFBS_HasV9, // FLUSHW = 417
    CEFBS_None, // FLUSHri = 418
    CEFBS_None, // FLUSHrr = 419
    CEFBS_HasVIS3, // FMEAN16 = 420
    CEFBS_HasV9, // FMOVD = 421
    CEFBS_HasV9, // FMOVD_FCC = 422
    CEFBS_HasV9, // FMOVD_ICC = 423
    CEFBS_None, // FMOVD_XCC = 424
    CEFBS_HasV9, // FMOVQ = 425
    CEFBS_HasV9, // FMOVQ_FCC = 426
    CEFBS_HasV9, // FMOVQ_ICC = 427
    CEFBS_None, // FMOVQ_XCC = 428
    CEFBS_None, // FMOVRD = 429
    CEFBS_None, // FMOVRQ = 430
    CEFBS_None, // FMOVRS = 431
    CEFBS_None, // FMOVS = 432
    CEFBS_HasV9, // FMOVS_FCC = 433
    CEFBS_HasV9, // FMOVS_ICC = 434
    CEFBS_None, // FMOVS_XCC = 435
    CEFBS_HasVIS, // FMUL8SUX16 = 436
    CEFBS_HasVIS, // FMUL8ULX16 = 437
    CEFBS_HasVIS, // FMUL8X16 = 438
    CEFBS_HasVIS, // FMUL8X16AL = 439
    CEFBS_HasVIS, // FMUL8X16AU = 440
    CEFBS_None, // FMULD = 441
    CEFBS_HasVIS, // FMULD8SUX16 = 442
    CEFBS_HasVIS, // FMULD8ULX16 = 443
    CEFBS_None, // FMULQ = 444
    CEFBS_None, // FMULS = 445
    CEFBS_HasVIS3, // FNADDD = 446
    CEFBS_HasVIS3, // FNADDS = 447
    CEFBS_HasVIS, // FNAND = 448
    CEFBS_HasVIS, // FNANDS = 449
    CEFBS_HasV9, // FNEGD = 450
    CEFBS_HasV9, // FNEGQ = 451
    CEFBS_None, // FNEGS = 452
    CEFBS_HasVIS3, // FNHADDD = 453
    CEFBS_HasVIS3, // FNHADDS = 454
    CEFBS_HasVIS3, // FNMULD = 455
    CEFBS_HasVIS3, // FNMULS = 456
    CEFBS_HasVIS, // FNOR = 457
    CEFBS_HasVIS, // FNORS = 458
    CEFBS_HasVIS, // FNOT1 = 459
    CEFBS_HasVIS, // FNOT1S = 460
    CEFBS_HasVIS, // FNOT2 = 461
    CEFBS_HasVIS, // FNOT2S = 462
    CEFBS_HasVIS3, // FNSMULD = 463
    CEFBS_HasVIS, // FONE = 464
    CEFBS_HasVIS, // FONES = 465
    CEFBS_HasVIS, // FOR = 466
    CEFBS_HasVIS, // FORNOT1 = 467
    CEFBS_HasVIS, // FORNOT1S = 468
    CEFBS_HasVIS, // FORNOT2 = 469
    CEFBS_HasVIS, // FORNOT2S = 470
    CEFBS_HasVIS, // FORS = 471
    CEFBS_HasVIS, // FPACK16 = 472
    CEFBS_HasVIS, // FPACK32 = 473
    CEFBS_HasVIS, // FPACKFIX = 474
    CEFBS_HasVIS, // FPADD16 = 475
    CEFBS_HasVIS, // FPADD16S = 476
    CEFBS_HasVIS, // FPADD32 = 477
    CEFBS_HasVIS, // FPADD32S = 478
    CEFBS_HasVIS3, // FPADD64 = 479
    CEFBS_HasVIS, // FPMERGE = 480
    CEFBS_HasVIS, // FPSUB16 = 481
    CEFBS_HasVIS, // FPSUB16S = 482
    CEFBS_HasVIS, // FPSUB32 = 483
    CEFBS_HasVIS, // FPSUB32S = 484
    CEFBS_None, // FQTOD = 485
    CEFBS_None, // FQTOI = 486
    CEFBS_None, // FQTOS = 487
    CEFBS_None, // FQTOX = 488
    CEFBS_HasVIS3, // FSLAS16 = 489
    CEFBS_HasVIS3, // FSLAS32 = 490
    CEFBS_HasVIS3, // FSLL16 = 491
    CEFBS_HasVIS3, // FSLL32 = 492
    CEFBS_None, // FSMULD = 493
    CEFBS_None, // FSQRTD = 494
    CEFBS_None, // FSQRTQ = 495
    CEFBS_None, // FSQRTS = 496
    CEFBS_HasVIS3, // FSRA16 = 497
    CEFBS_HasVIS3, // FSRA32 = 498
    CEFBS_HasVIS, // FSRC1 = 499
    CEFBS_HasVIS, // FSRC1S = 500
    CEFBS_HasVIS, // FSRC2 = 501
    CEFBS_HasVIS, // FSRC2S = 502
    CEFBS_HasVIS3, // FSRL16 = 503
    CEFBS_HasVIS3, // FSRL32 = 504
    CEFBS_None, // FSTOD = 505
    CEFBS_None, // FSTOI = 506
    CEFBS_None, // FSTOQ = 507
    CEFBS_None, // FSTOX = 508
    CEFBS_None, // FSUBD = 509
    CEFBS_None, // FSUBQ = 510
    CEFBS_None, // FSUBS = 511
    CEFBS_HasVIS, // FXNOR = 512
    CEFBS_HasVIS, // FXNORS = 513
    CEFBS_HasVIS, // FXOR = 514
    CEFBS_HasVIS, // FXORS = 515
    CEFBS_None, // FXTOD = 516
    CEFBS_None, // FXTOQ = 517
    CEFBS_None, // FXTOS = 518
    CEFBS_HasVIS, // FZERO = 519
    CEFBS_HasVIS, // FZEROS = 520
    CEFBS_None, // GDOP_LDXrr = 521
    CEFBS_None, // GDOP_LDrr = 522
    CEFBS_None, // JMPLri = 523
    CEFBS_None, // JMPLrr = 524
    CEFBS_None, // LDArr = 525
    CEFBS_None, // LDCSRri = 526
    CEFBS_None, // LDCSRrr = 527
    CEFBS_None, // LDCri = 528
    CEFBS_None, // LDCrr = 529
    CEFBS_None, // LDDArr = 530
    CEFBS_None, // LDDCri = 531
    CEFBS_None, // LDDCrr = 532
    CEFBS_HasV9, // LDDFArr = 533
    CEFBS_None, // LDDFri = 534
    CEFBS_None, // LDDFrr = 535
    CEFBS_None, // LDDri = 536
    CEFBS_None, // LDDrr = 537
    CEFBS_HasV9, // LDFArr = 538
    CEFBS_None, // LDFSRri = 539
    CEFBS_None, // LDFSRrr = 540
    CEFBS_None, // LDFri = 541
    CEFBS_None, // LDFrr = 542
    CEFBS_HasV9, // LDQFArr = 543
    CEFBS_HasV9, // LDQFri = 544
    CEFBS_HasV9, // LDQFrr = 545
    CEFBS_None, // LDSBArr = 546
    CEFBS_None, // LDSBri = 547
    CEFBS_None, // LDSBrr = 548
    CEFBS_None, // LDSHArr = 549
    CEFBS_None, // LDSHri = 550
    CEFBS_None, // LDSHrr = 551
    CEFBS_None, // LDSTUBArr = 552
    CEFBS_None, // LDSTUBri = 553
    CEFBS_None, // LDSTUBrr = 554
    CEFBS_None, // LDSWri = 555
    CEFBS_None, // LDSWrr = 556
    CEFBS_None, // LDUBArr = 557
    CEFBS_None, // LDUBri = 558
    CEFBS_None, // LDUBrr = 559
    CEFBS_None, // LDUHArr = 560
    CEFBS_None, // LDUHri = 561
    CEFBS_None, // LDUHrr = 562
    CEFBS_HasV9, // LDXFSRri = 563
    CEFBS_HasV9, // LDXFSRrr = 564
    CEFBS_None, // LDXri = 565
    CEFBS_None, // LDXrr = 566
    CEFBS_None, // LDri = 567
    CEFBS_None, // LDrr = 568
    CEFBS_None, // LEAX_ADDri = 569
    CEFBS_None, // LEA_ADDri = 570
    CEFBS_HasVIS3, // LZCNT = 571
    CEFBS_HasV9, // MEMBARi = 572
    CEFBS_HasVIS3, // MOVDTOX = 573
    CEFBS_HasV9, // MOVFCCri = 574
    CEFBS_HasV9, // MOVFCCrr = 575
    CEFBS_HasV9, // MOVICCri = 576
    CEFBS_HasV9, // MOVICCrr = 577
    CEFBS_None, // MOVRri = 578
    CEFBS_None, // MOVRrr = 579
    CEFBS_HasVIS3, // MOVSTOSW = 580
    CEFBS_HasVIS3, // MOVSTOUW = 581
    CEFBS_HasVIS3, // MOVWTOS = 582
    CEFBS_None, // MOVXCCri = 583
    CEFBS_None, // MOVXCCrr = 584
    CEFBS_HasVIS3, // MOVXTOD = 585
    CEFBS_None, // MULSCCri = 586
    CEFBS_None, // MULSCCrr = 587
    CEFBS_None, // MULXri = 588
    CEFBS_None, // MULXrr = 589
    CEFBS_None, // NOP = 590
    CEFBS_None, // ORCCri = 591
    CEFBS_None, // ORCCrr = 592
    CEFBS_None, // ORNCCri = 593
    CEFBS_None, // ORNCCrr = 594
    CEFBS_None, // ORNri = 595
    CEFBS_None, // ORNrr = 596
    CEFBS_None, // ORXNrr = 597
    CEFBS_None, // ORXri = 598
    CEFBS_None, // ORXrr = 599
    CEFBS_None, // ORri = 600
    CEFBS_None, // ORrr = 601
    CEFBS_HasVIS, // PDIST = 602
    CEFBS_HasVIS3, // PDISTN = 603
    CEFBS_HasV9, // POPCrr = 604
    CEFBS_HasV9, // PREFETCHi = 605
    CEFBS_HasV9, // PREFETCHr = 606
    CEFBS_HasPWRPSR, // PWRPSRri = 607
    CEFBS_HasPWRPSR, // PWRPSRrr = 608
    CEFBS_None, // RDASR = 609
    CEFBS_HasV9, // RDPC = 610
    CEFBS_HasV9, // RDPR = 611
    CEFBS_None, // RDPSR = 612
    CEFBS_None, // RDTBR = 613
    CEFBS_None, // RDWIM = 614
    CEFBS_None, // RESTOREri = 615
    CEFBS_None, // RESTORErr = 616
    CEFBS_None, // RET = 617
    CEFBS_None, // RETL = 618
    CEFBS_None, // RETTri = 619
    CEFBS_None, // RETTrr = 620
    CEFBS_None, // SAVEri = 621
    CEFBS_None, // SAVErr = 622
    CEFBS_None, // SDIVCCri = 623
    CEFBS_None, // SDIVCCrr = 624
    CEFBS_None, // SDIVXri = 625
    CEFBS_None, // SDIVXrr = 626
    CEFBS_None, // SDIVri = 627
    CEFBS_None, // SDIVrr = 628
    CEFBS_None, // SETHIXi = 629
    CEFBS_None, // SETHIi = 630
    CEFBS_HasVIS, // SHUTDOWN = 631
    CEFBS_HasVIS2, // SIAM = 632
    CEFBS_HasV9, // SIR = 633
    CEFBS_None, // SLLXri = 634
    CEFBS_None, // SLLXrr = 635
    CEFBS_None, // SLLri = 636
    CEFBS_None, // SLLrr = 637
    CEFBS_None, // SMACri = 638
    CEFBS_None, // SMACrr = 639
    CEFBS_None, // SMULCCri = 640
    CEFBS_None, // SMULCCrr = 641
    CEFBS_None, // SMULri = 642
    CEFBS_None, // SMULrr = 643
    CEFBS_None, // SRAXri = 644
    CEFBS_None, // SRAXrr = 645
    CEFBS_None, // SRAri = 646
    CEFBS_None, // SRArr = 647
    CEFBS_None, // SRLXri = 648
    CEFBS_None, // SRLXrr = 649
    CEFBS_None, // SRLri = 650
    CEFBS_None, // SRLrr = 651
    CEFBS_None, // STArr = 652
    CEFBS_None, // STBAR = 653
    CEFBS_None, // STBArr = 654
    CEFBS_None, // STBri = 655
    CEFBS_None, // STBrr = 656
    CEFBS_None, // STCSRri = 657
    CEFBS_None, // STCSRrr = 658
    CEFBS_None, // STCri = 659
    CEFBS_None, // STCrr = 660
    CEFBS_None, // STDArr = 661
    CEFBS_None, // STDCQri = 662
    CEFBS_None, // STDCQrr = 663
    CEFBS_None, // STDCri = 664
    CEFBS_None, // STDCrr = 665
    CEFBS_HasV9, // STDFArr = 666
    CEFBS_None, // STDFQri = 667
    CEFBS_None, // STDFQrr = 668
    CEFBS_None, // STDFri = 669
    CEFBS_None, // STDFrr = 670
    CEFBS_None, // STDri = 671
    CEFBS_None, // STDrr = 672
    CEFBS_HasV9, // STFArr = 673
    CEFBS_None, // STFSRri = 674
    CEFBS_None, // STFSRrr = 675
    CEFBS_None, // STFri = 676
    CEFBS_None, // STFrr = 677
    CEFBS_None, // STHArr = 678
    CEFBS_None, // STHri = 679
    CEFBS_None, // STHrr = 680
    CEFBS_HasV9, // STQFArr = 681
    CEFBS_HasV9, // STQFri = 682
    CEFBS_HasV9, // STQFrr = 683
    CEFBS_HasV9, // STXFSRri = 684
    CEFBS_HasV9, // STXFSRrr = 685
    CEFBS_None, // STXri = 686
    CEFBS_None, // STXrr = 687
    CEFBS_None, // STri = 688
    CEFBS_None, // STrr = 689
    CEFBS_None, // SUBCCri = 690
    CEFBS_None, // SUBCCrr = 691
    CEFBS_None, // SUBCri = 692
    CEFBS_None, // SUBCrr = 693
    CEFBS_None, // SUBEri = 694
    CEFBS_None, // SUBErr = 695
    CEFBS_None, // SUBXri = 696
    CEFBS_None, // SUBXrr = 697
    CEFBS_None, // SUBri = 698
    CEFBS_None, // SUBrr = 699
    CEFBS_None, // SWAPArr = 700
    CEFBS_None, // SWAPri = 701
    CEFBS_None, // SWAPrr = 702
    CEFBS_None, // TA1 = 703
    CEFBS_None, // TA3 = 704
    CEFBS_None, // TA5 = 705
    CEFBS_None, // TADDCCTVri = 706
    CEFBS_None, // TADDCCTVrr = 707
    CEFBS_None, // TADDCCri = 708
    CEFBS_None, // TADDCCrr = 709
    CEFBS_None, // TAIL_CALL = 710
    CEFBS_None, // TAIL_CALLri = 711
    CEFBS_HasV9, // TICCri = 712
    CEFBS_HasV9, // TICCrr = 713
    CEFBS_None, // TLS_ADDXrr = 714
    CEFBS_None, // TLS_ADDrr = 715
    CEFBS_None, // TLS_CALL = 716
    CEFBS_None, // TLS_LDXrr = 717
    CEFBS_None, // TLS_LDrr = 718
    CEFBS_None, // TRAPri = 719
    CEFBS_None, // TRAPrr = 720
    CEFBS_None, // TSUBCCTVri = 721
    CEFBS_None, // TSUBCCTVrr = 722
    CEFBS_None, // TSUBCCri = 723
    CEFBS_None, // TSUBCCrr = 724
    CEFBS_None, // TXCCri = 725
    CEFBS_None, // TXCCrr = 726
    CEFBS_None, // UDIVCCri = 727
    CEFBS_None, // UDIVCCrr = 728
    CEFBS_None, // UDIVXri = 729
    CEFBS_None, // UDIVXrr = 730
    CEFBS_None, // UDIVri = 731
    CEFBS_None, // UDIVrr = 732
    CEFBS_None, // UMACri = 733
    CEFBS_None, // UMACrr = 734
    CEFBS_None, // UMULCCri = 735
    CEFBS_None, // UMULCCrr = 736
    CEFBS_HasVIS3, // UMULXHI = 737
    CEFBS_None, // UMULri = 738
    CEFBS_None, // UMULrr = 739
    CEFBS_None, // UNIMP = 740
    CEFBS_None, // V9FCMPD = 741
    CEFBS_None, // V9FCMPED = 742
    CEFBS_None, // V9FCMPEQ = 743
    CEFBS_None, // V9FCMPES = 744
    CEFBS_None, // V9FCMPQ = 745
    CEFBS_None, // V9FCMPS = 746
    CEFBS_HasV9, // V9FMOVD_FCC = 747
    CEFBS_HasV9, // V9FMOVQ_FCC = 748
    CEFBS_HasV9, // V9FMOVS_FCC = 749
    CEFBS_HasV9, // V9MOVFCCri = 750
    CEFBS_HasV9, // V9MOVFCCrr = 751
    CEFBS_None, // WRASRri = 752
    CEFBS_None, // WRASRrr = 753
    CEFBS_HasV9, // WRPRri = 754
    CEFBS_HasV9, // WRPRrr = 755
    CEFBS_None, // WRPSRri = 756
    CEFBS_None, // WRPSRrr = 757
    CEFBS_None, // WRTBRri = 758
    CEFBS_None, // WRTBRrr = 759
    CEFBS_None, // WRWIMri = 760
    CEFBS_None, // WRWIMrr = 761
    CEFBS_HasVIS3, // XMULX = 762
    CEFBS_HasVIS3, // XMULXHI = 763
    CEFBS_None, // XNORCCri = 764
    CEFBS_None, // XNORCCrr = 765
    CEFBS_None, // XNORXrr = 766
    CEFBS_None, // XNORri = 767
    CEFBS_None, // XNORrr = 768
    CEFBS_None, // XORCCri = 769
    CEFBS_None, // XORCCrr = 770
    CEFBS_None, // XORXri = 771
    CEFBS_None, // XORXrr = 772
    CEFBS_None, // XORri = 773
    CEFBS_None, // XORrr = 774
  };

  assert(Opcode < 775);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &SparcInstrNameData[SparcInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace Sparc_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

