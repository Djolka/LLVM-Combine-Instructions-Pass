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

namespace LoongArch {
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
    PseudoAtomicLoadAdd32	= 254,
    PseudoAtomicLoadAnd32	= 255,
    PseudoAtomicLoadNand32	= 256,
    PseudoAtomicLoadNand64	= 257,
    PseudoAtomicLoadOr32	= 258,
    PseudoAtomicLoadSub32	= 259,
    PseudoAtomicLoadXor32	= 260,
    PseudoAtomicStoreD	= 261,
    PseudoAtomicStoreW	= 262,
    PseudoAtomicSwap32	= 263,
    PseudoBR	= 264,
    PseudoBRIND	= 265,
    PseudoB_TAIL	= 266,
    PseudoCALL	= 267,
    PseudoCALLIndirect	= 268,
    PseudoCmpXchg32	= 269,
    PseudoCmpXchg64	= 270,
    PseudoJIRL_CALL	= 271,
    PseudoJIRL_TAIL	= 272,
    PseudoLA_ABS	= 273,
    PseudoLA_ABS_LARGE	= 274,
    PseudoLA_GOT	= 275,
    PseudoLA_GOT_LARGE	= 276,
    PseudoLA_PCREL	= 277,
    PseudoLA_PCREL_LARGE	= 278,
    PseudoLA_TLS_GD	= 279,
    PseudoLA_TLS_GD_LARGE	= 280,
    PseudoLA_TLS_IE	= 281,
    PseudoLA_TLS_IE_LARGE	= 282,
    PseudoLA_TLS_LD	= 283,
    PseudoLA_TLS_LD_LARGE	= 284,
    PseudoLA_TLS_LE	= 285,
    PseudoLD_CFR	= 286,
    PseudoLI_D	= 287,
    PseudoLI_W	= 288,
    PseudoMaskedAtomicLoadAdd32	= 289,
    PseudoMaskedAtomicLoadMax32	= 290,
    PseudoMaskedAtomicLoadMin32	= 291,
    PseudoMaskedAtomicLoadNand32	= 292,
    PseudoMaskedAtomicLoadSub32	= 293,
    PseudoMaskedAtomicLoadUMax32	= 294,
    PseudoMaskedAtomicLoadUMin32	= 295,
    PseudoMaskedAtomicSwap32	= 296,
    PseudoMaskedCmpXchg32	= 297,
    PseudoRET	= 298,
    PseudoST_CFR	= 299,
    PseudoTAIL	= 300,
    PseudoTAILIndirect	= 301,
    PseudoUNIMP	= 302,
    RDFCSR	= 303,
    WRFCSR	= 304,
    ADDI_D	= 305,
    ADDI_W	= 306,
    ADDU16I_D	= 307,
    ADD_D	= 308,
    ADD_W	= 309,
    ALSL_D	= 310,
    ALSL_W	= 311,
    ALSL_WU	= 312,
    AMADD_D	= 313,
    AMADD_DB_D	= 314,
    AMADD_DB_W	= 315,
    AMADD_W	= 316,
    AMAND_D	= 317,
    AMAND_DB_D	= 318,
    AMAND_DB_W	= 319,
    AMAND_W	= 320,
    AMMAX_D	= 321,
    AMMAX_DB_D	= 322,
    AMMAX_DB_DU	= 323,
    AMMAX_DB_W	= 324,
    AMMAX_DB_WU	= 325,
    AMMAX_DU	= 326,
    AMMAX_W	= 327,
    AMMAX_WU	= 328,
    AMMIN_D	= 329,
    AMMIN_DB_D	= 330,
    AMMIN_DB_DU	= 331,
    AMMIN_DB_W	= 332,
    AMMIN_DB_WU	= 333,
    AMMIN_DU	= 334,
    AMMIN_W	= 335,
    AMMIN_WU	= 336,
    AMOR_D	= 337,
    AMOR_DB_D	= 338,
    AMOR_DB_W	= 339,
    AMOR_W	= 340,
    AMSWAP_D	= 341,
    AMSWAP_DB_D	= 342,
    AMSWAP_DB_W	= 343,
    AMSWAP_W	= 344,
    AMXOR_D	= 345,
    AMXOR_DB_D	= 346,
    AMXOR_DB_W	= 347,
    AMXOR_W	= 348,
    AND	= 349,
    ANDI	= 350,
    ANDN	= 351,
    ASRTGT_D	= 352,
    ASRTLE_D	= 353,
    B	= 354,
    BCEQZ	= 355,
    BCNEZ	= 356,
    BEQ	= 357,
    BEQZ	= 358,
    BGE	= 359,
    BGEU	= 360,
    BITREV_4B	= 361,
    BITREV_8B	= 362,
    BITREV_D	= 363,
    BITREV_W	= 364,
    BL	= 365,
    BLT	= 366,
    BLTU	= 367,
    BNE	= 368,
    BNEZ	= 369,
    BREAK	= 370,
    BSTRINS_D	= 371,
    BSTRINS_W	= 372,
    BSTRPICK_D	= 373,
    BSTRPICK_W	= 374,
    BYTEPICK_D	= 375,
    BYTEPICK_W	= 376,
    CACOP	= 377,
    CLO_D	= 378,
    CLO_W	= 379,
    CLZ_D	= 380,
    CLZ_W	= 381,
    CPUCFG	= 382,
    CRCC_W_B_W	= 383,
    CRCC_W_D_W	= 384,
    CRCC_W_H_W	= 385,
    CRCC_W_W_W	= 386,
    CRC_W_B_W	= 387,
    CRC_W_D_W	= 388,
    CRC_W_H_W	= 389,
    CRC_W_W_W	= 390,
    CSRRD	= 391,
    CSRWR	= 392,
    CSRXCHG	= 393,
    CTO_D	= 394,
    CTO_W	= 395,
    CTZ_D	= 396,
    CTZ_W	= 397,
    DBAR	= 398,
    DBCL	= 399,
    DIV_D	= 400,
    DIV_DU	= 401,
    DIV_W	= 402,
    DIV_WU	= 403,
    ERTN	= 404,
    EXT_W_B	= 405,
    EXT_W_H	= 406,
    FABS_D	= 407,
    FABS_S	= 408,
    FADD_D	= 409,
    FADD_S	= 410,
    FCLASS_D	= 411,
    FCLASS_S	= 412,
    FCMP_CAF_D	= 413,
    FCMP_CAF_S	= 414,
    FCMP_CEQ_D	= 415,
    FCMP_CEQ_S	= 416,
    FCMP_CLE_D	= 417,
    FCMP_CLE_S	= 418,
    FCMP_CLT_D	= 419,
    FCMP_CLT_S	= 420,
    FCMP_CNE_D	= 421,
    FCMP_CNE_S	= 422,
    FCMP_COR_D	= 423,
    FCMP_COR_S	= 424,
    FCMP_CUEQ_D	= 425,
    FCMP_CUEQ_S	= 426,
    FCMP_CULE_D	= 427,
    FCMP_CULE_S	= 428,
    FCMP_CULT_D	= 429,
    FCMP_CULT_S	= 430,
    FCMP_CUNE_D	= 431,
    FCMP_CUNE_S	= 432,
    FCMP_CUN_D	= 433,
    FCMP_CUN_S	= 434,
    FCMP_SAF_D	= 435,
    FCMP_SAF_S	= 436,
    FCMP_SEQ_D	= 437,
    FCMP_SEQ_S	= 438,
    FCMP_SLE_D	= 439,
    FCMP_SLE_S	= 440,
    FCMP_SLT_D	= 441,
    FCMP_SLT_S	= 442,
    FCMP_SNE_D	= 443,
    FCMP_SNE_S	= 444,
    FCMP_SOR_D	= 445,
    FCMP_SOR_S	= 446,
    FCMP_SUEQ_D	= 447,
    FCMP_SUEQ_S	= 448,
    FCMP_SULE_D	= 449,
    FCMP_SULE_S	= 450,
    FCMP_SULT_D	= 451,
    FCMP_SULT_S	= 452,
    FCMP_SUNE_D	= 453,
    FCMP_SUNE_S	= 454,
    FCMP_SUN_D	= 455,
    FCMP_SUN_S	= 456,
    FCOPYSIGN_D	= 457,
    FCOPYSIGN_S	= 458,
    FCVT_D_S	= 459,
    FCVT_S_D	= 460,
    FDIV_D	= 461,
    FDIV_S	= 462,
    FFINT_D_L	= 463,
    FFINT_D_W	= 464,
    FFINT_S_L	= 465,
    FFINT_S_W	= 466,
    FLDGT_D	= 467,
    FLDGT_S	= 468,
    FLDLE_D	= 469,
    FLDLE_S	= 470,
    FLDX_D	= 471,
    FLDX_S	= 472,
    FLD_D	= 473,
    FLD_S	= 474,
    FLOGB_D	= 475,
    FLOGB_S	= 476,
    FMADD_D	= 477,
    FMADD_S	= 478,
    FMAXA_D	= 479,
    FMAXA_S	= 480,
    FMAX_D	= 481,
    FMAX_S	= 482,
    FMINA_D	= 483,
    FMINA_S	= 484,
    FMIN_D	= 485,
    FMIN_S	= 486,
    FMOV_D	= 487,
    FMOV_S	= 488,
    FMSUB_D	= 489,
    FMSUB_S	= 490,
    FMUL_D	= 491,
    FMUL_S	= 492,
    FNEG_D	= 493,
    FNEG_S	= 494,
    FNMADD_D	= 495,
    FNMADD_S	= 496,
    FNMSUB_D	= 497,
    FNMSUB_S	= 498,
    FRECIP_D	= 499,
    FRECIP_S	= 500,
    FRINT_D	= 501,
    FRINT_S	= 502,
    FRSQRT_D	= 503,
    FRSQRT_S	= 504,
    FSCALEB_D	= 505,
    FSCALEB_S	= 506,
    FSEL_D	= 507,
    FSEL_S	= 508,
    FSQRT_D	= 509,
    FSQRT_S	= 510,
    FSTGT_D	= 511,
    FSTGT_S	= 512,
    FSTLE_D	= 513,
    FSTLE_S	= 514,
    FSTX_D	= 515,
    FSTX_S	= 516,
    FST_D	= 517,
    FST_S	= 518,
    FSUB_D	= 519,
    FSUB_S	= 520,
    FTINTRM_L_D	= 521,
    FTINTRM_L_S	= 522,
    FTINTRM_W_D	= 523,
    FTINTRM_W_S	= 524,
    FTINTRNE_L_D	= 525,
    FTINTRNE_L_S	= 526,
    FTINTRNE_W_D	= 527,
    FTINTRNE_W_S	= 528,
    FTINTRP_L_D	= 529,
    FTINTRP_L_S	= 530,
    FTINTRP_W_D	= 531,
    FTINTRP_W_S	= 532,
    FTINTRZ_L_D	= 533,
    FTINTRZ_L_S	= 534,
    FTINTRZ_W_D	= 535,
    FTINTRZ_W_S	= 536,
    FTINT_L_D	= 537,
    FTINT_L_S	= 538,
    FTINT_W_D	= 539,
    FTINT_W_S	= 540,
    IBAR	= 541,
    IDLE	= 542,
    INVTLB	= 543,
    IOCSRRD_B	= 544,
    IOCSRRD_D	= 545,
    IOCSRRD_H	= 546,
    IOCSRRD_W	= 547,
    IOCSRWR_B	= 548,
    IOCSRWR_D	= 549,
    IOCSRWR_H	= 550,
    IOCSRWR_W	= 551,
    JIRL	= 552,
    LDDIR	= 553,
    LDGT_B	= 554,
    LDGT_D	= 555,
    LDGT_H	= 556,
    LDGT_W	= 557,
    LDLE_B	= 558,
    LDLE_D	= 559,
    LDLE_H	= 560,
    LDLE_W	= 561,
    LDPTE	= 562,
    LDPTR_D	= 563,
    LDPTR_W	= 564,
    LDX_B	= 565,
    LDX_BU	= 566,
    LDX_D	= 567,
    LDX_H	= 568,
    LDX_HU	= 569,
    LDX_W	= 570,
    LDX_WU	= 571,
    LD_B	= 572,
    LD_BU	= 573,
    LD_D	= 574,
    LD_H	= 575,
    LD_HU	= 576,
    LD_W	= 577,
    LD_WU	= 578,
    LL_D	= 579,
    LL_W	= 580,
    LU12I_W	= 581,
    LU32I_D	= 582,
    LU52I_D	= 583,
    MASKEQZ	= 584,
    MASKNEZ	= 585,
    MOD_D	= 586,
    MOD_DU	= 587,
    MOD_W	= 588,
    MOD_WU	= 589,
    MOVCF2FR_S	= 590,
    MOVCF2GR	= 591,
    MOVFCSR2GR	= 592,
    MOVFR2CF_S	= 593,
    MOVFR2GR_D	= 594,
    MOVFR2GR_S	= 595,
    MOVFR2GR_S_64	= 596,
    MOVFRH2GR_S	= 597,
    MOVGR2CF	= 598,
    MOVGR2FCSR	= 599,
    MOVGR2FRH_W	= 600,
    MOVGR2FR_D	= 601,
    MOVGR2FR_W	= 602,
    MOVGR2FR_W_64	= 603,
    MULH_D	= 604,
    MULH_DU	= 605,
    MULH_W	= 606,
    MULH_WU	= 607,
    MULW_D_W	= 608,
    MULW_D_WU	= 609,
    MUL_D	= 610,
    MUL_W	= 611,
    NOR	= 612,
    OR	= 613,
    ORI	= 614,
    ORN	= 615,
    PCADDI	= 616,
    PCADDU12I	= 617,
    PCADDU18I	= 618,
    PCALAU12I	= 619,
    PRELD	= 620,
    PRELDX	= 621,
    RDTIMEH_W	= 622,
    RDTIMEL_W	= 623,
    RDTIME_D	= 624,
    REVB_2H	= 625,
    REVB_2W	= 626,
    REVB_4H	= 627,
    REVB_D	= 628,
    REVH_2W	= 629,
    REVH_D	= 630,
    ROTRI_D	= 631,
    ROTRI_W	= 632,
    ROTR_D	= 633,
    ROTR_W	= 634,
    SC_D	= 635,
    SC_W	= 636,
    SLLI_D	= 637,
    SLLI_W	= 638,
    SLL_D	= 639,
    SLL_W	= 640,
    SLT	= 641,
    SLTI	= 642,
    SLTU	= 643,
    SLTUI	= 644,
    SRAI_D	= 645,
    SRAI_W	= 646,
    SRA_D	= 647,
    SRA_W	= 648,
    SRLI_D	= 649,
    SRLI_W	= 650,
    SRL_D	= 651,
    SRL_W	= 652,
    STGT_B	= 653,
    STGT_D	= 654,
    STGT_H	= 655,
    STGT_W	= 656,
    STLE_B	= 657,
    STLE_D	= 658,
    STLE_H	= 659,
    STLE_W	= 660,
    STPTR_D	= 661,
    STPTR_W	= 662,
    STX_B	= 663,
    STX_D	= 664,
    STX_H	= 665,
    STX_W	= 666,
    ST_B	= 667,
    ST_D	= 668,
    ST_H	= 669,
    ST_W	= 670,
    SUB_D	= 671,
    SUB_W	= 672,
    SYSCALL	= 673,
    TLBCLR	= 674,
    TLBFILL	= 675,
    TLBFLUSH	= 676,
    TLBRD	= 677,
    TLBSRCH	= 678,
    TLBWR	= 679,
    XOR	= 680,
    XORI	= 681,
    INSTRUCTION_LIST_END = 682
  };

} // end namespace LoongArch
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace LoongArch {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace LoongArch
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { LoongArch::R3, LoongArch::R3 };
static const MCPhysReg ImplicitList2[] = { LoongArch::R3 };
static const MCPhysReg ImplicitList3[] = { LoongArch::R1 };

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
static const MCOperandInfo OperandInfo45[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { LoongArch::GPRTRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_EARLY_CLOBBER }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FCSRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { LoongArch::CFRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { LoongArch::FCSRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { LoongArch::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { LoongArch::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { LoongArch::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc LoongArchInsts[] = {
  { 681,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #681 = XORI
  { 680,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #680 = XOR
  { 679,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #679 = TLBWR
  { 678,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #678 = TLBSRCH
  { 677,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #677 = TLBRD
  { 676,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #676 = TLBFLUSH
  { 675,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #675 = TLBFILL
  { 674,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #674 = TLBCLR
  { 673,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #673 = SYSCALL
  { 672,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #672 = SUB_W
  { 671,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #671 = SUB_D
  { 670,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo50 },  // Inst #670 = ST_W
  { 669,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo50 },  // Inst #669 = ST_H
  { 668,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo50 },  // Inst #668 = ST_D
  { 667,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo50 },  // Inst #667 = ST_B
  { 666,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo46 },  // Inst #666 = STX_W
  { 665,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo46 },  // Inst #665 = STX_H
  { 664,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo46 },  // Inst #664 = STX_D
  { 663,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo46 },  // Inst #663 = STX_B
  { 662,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo50 },  // Inst #662 = STPTR_W
  { 661,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo50 },  // Inst #661 = STPTR_D
  { 660,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #660 = STLE_W
  { 659,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #659 = STLE_H
  { 658,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #658 = STLE_D
  { 657,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #657 = STLE_B
  { 656,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #656 = STGT_W
  { 655,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #655 = STGT_H
  { 654,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #654 = STGT_D
  { 653,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #653 = STGT_B
  { 652,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #652 = SRL_W
  { 651,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #651 = SRL_D
  { 650,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #650 = SRLI_W
  { 649,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #649 = SRLI_D
  { 648,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #648 = SRA_W
  { 647,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #647 = SRA_D
  { 646,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #646 = SRAI_W
  { 645,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #645 = SRAI_D
  { 644,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #644 = SLTUI
  { 643,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #643 = SLTU
  { 642,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #642 = SLTI
  { 641,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #641 = SLT
  { 640,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #640 = SLL_W
  { 639,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #639 = SLL_D
  { 638,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #638 = SLLI_W
  { 637,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #637 = SLLI_D
  { 636,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #636 = SC_W
  { 635,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #635 = SC_D
  { 634,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #634 = ROTR_W
  { 633,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #633 = ROTR_D
  { 632,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #632 = ROTRI_W
  { 631,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #631 = ROTRI_D
  { 630,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #630 = REVH_D
  { 629,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #629 = REVH_2W
  { 628,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #628 = REVB_D
  { 627,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #627 = REVB_4H
  { 626,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #626 = REVB_2W
  { 625,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #625 = REVB_2H
  { 624,	2,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #624 = RDTIME_D
  { 623,	2,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #623 = RDTIMEL_W
  { 622,	2,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #622 = RDTIMEH_W
  { 621,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo94 },  // Inst #621 = PRELDX
  { 620,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #620 = PRELD
  { 619,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo47 },  // Inst #619 = PCALAU12I
  { 618,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo47 },  // Inst #618 = PCADDU18I
  { 617,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo47 },  // Inst #617 = PCADDU12I
  { 616,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo47 },  // Inst #616 = PCADDI
  { 615,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #615 = ORN
  { 614,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #614 = ORI
  { 613,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #613 = OR
  { 612,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #612 = NOR
  { 611,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #611 = MUL_W
  { 610,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #610 = MUL_D
  { 609,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #609 = MULW_D_WU
  { 608,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #608 = MULW_D_W
  { 607,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #607 = MULH_WU
  { 606,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #606 = MULH_W
  { 605,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #605 = MULH_DU
  { 604,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #604 = MULH_D
  { 603,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo92 },  // Inst #603 = MOVGR2FR_W_64
  { 602,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo93 },  // Inst #602 = MOVGR2FR_W
  { 601,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo92 },  // Inst #601 = MOVGR2FR_D
  { 600,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo91 },  // Inst #600 = MOVGR2FRH_W
  { 599,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo90 },  // Inst #599 = MOVGR2FCSR
  { 598,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo89 },  // Inst #598 = MOVGR2CF
  { 597,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo87 },  // Inst #597 = MOVFRH2GR_S
  { 596,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo87 },  // Inst #596 = MOVFR2GR_S_64
  { 595,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo88 },  // Inst #595 = MOVFR2GR_S
  { 594,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo87 },  // Inst #594 = MOVFR2GR_D
  { 593,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo86 },  // Inst #593 = MOVFR2CF_S
  { 592,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo85 },  // Inst #592 = MOVFCSR2GR
  { 591,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo84 },  // Inst #591 = MOVCF2GR
  { 590,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo83 },  // Inst #590 = MOVCF2FR_S
  { 589,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #589 = MOD_WU
  { 588,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #588 = MOD_W
  { 587,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #587 = MOD_DU
  { 586,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #586 = MOD_D
  { 585,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #585 = MASKNEZ
  { 584,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #584 = MASKEQZ
  { 583,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #583 = LU52I_D
  { 582,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo65 },  // Inst #582 = LU32I_D
  { 581,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo47 },  // Inst #581 = LU12I_W
  { 580,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #580 = LL_W
  { 579,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #579 = LL_D
  { 578,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #578 = LD_WU
  { 577,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #577 = LD_W
  { 576,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #576 = LD_HU
  { 575,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #575 = LD_H
  { 574,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #574 = LD_D
  { 573,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #573 = LD_BU
  { 572,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #572 = LD_B
  { 571,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo46 },  // Inst #571 = LDX_WU
  { 570,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo46 },  // Inst #570 = LDX_W
  { 569,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo46 },  // Inst #569 = LDX_HU
  { 568,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo46 },  // Inst #568 = LDX_H
  { 567,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo46 },  // Inst #567 = LDX_D
  { 566,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo46 },  // Inst #566 = LDX_BU
  { 565,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo46 },  // Inst #565 = LDX_B
  { 564,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #564 = LDPTR_W
  { 563,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #563 = LDPTR_D
  { 562,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo47 },  // Inst #562 = LDPTE
  { 561,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #561 = LDLE_W
  { 560,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #560 = LDLE_H
  { 559,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #559 = LDLE_D
  { 558,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #558 = LDLE_B
  { 557,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #557 = LDGT_W
  { 556,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #556 = LDGT_H
  { 555,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #555 = LDGT_D
  { 554,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo46 },  // Inst #554 = LDGT_B
  { 553,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #553 = LDDIR
  { 552,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #552 = JIRL
  { 551,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #551 = IOCSRWR_W
  { 550,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #550 = IOCSRWR_H
  { 549,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #549 = IOCSRWR_D
  { 548,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #548 = IOCSRWR_B
  { 547,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #547 = IOCSRRD_W
  { 546,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #546 = IOCSRRD_H
  { 545,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #545 = IOCSRRD_D
  { 544,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #544 = IOCSRRD_B
  { 543,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo50 },  // Inst #543 = INVTLB
  { 542,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #542 = IDLE
  { 541,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #541 = IBAR
  { 540,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #540 = FTINT_W_S
  { 539,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo74 },  // Inst #539 = FTINT_W_D
  { 538,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo73 },  // Inst #538 = FTINT_L_S
  { 537,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #537 = FTINT_L_D
  { 536,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #536 = FTINTRZ_W_S
  { 535,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo74 },  // Inst #535 = FTINTRZ_W_D
  { 534,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo73 },  // Inst #534 = FTINTRZ_L_S
  { 533,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #533 = FTINTRZ_L_D
  { 532,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #532 = FTINTRP_W_S
  { 531,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo74 },  // Inst #531 = FTINTRP_W_D
  { 530,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo73 },  // Inst #530 = FTINTRP_L_S
  { 529,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #529 = FTINTRP_L_D
  { 528,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #528 = FTINTRNE_W_S
  { 527,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo74 },  // Inst #527 = FTINTRNE_W_D
  { 526,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo73 },  // Inst #526 = FTINTRNE_L_S
  { 525,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #525 = FTINTRNE_L_D
  { 524,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #524 = FTINTRM_W_S
  { 523,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo74 },  // Inst #523 = FTINTRM_W_D
  { 522,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo73 },  // Inst #522 = FTINTRM_L_S
  { 521,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #521 = FTINTRM_L_D
  { 520,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo70 },  // Inst #520 = FSUB_S
  { 519,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo69 },  // Inst #519 = FSUB_D
  { 518,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo78 },  // Inst #518 = FST_S
  { 517,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo77 },  // Inst #517 = FST_D
  { 516,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo76 },  // Inst #516 = FSTX_S
  { 515,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo75 },  // Inst #515 = FSTX_D
  { 514,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo76 },  // Inst #514 = FSTLE_S
  { 513,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo75 },  // Inst #513 = FSTLE_D
  { 512,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo76 },  // Inst #512 = FSTGT_S
  { 511,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo75 },  // Inst #511 = FSTGT_D
  { 510,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #510 = FSQRT_S
  { 509,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #509 = FSQRT_D
  { 508,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo82 },  // Inst #508 = FSEL_S
  { 507,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo81 },  // Inst #507 = FSEL_D
  { 506,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo70 },  // Inst #506 = FSCALEB_S
  { 505,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #505 = FSCALEB_D
  { 504,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #504 = FRSQRT_S
  { 503,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #503 = FRSQRT_D
  { 502,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #502 = FRINT_S
  { 501,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #501 = FRINT_D
  { 500,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #500 = FRECIP_S
  { 499,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #499 = FRECIP_D
  { 498,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo80 },  // Inst #498 = FNMSUB_S
  { 497,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo79 },  // Inst #497 = FNMSUB_D
  { 496,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo80 },  // Inst #496 = FNMADD_S
  { 495,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo79 },  // Inst #495 = FNMADD_D
  { 494,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #494 = FNEG_S
  { 493,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #493 = FNEG_D
  { 492,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo70 },  // Inst #492 = FMUL_S
  { 491,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo69 },  // Inst #491 = FMUL_D
  { 490,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo80 },  // Inst #490 = FMSUB_S
  { 489,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo79 },  // Inst #489 = FMSUB_D
  { 488,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #488 = FMOV_S
  { 487,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #487 = FMOV_D
  { 486,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo70 },  // Inst #486 = FMIN_S
  { 485,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo69 },  // Inst #485 = FMIN_D
  { 484,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo70 },  // Inst #484 = FMINA_S
  { 483,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #483 = FMINA_D
  { 482,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo70 },  // Inst #482 = FMAX_S
  { 481,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo69 },  // Inst #481 = FMAX_D
  { 480,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo70 },  // Inst #480 = FMAXA_S
  { 479,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo69 },  // Inst #479 = FMAXA_D
  { 478,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo80 },  // Inst #478 = FMADD_S
  { 477,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo79 },  // Inst #477 = FMADD_D
  { 476,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #476 = FLOGB_S
  { 475,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #475 = FLOGB_D
  { 474,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo78 },  // Inst #474 = FLD_S
  { 473,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo77 },  // Inst #473 = FLD_D
  { 472,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo76 },  // Inst #472 = FLDX_S
  { 471,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo75 },  // Inst #471 = FLDX_D
  { 470,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo76 },  // Inst #470 = FLDLE_S
  { 469,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo75 },  // Inst #469 = FLDLE_D
  { 468,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo76 },  // Inst #468 = FLDGT_S
  { 467,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo75 },  // Inst #467 = FLDGT_D
  { 466,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #466 = FFINT_S_W
  { 465,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo74 },  // Inst #465 = FFINT_S_L
  { 464,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo73 },  // Inst #464 = FFINT_D_W
  { 463,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #463 = FFINT_D_L
  { 462,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo70 },  // Inst #462 = FDIV_S
  { 461,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo69 },  // Inst #461 = FDIV_D
  { 460,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo74 },  // Inst #460 = FCVT_S_D
  { 459,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo73 },  // Inst #459 = FCVT_D_S
  { 458,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo70 },  // Inst #458 = FCOPYSIGN_S
  { 457,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo69 },  // Inst #457 = FCOPYSIGN_D
  { 456,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #456 = FCMP_SUN_S
  { 455,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #455 = FCMP_SUN_D
  { 454,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #454 = FCMP_SUNE_S
  { 453,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #453 = FCMP_SUNE_D
  { 452,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #452 = FCMP_SULT_S
  { 451,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #451 = FCMP_SULT_D
  { 450,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #450 = FCMP_SULE_S
  { 449,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #449 = FCMP_SULE_D
  { 448,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #448 = FCMP_SUEQ_S
  { 447,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #447 = FCMP_SUEQ_D
  { 446,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #446 = FCMP_SOR_S
  { 445,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #445 = FCMP_SOR_D
  { 444,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #444 = FCMP_SNE_S
  { 443,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #443 = FCMP_SNE_D
  { 442,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #442 = FCMP_SLT_S
  { 441,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #441 = FCMP_SLT_D
  { 440,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #440 = FCMP_SLE_S
  { 439,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #439 = FCMP_SLE_D
  { 438,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #438 = FCMP_SEQ_S
  { 437,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #437 = FCMP_SEQ_D
  { 436,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo72 },  // Inst #436 = FCMP_SAF_S
  { 435,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo71 },  // Inst #435 = FCMP_SAF_D
  { 434,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #434 = FCMP_CUN_S
  { 433,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #433 = FCMP_CUN_D
  { 432,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #432 = FCMP_CUNE_S
  { 431,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #431 = FCMP_CUNE_D
  { 430,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #430 = FCMP_CULT_S
  { 429,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #429 = FCMP_CULT_D
  { 428,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #428 = FCMP_CULE_S
  { 427,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #427 = FCMP_CULE_D
  { 426,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #426 = FCMP_CUEQ_S
  { 425,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #425 = FCMP_CUEQ_D
  { 424,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #424 = FCMP_COR_S
  { 423,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #423 = FCMP_COR_D
  { 422,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #422 = FCMP_CNE_S
  { 421,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #421 = FCMP_CNE_D
  { 420,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #420 = FCMP_CLT_S
  { 419,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #419 = FCMP_CLT_D
  { 418,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #418 = FCMP_CLE_S
  { 417,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #417 = FCMP_CLE_D
  { 416,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo72 },  // Inst #416 = FCMP_CEQ_S
  { 415,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo71 },  // Inst #415 = FCMP_CEQ_D
  { 414,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo72 },  // Inst #414 = FCMP_CAF_S
  { 413,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo71 },  // Inst #413 = FCMP_CAF_D
  { 412,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo68 },  // Inst #412 = FCLASS_S
  { 411,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #411 = FCLASS_D
  { 410,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo70 },  // Inst #410 = FADD_S
  { 409,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo69 },  // Inst #409 = FADD_D
  { 408,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo68 },  // Inst #408 = FABS_S
  { 407,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo67 },  // Inst #407 = FABS_D
  { 406,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #406 = EXT_W_H
  { 405,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #405 = EXT_W_B
  { 404,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #404 = ERTN
  { 403,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #403 = DIV_WU
  { 402,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #402 = DIV_W
  { 401,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #401 = DIV_DU
  { 400,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #400 = DIV_D
  { 399,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #399 = DBCL
  { 398,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #398 = DBAR
  { 397,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #397 = CTZ_W
  { 396,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #396 = CTZ_D
  { 395,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #395 = CTO_W
  { 394,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #394 = CTO_D
  { 393,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #393 = CSRXCHG
  { 392,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo65 },  // Inst #392 = CSRWR
  { 391,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo47 },  // Inst #391 = CSRRD
  { 390,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #390 = CRC_W_W_W
  { 389,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #389 = CRC_W_H_W
  { 388,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #388 = CRC_W_D_W
  { 387,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #387 = CRC_W_B_W
  { 386,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #386 = CRCC_W_W_W
  { 385,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #385 = CRCC_W_H_W
  { 384,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #384 = CRCC_W_D_W
  { 383,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #383 = CRCC_W_B_W
  { 382,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #382 = CPUCFG
  { 381,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #381 = CLZ_W
  { 380,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #380 = CLZ_D
  { 379,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #379 = CLO_W
  { 378,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #378 = CLO_D
  { 377,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo64 },  // Inst #377 = CACOP
  { 376,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo58 },  // Inst #376 = BYTEPICK_W
  { 375,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo58 },  // Inst #375 = BYTEPICK_D
  { 374,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo63 },  // Inst #374 = BSTRPICK_W
  { 373,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo63 },  // Inst #373 = BSTRPICK_D
  { 372,	5,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo62 },  // Inst #372 = BSTRINS_W
  { 371,	5,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo62 },  // Inst #371 = BSTRINS_D
  { 370,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #370 = BREAK
  { 369,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #369 = BNEZ
  { 368,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo50 },  // Inst #368 = BNE
  { 367,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo50 },  // Inst #367 = BLTU
  { 366,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo50 },  // Inst #366 = BLT
  { 365,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, OperandInfo2 },  // Inst #365 = BL
  { 364,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #364 = BITREV_W
  { 363,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #363 = BITREV_D
  { 362,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #362 = BITREV_8B
  { 361,	2,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo60 },  // Inst #361 = BITREV_4B
  { 360,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo50 },  // Inst #360 = BGEU
  { 359,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo50 },  // Inst #359 = BGE
  { 358,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #358 = BEQZ
  { 357,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo50 },  // Inst #357 = BEQ
  { 356,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo61 },  // Inst #356 = BCNEZ
  { 355,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo61 },  // Inst #355 = BCEQZ
  { 354,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #354 = B
  { 353,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #353 = ASRTLE_D
  { 352,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo60 },  // Inst #352 = ASRTGT_D
  { 351,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #351 = ANDN
  { 350,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #350 = ANDI
  { 349,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #349 = AND
  { 348,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #348 = AMXOR_W
  { 347,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #347 = AMXOR_DB_W
  { 346,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #346 = AMXOR_DB_D
  { 345,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #345 = AMXOR_D
  { 344,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #344 = AMSWAP_W
  { 343,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #343 = AMSWAP_DB_W
  { 342,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #342 = AMSWAP_DB_D
  { 341,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #341 = AMSWAP_D
  { 340,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #340 = AMOR_W
  { 339,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #339 = AMOR_DB_W
  { 338,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #338 = AMOR_DB_D
  { 337,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #337 = AMOR_D
  { 336,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #336 = AMMIN_WU
  { 335,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #335 = AMMIN_W
  { 334,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #334 = AMMIN_DU
  { 333,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #333 = AMMIN_DB_WU
  { 332,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #332 = AMMIN_DB_W
  { 331,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #331 = AMMIN_DB_DU
  { 330,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #330 = AMMIN_DB_D
  { 329,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #329 = AMMIN_D
  { 328,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #328 = AMMAX_WU
  { 327,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #327 = AMMAX_W
  { 326,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #326 = AMMAX_DU
  { 325,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #325 = AMMAX_DB_WU
  { 324,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #324 = AMMAX_DB_W
  { 323,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #323 = AMMAX_DB_DU
  { 322,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #322 = AMMAX_DB_D
  { 321,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #321 = AMMAX_D
  { 320,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #320 = AMAND_W
  { 319,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #319 = AMAND_DB_W
  { 318,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #318 = AMAND_DB_D
  { 317,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #317 = AMAND_D
  { 316,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #316 = AMADD_W
  { 315,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #315 = AMADD_DB_W
  { 314,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo59 },  // Inst #314 = AMADD_DB_D
  { 313,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo59 },  // Inst #313 = AMADD_D
  { 312,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo58 },  // Inst #312 = ALSL_WU
  { 311,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo58 },  // Inst #311 = ALSL_W
  { 310,	4,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo58 },  // Inst #310 = ALSL_D
  { 309,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #309 = ADD_W
  { 308,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo46 },  // Inst #308 = ADD_D
  { 307,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #307 = ADDU16I_D
  { 306,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #306 = ADDI_W
  { 305,	3,	1,	4,	0,	0,	0,	0, 0x0ULL, nullptr, OperandInfo50 },  // Inst #305 = ADDI_D
  { 304,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo57 },  // Inst #304 = WRFCSR
  { 303,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo47 },  // Inst #303 = RDFCSR
  { 302,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #302 = PseudoUNIMP
  { 301,	1,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList2, OperandInfo56 },  // Inst #301 = PseudoTAILIndirect
  { 300,	1,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList2, OperandInfo2 },  // Inst #300 = PseudoTAIL
  { 299,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo51 },  // Inst #299 = PseudoST_CFR
  { 298,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #298 = PseudoRET
  { 297,	7,	2,	44,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo55 },  // Inst #297 = PseudoMaskedCmpXchg32
  { 296,	6,	2,	36,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo52 },  // Inst #296 = PseudoMaskedAtomicSwap32
  { 295,	7,	3,	48,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo54 },  // Inst #295 = PseudoMaskedAtomicLoadUMin32
  { 294,	7,	3,	48,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo54 },  // Inst #294 = PseudoMaskedAtomicLoadUMax32
  { 293,	6,	2,	36,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo52 },  // Inst #293 = PseudoMaskedAtomicLoadSub32
  { 292,	6,	2,	36,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo52 },  // Inst #292 = PseudoMaskedAtomicLoadNand32
  { 291,	8,	3,	56,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo53 },  // Inst #291 = PseudoMaskedAtomicLoadMin32
  { 290,	8,	3,	56,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo53 },  // Inst #290 = PseudoMaskedAtomicLoadMax32
  { 289,	6,	2,	36,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo52 },  // Inst #289 = PseudoMaskedAtomicLoadAdd32
  { 288,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo47 },  // Inst #288 = PseudoLI_W
  { 287,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo47 },  // Inst #287 = PseudoLI_D
  { 286,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo51 },  // Inst #286 = PseudoLD_CFR
  { 285,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo47 },  // Inst #285 = PseudoLA_TLS_LE
  { 284,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #284 = PseudoLA_TLS_LD_LARGE
  { 283,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo47 },  // Inst #283 = PseudoLA_TLS_LD
  { 282,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #282 = PseudoLA_TLS_IE_LARGE
  { 281,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo47 },  // Inst #281 = PseudoLA_TLS_IE
  { 280,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #280 = PseudoLA_TLS_GD_LARGE
  { 279,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo47 },  // Inst #279 = PseudoLA_TLS_GD
  { 278,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo50 },  // Inst #278 = PseudoLA_PCREL_LARGE
  { 277,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo47 },  // Inst #277 = PseudoLA_PCREL
  { 276,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo50 },  // Inst #276 = PseudoLA_GOT_LARGE
  { 275,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, OperandInfo47 },  // Inst #275 = PseudoLA_GOT
  { 274,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo50 },  // Inst #274 = PseudoLA_ABS_LARGE
  { 273,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo47 },  // Inst #273 = PseudoLA_ABS
  { 272,	2,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, OperandInfo47 },  // Inst #272 = PseudoJIRL_TAIL
  { 271,	2,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, OperandInfo47 },  // Inst #271 = PseudoJIRL_CALL
  { 270,	5,	2,	36,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo49 },  // Inst #270 = PseudoCmpXchg64
  { 269,	5,	2,	36,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo49 },  // Inst #269 = PseudoCmpXchg32
  { 268,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList3, OperandInfo48 },  // Inst #268 = PseudoCALLIndirect
  { 267,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x0ULL, ImplicitList3, OperandInfo2 },  // Inst #267 = PseudoCALL
  { 266,	1,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, OperandInfo2 },  // Inst #266 = PseudoB_TAIL
  { 265,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #265 = PseudoBRIND
  { 264,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo2 },  // Inst #264 = PseudoBR
  { 263,	5,	2,	24,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo45 },  // Inst #263 = PseudoAtomicSwap32
  { 262,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo46 },  // Inst #262 = PseudoAtomicStoreW
  { 261,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo46 },  // Inst #261 = PseudoAtomicStoreD
  { 260,	5,	2,	24,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo45 },  // Inst #260 = PseudoAtomicLoadXor32
  { 259,	5,	2,	24,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo45 },  // Inst #259 = PseudoAtomicLoadSub32
  { 258,	5,	2,	24,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo45 },  // Inst #258 = PseudoAtomicLoadOr32
  { 257,	5,	2,	24,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo45 },  // Inst #257 = PseudoAtomicLoadNand64
  { 256,	5,	2,	24,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo45 },  // Inst #256 = PseudoAtomicLoadNand32
  { 255,	5,	2,	24,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo45 },  // Inst #255 = PseudoAtomicLoadAnd32
  { 254,	5,	2,	24,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, OperandInfo45 },  // Inst #254 = PseudoAtomicLoadAdd32
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
extern const char LoongArchInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "PseudoMaskedAtomicLoadSub32\0"
  /* 37 */ "PseudoAtomicLoadSub32\0"
  /* 59 */ "PseudoMaskedAtomicLoadAdd32\0"
  /* 87 */ "PseudoAtomicLoadAdd32\0"
  /* 109 */ "PseudoAtomicLoadAnd32\0"
  /* 131 */ "PseudoMaskedAtomicLoadNand32\0"
  /* 160 */ "PseudoAtomicLoadNand32\0"
  /* 183 */ "PseudoMaskedCmpXchg32\0"
  /* 205 */ "PseudoCmpXchg32\0"
  /* 221 */ "PseudoMaskedAtomicLoadUMin32\0"
  /* 250 */ "PseudoMaskedAtomicLoadMin32\0"
  /* 278 */ "PseudoMaskedAtomicSwap32\0"
  /* 303 */ "PseudoAtomicSwap32\0"
  /* 322 */ "PseudoAtomicLoadOr32\0"
  /* 343 */ "PseudoAtomicLoadXor32\0"
  /* 365 */ "PseudoMaskedAtomicLoadUMax32\0"
  /* 394 */ "PseudoMaskedAtomicLoadMax32\0"
  /* 422 */ "G_FLOG2\0"
  /* 430 */ "G_FEXP2\0"
  /* 438 */ "MOVFR2GR_S_64\0"
  /* 452 */ "MOVGR2FR_W_64\0"
  /* 466 */ "PseudoAtomicLoadNand64\0"
  /* 489 */ "PseudoCmpXchg64\0"
  /* 505 */ "G_FMA\0"
  /* 511 */ "G_STRICT_FMA\0"
  /* 524 */ "BITREV_4B\0"
  /* 534 */ "BITREV_8B\0"
  /* 544 */ "INVTLB\0"
  /* 551 */ "G_FSUB\0"
  /* 558 */ "G_STRICT_FSUB\0"
  /* 572 */ "G_ATOMICRMW_FSUB\0"
  /* 589 */ "G_SUB\0"
  /* 595 */ "G_ATOMICRMW_SUB\0"
  /* 611 */ "LD_B\0"
  /* 616 */ "IOCSRRD_B\0"
  /* 626 */ "LDLE_B\0"
  /* 633 */ "STLE_B\0"
  /* 640 */ "IOCSRWR_B\0"
  /* 650 */ "LDGT_B\0"
  /* 657 */ "STGT_B\0"
  /* 664 */ "ST_B\0"
  /* 669 */ "EXT_W_B\0"
  /* 677 */ "LDX_B\0"
  /* 683 */ "STX_B\0"
  /* 689 */ "G_INTRINSIC\0"
  /* 701 */ "G_FPTRUNC\0"
  /* 711 */ "G_INTRINSIC_TRUNC\0"
  /* 729 */ "G_TRUNC\0"
  /* 737 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 758 */ "G_DYN_STACKALLOC\0"
  /* 775 */ "G_FMAD\0"
  /* 782 */ "G_INDEXED_SEXTLOAD\0"
  /* 801 */ "G_SEXTLOAD\0"
  /* 812 */ "G_INDEXED_ZEXTLOAD\0"
  /* 831 */ "G_ZEXTLOAD\0"
  /* 842 */ "G_INDEXED_LOAD\0"
  /* 857 */ "G_LOAD\0"
  /* 864 */ "G_VECREDUCE_FADD\0"
  /* 881 */ "G_FADD\0"
  /* 888 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 909 */ "G_STRICT_FADD\0"
  /* 923 */ "G_ATOMICRMW_FADD\0"
  /* 940 */ "G_VECREDUCE_ADD\0"
  /* 956 */ "G_ADD\0"
  /* 962 */ "G_PTR_ADD\0"
  /* 972 */ "G_ATOMICRMW_ADD\0"
  /* 988 */ "PseudoLA_TLS_GD\0"
  /* 1004 */ "PRELD\0"
  /* 1010 */ "PseudoLA_TLS_LD\0"
  /* 1026 */ "G_ATOMICRMW_NAND\0"
  /* 1043 */ "G_VECREDUCE_AND\0"
  /* 1059 */ "G_AND\0"
  /* 1065 */ "G_ATOMICRMW_AND\0"
  /* 1081 */ "LIFETIME_END\0"
  /* 1094 */ "PseudoBRIND\0"
  /* 1106 */ "G_BRCOND\0"
  /* 1115 */ "G_LLROUND\0"
  /* 1125 */ "G_LROUND\0"
  /* 1134 */ "G_INTRINSIC_ROUND\0"
  /* 1152 */ "G_INTRINSIC_FPTRUNC_ROUND\0"
  /* 1178 */ "LOAD_STACK_GUARD\0"
  /* 1195 */ "TLBRD\0"
  /* 1201 */ "CSRRD\0"
  /* 1207 */ "FMINA_D\0"
  /* 1215 */ "SRA_D\0"
  /* 1221 */ "FMAXA_D\0"
  /* 1229 */ "AMADD_DB_D\0"
  /* 1240 */ "AMAND_DB_D\0"
  /* 1251 */ "AMMIN_DB_D\0"
  /* 1262 */ "AMSWAP_DB_D\0"
  /* 1274 */ "AMOR_DB_D\0"
  /* 1284 */ "AMXOR_DB_D\0"
  /* 1295 */ "AMMAX_DB_D\0"
  /* 1306 */ "FSCALEB_D\0"
  /* 1316 */ "FLOGB_D\0"
  /* 1324 */ "FSUB_D\0"
  /* 1331 */ "FMSUB_D\0"
  /* 1339 */ "FNMSUB_D\0"
  /* 1348 */ "REVB_D\0"
  /* 1355 */ "SC_D\0"
  /* 1360 */ "FADD_D\0"
  /* 1367 */ "AMADD_D\0"
  /* 1375 */ "FMADD_D\0"
  /* 1383 */ "FNMADD_D\0"
  /* 1392 */ "FLD_D\0"
  /* 1398 */ "AMAND_D\0"
  /* 1406 */ "MOD_D\0"
  /* 1412 */ "IOCSRRD_D\0"
  /* 1422 */ "FCMP_CLE_D\0"
  /* 1433 */ "FLDLE_D\0"
  /* 1441 */ "FCMP_SLE_D\0"
  /* 1452 */ "ASRTLE_D\0"
  /* 1461 */ "FSTLE_D\0"
  /* 1469 */ "FCMP_CULE_D\0"
  /* 1481 */ "FCMP_SULE_D\0"
  /* 1493 */ "RDTIME_D\0"
  /* 1502 */ "FCMP_CNE_D\0"
  /* 1513 */ "FCMP_SNE_D\0"
  /* 1524 */ "FCMP_CUNE_D\0"
  /* 1536 */ "FCMP_SUNE_D\0"
  /* 1548 */ "FCMP_CAF_D\0"
  /* 1559 */ "FCMP_SAF_D\0"
  /* 1570 */ "FNEG_D\0"
  /* 1577 */ "MULH_D\0"
  /* 1584 */ "REVH_D\0"
  /* 1591 */ "LU32I_D\0"
  /* 1599 */ "LU52I_D\0"
  /* 1607 */ "ADDU16I_D\0"
  /* 1617 */ "SRAI_D\0"
  /* 1624 */ "ADDI_D\0"
  /* 1631 */ "SLLI_D\0"
  /* 1638 */ "SRLI_D\0"
  /* 1645 */ "PseudoLI_D\0"
  /* 1656 */ "ROTRI_D\0"
  /* 1664 */ "BYTEPICK_D\0"
  /* 1675 */ "BSTRPICK_D\0"
  /* 1686 */ "FSEL_D\0"
  /* 1693 */ "SLL_D\0"
  /* 1699 */ "SRL_D\0"
  /* 1705 */ "ALSL_D\0"
  /* 1712 */ "FMUL_D\0"
  /* 1719 */ "FTINTRNE_L_D\0"
  /* 1732 */ "FTINTRM_L_D\0"
  /* 1744 */ "FTINTRP_L_D\0"
  /* 1756 */ "FTINT_L_D\0"
  /* 1766 */ "FTINTRZ_L_D\0"
  /* 1778 */ "FCOPYSIGN_D\0"
  /* 1790 */ "FMIN_D\0"
  /* 1797 */ "AMMIN_D\0"
  /* 1805 */ "FCMP_CUN_D\0"
  /* 1816 */ "FCMP_SUN_D\0"
  /* 1827 */ "CLO_D\0"
  /* 1833 */ "CTO_D\0"
  /* 1839 */ "AMSWAP_D\0"
  /* 1848 */ "FRECIP_D\0"
  /* 1857 */ "FCMP_CEQ_D\0"
  /* 1868 */ "FCMP_SEQ_D\0"
  /* 1879 */ "FCMP_CUEQ_D\0"
  /* 1891 */ "FCMP_SUEQ_D\0"
  /* 1903 */ "MOVGR2FR_D\0"
  /* 1914 */ "MOVFR2GR_D\0"
  /* 1925 */ "FCMP_COR_D\0"
  /* 1936 */ "AMOR_D\0"
  /* 1943 */ "FCMP_SOR_D\0"
  /* 1954 */ "AMXOR_D\0"
  /* 1962 */ "ROTR_D\0"
  /* 1969 */ "LDPTR_D\0"
  /* 1977 */ "STPTR_D\0"
  /* 1985 */ "IOCSRWR_D\0"
  /* 1995 */ "FABS_D\0"
  /* 2002 */ "BSTRINS_D\0"
  /* 2012 */ "FCLASS_D\0"
  /* 2021 */ "FCVT_S_D\0"
  /* 2030 */ "FLDGT_D\0"
  /* 2038 */ "ASRTGT_D\0"
  /* 2047 */ "FSTGT_D\0"
  /* 2055 */ "FCMP_CLT_D\0"
  /* 2066 */ "FCMP_SLT_D\0"
  /* 2077 */ "FCMP_CULT_D\0"
  /* 2089 */ "FCMP_SULT_D\0"
  /* 2101 */ "FRINT_D\0"
  /* 2109 */ "FSQRT_D\0"
  /* 2117 */ "FRSQRT_D\0"
  /* 2126 */ "FST_D\0"
  /* 2132 */ "BITREV_D\0"
  /* 2141 */ "FDIV_D\0"
  /* 2148 */ "FMOV_D\0"
  /* 2155 */ "FTINTRNE_W_D\0"
  /* 2168 */ "FTINTRM_W_D\0"
  /* 2180 */ "FTINTRP_W_D\0"
  /* 2192 */ "FTINT_W_D\0"
  /* 2202 */ "FTINTRZ_W_D\0"
  /* 2214 */ "FMAX_D\0"
  /* 2221 */ "AMMAX_D\0"
  /* 2229 */ "FLDX_D\0"
  /* 2236 */ "FSTX_D\0"
  /* 2243 */ "CLZ_D\0"
  /* 2249 */ "CTZ_D\0"
  /* 2255 */ "PseudoAtomicStoreD\0"
  /* 2274 */ "PSEUDO_PROBE\0"
  /* 2287 */ "G_SSUBE\0"
  /* 2295 */ "G_USUBE\0"
  /* 2303 */ "G_FENCE\0"
  /* 2311 */ "ARITH_FENCE\0"
  /* 2323 */ "REG_SEQUENCE\0"
  /* 2336 */ "G_SADDE\0"
  /* 2344 */ "G_UADDE\0"
  /* 2352 */ "G_FMINNUM_IEEE\0"
  /* 2367 */ "G_FMAXNUM_IEEE\0"
  /* 2382 */ "BGE\0"
  /* 2386 */ "PseudoLA_TLS_GD_LARGE\0"
  /* 2408 */ "PseudoLA_TLS_LD_LARGE\0"
  /* 2430 */ "PseudoLA_TLS_IE_LARGE\0"
  /* 2452 */ "PseudoLA_PCREL_LARGE\0"
  /* 2473 */ "PseudoLA_ABS_LARGE\0"
  /* 2492 */ "PseudoLA_GOT_LARGE\0"
  /* 2511 */ "PseudoLA_TLS_IE\0"
  /* 2527 */ "G_JUMP_TABLE\0"
  /* 2540 */ "IDLE\0"
  /* 2545 */ "BUNDLE\0"
  /* 2552 */ "PseudoLA_TLS_LE\0"
  /* 2568 */ "BNE\0"
  /* 2572 */ "G_MEMCPY_INLINE\0"
  /* 2588 */ "LOCAL_ESCAPE\0"
  /* 2601 */ "G_INDEXED_STORE\0"
  /* 2617 */ "G_STORE\0"
  /* 2625 */ "G_BITREVERSE\0"
  /* 2638 */ "LDPTE\0"
  /* 2644 */ "DBG_VALUE\0"
  /* 2654 */ "G_GLOBAL_VALUE\0"
  /* 2669 */ "G_MEMMOVE\0"
  /* 2679 */ "G_FREEZE\0"
  /* 2688 */ "G_FCANONICALIZE\0"
  /* 2704 */ "MOVGR2CF\0"
  /* 2713 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 2731 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 2749 */ "G_IMPLICIT_DEF\0"
  /* 2764 */ "DBG_INSTR_REF\0"
  /* 2778 */ "G_FNEG\0"
  /* 2785 */ "EXTRACT_SUBREG\0"
  /* 2800 */ "INSERT_SUBREG\0"
  /* 2814 */ "G_SEXT_INREG\0"
  /* 2827 */ "SUBREG_TO_REG\0"
  /* 2841 */ "CPUCFG\0"
  /* 2848 */ "G_ATOMIC_CMPXCHG\0"
  /* 2865 */ "CSRXCHG\0"
  /* 2873 */ "G_ATOMICRMW_XCHG\0"
  /* 2890 */ "G_FLOG\0"
  /* 2897 */ "G_VAARG\0"
  /* 2905 */ "PREALLOCATED_ARG\0"
  /* 2922 */ "REVB_2H\0"
  /* 2930 */ "REVB_4H\0"
  /* 2938 */ "TLBSRCH\0"
  /* 2946 */ "G_SMULH\0"
  /* 2954 */ "G_UMULH\0"
  /* 2962 */ "TLBFLUSH\0"
  /* 2971 */ "LD_H\0"
  /* 2976 */ "IOCSRRD_H\0"
  /* 2986 */ "LDLE_H\0"
  /* 2993 */ "STLE_H\0"
  /* 3000 */ "IOCSRWR_H\0"
  /* 3010 */ "LDGT_H\0"
  /* 3017 */ "STGT_H\0"
  /* 3024 */ "ST_H\0"
  /* 3029 */ "EXT_W_H\0"
  /* 3037 */ "LDX_H\0"
  /* 3043 */ "STX_H\0"
  /* 3049 */ "PCALAU12I\0"
  /* 3059 */ "PCADDU12I\0"
  /* 3069 */ "PCADDU18I\0"
  /* 3079 */ "PCADDI\0"
  /* 3086 */ "ANDI\0"
  /* 3091 */ "DBG_PHI\0"
  /* 3099 */ "XORI\0"
  /* 3104 */ "G_FPTOSI\0"
  /* 3113 */ "SLTI\0"
  /* 3118 */ "G_FPTOUI\0"
  /* 3127 */ "SLTUI\0"
  /* 3133 */ "G_FPOWI\0"
  /* 3141 */ "BREAK\0"
  /* 3147 */ "G_PTRMASK\0"
  /* 3157 */ "BL\0"
  /* 3160 */ "DBCL\0"
  /* 3165 */ "GC_LABEL\0"
  /* 3174 */ "DBG_LABEL\0"
  /* 3184 */ "EH_LABEL\0"
  /* 3193 */ "ANNOTATION_LABEL\0"
  /* 3210 */ "ICALL_BRANCH_FUNNEL\0"
  /* 3230 */ "PseudoLA_PCREL\0"
  /* 3245 */ "G_FSHL\0"
  /* 3252 */ "G_SHL\0"
  /* 3258 */ "PseudoB_TAIL\0"
  /* 3271 */ "PseudoJIRL_TAIL\0"
  /* 3287 */ "PseudoTAIL\0"
  /* 3298 */ "G_FCEIL\0"
  /* 3306 */ "SYSCALL\0"
  /* 3314 */ "PATCHABLE_TAIL_CALL\0"
  /* 3334 */ "PseudoJIRL_CALL\0"
  /* 3350 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 3377 */ "PATCHABLE_EVENT_CALL\0"
  /* 3398 */ "FENTRY_CALL\0"
  /* 3410 */ "PseudoCALL\0"
  /* 3421 */ "TLBFILL\0"
  /* 3429 */ "KILL\0"
  /* 3434 */ "G_CONSTANT_POOL\0"
  /* 3450 */ "JIRL\0"
  /* 3455 */ "G_ROTL\0"
  /* 3462 */ "G_VECREDUCE_FMUL\0"
  /* 3479 */ "G_FMUL\0"
  /* 3486 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 3507 */ "G_STRICT_FMUL\0"
  /* 3521 */ "G_VECREDUCE_MUL\0"
  /* 3537 */ "G_MUL\0"
  /* 3543 */ "FFINT_D_L\0"
  /* 3553 */ "FFINT_S_L\0"
  /* 3563 */ "G_FREM\0"
  /* 3570 */ "G_STRICT_FREM\0"
  /* 3584 */ "G_SREM\0"
  /* 3591 */ "G_UREM\0"
  /* 3598 */ "G_SDIVREM\0"
  /* 3608 */ "G_UDIVREM\0"
  /* 3618 */ "INLINEASM\0"
  /* 3628 */ "G_FMINIMUM\0"
  /* 3639 */ "G_FMAXIMUM\0"
  /* 3650 */ "G_FMINNUM\0"
  /* 3660 */ "G_FMAXNUM\0"
  /* 3670 */ "ANDN\0"
  /* 3675 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 3697 */ "G_ASSERT_ALIGN\0"
  /* 3712 */ "G_FCOPYSIGN\0"
  /* 3724 */ "G_VECREDUCE_FMIN\0"
  /* 3741 */ "G_ATOMICRMW_FMIN\0"
  /* 3758 */ "G_VECREDUCE_SMIN\0"
  /* 3775 */ "G_SMIN\0"
  /* 3782 */ "G_VECREDUCE_UMIN\0"
  /* 3799 */ "G_UMIN\0"
  /* 3806 */ "G_ATOMICRMW_UMIN\0"
  /* 3823 */ "G_ATOMICRMW_MIN\0"
  /* 3839 */ "G_FSIN\0"
  /* 3846 */ "CFI_INSTRUCTION\0"
  /* 3862 */ "ORN\0"
  /* 3866 */ "ERTN\0"
  /* 3871 */ "ADJCALLSTACKDOWN\0"
  /* 3888 */ "G_SSUBO\0"
  /* 3896 */ "G_USUBO\0"
  /* 3904 */ "G_SADDO\0"
  /* 3912 */ "G_UADDO\0"
  /* 3920 */ "G_SMULO\0"
  /* 3928 */ "G_UMULO\0"
  /* 3936 */ "G_BZERO\0"
  /* 3944 */ "STACKMAP\0"
  /* 3953 */ "G_ATOMICRMW_UDEC_WRAP\0"
  /* 3975 */ "G_ATOMICRMW_UINC_WRAP\0"
  /* 3997 */ "G_BSWAP\0"
  /* 4005 */ "G_SITOFP\0"
  /* 4014 */ "G_UITOFP\0"
  /* 4023 */ "G_FCMP\0"
  /* 4030 */ "G_ICMP\0"
  /* 4037 */ "PseudoUNIMP\0"
  /* 4049 */ "CACOP\0"
  /* 4055 */ "G_CTPOP\0"
  /* 4063 */ "PATCHABLE_OP\0"
  /* 4076 */ "FAULTING_OP\0"
  /* 4088 */ "ADJCALLSTACKUP\0"
  /* 4103 */ "PREALLOCATED_SETUP\0"
  /* 4122 */ "G_FEXP\0"
  /* 4129 */ "BEQ\0"
  /* 4133 */ "DBAR\0"
  /* 4138 */ "IBAR\0"
  /* 4143 */ "G_BR\0"
  /* 4148 */ "INLINEASM_BR\0"
  /* 4161 */ "PseudoBR\0"
  /* 4170 */ "G_BLOCK_ADDR\0"
  /* 4183 */ "MEMBARRIER\0"
  /* 4194 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 4219 */ "G_READCYCLECOUNTER\0"
  /* 4238 */ "G_READ_REGISTER\0"
  /* 4254 */ "G_WRITE_REGISTER\0"
  /* 4271 */ "PseudoLD_CFR\0"
  /* 4284 */ "PseudoST_CFR\0"
  /* 4297 */ "MOVCF2GR\0"
  /* 4306 */ "MOVFCSR2GR\0"
  /* 4317 */ "G_ASHR\0"
  /* 4324 */ "G_FSHR\0"
  /* 4331 */ "G_LSHR\0"
  /* 4338 */ "LDDIR\0"
  /* 4344 */ "TLBCLR\0"
  /* 4351 */ "NOR\0"
  /* 4355 */ "G_FFLOOR\0"
  /* 4364 */ "G_BUILD_VECTOR\0"
  /* 4379 */ "G_SHUFFLE_VECTOR\0"
  /* 4396 */ "G_VECREDUCE_XOR\0"
  /* 4412 */ "G_XOR\0"
  /* 4418 */ "G_ATOMICRMW_XOR\0"
  /* 4434 */ "G_VECREDUCE_OR\0"
  /* 4449 */ "G_OR\0"
  /* 4454 */ "G_ATOMICRMW_OR\0"
  /* 4469 */ "MOVGR2FCSR\0"
  /* 4480 */ "RDFCSR\0"
  /* 4487 */ "WRFCSR\0"
  /* 4494 */ "G_ROTR\0"
  /* 4501 */ "G_INTTOPTR\0"
  /* 4512 */ "TLBWR\0"
  /* 4518 */ "CSRWR\0"
  /* 4524 */ "G_FABS\0"
  /* 4531 */ "PseudoLA_ABS\0"
  /* 4544 */ "G_ABS\0"
  /* 4550 */ "G_UNMERGE_VALUES\0"
  /* 4567 */ "G_MERGE_VALUES\0"
  /* 4582 */ "G_FCOS\0"
  /* 4589 */ "G_CONCAT_VECTORS\0"
  /* 4606 */ "COPY_TO_REGCLASS\0"
  /* 4623 */ "G_IS_FPCLASS\0"
  /* 4636 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 4666 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 4693 */ "FMINA_S\0"
  /* 4701 */ "FMAXA_S\0"
  /* 4709 */ "FSCALEB_S\0"
  /* 4719 */ "FLOGB_S\0"
  /* 4727 */ "FSUB_S\0"
  /* 4734 */ "FMSUB_S\0"
  /* 4742 */ "FNMSUB_S\0"
  /* 4751 */ "FADD_S\0"
  /* 4758 */ "FMADD_S\0"
  /* 4766 */ "FNMADD_S\0"
  /* 4775 */ "FLD_S\0"
  /* 4781 */ "FCVT_D_S\0"
  /* 4790 */ "FCMP_CLE_S\0"
  /* 4801 */ "FLDLE_S\0"
  /* 4809 */ "FCMP_SLE_S\0"
  /* 4820 */ "FSTLE_S\0"
  /* 4828 */ "FCMP_CULE_S\0"
  /* 4840 */ "FCMP_SULE_S\0"
  /* 4852 */ "FCMP_CNE_S\0"
  /* 4863 */ "FCMP_SNE_S\0"
  /* 4874 */ "FCMP_CUNE_S\0"
  /* 4886 */ "FCMP_SUNE_S\0"
  /* 4898 */ "FCMP_CAF_S\0"
  /* 4909 */ "FCMP_SAF_S\0"
  /* 4920 */ "MOVFR2CF_S\0"
  /* 4931 */ "FNEG_S\0"
  /* 4938 */ "FSEL_S\0"
  /* 4945 */ "FMUL_S\0"
  /* 4952 */ "FTINTRNE_L_S\0"
  /* 4965 */ "FTINTRM_L_S\0"
  /* 4977 */ "FTINTRP_L_S\0"
  /* 4989 */ "FTINT_L_S\0"
  /* 4999 */ "FTINTRZ_L_S\0"
  /* 5011 */ "FCOPYSIGN_S\0"
  /* 5023 */ "FMIN_S\0"
  /* 5030 */ "FCMP_CUN_S\0"
  /* 5041 */ "FCMP_SUN_S\0"
  /* 5052 */ "FRECIP_S\0"
  /* 5061 */ "FCMP_CEQ_S\0"
  /* 5072 */ "FCMP_SEQ_S\0"
  /* 5083 */ "FCMP_CUEQ_S\0"
  /* 5095 */ "FCMP_SUEQ_S\0"
  /* 5107 */ "MOVCF2FR_S\0"
  /* 5118 */ "MOVFRH2GR_S\0"
  /* 5130 */ "MOVFR2GR_S\0"
  /* 5141 */ "FCMP_COR_S\0"
  /* 5152 */ "FCMP_SOR_S\0"
  /* 5163 */ "FABS_S\0"
  /* 5170 */ "FCLASS_S\0"
  /* 5179 */ "FLDGT_S\0"
  /* 5187 */ "FSTGT_S\0"
  /* 5195 */ "FCMP_CLT_S\0"
  /* 5206 */ "FCMP_SLT_S\0"
  /* 5217 */ "FCMP_CULT_S\0"
  /* 5229 */ "FCMP_SULT_S\0"
  /* 5241 */ "FRINT_S\0"
  /* 5249 */ "FSQRT_S\0"
  /* 5257 */ "FRSQRT_S\0"
  /* 5266 */ "FST_S\0"
  /* 5272 */ "FDIV_S\0"
  /* 5279 */ "FMOV_S\0"
  /* 5286 */ "FTINTRNE_W_S\0"
  /* 5299 */ "FTINTRM_W_S\0"
  /* 5311 */ "FTINTRP_W_S\0"
  /* 5323 */ "FTINT_W_S\0"
  /* 5333 */ "FTINTRZ_W_S\0"
  /* 5345 */ "FMAX_S\0"
  /* 5352 */ "FLDX_S\0"
  /* 5359 */ "FSTX_S\0"
  /* 5366 */ "G_SSUBSAT\0"
  /* 5376 */ "G_USUBSAT\0"
  /* 5386 */ "G_SADDSAT\0"
  /* 5396 */ "G_UADDSAT\0"
  /* 5406 */ "G_SSHLSAT\0"
  /* 5416 */ "G_USHLSAT\0"
  /* 5426 */ "G_SMULFIXSAT\0"
  /* 5439 */ "G_UMULFIXSAT\0"
  /* 5452 */ "G_SDIVFIXSAT\0"
  /* 5465 */ "G_UDIVFIXSAT\0"
  /* 5478 */ "G_EXTRACT\0"
  /* 5488 */ "G_SELECT\0"
  /* 5497 */ "G_BRINDIRECT\0"
  /* 5510 */ "PATCHABLE_RET\0"
  /* 5524 */ "PseudoRET\0"
  /* 5534 */ "G_MEMSET\0"
  /* 5543 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 5567 */ "G_BRJT\0"
  /* 5574 */ "BLT\0"
  /* 5578 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 5599 */ "G_INSERT_VECTOR_ELT\0"
  /* 5619 */ "SLT\0"
  /* 5623 */ "G_FCONSTANT\0"
  /* 5635 */ "G_CONSTANT\0"
  /* 5646 */ "STATEPOINT\0"
  /* 5657 */ "PATCHPOINT\0"
  /* 5668 */ "G_PTRTOINT\0"
  /* 5679 */ "G_FRINT\0"
  /* 5687 */ "G_INTRINSIC_LRINT\0"
  /* 5705 */ "G_FNEARBYINT\0"
  /* 5718 */ "PseudoLA_GOT\0"
  /* 5731 */ "G_VASTART\0"
  /* 5741 */ "LIFETIME_START\0"
  /* 5756 */ "G_INVOKE_REGION_START\0"
  /* 5778 */ "G_INSERT\0"
  /* 5787 */ "G_FSQRT\0"
  /* 5795 */ "G_STRICT_FSQRT\0"
  /* 5810 */ "G_BITCAST\0"
  /* 5820 */ "G_ADDRSPACE_CAST\0"
  /* 5837 */ "DBG_VALUE_LIST\0"
  /* 5852 */ "G_FPEXT\0"
  /* 5860 */ "G_SEXT\0"
  /* 5867 */ "G_ASSERT_SEXT\0"
  /* 5881 */ "G_ANYEXT\0"
  /* 5890 */ "G_ZEXT\0"
  /* 5897 */ "G_ASSERT_ZEXT\0"
  /* 5911 */ "LD_BU\0"
  /* 5917 */ "LDX_BU\0"
  /* 5924 */ "AMMIN_DB_DU\0"
  /* 5936 */ "AMMAX_DB_DU\0"
  /* 5948 */ "MOD_DU\0"
  /* 5955 */ "MULH_DU\0"
  /* 5963 */ "AMMIN_DU\0"
  /* 5972 */ "DIV_DU\0"
  /* 5979 */ "AMMAX_DU\0"
  /* 5988 */ "BGEU\0"
  /* 5993 */ "LD_HU\0"
  /* 5999 */ "LDX_HU\0"
  /* 6006 */ "BLTU\0"
  /* 6011 */ "SLTU\0"
  /* 6016 */ "AMMIN_DB_WU\0"
  /* 6028 */ "AMMAX_DB_WU\0"
  /* 6040 */ "LD_WU\0"
  /* 6046 */ "MOD_WU\0"
  /* 6053 */ "MULW_D_WU\0"
  /* 6063 */ "MULH_WU\0"
  /* 6071 */ "ALSL_WU\0"
  /* 6079 */ "AMMIN_WU\0"
  /* 6088 */ "DIV_WU\0"
  /* 6095 */ "AMMAX_WU\0"
  /* 6104 */ "LDX_WU\0"
  /* 6111 */ "G_FDIV\0"
  /* 6118 */ "G_STRICT_FDIV\0"
  /* 6132 */ "G_SDIV\0"
  /* 6139 */ "G_UDIV\0"
  /* 6146 */ "REVB_2W\0"
  /* 6154 */ "REVH_2W\0"
  /* 6162 */ "G_FPOW\0"
  /* 6169 */ "SRA_W\0"
  /* 6175 */ "AMADD_DB_W\0"
  /* 6186 */ "AMAND_DB_W\0"
  /* 6197 */ "AMMIN_DB_W\0"
  /* 6208 */ "AMSWAP_DB_W\0"
  /* 6220 */ "AMOR_DB_W\0"
  /* 6230 */ "AMXOR_DB_W\0"
  /* 6241 */ "AMMAX_DB_W\0"
  /* 6252 */ "SUB_W\0"
  /* 6258 */ "CRCC_W_B_W\0"
  /* 6269 */ "CRC_W_B_W\0"
  /* 6279 */ "SC_W\0"
  /* 6284 */ "AMADD_W\0"
  /* 6292 */ "LD_W\0"
  /* 6297 */ "AMAND_W\0"
  /* 6305 */ "MOD_W\0"
  /* 6311 */ "IOCSRRD_W\0"
  /* 6321 */ "FFINT_D_W\0"
  /* 6331 */ "MULW_D_W\0"
  /* 6340 */ "CRCC_W_D_W\0"
  /* 6351 */ "CRC_W_D_W\0"
  /* 6361 */ "LDLE_W\0"
  /* 6368 */ "STLE_W\0"
  /* 6375 */ "RDTIMEH_W\0"
  /* 6385 */ "MULH_W\0"
  /* 6392 */ "MOVGR2FRH_W\0"
  /* 6404 */ "CRCC_W_H_W\0"
  /* 6415 */ "CRC_W_H_W\0"
  /* 6425 */ "LU12I_W\0"
  /* 6433 */ "SRAI_W\0"
  /* 6440 */ "ADDI_W\0"
  /* 6447 */ "SLLI_W\0"
  /* 6454 */ "SRLI_W\0"
  /* 6461 */ "PseudoLI_W\0"
  /* 6472 */ "ROTRI_W\0"
  /* 6480 */ "BYTEPICK_W\0"
  /* 6491 */ "BSTRPICK_W\0"
  /* 6502 */ "RDTIMEL_W\0"
  /* 6512 */ "SLL_W\0"
  /* 6518 */ "SRL_W\0"
  /* 6524 */ "ALSL_W\0"
  /* 6531 */ "MUL_W\0"
  /* 6537 */ "AMMIN_W\0"
  /* 6545 */ "CLO_W\0"
  /* 6551 */ "CTO_W\0"
  /* 6557 */ "AMSWAP_W\0"
  /* 6566 */ "MOVGR2FR_W\0"
  /* 6577 */ "AMOR_W\0"
  /* 6584 */ "AMXOR_W\0"
  /* 6592 */ "ROTR_W\0"
  /* 6599 */ "LDPTR_W\0"
  /* 6607 */ "STPTR_W\0"
  /* 6615 */ "IOCSRWR_W\0"
  /* 6625 */ "BSTRINS_W\0"
  /* 6635 */ "FFINT_S_W\0"
  /* 6645 */ "LDGT_W\0"
  /* 6652 */ "STGT_W\0"
  /* 6659 */ "ST_W\0"
  /* 6664 */ "BITREV_W\0"
  /* 6673 */ "DIV_W\0"
  /* 6679 */ "CRCC_W_W_W\0"
  /* 6690 */ "CRC_W_W_W\0"
  /* 6700 */ "AMMAX_W\0"
  /* 6708 */ "LDX_W\0"
  /* 6714 */ "STX_W\0"
  /* 6720 */ "CLZ_W\0"
  /* 6726 */ "CTZ_W\0"
  /* 6732 */ "PseudoAtomicStoreW\0"
  /* 6751 */ "G_VECREDUCE_FMAX\0"
  /* 6768 */ "G_ATOMICRMW_FMAX\0"
  /* 6785 */ "G_VECREDUCE_SMAX\0"
  /* 6802 */ "G_SMAX\0"
  /* 6809 */ "G_VECREDUCE_UMAX\0"
  /* 6826 */ "G_UMAX\0"
  /* 6833 */ "G_ATOMICRMW_UMAX\0"
  /* 6850 */ "G_ATOMICRMW_MAX\0"
  /* 6866 */ "PRELDX\0"
  /* 6873 */ "G_FRAME_INDEX\0"
  /* 6887 */ "G_SBFX\0"
  /* 6894 */ "G_UBFX\0"
  /* 6901 */ "G_SMULFIX\0"
  /* 6911 */ "G_UMULFIX\0"
  /* 6921 */ "G_SDIVFIX\0"
  /* 6931 */ "G_UDIVFIX\0"
  /* 6941 */ "G_MEMCPY\0"
  /* 6950 */ "COPY\0"
  /* 6955 */ "BNEZ\0"
  /* 6960 */ "BCNEZ\0"
  /* 6966 */ "MASKNEZ\0"
  /* 6974 */ "G_CTLZ\0"
  /* 6981 */ "BEQZ\0"
  /* 6986 */ "BCEQZ\0"
  /* 6992 */ "MASKEQZ\0"
  /* 7000 */ "G_CTTZ\0"
  /* 7007 */ "PseudoTAILIndirect\0"
  /* 7026 */ "PseudoCALLIndirect\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned LoongArchInstrNameIndices[] = {
    3095U, 3618U, 4148U, 3846U, 3184U, 3165U, 3193U, 3429U, 
    2785U, 2800U, 2751U, 2827U, 4606U, 2644U, 5837U, 2764U, 
    3091U, 3174U, 2323U, 6950U, 2545U, 5741U, 1081U, 2274U, 
    2311U, 3944U, 3398U, 5657U, 1178U, 4103U, 2905U, 5646U, 
    2588U, 4076U, 4063U, 4194U, 5510U, 5543U, 3314U, 3377U, 
    3350U, 3210U, 4183U, 5867U, 5897U, 3697U, 956U, 589U, 
    3537U, 6132U, 6139U, 3584U, 3591U, 3598U, 3608U, 1059U, 
    4449U, 4412U, 2749U, 3093U, 6873U, 2654U, 3434U, 5478U, 
    4550U, 5778U, 4567U, 4364U, 737U, 4589U, 5668U, 4501U, 
    5810U, 2679U, 1152U, 711U, 1134U, 5687U, 3675U, 4219U, 
    857U, 801U, 831U, 842U, 782U, 812U, 2617U, 2601U, 
    4636U, 2848U, 2873U, 972U, 595U, 1065U, 1026U, 4454U, 
    4418U, 6850U, 3823U, 6833U, 3806U, 923U, 572U, 6768U, 
    3741U, 3975U, 3953U, 2303U, 1106U, 5497U, 5756U, 689U, 
    4666U, 5881U, 729U, 5635U, 5623U, 5731U, 2897U, 5860U, 
    2814U, 5890U, 3252U, 4331U, 4317U, 3245U, 4324U, 4494U, 
    3455U, 4030U, 4023U, 5488U, 3912U, 2344U, 3896U, 2295U, 
    3904U, 2336U, 3888U, 2287U, 3928U, 3920U, 2954U, 2946U, 
    5396U, 5386U, 5376U, 5366U, 5416U, 5406U, 6901U, 6911U, 
    5426U, 5439U, 6921U, 6931U, 5452U, 5465U, 881U, 551U, 
    3479U, 505U, 775U, 6111U, 3563U, 6162U, 3133U, 4122U, 
    430U, 2890U, 422U, 0U, 2778U, 5852U, 701U, 3104U, 
    3118U, 4005U, 4014U, 4524U, 3712U, 4623U, 2688U, 3650U, 
    3660U, 2352U, 2367U, 3628U, 3639U, 962U, 3147U, 3775U, 
    6802U, 3799U, 6826U, 4544U, 1125U, 1115U, 4143U, 5567U, 
    5599U, 5578U, 4379U, 7000U, 2731U, 6974U, 2713U, 4055U, 
    3997U, 2625U, 3298U, 4582U, 3839U, 5787U, 4355U, 5679U, 
    5705U, 5820U, 4170U, 2527U, 758U, 909U, 558U, 3507U, 
    6118U, 3570U, 511U, 5795U, 4238U, 4254U, 6941U, 2572U, 
    2669U, 5534U, 3936U, 888U, 3486U, 864U, 3462U, 6751U, 
    3724U, 940U, 3521U, 1043U, 4434U, 4396U, 6785U, 3758U, 
    6809U, 3782U, 6887U, 6894U, 3871U, 4088U, 87U, 109U, 
    160U, 466U, 322U, 37U, 343U, 2255U, 6732U, 303U, 
    4161U, 1094U, 3258U, 3410U, 7026U, 205U, 489U, 3334U, 
    3271U, 4531U, 2473U, 5718U, 2492U, 3230U, 2452U, 988U, 
    2386U, 2511U, 2430U, 1010U, 2408U, 2552U, 4271U, 1645U, 
    6461U, 59U, 394U, 250U, 131U, 9U, 365U, 221U, 
    278U, 183U, 5524U, 4284U, 3287U, 7007U, 4037U, 4480U, 
    4487U, 1624U, 6440U, 1607U, 1361U, 6286U, 1705U, 6524U, 
    6071U, 1367U, 1229U, 6175U, 6284U, 1398U, 1240U, 6186U, 
    6297U, 2221U, 1295U, 5936U, 6241U, 6028U, 5979U, 6700U, 
    6095U, 1797U, 1251U, 5924U, 6197U, 6016U, 5963U, 6537U, 
    6079U, 1936U, 1274U, 6220U, 6577U, 1839U, 1262U, 6208U, 
    6557U, 1954U, 1284U, 6230U, 6584U, 1039U, 3086U, 3670U, 
    2038U, 1452U, 532U, 6986U, 6960U, 4129U, 6981U, 2382U, 
    5988U, 524U, 534U, 2132U, 6664U, 3157U, 5574U, 6006U, 
    2568U, 6955U, 3141U, 2002U, 6625U, 1675U, 6491U, 1664U, 
    6480U, 4049U, 1827U, 6545U, 2243U, 6720U, 2841U, 6258U, 
    6340U, 6404U, 6679U, 6269U, 6351U, 6415U, 6690U, 1201U, 
    4518U, 2865U, 1833U, 6551U, 2249U, 6726U, 4133U, 3160U, 
    2142U, 5972U, 6673U, 6088U, 3866U, 669U, 3029U, 1995U, 
    5163U, 1360U, 4751U, 2012U, 5170U, 1548U, 4898U, 1857U, 
    5061U, 1422U, 4790U, 2055U, 5195U, 1502U, 4852U, 1925U, 
    5141U, 1879U, 5083U, 1469U, 4828U, 2077U, 5217U, 1524U, 
    4874U, 1805U, 5030U, 1559U, 4909U, 1868U, 5072U, 1441U, 
    4809U, 2066U, 5206U, 1513U, 4863U, 1943U, 5152U, 1891U, 
    5095U, 1481U, 4840U, 2089U, 5229U, 1536U, 4886U, 1816U, 
    5041U, 1778U, 5011U, 4781U, 2021U, 2141U, 5272U, 3543U, 
    6321U, 3553U, 6635U, 2030U, 5179U, 1433U, 4801U, 2229U, 
    5352U, 1392U, 4775U, 1316U, 4719U, 1375U, 4758U, 1221U, 
    4701U, 2214U, 5345U, 1207U, 4693U, 1790U, 5023U, 2148U, 
    5279U, 1331U, 4734U, 1712U, 4945U, 1570U, 4931U, 1383U, 
    4766U, 1339U, 4742U, 1848U, 5052U, 2101U, 5241U, 2117U, 
    5257U, 1306U, 4709U, 1686U, 4938U, 2109U, 5249U, 2047U, 
    5187U, 1461U, 4820U, 2236U, 5359U, 2126U, 5266U, 1324U, 
    4727U, 1732U, 4965U, 2168U, 5299U, 1719U, 4952U, 2155U, 
    5286U, 1744U, 4977U, 2180U, 5311U, 1766U, 4999U, 2202U, 
    5333U, 1756U, 4989U, 2192U, 5323U, 4138U, 2540U, 544U, 
    616U, 1412U, 2976U, 6311U, 640U, 1985U, 3000U, 6615U, 
    3450U, 4338U, 650U, 2031U, 3010U, 6645U, 626U, 1434U, 
    2986U, 6361U, 2638U, 1969U, 6599U, 677U, 5917U, 2230U, 
    3037U, 5999U, 6708U, 6104U, 611U, 5911U, 1393U, 2971U, 
    5993U, 6292U, 6040U, 1694U, 6513U, 6425U, 1591U, 1599U, 
    6992U, 6966U, 1406U, 5948U, 6305U, 6046U, 5107U, 4297U, 
    4306U, 4920U, 1914U, 5130U, 438U, 5118U, 2704U, 4469U, 
    6392U, 1903U, 6566U, 452U, 1577U, 5955U, 6385U, 6063U, 
    6331U, 6053U, 1713U, 6531U, 4351U, 4352U, 3100U, 3862U, 
    3079U, 3059U, 3069U, 3049U, 1004U, 6866U, 6375U, 6502U, 
    1493U, 2922U, 6146U, 2930U, 1348U, 6154U, 1584U, 1656U, 
    6472U, 1962U, 6592U, 1355U, 6279U, 1631U, 6447U, 1693U, 
    6512U, 5619U, 3113U, 6011U, 3127U, 1617U, 6433U, 1215U, 
    6169U, 1638U, 6454U, 1699U, 6518U, 657U, 2048U, 3017U, 
    6652U, 633U, 1462U, 2993U, 6368U, 1977U, 6607U, 683U, 
    2237U, 3043U, 6714U, 664U, 2127U, 3024U, 6659U, 1325U, 
    6252U, 3306U, 4344U, 3421U, 2962U, 1195U, 2938U, 4512U, 
    4408U, 3099U, 
};

static inline void InitLoongArchMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LoongArchInsts, LoongArchInstrNameIndices, LoongArchInstrNameData, nullptr, nullptr, 682);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct LoongArchGenInstrInfo : public TargetInstrInfo {
  explicit LoongArchGenInstrInfo(unsigned CFSetupOpcode = ~0u, unsigned CFDestroyOpcode = ~0u, unsigned CatchRetOpcode = ~0u, unsigned ReturnOpcode = ~0u);
  ~LoongArchGenInstrInfo() override = default;

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
extern const MCInstrDesc LoongArchInsts[];
extern const unsigned LoongArchInstrNameIndices[];
extern const char LoongArchInstrNameData[];
LoongArchGenInstrInfo::LoongArchGenInstrInfo(unsigned CFSetupOpcode, unsigned CFDestroyOpcode, unsigned CatchRetOpcode, unsigned ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(LoongArchInsts, LoongArchInstrNameIndices, LoongArchInstrNameData, nullptr, nullptr, 682);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace LoongArch {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace LoongArch
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace LoongArch {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace LoongArch
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace LoongArch {
namespace OpTypes {
enum OperandType {
  bare_symbol = 0,
  f32imm = 1,
  f64imm = 2,
  grlenimm = 3,
  i16imm = 4,
  i1imm = 5,
  i32imm = 6,
  i64imm = 7,
  i8imm = 8,
  imm32 = 9,
  ptype0 = 10,
  ptype1 = 11,
  ptype2 = 12,
  ptype3 = 13,
  ptype4 = 14,
  ptype5 = 15,
  simm12 = 16,
  simm12_addlike = 17,
  simm12_lu52id = 18,
  simm14_lsl2 = 19,
  simm16 = 20,
  simm16_lsl16 = 21,
  simm16_lsl2 = 22,
  simm16_lsl2_br = 23,
  simm20 = 24,
  simm20_lu12iw = 25,
  simm20_lu32id = 26,
  simm20_pcalau12i = 27,
  simm21_lsl2 = 28,
  simm26_b = 29,
  simm26_symbol = 30,
  simm32_hi16_lo12 = 31,
  type0 = 32,
  type1 = 33,
  type2 = 34,
  type3 = 35,
  type4 = 36,
  type5 = 37,
  uimm12 = 38,
  uimm12_ori = 39,
  uimm14 = 40,
  uimm15 = 41,
  uimm2 = 42,
  uimm2_plus1 = 43,
  uimm3 = 44,
  uimm5 = 45,
  uimm6 = 46,
  uimm8 = 47,
  untyped_imm_0 = 48,
  GPRMemAtomic = 49,
  CFR = 50,
  FCSR = 51,
  FPR32 = 52,
  FPR64 = 53,
  GPR = 54,
  GPRT = 55,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace LoongArch
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace LoongArch {
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
    /* PseudoAtomicLoadAdd32 */
    639,
    /* PseudoAtomicLoadAnd32 */
    644,
    /* PseudoAtomicLoadNand32 */
    649,
    /* PseudoAtomicLoadNand64 */
    654,
    /* PseudoAtomicLoadOr32 */
    659,
    /* PseudoAtomicLoadSub32 */
    664,
    /* PseudoAtomicLoadXor32 */
    669,
    /* PseudoAtomicStoreD */
    674,
    /* PseudoAtomicStoreW */
    677,
    /* PseudoAtomicSwap32 */
    680,
    /* PseudoBR */
    685,
    /* PseudoBRIND */
    686,
    /* PseudoB_TAIL */
    688,
    /* PseudoCALL */
    689,
    /* PseudoCALLIndirect */
    690,
    /* PseudoCmpXchg32 */
    691,
    /* PseudoCmpXchg64 */
    696,
    /* PseudoJIRL_CALL */
    701,
    /* PseudoJIRL_TAIL */
    703,
    /* PseudoLA_ABS */
    705,
    /* PseudoLA_ABS_LARGE */
    707,
    /* PseudoLA_GOT */
    710,
    /* PseudoLA_GOT_LARGE */
    712,
    /* PseudoLA_PCREL */
    715,
    /* PseudoLA_PCREL_LARGE */
    717,
    /* PseudoLA_TLS_GD */
    720,
    /* PseudoLA_TLS_GD_LARGE */
    722,
    /* PseudoLA_TLS_IE */
    725,
    /* PseudoLA_TLS_IE_LARGE */
    727,
    /* PseudoLA_TLS_LD */
    730,
    /* PseudoLA_TLS_LD_LARGE */
    732,
    /* PseudoLA_TLS_LE */
    735,
    /* PseudoLD_CFR */
    737,
    /* PseudoLI_D */
    740,
    /* PseudoLI_W */
    742,
    /* PseudoMaskedAtomicLoadAdd32 */
    744,
    /* PseudoMaskedAtomicLoadMax32 */
    750,
    /* PseudoMaskedAtomicLoadMin32 */
    758,
    /* PseudoMaskedAtomicLoadNand32 */
    766,
    /* PseudoMaskedAtomicLoadSub32 */
    772,
    /* PseudoMaskedAtomicLoadUMax32 */
    778,
    /* PseudoMaskedAtomicLoadUMin32 */
    785,
    /* PseudoMaskedAtomicSwap32 */
    792,
    /* PseudoMaskedCmpXchg32 */
    798,
    /* PseudoRET */
    805,
    /* PseudoST_CFR */
    805,
    /* PseudoTAIL */
    808,
    /* PseudoTAILIndirect */
    809,
    /* PseudoUNIMP */
    810,
    /* RDFCSR */
    810,
    /* WRFCSR */
    812,
    /* ADDI_D */
    814,
    /* ADDI_W */
    817,
    /* ADDU16I_D */
    820,
    /* ADD_D */
    823,
    /* ADD_W */
    826,
    /* ALSL_D */
    829,
    /* ALSL_W */
    833,
    /* ALSL_WU */
    837,
    /* AMADD_D */
    841,
    /* AMADD_DB_D */
    844,
    /* AMADD_DB_W */
    847,
    /* AMADD_W */
    850,
    /* AMAND_D */
    853,
    /* AMAND_DB_D */
    856,
    /* AMAND_DB_W */
    859,
    /* AMAND_W */
    862,
    /* AMMAX_D */
    865,
    /* AMMAX_DB_D */
    868,
    /* AMMAX_DB_DU */
    871,
    /* AMMAX_DB_W */
    874,
    /* AMMAX_DB_WU */
    877,
    /* AMMAX_DU */
    880,
    /* AMMAX_W */
    883,
    /* AMMAX_WU */
    886,
    /* AMMIN_D */
    889,
    /* AMMIN_DB_D */
    892,
    /* AMMIN_DB_DU */
    895,
    /* AMMIN_DB_W */
    898,
    /* AMMIN_DB_WU */
    901,
    /* AMMIN_DU */
    904,
    /* AMMIN_W */
    907,
    /* AMMIN_WU */
    910,
    /* AMOR_D */
    913,
    /* AMOR_DB_D */
    916,
    /* AMOR_DB_W */
    919,
    /* AMOR_W */
    922,
    /* AMSWAP_D */
    925,
    /* AMSWAP_DB_D */
    928,
    /* AMSWAP_DB_W */
    931,
    /* AMSWAP_W */
    934,
    /* AMXOR_D */
    937,
    /* AMXOR_DB_D */
    940,
    /* AMXOR_DB_W */
    943,
    /* AMXOR_W */
    946,
    /* AND */
    949,
    /* ANDI */
    952,
    /* ANDN */
    955,
    /* ASRTGT_D */
    958,
    /* ASRTLE_D */
    960,
    /* B */
    962,
    /* BCEQZ */
    963,
    /* BCNEZ */
    965,
    /* BEQ */
    967,
    /* BEQZ */
    970,
    /* BGE */
    972,
    /* BGEU */
    975,
    /* BITREV_4B */
    978,
    /* BITREV_8B */
    980,
    /* BITREV_D */
    982,
    /* BITREV_W */
    984,
    /* BL */
    986,
    /* BLT */
    987,
    /* BLTU */
    990,
    /* BNE */
    993,
    /* BNEZ */
    996,
    /* BREAK */
    998,
    /* BSTRINS_D */
    999,
    /* BSTRINS_W */
    1004,
    /* BSTRPICK_D */
    1009,
    /* BSTRPICK_W */
    1013,
    /* BYTEPICK_D */
    1017,
    /* BYTEPICK_W */
    1021,
    /* CACOP */
    1025,
    /* CLO_D */
    1028,
    /* CLO_W */
    1030,
    /* CLZ_D */
    1032,
    /* CLZ_W */
    1034,
    /* CPUCFG */
    1036,
    /* CRCC_W_B_W */
    1038,
    /* CRCC_W_D_W */
    1041,
    /* CRCC_W_H_W */
    1044,
    /* CRCC_W_W_W */
    1047,
    /* CRC_W_B_W */
    1050,
    /* CRC_W_D_W */
    1053,
    /* CRC_W_H_W */
    1056,
    /* CRC_W_W_W */
    1059,
    /* CSRRD */
    1062,
    /* CSRWR */
    1064,
    /* CSRXCHG */
    1067,
    /* CTO_D */
    1071,
    /* CTO_W */
    1073,
    /* CTZ_D */
    1075,
    /* CTZ_W */
    1077,
    /* DBAR */
    1079,
    /* DBCL */
    1080,
    /* DIV_D */
    1081,
    /* DIV_DU */
    1084,
    /* DIV_W */
    1087,
    /* DIV_WU */
    1090,
    /* ERTN */
    1093,
    /* EXT_W_B */
    1093,
    /* EXT_W_H */
    1095,
    /* FABS_D */
    1097,
    /* FABS_S */
    1099,
    /* FADD_D */
    1101,
    /* FADD_S */
    1104,
    /* FCLASS_D */
    1107,
    /* FCLASS_S */
    1109,
    /* FCMP_CAF_D */
    1111,
    /* FCMP_CAF_S */
    1114,
    /* FCMP_CEQ_D */
    1117,
    /* FCMP_CEQ_S */
    1120,
    /* FCMP_CLE_D */
    1123,
    /* FCMP_CLE_S */
    1126,
    /* FCMP_CLT_D */
    1129,
    /* FCMP_CLT_S */
    1132,
    /* FCMP_CNE_D */
    1135,
    /* FCMP_CNE_S */
    1138,
    /* FCMP_COR_D */
    1141,
    /* FCMP_COR_S */
    1144,
    /* FCMP_CUEQ_D */
    1147,
    /* FCMP_CUEQ_S */
    1150,
    /* FCMP_CULE_D */
    1153,
    /* FCMP_CULE_S */
    1156,
    /* FCMP_CULT_D */
    1159,
    /* FCMP_CULT_S */
    1162,
    /* FCMP_CUNE_D */
    1165,
    /* FCMP_CUNE_S */
    1168,
    /* FCMP_CUN_D */
    1171,
    /* FCMP_CUN_S */
    1174,
    /* FCMP_SAF_D */
    1177,
    /* FCMP_SAF_S */
    1180,
    /* FCMP_SEQ_D */
    1183,
    /* FCMP_SEQ_S */
    1186,
    /* FCMP_SLE_D */
    1189,
    /* FCMP_SLE_S */
    1192,
    /* FCMP_SLT_D */
    1195,
    /* FCMP_SLT_S */
    1198,
    /* FCMP_SNE_D */
    1201,
    /* FCMP_SNE_S */
    1204,
    /* FCMP_SOR_D */
    1207,
    /* FCMP_SOR_S */
    1210,
    /* FCMP_SUEQ_D */
    1213,
    /* FCMP_SUEQ_S */
    1216,
    /* FCMP_SULE_D */
    1219,
    /* FCMP_SULE_S */
    1222,
    /* FCMP_SULT_D */
    1225,
    /* FCMP_SULT_S */
    1228,
    /* FCMP_SUNE_D */
    1231,
    /* FCMP_SUNE_S */
    1234,
    /* FCMP_SUN_D */
    1237,
    /* FCMP_SUN_S */
    1240,
    /* FCOPYSIGN_D */
    1243,
    /* FCOPYSIGN_S */
    1246,
    /* FCVT_D_S */
    1249,
    /* FCVT_S_D */
    1251,
    /* FDIV_D */
    1253,
    /* FDIV_S */
    1256,
    /* FFINT_D_L */
    1259,
    /* FFINT_D_W */
    1261,
    /* FFINT_S_L */
    1263,
    /* FFINT_S_W */
    1265,
    /* FLDGT_D */
    1267,
    /* FLDGT_S */
    1270,
    /* FLDLE_D */
    1273,
    /* FLDLE_S */
    1276,
    /* FLDX_D */
    1279,
    /* FLDX_S */
    1282,
    /* FLD_D */
    1285,
    /* FLD_S */
    1288,
    /* FLOGB_D */
    1291,
    /* FLOGB_S */
    1293,
    /* FMADD_D */
    1295,
    /* FMADD_S */
    1299,
    /* FMAXA_D */
    1303,
    /* FMAXA_S */
    1306,
    /* FMAX_D */
    1309,
    /* FMAX_S */
    1312,
    /* FMINA_D */
    1315,
    /* FMINA_S */
    1318,
    /* FMIN_D */
    1321,
    /* FMIN_S */
    1324,
    /* FMOV_D */
    1327,
    /* FMOV_S */
    1329,
    /* FMSUB_D */
    1331,
    /* FMSUB_S */
    1335,
    /* FMUL_D */
    1339,
    /* FMUL_S */
    1342,
    /* FNEG_D */
    1345,
    /* FNEG_S */
    1347,
    /* FNMADD_D */
    1349,
    /* FNMADD_S */
    1353,
    /* FNMSUB_D */
    1357,
    /* FNMSUB_S */
    1361,
    /* FRECIP_D */
    1365,
    /* FRECIP_S */
    1367,
    /* FRINT_D */
    1369,
    /* FRINT_S */
    1371,
    /* FRSQRT_D */
    1373,
    /* FRSQRT_S */
    1375,
    /* FSCALEB_D */
    1377,
    /* FSCALEB_S */
    1380,
    /* FSEL_D */
    1383,
    /* FSEL_S */
    1387,
    /* FSQRT_D */
    1391,
    /* FSQRT_S */
    1393,
    /* FSTGT_D */
    1395,
    /* FSTGT_S */
    1398,
    /* FSTLE_D */
    1401,
    /* FSTLE_S */
    1404,
    /* FSTX_D */
    1407,
    /* FSTX_S */
    1410,
    /* FST_D */
    1413,
    /* FST_S */
    1416,
    /* FSUB_D */
    1419,
    /* FSUB_S */
    1422,
    /* FTINTRM_L_D */
    1425,
    /* FTINTRM_L_S */
    1427,
    /* FTINTRM_W_D */
    1429,
    /* FTINTRM_W_S */
    1431,
    /* FTINTRNE_L_D */
    1433,
    /* FTINTRNE_L_S */
    1435,
    /* FTINTRNE_W_D */
    1437,
    /* FTINTRNE_W_S */
    1439,
    /* FTINTRP_L_D */
    1441,
    /* FTINTRP_L_S */
    1443,
    /* FTINTRP_W_D */
    1445,
    /* FTINTRP_W_S */
    1447,
    /* FTINTRZ_L_D */
    1449,
    /* FTINTRZ_L_S */
    1451,
    /* FTINTRZ_W_D */
    1453,
    /* FTINTRZ_W_S */
    1455,
    /* FTINT_L_D */
    1457,
    /* FTINT_L_S */
    1459,
    /* FTINT_W_D */
    1461,
    /* FTINT_W_S */
    1463,
    /* IBAR */
    1465,
    /* IDLE */
    1466,
    /* INVTLB */
    1467,
    /* IOCSRRD_B */
    1470,
    /* IOCSRRD_D */
    1472,
    /* IOCSRRD_H */
    1474,
    /* IOCSRRD_W */
    1476,
    /* IOCSRWR_B */
    1478,
    /* IOCSRWR_D */
    1480,
    /* IOCSRWR_H */
    1482,
    /* IOCSRWR_W */
    1484,
    /* JIRL */
    1486,
    /* LDDIR */
    1489,
    /* LDGT_B */
    1492,
    /* LDGT_D */
    1495,
    /* LDGT_H */
    1498,
    /* LDGT_W */
    1501,
    /* LDLE_B */
    1504,
    /* LDLE_D */
    1507,
    /* LDLE_H */
    1510,
    /* LDLE_W */
    1513,
    /* LDPTE */
    1516,
    /* LDPTR_D */
    1518,
    /* LDPTR_W */
    1521,
    /* LDX_B */
    1524,
    /* LDX_BU */
    1527,
    /* LDX_D */
    1530,
    /* LDX_H */
    1533,
    /* LDX_HU */
    1536,
    /* LDX_W */
    1539,
    /* LDX_WU */
    1542,
    /* LD_B */
    1545,
    /* LD_BU */
    1548,
    /* LD_D */
    1551,
    /* LD_H */
    1554,
    /* LD_HU */
    1557,
    /* LD_W */
    1560,
    /* LD_WU */
    1563,
    /* LL_D */
    1566,
    /* LL_W */
    1569,
    /* LU12I_W */
    1572,
    /* LU32I_D */
    1574,
    /* LU52I_D */
    1577,
    /* MASKEQZ */
    1580,
    /* MASKNEZ */
    1583,
    /* MOD_D */
    1586,
    /* MOD_DU */
    1589,
    /* MOD_W */
    1592,
    /* MOD_WU */
    1595,
    /* MOVCF2FR_S */
    1598,
    /* MOVCF2GR */
    1600,
    /* MOVFCSR2GR */
    1602,
    /* MOVFR2CF_S */
    1604,
    /* MOVFR2GR_D */
    1606,
    /* MOVFR2GR_S */
    1608,
    /* MOVFR2GR_S_64 */
    1610,
    /* MOVFRH2GR_S */
    1612,
    /* MOVGR2CF */
    1614,
    /* MOVGR2FCSR */
    1616,
    /* MOVGR2FRH_W */
    1618,
    /* MOVGR2FR_D */
    1621,
    /* MOVGR2FR_W */
    1623,
    /* MOVGR2FR_W_64 */
    1625,
    /* MULH_D */
    1627,
    /* MULH_DU */
    1630,
    /* MULH_W */
    1633,
    /* MULH_WU */
    1636,
    /* MULW_D_W */
    1639,
    /* MULW_D_WU */
    1642,
    /* MUL_D */
    1645,
    /* MUL_W */
    1648,
    /* NOR */
    1651,
    /* OR */
    1654,
    /* ORI */
    1657,
    /* ORN */
    1660,
    /* PCADDI */
    1663,
    /* PCADDU12I */
    1665,
    /* PCADDU18I */
    1667,
    /* PCALAU12I */
    1669,
    /* PRELD */
    1671,
    /* PRELDX */
    1674,
    /* RDTIMEH_W */
    1677,
    /* RDTIMEL_W */
    1679,
    /* RDTIME_D */
    1681,
    /* REVB_2H */
    1683,
    /* REVB_2W */
    1685,
    /* REVB_4H */
    1687,
    /* REVB_D */
    1689,
    /* REVH_2W */
    1691,
    /* REVH_D */
    1693,
    /* ROTRI_D */
    1695,
    /* ROTRI_W */
    1698,
    /* ROTR_D */
    1701,
    /* ROTR_W */
    1704,
    /* SC_D */
    1707,
    /* SC_W */
    1711,
    /* SLLI_D */
    1715,
    /* SLLI_W */
    1718,
    /* SLL_D */
    1721,
    /* SLL_W */
    1724,
    /* SLT */
    1727,
    /* SLTI */
    1730,
    /* SLTU */
    1733,
    /* SLTUI */
    1736,
    /* SRAI_D */
    1739,
    /* SRAI_W */
    1742,
    /* SRA_D */
    1745,
    /* SRA_W */
    1748,
    /* SRLI_D */
    1751,
    /* SRLI_W */
    1754,
    /* SRL_D */
    1757,
    /* SRL_W */
    1760,
    /* STGT_B */
    1763,
    /* STGT_D */
    1766,
    /* STGT_H */
    1769,
    /* STGT_W */
    1772,
    /* STLE_B */
    1775,
    /* STLE_D */
    1778,
    /* STLE_H */
    1781,
    /* STLE_W */
    1784,
    /* STPTR_D */
    1787,
    /* STPTR_W */
    1790,
    /* STX_B */
    1793,
    /* STX_D */
    1796,
    /* STX_H */
    1799,
    /* STX_W */
    1802,
    /* ST_B */
    1805,
    /* ST_D */
    1808,
    /* ST_H */
    1811,
    /* ST_W */
    1814,
    /* SUB_D */
    1817,
    /* SUB_W */
    1820,
    /* SYSCALL */
    1823,
    /* TLBCLR */
    1824,
    /* TLBFILL */
    1824,
    /* TLBFLUSH */
    1824,
    /* TLBRD */
    1824,
    /* TLBSRCH */
    1824,
    /* TLBWR */
    1824,
    /* XOR */
    1824,
    /* XORI */
    1827,
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
    /* PseudoAtomicLoadAdd32 */
    GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoAtomicLoadAnd32 */
    GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoAtomicLoadNand32 */
    GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoAtomicLoadNand64 */
    GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoAtomicLoadOr32 */
    GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoAtomicLoadSub32 */
    GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoAtomicLoadXor32 */
    GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoAtomicStoreD */
    GPR, GPR, GPR, 
    /* PseudoAtomicStoreW */
    GPR, GPR, GPR, 
    /* PseudoAtomicSwap32 */
    GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoBR */
    simm26_b, 
    /* PseudoBRIND */
    GPR, simm16_lsl2, 
    /* PseudoB_TAIL */
    simm26_b, 
    /* PseudoCALL */
    simm26_symbol, 
    /* PseudoCALLIndirect */
    GPR, 
    /* PseudoCmpXchg32 */
    GPR, GPR, GPR, GPR, GPR, 
    /* PseudoCmpXchg64 */
    GPR, GPR, GPR, GPR, GPR, 
    /* PseudoJIRL_CALL */
    GPR, simm16_lsl2, 
    /* PseudoJIRL_TAIL */
    GPR, simm16_lsl2, 
    /* PseudoLA_ABS */
    GPR, bare_symbol, 
    /* PseudoLA_ABS_LARGE */
    GPR, GPR, bare_symbol, 
    /* PseudoLA_GOT */
    GPR, bare_symbol, 
    /* PseudoLA_GOT_LARGE */
    GPR, GPR, bare_symbol, 
    /* PseudoLA_PCREL */
    GPR, bare_symbol, 
    /* PseudoLA_PCREL_LARGE */
    GPR, GPR, bare_symbol, 
    /* PseudoLA_TLS_GD */
    GPR, bare_symbol, 
    /* PseudoLA_TLS_GD_LARGE */
    GPR, GPR, bare_symbol, 
    /* PseudoLA_TLS_IE */
    GPR, bare_symbol, 
    /* PseudoLA_TLS_IE_LARGE */
    GPR, GPR, bare_symbol, 
    /* PseudoLA_TLS_LD */
    GPR, bare_symbol, 
    /* PseudoLA_TLS_LD_LARGE */
    GPR, GPR, bare_symbol, 
    /* PseudoLA_TLS_LE */
    GPR, bare_symbol, 
    /* PseudoLD_CFR */
    CFR, GPR, grlenimm, 
    /* PseudoLI_D */
    GPR, grlenimm, 
    /* PseudoLI_W */
    GPR, imm32, 
    /* PseudoMaskedAtomicLoadAdd32 */
    GPR, GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoMaskedAtomicLoadMax32 */
    GPR, GPR, GPR, GPR, GPR, GPR, grlenimm, grlenimm, 
    /* PseudoMaskedAtomicLoadMin32 */
    GPR, GPR, GPR, GPR, GPR, GPR, grlenimm, grlenimm, 
    /* PseudoMaskedAtomicLoadNand32 */
    GPR, GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoMaskedAtomicLoadSub32 */
    GPR, GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoMaskedAtomicLoadUMax32 */
    GPR, GPR, GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoMaskedAtomicLoadUMin32 */
    GPR, GPR, GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoMaskedAtomicSwap32 */
    GPR, GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoMaskedCmpXchg32 */
    GPR, GPR, GPR, GPR, GPR, GPR, grlenimm, 
    /* PseudoRET */
    /* PseudoST_CFR */
    CFR, GPR, grlenimm, 
    /* PseudoTAIL */
    simm26_symbol, 
    /* PseudoTAILIndirect */
    GPRT, 
    /* PseudoUNIMP */
    /* RDFCSR */
    GPR, uimm2, 
    /* WRFCSR */
    uimm2, GPR, 
    /* ADDI_D */
    GPR, GPR, simm12_addlike, 
    /* ADDI_W */
    GPR, GPR, simm12_addlike, 
    /* ADDU16I_D */
    GPR, GPR, simm16, 
    /* ADD_D */
    GPR, GPR, GPR, 
    /* ADD_W */
    GPR, GPR, GPR, 
    /* ALSL_D */
    GPR, GPR, GPR, uimm2_plus1, 
    /* ALSL_W */
    GPR, GPR, GPR, uimm2_plus1, 
    /* ALSL_WU */
    GPR, GPR, GPR, uimm2_plus1, 
    /* AMADD_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMADD_DB_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMADD_DB_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMADD_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMAND_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMAND_DB_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMAND_DB_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMAND_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMMAX_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMMAX_DB_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMMAX_DB_DU */
    GPR, GPR, GPRMemAtomic, 
    /* AMMAX_DB_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMMAX_DB_WU */
    GPR, GPR, GPRMemAtomic, 
    /* AMMAX_DU */
    GPR, GPR, GPRMemAtomic, 
    /* AMMAX_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMMAX_WU */
    GPR, GPR, GPRMemAtomic, 
    /* AMMIN_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMMIN_DB_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMMIN_DB_DU */
    GPR, GPR, GPRMemAtomic, 
    /* AMMIN_DB_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMMIN_DB_WU */
    GPR, GPR, GPRMemAtomic, 
    /* AMMIN_DU */
    GPR, GPR, GPRMemAtomic, 
    /* AMMIN_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMMIN_WU */
    GPR, GPR, GPRMemAtomic, 
    /* AMOR_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMOR_DB_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMOR_DB_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMOR_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMSWAP_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMSWAP_DB_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMSWAP_DB_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMSWAP_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMXOR_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMXOR_DB_D */
    GPR, GPR, GPRMemAtomic, 
    /* AMXOR_DB_W */
    GPR, GPR, GPRMemAtomic, 
    /* AMXOR_W */
    GPR, GPR, GPRMemAtomic, 
    /* AND */
    GPR, GPR, GPR, 
    /* ANDI */
    GPR, GPR, uimm12, 
    /* ANDN */
    GPR, GPR, GPR, 
    /* ASRTGT_D */
    GPR, GPR, 
    /* ASRTLE_D */
    GPR, GPR, 
    /* B */
    simm26_b, 
    /* BCEQZ */
    CFR, simm21_lsl2, 
    /* BCNEZ */
    CFR, simm21_lsl2, 
    /* BEQ */
    GPR, GPR, simm16_lsl2_br, 
    /* BEQZ */
    GPR, simm21_lsl2, 
    /* BGE */
    GPR, GPR, simm16_lsl2_br, 
    /* BGEU */
    GPR, GPR, simm16_lsl2_br, 
    /* BITREV_4B */
    GPR, GPR, 
    /* BITREV_8B */
    GPR, GPR, 
    /* BITREV_D */
    GPR, GPR, 
    /* BITREV_W */
    GPR, GPR, 
    /* BL */
    simm26_symbol, 
    /* BLT */
    GPR, GPR, simm16_lsl2_br, 
    /* BLTU */
    GPR, GPR, simm16_lsl2_br, 
    /* BNE */
    GPR, GPR, simm16_lsl2_br, 
    /* BNEZ */
    GPR, simm21_lsl2, 
    /* BREAK */
    uimm15, 
    /* BSTRINS_D */
    GPR, GPR, GPR, uimm6, uimm6, 
    /* BSTRINS_W */
    GPR, GPR, GPR, uimm5, uimm5, 
    /* BSTRPICK_D */
    GPR, GPR, uimm6, uimm6, 
    /* BSTRPICK_W */
    GPR, GPR, uimm5, uimm5, 
    /* BYTEPICK_D */
    GPR, GPR, GPR, uimm3, 
    /* BYTEPICK_W */
    GPR, GPR, GPR, uimm2, 
    /* CACOP */
    uimm5, GPR, simm12, 
    /* CLO_D */
    GPR, GPR, 
    /* CLO_W */
    GPR, GPR, 
    /* CLZ_D */
    GPR, GPR, 
    /* CLZ_W */
    GPR, GPR, 
    /* CPUCFG */
    GPR, GPR, 
    /* CRCC_W_B_W */
    GPR, GPR, GPR, 
    /* CRCC_W_D_W */
    GPR, GPR, GPR, 
    /* CRCC_W_H_W */
    GPR, GPR, GPR, 
    /* CRCC_W_W_W */
    GPR, GPR, GPR, 
    /* CRC_W_B_W */
    GPR, GPR, GPR, 
    /* CRC_W_D_W */
    GPR, GPR, GPR, 
    /* CRC_W_H_W */
    GPR, GPR, GPR, 
    /* CRC_W_W_W */
    GPR, GPR, GPR, 
    /* CSRRD */
    GPR, uimm14, 
    /* CSRWR */
    GPR, GPR, uimm14, 
    /* CSRXCHG */
    GPR, GPR, GPR, uimm14, 
    /* CTO_D */
    GPR, GPR, 
    /* CTO_W */
    GPR, GPR, 
    /* CTZ_D */
    GPR, GPR, 
    /* CTZ_W */
    GPR, GPR, 
    /* DBAR */
    uimm15, 
    /* DBCL */
    uimm15, 
    /* DIV_D */
    GPR, GPR, GPR, 
    /* DIV_DU */
    GPR, GPR, GPR, 
    /* DIV_W */
    GPR, GPR, GPR, 
    /* DIV_WU */
    GPR, GPR, GPR, 
    /* ERTN */
    /* EXT_W_B */
    GPR, GPR, 
    /* EXT_W_H */
    GPR, GPR, 
    /* FABS_D */
    FPR64, FPR64, 
    /* FABS_S */
    FPR32, FPR32, 
    /* FADD_D */
    FPR64, FPR64, FPR64, 
    /* FADD_S */
    FPR32, FPR32, FPR32, 
    /* FCLASS_D */
    FPR64, FPR64, 
    /* FCLASS_S */
    FPR32, FPR32, 
    /* FCMP_CAF_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CAF_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CEQ_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CEQ_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CLE_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CLE_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CLT_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CLT_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CNE_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CNE_S */
    CFR, FPR32, FPR32, 
    /* FCMP_COR_D */
    CFR, FPR64, FPR64, 
    /* FCMP_COR_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CUEQ_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CUEQ_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CULE_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CULE_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CULT_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CULT_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CUNE_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CUNE_S */
    CFR, FPR32, FPR32, 
    /* FCMP_CUN_D */
    CFR, FPR64, FPR64, 
    /* FCMP_CUN_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SAF_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SAF_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SEQ_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SEQ_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SLE_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SLE_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SLT_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SLT_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SNE_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SNE_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SOR_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SOR_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SUEQ_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SUEQ_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SULE_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SULE_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SULT_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SULT_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SUNE_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SUNE_S */
    CFR, FPR32, FPR32, 
    /* FCMP_SUN_D */
    CFR, FPR64, FPR64, 
    /* FCMP_SUN_S */
    CFR, FPR32, FPR32, 
    /* FCOPYSIGN_D */
    FPR64, FPR64, FPR64, 
    /* FCOPYSIGN_S */
    FPR32, FPR32, FPR32, 
    /* FCVT_D_S */
    FPR64, FPR32, 
    /* FCVT_S_D */
    FPR32, FPR64, 
    /* FDIV_D */
    FPR64, FPR64, FPR64, 
    /* FDIV_S */
    FPR32, FPR32, FPR32, 
    /* FFINT_D_L */
    FPR64, FPR64, 
    /* FFINT_D_W */
    FPR64, FPR32, 
    /* FFINT_S_L */
    FPR32, FPR64, 
    /* FFINT_S_W */
    FPR32, FPR32, 
    /* FLDGT_D */
    FPR64, GPR, GPR, 
    /* FLDGT_S */
    FPR32, GPR, GPR, 
    /* FLDLE_D */
    FPR64, GPR, GPR, 
    /* FLDLE_S */
    FPR32, GPR, GPR, 
    /* FLDX_D */
    FPR64, GPR, GPR, 
    /* FLDX_S */
    FPR32, GPR, GPR, 
    /* FLD_D */
    FPR64, GPR, simm12, 
    /* FLD_S */
    FPR32, GPR, simm12, 
    /* FLOGB_D */
    FPR64, FPR64, 
    /* FLOGB_S */
    FPR32, FPR32, 
    /* FMADD_D */
    FPR64, FPR64, FPR64, FPR64, 
    /* FMADD_S */
    FPR32, FPR32, FPR32, FPR32, 
    /* FMAXA_D */
    FPR64, FPR64, FPR64, 
    /* FMAXA_S */
    FPR32, FPR32, FPR32, 
    /* FMAX_D */
    FPR64, FPR64, FPR64, 
    /* FMAX_S */
    FPR32, FPR32, FPR32, 
    /* FMINA_D */
    FPR64, FPR64, FPR64, 
    /* FMINA_S */
    FPR32, FPR32, FPR32, 
    /* FMIN_D */
    FPR64, FPR64, FPR64, 
    /* FMIN_S */
    FPR32, FPR32, FPR32, 
    /* FMOV_D */
    FPR64, FPR64, 
    /* FMOV_S */
    FPR32, FPR32, 
    /* FMSUB_D */
    FPR64, FPR64, FPR64, FPR64, 
    /* FMSUB_S */
    FPR32, FPR32, FPR32, FPR32, 
    /* FMUL_D */
    FPR64, FPR64, FPR64, 
    /* FMUL_S */
    FPR32, FPR32, FPR32, 
    /* FNEG_D */
    FPR64, FPR64, 
    /* FNEG_S */
    FPR32, FPR32, 
    /* FNMADD_D */
    FPR64, FPR64, FPR64, FPR64, 
    /* FNMADD_S */
    FPR32, FPR32, FPR32, FPR32, 
    /* FNMSUB_D */
    FPR64, FPR64, FPR64, FPR64, 
    /* FNMSUB_S */
    FPR32, FPR32, FPR32, FPR32, 
    /* FRECIP_D */
    FPR64, FPR64, 
    /* FRECIP_S */
    FPR32, FPR32, 
    /* FRINT_D */
    FPR64, FPR64, 
    /* FRINT_S */
    FPR32, FPR32, 
    /* FRSQRT_D */
    FPR64, FPR64, 
    /* FRSQRT_S */
    FPR32, FPR32, 
    /* FSCALEB_D */
    FPR64, FPR64, FPR64, 
    /* FSCALEB_S */
    FPR32, FPR32, FPR32, 
    /* FSEL_D */
    FPR64, FPR64, FPR64, CFR, 
    /* FSEL_S */
    FPR32, FPR32, FPR32, CFR, 
    /* FSQRT_D */
    FPR64, FPR64, 
    /* FSQRT_S */
    FPR32, FPR32, 
    /* FSTGT_D */
    FPR64, GPR, GPR, 
    /* FSTGT_S */
    FPR32, GPR, GPR, 
    /* FSTLE_D */
    FPR64, GPR, GPR, 
    /* FSTLE_S */
    FPR32, GPR, GPR, 
    /* FSTX_D */
    FPR64, GPR, GPR, 
    /* FSTX_S */
    FPR32, GPR, GPR, 
    /* FST_D */
    FPR64, GPR, simm12, 
    /* FST_S */
    FPR32, GPR, simm12, 
    /* FSUB_D */
    FPR64, FPR64, FPR64, 
    /* FSUB_S */
    FPR32, FPR32, FPR32, 
    /* FTINTRM_L_D */
    FPR64, FPR64, 
    /* FTINTRM_L_S */
    FPR64, FPR32, 
    /* FTINTRM_W_D */
    FPR32, FPR64, 
    /* FTINTRM_W_S */
    FPR32, FPR32, 
    /* FTINTRNE_L_D */
    FPR64, FPR64, 
    /* FTINTRNE_L_S */
    FPR64, FPR32, 
    /* FTINTRNE_W_D */
    FPR32, FPR64, 
    /* FTINTRNE_W_S */
    FPR32, FPR32, 
    /* FTINTRP_L_D */
    FPR64, FPR64, 
    /* FTINTRP_L_S */
    FPR64, FPR32, 
    /* FTINTRP_W_D */
    FPR32, FPR64, 
    /* FTINTRP_W_S */
    FPR32, FPR32, 
    /* FTINTRZ_L_D */
    FPR64, FPR64, 
    /* FTINTRZ_L_S */
    FPR64, FPR32, 
    /* FTINTRZ_W_D */
    FPR32, FPR64, 
    /* FTINTRZ_W_S */
    FPR32, FPR32, 
    /* FTINT_L_D */
    FPR64, FPR64, 
    /* FTINT_L_S */
    FPR64, FPR32, 
    /* FTINT_W_D */
    FPR32, FPR64, 
    /* FTINT_W_S */
    FPR32, FPR32, 
    /* IBAR */
    uimm15, 
    /* IDLE */
    uimm15, 
    /* INVTLB */
    GPR, GPR, uimm5, 
    /* IOCSRRD_B */
    GPR, GPR, 
    /* IOCSRRD_D */
    GPR, GPR, 
    /* IOCSRRD_H */
    GPR, GPR, 
    /* IOCSRRD_W */
    GPR, GPR, 
    /* IOCSRWR_B */
    GPR, GPR, 
    /* IOCSRWR_D */
    GPR, GPR, 
    /* IOCSRWR_H */
    GPR, GPR, 
    /* IOCSRWR_W */
    GPR, GPR, 
    /* JIRL */
    GPR, GPR, simm16_lsl2, 
    /* LDDIR */
    GPR, GPR, uimm8, 
    /* LDGT_B */
    GPR, GPR, GPR, 
    /* LDGT_D */
    GPR, GPR, GPR, 
    /* LDGT_H */
    GPR, GPR, GPR, 
    /* LDGT_W */
    GPR, GPR, GPR, 
    /* LDLE_B */
    GPR, GPR, GPR, 
    /* LDLE_D */
    GPR, GPR, GPR, 
    /* LDLE_H */
    GPR, GPR, GPR, 
    /* LDLE_W */
    GPR, GPR, GPR, 
    /* LDPTE */
    GPR, uimm8, 
    /* LDPTR_D */
    GPR, GPR, simm14_lsl2, 
    /* LDPTR_W */
    GPR, GPR, simm14_lsl2, 
    /* LDX_B */
    GPR, GPR, GPR, 
    /* LDX_BU */
    GPR, GPR, GPR, 
    /* LDX_D */
    GPR, GPR, GPR, 
    /* LDX_H */
    GPR, GPR, GPR, 
    /* LDX_HU */
    GPR, GPR, GPR, 
    /* LDX_W */
    GPR, GPR, GPR, 
    /* LDX_WU */
    GPR, GPR, GPR, 
    /* LD_B */
    GPR, GPR, simm12_addlike, 
    /* LD_BU */
    GPR, GPR, simm12_addlike, 
    /* LD_D */
    GPR, GPR, simm12_addlike, 
    /* LD_H */
    GPR, GPR, simm12_addlike, 
    /* LD_HU */
    GPR, GPR, simm12_addlike, 
    /* LD_W */
    GPR, GPR, simm12_addlike, 
    /* LD_WU */
    GPR, GPR, simm12_addlike, 
    /* LL_D */
    GPR, GPR, simm14_lsl2, 
    /* LL_W */
    GPR, GPR, simm14_lsl2, 
    /* LU12I_W */
    GPR, simm20_lu12iw, 
    /* LU32I_D */
    GPR, GPR, simm20_lu32id, 
    /* LU52I_D */
    GPR, GPR, simm12_lu52id, 
    /* MASKEQZ */
    GPR, GPR, GPR, 
    /* MASKNEZ */
    GPR, GPR, GPR, 
    /* MOD_D */
    GPR, GPR, GPR, 
    /* MOD_DU */
    GPR, GPR, GPR, 
    /* MOD_W */
    GPR, GPR, GPR, 
    /* MOD_WU */
    GPR, GPR, GPR, 
    /* MOVCF2FR_S */
    FPR32, CFR, 
    /* MOVCF2GR */
    GPR, CFR, 
    /* MOVFCSR2GR */
    GPR, FCSR, 
    /* MOVFR2CF_S */
    CFR, FPR32, 
    /* MOVFR2GR_D */
    GPR, FPR64, 
    /* MOVFR2GR_S */
    GPR, FPR32, 
    /* MOVFR2GR_S_64 */
    GPR, FPR64, 
    /* MOVFRH2GR_S */
    GPR, FPR64, 
    /* MOVGR2CF */
    CFR, GPR, 
    /* MOVGR2FCSR */
    FCSR, GPR, 
    /* MOVGR2FRH_W */
    FPR64, FPR64, GPR, 
    /* MOVGR2FR_D */
    FPR64, GPR, 
    /* MOVGR2FR_W */
    FPR32, GPR, 
    /* MOVGR2FR_W_64 */
    FPR64, GPR, 
    /* MULH_D */
    GPR, GPR, GPR, 
    /* MULH_DU */
    GPR, GPR, GPR, 
    /* MULH_W */
    GPR, GPR, GPR, 
    /* MULH_WU */
    GPR, GPR, GPR, 
    /* MULW_D_W */
    GPR, GPR, GPR, 
    /* MULW_D_WU */
    GPR, GPR, GPR, 
    /* MUL_D */
    GPR, GPR, GPR, 
    /* MUL_W */
    GPR, GPR, GPR, 
    /* NOR */
    GPR, GPR, GPR, 
    /* OR */
    GPR, GPR, GPR, 
    /* ORI */
    GPR, GPR, uimm12_ori, 
    /* ORN */
    GPR, GPR, GPR, 
    /* PCADDI */
    GPR, simm20, 
    /* PCADDU12I */
    GPR, simm20, 
    /* PCADDU18I */
    GPR, simm20, 
    /* PCALAU12I */
    GPR, simm20_pcalau12i, 
    /* PRELD */
    uimm5, GPR, simm12, 
    /* PRELDX */
    uimm5, GPR, GPR, 
    /* RDTIMEH_W */
    GPR, GPR, 
    /* RDTIMEL_W */
    GPR, GPR, 
    /* RDTIME_D */
    GPR, GPR, 
    /* REVB_2H */
    GPR, GPR, 
    /* REVB_2W */
    GPR, GPR, 
    /* REVB_4H */
    GPR, GPR, 
    /* REVB_D */
    GPR, GPR, 
    /* REVH_2W */
    GPR, GPR, 
    /* REVH_D */
    GPR, GPR, 
    /* ROTRI_D */
    GPR, GPR, uimm6, 
    /* ROTRI_W */
    GPR, GPR, uimm5, 
    /* ROTR_D */
    GPR, GPR, GPR, 
    /* ROTR_W */
    GPR, GPR, GPR, 
    /* SC_D */
    GPR, GPR, GPR, simm14_lsl2, 
    /* SC_W */
    GPR, GPR, GPR, simm14_lsl2, 
    /* SLLI_D */
    GPR, GPR, uimm6, 
    /* SLLI_W */
    GPR, GPR, uimm5, 
    /* SLL_D */
    GPR, GPR, GPR, 
    /* SLL_W */
    GPR, GPR, GPR, 
    /* SLT */
    GPR, GPR, GPR, 
    /* SLTI */
    GPR, GPR, simm12, 
    /* SLTU */
    GPR, GPR, GPR, 
    /* SLTUI */
    GPR, GPR, simm12, 
    /* SRAI_D */
    GPR, GPR, uimm6, 
    /* SRAI_W */
    GPR, GPR, uimm5, 
    /* SRA_D */
    GPR, GPR, GPR, 
    /* SRA_W */
    GPR, GPR, GPR, 
    /* SRLI_D */
    GPR, GPR, uimm6, 
    /* SRLI_W */
    GPR, GPR, uimm5, 
    /* SRL_D */
    GPR, GPR, GPR, 
    /* SRL_W */
    GPR, GPR, GPR, 
    /* STGT_B */
    GPR, GPR, GPR, 
    /* STGT_D */
    GPR, GPR, GPR, 
    /* STGT_H */
    GPR, GPR, GPR, 
    /* STGT_W */
    GPR, GPR, GPR, 
    /* STLE_B */
    GPR, GPR, GPR, 
    /* STLE_D */
    GPR, GPR, GPR, 
    /* STLE_H */
    GPR, GPR, GPR, 
    /* STLE_W */
    GPR, GPR, GPR, 
    /* STPTR_D */
    GPR, GPR, simm14_lsl2, 
    /* STPTR_W */
    GPR, GPR, simm14_lsl2, 
    /* STX_B */
    GPR, GPR, GPR, 
    /* STX_D */
    GPR, GPR, GPR, 
    /* STX_H */
    GPR, GPR, GPR, 
    /* STX_W */
    GPR, GPR, GPR, 
    /* ST_B */
    GPR, GPR, simm12_addlike, 
    /* ST_D */
    GPR, GPR, simm12_addlike, 
    /* ST_H */
    GPR, GPR, simm12_addlike, 
    /* ST_W */
    GPR, GPR, simm12_addlike, 
    /* SUB_D */
    GPR, GPR, GPR, 
    /* SUB_W */
    GPR, GPR, GPR, 
    /* SYSCALL */
    uimm15, 
    /* TLBCLR */
    /* TLBFILL */
    /* TLBFLUSH */
    /* TLBRD */
    /* TLBSRCH */
    /* TLBWR */
    /* XOR */
    GPR, GPR, GPR, 
    /* XORI */
    GPR, GPR, uimm12, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace LoongArch
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace LoongArch {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace LoongArch
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace LoongArch {
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
} // end namespace LoongArch
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace LoongArch {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace LoongArch
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace LoongArch_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace LoongArch_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace LoongArch_MC {

} // end namespace LoongArch_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace LoongArch_MC {

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_IsLA64Bit = 10,
  Feature_IsLA32Bit = 9,
  Feature_HasBasicFBit = 1,
  Feature_HasBasicDBit = 0,
  Feature_HasExtLSXBit = 4,
  Feature_HasExtLASXBit = 2,
  Feature_HasExtLVZBit = 5,
  Feature_HasExtLBTBit = 3,
  Feature_HasLaGlobalWithPcrelBit = 7,
  Feature_HasLaGlobalWithAbsBit = 6,
  Feature_HasLaLocalWithAbsBit = 8,
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  "Feature_HasBasicD",
  "Feature_HasBasicF",
  "Feature_HasExtLASX",
  "Feature_HasExtLBT",
  "Feature_HasExtLSX",
  "Feature_HasExtLVZ",
  "Feature_HasLaGlobalWithAbs",
  "Feature_HasLaGlobalWithPcrel",
  "Feature_HasLaLocalWithAbs",
  "Feature_IsLA32",
  "Feature_IsLA64",
  nullptr
};

#endif // NDEBUG

FeatureBitset computeAvailableFeatures(const FeatureBitset &FB) {
  FeatureBitset Features;
  if (FB[LoongArch::Feature64Bit])
    Features.set(Feature_IsLA64Bit);
  if (!FB[LoongArch::Feature64Bit])
    Features.set(Feature_IsLA32Bit);
  if (FB[LoongArch::FeatureBasicF])
    Features.set(Feature_HasBasicFBit);
  if (FB[LoongArch::FeatureBasicD])
    Features.set(Feature_HasBasicDBit);
  if (FB[LoongArch::FeatureExtLSX])
    Features.set(Feature_HasExtLSXBit);
  if (FB[LoongArch::FeatureExtLASX])
    Features.set(Feature_HasExtLASXBit);
  if (FB[LoongArch::FeatureExtLVZ])
    Features.set(Feature_HasExtLVZBit);
  if (FB[LoongArch::FeatureExtLBT])
    Features.set(Feature_HasExtLBTBit);
  if (FB[LoongArch::LaGlobalWithPcrel])
    Features.set(Feature_HasLaGlobalWithPcrelBit);
  if (FB[LoongArch::LaGlobalWithAbs])
    Features.set(Feature_HasLaGlobalWithAbsBit);
  if (FB[LoongArch::LaLocalWithAbs])
    Features.set(Feature_HasLaLocalWithAbsBit);
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
  CEFBS_HasBasicD,
  CEFBS_HasBasicF,
  CEFBS_IsLA64,
  CEFBS_HasBasicD_IsLA32,
  CEFBS_HasBasicD_IsLA64,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
  {Feature_HasBasicDBit, },
  {Feature_HasBasicFBit, },
  {Feature_IsLA64Bit, },
  {Feature_HasBasicDBit, Feature_IsLA32Bit, },
  {Feature_HasBasicDBit, Feature_IsLA64Bit, },
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
    CEFBS_None, // PseudoAtomicLoadAdd32 = 254
    CEFBS_None, // PseudoAtomicLoadAnd32 = 255
    CEFBS_None, // PseudoAtomicLoadNand32 = 256
    CEFBS_None, // PseudoAtomicLoadNand64 = 257
    CEFBS_None, // PseudoAtomicLoadOr32 = 258
    CEFBS_None, // PseudoAtomicLoadSub32 = 259
    CEFBS_None, // PseudoAtomicLoadXor32 = 260
    CEFBS_IsLA64, // PseudoAtomicStoreD = 261
    CEFBS_None, // PseudoAtomicStoreW = 262
    CEFBS_None, // PseudoAtomicSwap32 = 263
    CEFBS_None, // PseudoBR = 264
    CEFBS_None, // PseudoBRIND = 265
    CEFBS_None, // PseudoB_TAIL = 266
    CEFBS_None, // PseudoCALL = 267
    CEFBS_None, // PseudoCALLIndirect = 268
    CEFBS_None, // PseudoCmpXchg32 = 269
    CEFBS_None, // PseudoCmpXchg64 = 270
    CEFBS_None, // PseudoJIRL_CALL = 271
    CEFBS_None, // PseudoJIRL_TAIL = 272
    CEFBS_None, // PseudoLA_ABS = 273
    CEFBS_None, // PseudoLA_ABS_LARGE = 274
    CEFBS_None, // PseudoLA_GOT = 275
    CEFBS_IsLA64, // PseudoLA_GOT_LARGE = 276
    CEFBS_None, // PseudoLA_PCREL = 277
    CEFBS_IsLA64, // PseudoLA_PCREL_LARGE = 278
    CEFBS_None, // PseudoLA_TLS_GD = 279
    CEFBS_IsLA64, // PseudoLA_TLS_GD_LARGE = 280
    CEFBS_None, // PseudoLA_TLS_IE = 281
    CEFBS_IsLA64, // PseudoLA_TLS_IE_LARGE = 282
    CEFBS_None, // PseudoLA_TLS_LD = 283
    CEFBS_IsLA64, // PseudoLA_TLS_LD_LARGE = 284
    CEFBS_None, // PseudoLA_TLS_LE = 285
    CEFBS_HasBasicF, // PseudoLD_CFR = 286
    CEFBS_IsLA64, // PseudoLI_D = 287
    CEFBS_None, // PseudoLI_W = 288
    CEFBS_None, // PseudoMaskedAtomicLoadAdd32 = 289
    CEFBS_None, // PseudoMaskedAtomicLoadMax32 = 290
    CEFBS_None, // PseudoMaskedAtomicLoadMin32 = 291
    CEFBS_None, // PseudoMaskedAtomicLoadNand32 = 292
    CEFBS_None, // PseudoMaskedAtomicLoadSub32 = 293
    CEFBS_None, // PseudoMaskedAtomicLoadUMax32 = 294
    CEFBS_None, // PseudoMaskedAtomicLoadUMin32 = 295
    CEFBS_None, // PseudoMaskedAtomicSwap32 = 296
    CEFBS_None, // PseudoMaskedCmpXchg32 = 297
    CEFBS_None, // PseudoRET = 298
    CEFBS_HasBasicF, // PseudoST_CFR = 299
    CEFBS_None, // PseudoTAIL = 300
    CEFBS_None, // PseudoTAILIndirect = 301
    CEFBS_None, // PseudoUNIMP = 302
    CEFBS_HasBasicF, // RDFCSR = 303
    CEFBS_HasBasicF, // WRFCSR = 304
    CEFBS_IsLA64, // ADDI_D = 305
    CEFBS_None, // ADDI_W = 306
    CEFBS_IsLA64, // ADDU16I_D = 307
    CEFBS_IsLA64, // ADD_D = 308
    CEFBS_None, // ADD_W = 309
    CEFBS_IsLA64, // ALSL_D = 310
    CEFBS_None, // ALSL_W = 311
    CEFBS_IsLA64, // ALSL_WU = 312
    CEFBS_IsLA64, // AMADD_D = 313
    CEFBS_IsLA64, // AMADD_DB_D = 314
    CEFBS_IsLA64, // AMADD_DB_W = 315
    CEFBS_IsLA64, // AMADD_W = 316
    CEFBS_IsLA64, // AMAND_D = 317
    CEFBS_IsLA64, // AMAND_DB_D = 318
    CEFBS_IsLA64, // AMAND_DB_W = 319
    CEFBS_IsLA64, // AMAND_W = 320
    CEFBS_IsLA64, // AMMAX_D = 321
    CEFBS_IsLA64, // AMMAX_DB_D = 322
    CEFBS_IsLA64, // AMMAX_DB_DU = 323
    CEFBS_IsLA64, // AMMAX_DB_W = 324
    CEFBS_IsLA64, // AMMAX_DB_WU = 325
    CEFBS_IsLA64, // AMMAX_DU = 326
    CEFBS_IsLA64, // AMMAX_W = 327
    CEFBS_IsLA64, // AMMAX_WU = 328
    CEFBS_IsLA64, // AMMIN_D = 329
    CEFBS_IsLA64, // AMMIN_DB_D = 330
    CEFBS_IsLA64, // AMMIN_DB_DU = 331
    CEFBS_IsLA64, // AMMIN_DB_W = 332
    CEFBS_IsLA64, // AMMIN_DB_WU = 333
    CEFBS_IsLA64, // AMMIN_DU = 334
    CEFBS_IsLA64, // AMMIN_W = 335
    CEFBS_IsLA64, // AMMIN_WU = 336
    CEFBS_IsLA64, // AMOR_D = 337
    CEFBS_IsLA64, // AMOR_DB_D = 338
    CEFBS_IsLA64, // AMOR_DB_W = 339
    CEFBS_IsLA64, // AMOR_W = 340
    CEFBS_IsLA64, // AMSWAP_D = 341
    CEFBS_IsLA64, // AMSWAP_DB_D = 342
    CEFBS_IsLA64, // AMSWAP_DB_W = 343
    CEFBS_IsLA64, // AMSWAP_W = 344
    CEFBS_IsLA64, // AMXOR_D = 345
    CEFBS_IsLA64, // AMXOR_DB_D = 346
    CEFBS_IsLA64, // AMXOR_DB_W = 347
    CEFBS_IsLA64, // AMXOR_W = 348
    CEFBS_None, // AND = 349
    CEFBS_None, // ANDI = 350
    CEFBS_None, // ANDN = 351
    CEFBS_IsLA64, // ASRTGT_D = 352
    CEFBS_IsLA64, // ASRTLE_D = 353
    CEFBS_None, // B = 354
    CEFBS_HasBasicF, // BCEQZ = 355
    CEFBS_HasBasicF, // BCNEZ = 356
    CEFBS_None, // BEQ = 357
    CEFBS_None, // BEQZ = 358
    CEFBS_None, // BGE = 359
    CEFBS_None, // BGEU = 360
    CEFBS_None, // BITREV_4B = 361
    CEFBS_IsLA64, // BITREV_8B = 362
    CEFBS_IsLA64, // BITREV_D = 363
    CEFBS_None, // BITREV_W = 364
    CEFBS_None, // BL = 365
    CEFBS_None, // BLT = 366
    CEFBS_None, // BLTU = 367
    CEFBS_None, // BNE = 368
    CEFBS_None, // BNEZ = 369
    CEFBS_None, // BREAK = 370
    CEFBS_IsLA64, // BSTRINS_D = 371
    CEFBS_None, // BSTRINS_W = 372
    CEFBS_IsLA64, // BSTRPICK_D = 373
    CEFBS_None, // BSTRPICK_W = 374
    CEFBS_IsLA64, // BYTEPICK_D = 375
    CEFBS_None, // BYTEPICK_W = 376
    CEFBS_None, // CACOP = 377
    CEFBS_IsLA64, // CLO_D = 378
    CEFBS_None, // CLO_W = 379
    CEFBS_IsLA64, // CLZ_D = 380
    CEFBS_None, // CLZ_W = 381
    CEFBS_None, // CPUCFG = 382
    CEFBS_IsLA64, // CRCC_W_B_W = 383
    CEFBS_IsLA64, // CRCC_W_D_W = 384
    CEFBS_IsLA64, // CRCC_W_H_W = 385
    CEFBS_IsLA64, // CRCC_W_W_W = 386
    CEFBS_IsLA64, // CRC_W_B_W = 387
    CEFBS_IsLA64, // CRC_W_D_W = 388
    CEFBS_IsLA64, // CRC_W_H_W = 389
    CEFBS_IsLA64, // CRC_W_W_W = 390
    CEFBS_None, // CSRRD = 391
    CEFBS_None, // CSRWR = 392
    CEFBS_None, // CSRXCHG = 393
    CEFBS_IsLA64, // CTO_D = 394
    CEFBS_None, // CTO_W = 395
    CEFBS_IsLA64, // CTZ_D = 396
    CEFBS_None, // CTZ_W = 397
    CEFBS_None, // DBAR = 398
    CEFBS_None, // DBCL = 399
    CEFBS_IsLA64, // DIV_D = 400
    CEFBS_IsLA64, // DIV_DU = 401
    CEFBS_None, // DIV_W = 402
    CEFBS_None, // DIV_WU = 403
    CEFBS_None, // ERTN = 404
    CEFBS_None, // EXT_W_B = 405
    CEFBS_None, // EXT_W_H = 406
    CEFBS_HasBasicD, // FABS_D = 407
    CEFBS_HasBasicF, // FABS_S = 408
    CEFBS_HasBasicD, // FADD_D = 409
    CEFBS_HasBasicF, // FADD_S = 410
    CEFBS_HasBasicD, // FCLASS_D = 411
    CEFBS_HasBasicF, // FCLASS_S = 412
    CEFBS_HasBasicD, // FCMP_CAF_D = 413
    CEFBS_HasBasicF, // FCMP_CAF_S = 414
    CEFBS_HasBasicD, // FCMP_CEQ_D = 415
    CEFBS_HasBasicF, // FCMP_CEQ_S = 416
    CEFBS_HasBasicD, // FCMP_CLE_D = 417
    CEFBS_HasBasicF, // FCMP_CLE_S = 418
    CEFBS_HasBasicD, // FCMP_CLT_D = 419
    CEFBS_HasBasicF, // FCMP_CLT_S = 420
    CEFBS_HasBasicD, // FCMP_CNE_D = 421
    CEFBS_HasBasicF, // FCMP_CNE_S = 422
    CEFBS_HasBasicD, // FCMP_COR_D = 423
    CEFBS_HasBasicF, // FCMP_COR_S = 424
    CEFBS_HasBasicD, // FCMP_CUEQ_D = 425
    CEFBS_HasBasicF, // FCMP_CUEQ_S = 426
    CEFBS_HasBasicD, // FCMP_CULE_D = 427
    CEFBS_HasBasicF, // FCMP_CULE_S = 428
    CEFBS_HasBasicD, // FCMP_CULT_D = 429
    CEFBS_HasBasicF, // FCMP_CULT_S = 430
    CEFBS_HasBasicD, // FCMP_CUNE_D = 431
    CEFBS_HasBasicF, // FCMP_CUNE_S = 432
    CEFBS_HasBasicD, // FCMP_CUN_D = 433
    CEFBS_HasBasicF, // FCMP_CUN_S = 434
    CEFBS_HasBasicD, // FCMP_SAF_D = 435
    CEFBS_HasBasicF, // FCMP_SAF_S = 436
    CEFBS_HasBasicD, // FCMP_SEQ_D = 437
    CEFBS_HasBasicF, // FCMP_SEQ_S = 438
    CEFBS_HasBasicD, // FCMP_SLE_D = 439
    CEFBS_HasBasicF, // FCMP_SLE_S = 440
    CEFBS_HasBasicD, // FCMP_SLT_D = 441
    CEFBS_HasBasicF, // FCMP_SLT_S = 442
    CEFBS_HasBasicD, // FCMP_SNE_D = 443
    CEFBS_HasBasicF, // FCMP_SNE_S = 444
    CEFBS_HasBasicD, // FCMP_SOR_D = 445
    CEFBS_HasBasicF, // FCMP_SOR_S = 446
    CEFBS_HasBasicD, // FCMP_SUEQ_D = 447
    CEFBS_HasBasicF, // FCMP_SUEQ_S = 448
    CEFBS_HasBasicD, // FCMP_SULE_D = 449
    CEFBS_HasBasicF, // FCMP_SULE_S = 450
    CEFBS_HasBasicD, // FCMP_SULT_D = 451
    CEFBS_HasBasicF, // FCMP_SULT_S = 452
    CEFBS_HasBasicD, // FCMP_SUNE_D = 453
    CEFBS_HasBasicF, // FCMP_SUNE_S = 454
    CEFBS_HasBasicD, // FCMP_SUN_D = 455
    CEFBS_HasBasicF, // FCMP_SUN_S = 456
    CEFBS_HasBasicD, // FCOPYSIGN_D = 457
    CEFBS_HasBasicF, // FCOPYSIGN_S = 458
    CEFBS_HasBasicD, // FCVT_D_S = 459
    CEFBS_HasBasicD, // FCVT_S_D = 460
    CEFBS_HasBasicD, // FDIV_D = 461
    CEFBS_HasBasicF, // FDIV_S = 462
    CEFBS_HasBasicD, // FFINT_D_L = 463
    CEFBS_HasBasicD, // FFINT_D_W = 464
    CEFBS_HasBasicD, // FFINT_S_L = 465
    CEFBS_HasBasicF, // FFINT_S_W = 466
    CEFBS_HasBasicD, // FLDGT_D = 467
    CEFBS_HasBasicF, // FLDGT_S = 468
    CEFBS_HasBasicD, // FLDLE_D = 469
    CEFBS_HasBasicF, // FLDLE_S = 470
    CEFBS_HasBasicD, // FLDX_D = 471
    CEFBS_HasBasicF, // FLDX_S = 472
    CEFBS_HasBasicD, // FLD_D = 473
    CEFBS_HasBasicF, // FLD_S = 474
    CEFBS_HasBasicD, // FLOGB_D = 475
    CEFBS_HasBasicF, // FLOGB_S = 476
    CEFBS_HasBasicD, // FMADD_D = 477
    CEFBS_HasBasicF, // FMADD_S = 478
    CEFBS_HasBasicD, // FMAXA_D = 479
    CEFBS_HasBasicF, // FMAXA_S = 480
    CEFBS_HasBasicD, // FMAX_D = 481
    CEFBS_HasBasicF, // FMAX_S = 482
    CEFBS_HasBasicD, // FMINA_D = 483
    CEFBS_HasBasicF, // FMINA_S = 484
    CEFBS_HasBasicD, // FMIN_D = 485
    CEFBS_HasBasicF, // FMIN_S = 486
    CEFBS_HasBasicD, // FMOV_D = 487
    CEFBS_HasBasicF, // FMOV_S = 488
    CEFBS_HasBasicD, // FMSUB_D = 489
    CEFBS_HasBasicF, // FMSUB_S = 490
    CEFBS_HasBasicD, // FMUL_D = 491
    CEFBS_HasBasicF, // FMUL_S = 492
    CEFBS_HasBasicD, // FNEG_D = 493
    CEFBS_HasBasicF, // FNEG_S = 494
    CEFBS_HasBasicD, // FNMADD_D = 495
    CEFBS_HasBasicF, // FNMADD_S = 496
    CEFBS_HasBasicD, // FNMSUB_D = 497
    CEFBS_HasBasicF, // FNMSUB_S = 498
    CEFBS_HasBasicD, // FRECIP_D = 499
    CEFBS_HasBasicF, // FRECIP_S = 500
    CEFBS_HasBasicD, // FRINT_D = 501
    CEFBS_HasBasicF, // FRINT_S = 502
    CEFBS_HasBasicD, // FRSQRT_D = 503
    CEFBS_HasBasicF, // FRSQRT_S = 504
    CEFBS_HasBasicD, // FSCALEB_D = 505
    CEFBS_HasBasicF, // FSCALEB_S = 506
    CEFBS_HasBasicD, // FSEL_D = 507
    CEFBS_HasBasicF, // FSEL_S = 508
    CEFBS_HasBasicD, // FSQRT_D = 509
    CEFBS_HasBasicF, // FSQRT_S = 510
    CEFBS_HasBasicD, // FSTGT_D = 511
    CEFBS_HasBasicF, // FSTGT_S = 512
    CEFBS_HasBasicD, // FSTLE_D = 513
    CEFBS_HasBasicF, // FSTLE_S = 514
    CEFBS_HasBasicD, // FSTX_D = 515
    CEFBS_HasBasicF, // FSTX_S = 516
    CEFBS_HasBasicD, // FST_D = 517
    CEFBS_HasBasicF, // FST_S = 518
    CEFBS_HasBasicD, // FSUB_D = 519
    CEFBS_HasBasicF, // FSUB_S = 520
    CEFBS_HasBasicD, // FTINTRM_L_D = 521
    CEFBS_HasBasicD, // FTINTRM_L_S = 522
    CEFBS_HasBasicD, // FTINTRM_W_D = 523
    CEFBS_HasBasicF, // FTINTRM_W_S = 524
    CEFBS_HasBasicD, // FTINTRNE_L_D = 525
    CEFBS_HasBasicD, // FTINTRNE_L_S = 526
    CEFBS_HasBasicD, // FTINTRNE_W_D = 527
    CEFBS_HasBasicF, // FTINTRNE_W_S = 528
    CEFBS_HasBasicD, // FTINTRP_L_D = 529
    CEFBS_HasBasicD, // FTINTRP_L_S = 530
    CEFBS_HasBasicD, // FTINTRP_W_D = 531
    CEFBS_HasBasicF, // FTINTRP_W_S = 532
    CEFBS_HasBasicD, // FTINTRZ_L_D = 533
    CEFBS_HasBasicD, // FTINTRZ_L_S = 534
    CEFBS_HasBasicD, // FTINTRZ_W_D = 535
    CEFBS_HasBasicF, // FTINTRZ_W_S = 536
    CEFBS_HasBasicD, // FTINT_L_D = 537
    CEFBS_HasBasicD, // FTINT_L_S = 538
    CEFBS_HasBasicD, // FTINT_W_D = 539
    CEFBS_HasBasicF, // FTINT_W_S = 540
    CEFBS_None, // IBAR = 541
    CEFBS_None, // IDLE = 542
    CEFBS_None, // INVTLB = 543
    CEFBS_None, // IOCSRRD_B = 544
    CEFBS_IsLA64, // IOCSRRD_D = 545
    CEFBS_None, // IOCSRRD_H = 546
    CEFBS_None, // IOCSRRD_W = 547
    CEFBS_None, // IOCSRWR_B = 548
    CEFBS_IsLA64, // IOCSRWR_D = 549
    CEFBS_None, // IOCSRWR_H = 550
    CEFBS_None, // IOCSRWR_W = 551
    CEFBS_None, // JIRL = 552
    CEFBS_None, // LDDIR = 553
    CEFBS_IsLA64, // LDGT_B = 554
    CEFBS_IsLA64, // LDGT_D = 555
    CEFBS_IsLA64, // LDGT_H = 556
    CEFBS_IsLA64, // LDGT_W = 557
    CEFBS_IsLA64, // LDLE_B = 558
    CEFBS_IsLA64, // LDLE_D = 559
    CEFBS_IsLA64, // LDLE_H = 560
    CEFBS_IsLA64, // LDLE_W = 561
    CEFBS_None, // LDPTE = 562
    CEFBS_IsLA64, // LDPTR_D = 563
    CEFBS_IsLA64, // LDPTR_W = 564
    CEFBS_IsLA64, // LDX_B = 565
    CEFBS_IsLA64, // LDX_BU = 566
    CEFBS_IsLA64, // LDX_D = 567
    CEFBS_IsLA64, // LDX_H = 568
    CEFBS_IsLA64, // LDX_HU = 569
    CEFBS_IsLA64, // LDX_W = 570
    CEFBS_IsLA64, // LDX_WU = 571
    CEFBS_None, // LD_B = 572
    CEFBS_None, // LD_BU = 573
    CEFBS_IsLA64, // LD_D = 574
    CEFBS_None, // LD_H = 575
    CEFBS_None, // LD_HU = 576
    CEFBS_None, // LD_W = 577
    CEFBS_IsLA64, // LD_WU = 578
    CEFBS_IsLA64, // LL_D = 579
    CEFBS_None, // LL_W = 580
    CEFBS_None, // LU12I_W = 581
    CEFBS_IsLA64, // LU32I_D = 582
    CEFBS_IsLA64, // LU52I_D = 583
    CEFBS_None, // MASKEQZ = 584
    CEFBS_None, // MASKNEZ = 585
    CEFBS_IsLA64, // MOD_D = 586
    CEFBS_IsLA64, // MOD_DU = 587
    CEFBS_None, // MOD_W = 588
    CEFBS_None, // MOD_WU = 589
    CEFBS_HasBasicF, // MOVCF2FR_S = 590
    CEFBS_HasBasicF, // MOVCF2GR = 591
    CEFBS_HasBasicF, // MOVFCSR2GR = 592
    CEFBS_HasBasicF, // MOVFR2CF_S = 593
    CEFBS_HasBasicD_IsLA64, // MOVFR2GR_D = 594
    CEFBS_HasBasicF, // MOVFR2GR_S = 595
    CEFBS_HasBasicD, // MOVFR2GR_S_64 = 596
    CEFBS_HasBasicD, // MOVFRH2GR_S = 597
    CEFBS_HasBasicF, // MOVGR2CF = 598
    CEFBS_HasBasicF, // MOVGR2FCSR = 599
    CEFBS_HasBasicD, // MOVGR2FRH_W = 600
    CEFBS_HasBasicD_IsLA64, // MOVGR2FR_D = 601
    CEFBS_HasBasicF, // MOVGR2FR_W = 602
    CEFBS_HasBasicD_IsLA32, // MOVGR2FR_W_64 = 603
    CEFBS_IsLA64, // MULH_D = 604
    CEFBS_IsLA64, // MULH_DU = 605
    CEFBS_None, // MULH_W = 606
    CEFBS_None, // MULH_WU = 607
    CEFBS_IsLA64, // MULW_D_W = 608
    CEFBS_IsLA64, // MULW_D_WU = 609
    CEFBS_IsLA64, // MUL_D = 610
    CEFBS_None, // MUL_W = 611
    CEFBS_None, // NOR = 612
    CEFBS_None, // OR = 613
    CEFBS_None, // ORI = 614
    CEFBS_None, // ORN = 615
    CEFBS_None, // PCADDI = 616
    CEFBS_None, // PCADDU12I = 617
    CEFBS_IsLA64, // PCADDU18I = 618
    CEFBS_None, // PCALAU12I = 619
    CEFBS_None, // PRELD = 620
    CEFBS_IsLA64, // PRELDX = 621
    CEFBS_None, // RDTIMEH_W = 622
    CEFBS_None, // RDTIMEL_W = 623
    CEFBS_IsLA64, // RDTIME_D = 624
    CEFBS_None, // REVB_2H = 625
    CEFBS_IsLA64, // REVB_2W = 626
    CEFBS_IsLA64, // REVB_4H = 627
    CEFBS_IsLA64, // REVB_D = 628
    CEFBS_IsLA64, // REVH_2W = 629
    CEFBS_IsLA64, // REVH_D = 630
    CEFBS_IsLA64, // ROTRI_D = 631
    CEFBS_None, // ROTRI_W = 632
    CEFBS_IsLA64, // ROTR_D = 633
    CEFBS_None, // ROTR_W = 634
    CEFBS_IsLA64, // SC_D = 635
    CEFBS_None, // SC_W = 636
    CEFBS_IsLA64, // SLLI_D = 637
    CEFBS_None, // SLLI_W = 638
    CEFBS_IsLA64, // SLL_D = 639
    CEFBS_None, // SLL_W = 640
    CEFBS_None, // SLT = 641
    CEFBS_None, // SLTI = 642
    CEFBS_None, // SLTU = 643
    CEFBS_None, // SLTUI = 644
    CEFBS_IsLA64, // SRAI_D = 645
    CEFBS_None, // SRAI_W = 646
    CEFBS_IsLA64, // SRA_D = 647
    CEFBS_None, // SRA_W = 648
    CEFBS_IsLA64, // SRLI_D = 649
    CEFBS_None, // SRLI_W = 650
    CEFBS_IsLA64, // SRL_D = 651
    CEFBS_None, // SRL_W = 652
    CEFBS_IsLA64, // STGT_B = 653
    CEFBS_IsLA64, // STGT_D = 654
    CEFBS_IsLA64, // STGT_H = 655
    CEFBS_IsLA64, // STGT_W = 656
    CEFBS_IsLA64, // STLE_B = 657
    CEFBS_IsLA64, // STLE_D = 658
    CEFBS_IsLA64, // STLE_H = 659
    CEFBS_IsLA64, // STLE_W = 660
    CEFBS_IsLA64, // STPTR_D = 661
    CEFBS_IsLA64, // STPTR_W = 662
    CEFBS_IsLA64, // STX_B = 663
    CEFBS_IsLA64, // STX_D = 664
    CEFBS_IsLA64, // STX_H = 665
    CEFBS_IsLA64, // STX_W = 666
    CEFBS_None, // ST_B = 667
    CEFBS_IsLA64, // ST_D = 668
    CEFBS_None, // ST_H = 669
    CEFBS_None, // ST_W = 670
    CEFBS_IsLA64, // SUB_D = 671
    CEFBS_None, // SUB_W = 672
    CEFBS_None, // SYSCALL = 673
    CEFBS_None, // TLBCLR = 674
    CEFBS_None, // TLBFILL = 675
    CEFBS_None, // TLBFLUSH = 676
    CEFBS_None, // TLBRD = 677
    CEFBS_None, // TLBSRCH = 678
    CEFBS_None, // TLBWR = 679
    CEFBS_None, // XOR = 680
    CEFBS_None, // XORI = 681
  };

  assert(Opcode < 682);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &LoongArchInstrNameData[LoongArchInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace LoongArch_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

