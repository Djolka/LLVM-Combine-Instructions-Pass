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

namespace R600 {
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
    BRANCH	= 252,
    BRANCH_COND_f32	= 253,
    BRANCH_COND_i32	= 254,
    BREAK	= 255,
    BREAKC_f32	= 256,
    BREAKC_i32	= 257,
    BREAK_LOGICALNZ_f32	= 258,
    BREAK_LOGICALNZ_i32	= 259,
    BREAK_LOGICALZ_f32	= 260,
    BREAK_LOGICALZ_i32	= 261,
    CONST_COPY	= 262,
    CONTINUE	= 263,
    CONTINUEC_f32	= 264,
    CONTINUEC_i32	= 265,
    CONTINUE_LOGICALNZ_f32	= 266,
    CONTINUE_LOGICALNZ_i32	= 267,
    CONTINUE_LOGICALZ_f32	= 268,
    CONTINUE_LOGICALZ_i32	= 269,
    CUBE_eg_pseudo	= 270,
    CUBE_r600_pseudo	= 271,
    DEFAULT	= 272,
    DOT_4	= 273,
    DUMMY_CHAIN	= 274,
    ELSE	= 275,
    END	= 276,
    ENDFUNC	= 277,
    ENDIF	= 278,
    ENDLOOP	= 279,
    ENDMAIN	= 280,
    ENDSWITCH	= 281,
    FABS_R600	= 282,
    FNEG_R600	= 283,
    FUNC	= 284,
    IFC_f32	= 285,
    IFC_i32	= 286,
    IF_LOGICALNZ_f32	= 287,
    IF_LOGICALNZ_i32	= 288,
    IF_LOGICALZ_f32	= 289,
    IF_LOGICALZ_i32	= 290,
    IF_PREDICATE_SET	= 291,
    JUMP	= 292,
    JUMP_COND	= 293,
    MASK_WRITE	= 294,
    MOV_IMM_F32	= 295,
    MOV_IMM_GLOBAL_ADDR	= 296,
    MOV_IMM_I32	= 297,
    PRED_X	= 298,
    R600_EXTRACT_ELT_V2	= 299,
    R600_EXTRACT_ELT_V4	= 300,
    R600_INSERT_ELT_V2	= 301,
    R600_INSERT_ELT_V4	= 302,
    R600_RegisterLoad	= 303,
    R600_RegisterStore	= 304,
    RETDYN	= 305,
    RETURN	= 306,
    TXD	= 307,
    TXD_SHADOW	= 308,
    WHILELOOP	= 309,
    ADD	= 310,
    ADDC_UINT	= 311,
    ADD_INT	= 312,
    ALU_CLAUSE	= 313,
    AND_INT	= 314,
    ASHR_eg	= 315,
    ASHR_r600	= 316,
    BCNT_INT	= 317,
    BFE_INT_eg	= 318,
    BFE_UINT_eg	= 319,
    BFI_INT_eg	= 320,
    BFM_INT_eg	= 321,
    BIT_ALIGN_INT_eg	= 322,
    CEIL	= 323,
    CF_ALU	= 324,
    CF_ALU_BREAK	= 325,
    CF_ALU_CONTINUE	= 326,
    CF_ALU_ELSE_AFTER	= 327,
    CF_ALU_POP_AFTER	= 328,
    CF_ALU_PUSH_BEFORE	= 329,
    CF_CALL_FS_EG	= 330,
    CF_CALL_FS_R600	= 331,
    CF_CONTINUE_EG	= 332,
    CF_CONTINUE_R600	= 333,
    CF_ELSE_EG	= 334,
    CF_ELSE_R600	= 335,
    CF_END_CM	= 336,
    CF_END_EG	= 337,
    CF_END_R600	= 338,
    CF_JUMP_EG	= 339,
    CF_JUMP_R600	= 340,
    CF_PUSH_EG	= 341,
    CF_PUSH_ELSE_R600	= 342,
    CF_TC_EG	= 343,
    CF_TC_R600	= 344,
    CF_VC_EG	= 345,
    CF_VC_R600	= 346,
    CNDE_INT	= 347,
    CNDE_eg	= 348,
    CNDE_r600	= 349,
    CNDGE_INT	= 350,
    CNDGE_eg	= 351,
    CNDGE_r600	= 352,
    CNDGT_INT	= 353,
    CNDGT_eg	= 354,
    CNDGT_r600	= 355,
    COS_cm	= 356,
    COS_eg	= 357,
    COS_r600	= 358,
    COS_r700	= 359,
    CUBE_eg_real	= 360,
    CUBE_r600_real	= 361,
    DOT4_eg	= 362,
    DOT4_r600	= 363,
    EG_ExportBuf	= 364,
    EG_ExportSwz	= 365,
    END_LOOP_EG	= 366,
    END_LOOP_R600	= 367,
    EXP_IEEE_cm	= 368,
    EXP_IEEE_eg	= 369,
    EXP_IEEE_r600	= 370,
    FETCH_CLAUSE	= 371,
    FFBH_UINT	= 372,
    FFBL_INT	= 373,
    FLOOR	= 374,
    FLT16_TO_FLT32	= 375,
    FLT32_TO_FLT16	= 376,
    FLT_TO_INT_eg	= 377,
    FLT_TO_INT_r600	= 378,
    FLT_TO_UINT_eg	= 379,
    FLT_TO_UINT_r600	= 380,
    FMA_eg	= 381,
    FRACT	= 382,
    GROUP_BARRIER	= 383,
    INTERP_LOAD_P0	= 384,
    INTERP_PAIR_XY	= 385,
    INTERP_PAIR_ZW	= 386,
    INTERP_VEC_LOAD	= 387,
    INTERP_XY	= 388,
    INTERP_ZW	= 389,
    INT_TO_FLT_eg	= 390,
    INT_TO_FLT_r600	= 391,
    KILLGT	= 392,
    LDS_ADD	= 393,
    LDS_ADD_RET	= 394,
    LDS_AND	= 395,
    LDS_AND_RET	= 396,
    LDS_BYTE_READ_RET	= 397,
    LDS_BYTE_WRITE	= 398,
    LDS_CMPST	= 399,
    LDS_CMPST_RET	= 400,
    LDS_MAX_INT	= 401,
    LDS_MAX_INT_RET	= 402,
    LDS_MAX_UINT	= 403,
    LDS_MAX_UINT_RET	= 404,
    LDS_MIN_INT	= 405,
    LDS_MIN_INT_RET	= 406,
    LDS_MIN_UINT	= 407,
    LDS_MIN_UINT_RET	= 408,
    LDS_OR	= 409,
    LDS_OR_RET	= 410,
    LDS_READ_RET	= 411,
    LDS_SHORT_READ_RET	= 412,
    LDS_SHORT_WRITE	= 413,
    LDS_SUB	= 414,
    LDS_SUB_RET	= 415,
    LDS_UBYTE_READ_RET	= 416,
    LDS_USHORT_READ_RET	= 417,
    LDS_WRITE	= 418,
    LDS_WRXCHG	= 419,
    LDS_WRXCHG_RET	= 420,
    LDS_XOR	= 421,
    LDS_XOR_RET	= 422,
    LITERALS	= 423,
    LOG_CLAMPED_eg	= 424,
    LOG_CLAMPED_r600	= 425,
    LOG_IEEE_cm	= 426,
    LOG_IEEE_eg	= 427,
    LOG_IEEE_r600	= 428,
    LOOP_BREAK_EG	= 429,
    LOOP_BREAK_R600	= 430,
    LSHL_eg	= 431,
    LSHL_r600	= 432,
    LSHR_eg	= 433,
    LSHR_r600	= 434,
    MAX	= 435,
    MAX_DX10	= 436,
    MAX_INT	= 437,
    MAX_UINT	= 438,
    MIN	= 439,
    MIN_DX10	= 440,
    MIN_INT	= 441,
    MIN_UINT	= 442,
    MOV	= 443,
    MOVA_INT_eg	= 444,
    MUL	= 445,
    MULADD_IEEE_eg	= 446,
    MULADD_IEEE_r600	= 447,
    MULADD_INT24_cm	= 448,
    MULADD_UINT24_eg	= 449,
    MULADD_eg	= 450,
    MULADD_r600	= 451,
    MULHI_INT_cm	= 452,
    MULHI_INT_cm24	= 453,
    MULHI_INT_eg	= 454,
    MULHI_INT_r600	= 455,
    MULHI_UINT24_eg	= 456,
    MULHI_UINT_cm	= 457,
    MULHI_UINT_cm24	= 458,
    MULHI_UINT_eg	= 459,
    MULHI_UINT_r600	= 460,
    MULLO_INT_cm	= 461,
    MULLO_INT_eg	= 462,
    MULLO_INT_r600	= 463,
    MULLO_UINT_cm	= 464,
    MULLO_UINT_eg	= 465,
    MULLO_UINT_r600	= 466,
    MUL_IEEE	= 467,
    MUL_INT24_cm	= 468,
    MUL_LIT_eg	= 469,
    MUL_LIT_r600	= 470,
    MUL_UINT24_eg	= 471,
    NOT_INT	= 472,
    OR_INT	= 473,
    PAD	= 474,
    POP_EG	= 475,
    POP_R600	= 476,
    PRED_SETE	= 477,
    PRED_SETE_INT	= 478,
    PRED_SETGE	= 479,
    PRED_SETGE_INT	= 480,
    PRED_SETGT	= 481,
    PRED_SETGT_INT	= 482,
    PRED_SETNE	= 483,
    PRED_SETNE_INT	= 484,
    R600_ExportBuf	= 485,
    R600_ExportSwz	= 486,
    RAT_ATOMIC_ADD_NORET	= 487,
    RAT_ATOMIC_ADD_RTN	= 488,
    RAT_ATOMIC_AND_NORET	= 489,
    RAT_ATOMIC_AND_RTN	= 490,
    RAT_ATOMIC_CMPXCHG_INT_NORET	= 491,
    RAT_ATOMIC_CMPXCHG_INT_RTN	= 492,
    RAT_ATOMIC_DEC_UINT_NORET	= 493,
    RAT_ATOMIC_DEC_UINT_RTN	= 494,
    RAT_ATOMIC_INC_UINT_NORET	= 495,
    RAT_ATOMIC_INC_UINT_RTN	= 496,
    RAT_ATOMIC_MAX_INT_NORET	= 497,
    RAT_ATOMIC_MAX_INT_RTN	= 498,
    RAT_ATOMIC_MAX_UINT_NORET	= 499,
    RAT_ATOMIC_MAX_UINT_RTN	= 500,
    RAT_ATOMIC_MIN_INT_NORET	= 501,
    RAT_ATOMIC_MIN_INT_RTN	= 502,
    RAT_ATOMIC_MIN_UINT_NORET	= 503,
    RAT_ATOMIC_MIN_UINT_RTN	= 504,
    RAT_ATOMIC_OR_NORET	= 505,
    RAT_ATOMIC_OR_RTN	= 506,
    RAT_ATOMIC_RSUB_NORET	= 507,
    RAT_ATOMIC_RSUB_RTN	= 508,
    RAT_ATOMIC_SUB_NORET	= 509,
    RAT_ATOMIC_SUB_RTN	= 510,
    RAT_ATOMIC_XCHG_INT_NORET	= 511,
    RAT_ATOMIC_XCHG_INT_RTN	= 512,
    RAT_ATOMIC_XOR_NORET	= 513,
    RAT_ATOMIC_XOR_RTN	= 514,
    RAT_MSKOR	= 515,
    RAT_STORE_DWORD128	= 516,
    RAT_STORE_DWORD32	= 517,
    RAT_STORE_DWORD64	= 518,
    RAT_STORE_TYPED_cm	= 519,
    RAT_STORE_TYPED_eg	= 520,
    RAT_WRITE_CACHELESS_128_eg	= 521,
    RAT_WRITE_CACHELESS_32_eg	= 522,
    RAT_WRITE_CACHELESS_64_eg	= 523,
    RECIPSQRT_CLAMPED_cm	= 524,
    RECIPSQRT_CLAMPED_eg	= 525,
    RECIPSQRT_CLAMPED_r600	= 526,
    RECIPSQRT_IEEE_cm	= 527,
    RECIPSQRT_IEEE_eg	= 528,
    RECIPSQRT_IEEE_r600	= 529,
    RECIP_CLAMPED_cm	= 530,
    RECIP_CLAMPED_eg	= 531,
    RECIP_CLAMPED_r600	= 532,
    RECIP_IEEE_cm	= 533,
    RECIP_IEEE_eg	= 534,
    RECIP_IEEE_r600	= 535,
    RECIP_UINT_eg	= 536,
    RECIP_UINT_r600	= 537,
    RNDNE	= 538,
    SETE	= 539,
    SETE_DX10	= 540,
    SETE_INT	= 541,
    SETGE_DX10	= 542,
    SETGE_INT	= 543,
    SETGE_UINT	= 544,
    SETGT_DX10	= 545,
    SETGT_INT	= 546,
    SETGT_UINT	= 547,
    SETNE_DX10	= 548,
    SETNE_INT	= 549,
    SGE	= 550,
    SGT	= 551,
    SIN_cm	= 552,
    SIN_eg	= 553,
    SIN_r600	= 554,
    SIN_r700	= 555,
    SNE	= 556,
    SUBB_UINT	= 557,
    SUB_INT	= 558,
    TEX_GET_GRADIENTS_H	= 559,
    TEX_GET_GRADIENTS_V	= 560,
    TEX_GET_TEXTURE_RESINFO	= 561,
    TEX_LD	= 562,
    TEX_LDPTR	= 563,
    TEX_SAMPLE	= 564,
    TEX_SAMPLE_C	= 565,
    TEX_SAMPLE_C_G	= 566,
    TEX_SAMPLE_C_L	= 567,
    TEX_SAMPLE_C_LB	= 568,
    TEX_SAMPLE_G	= 569,
    TEX_SAMPLE_L	= 570,
    TEX_SAMPLE_LB	= 571,
    TEX_SET_GRADIENTS_H	= 572,
    TEX_SET_GRADIENTS_V	= 573,
    TEX_VTX_CONSTBUF	= 574,
    TEX_VTX_TEXBUF	= 575,
    TRUNC	= 576,
    UINT_TO_FLT_eg	= 577,
    UINT_TO_FLT_r600	= 578,
    VTX_READ_128_cm	= 579,
    VTX_READ_128_eg	= 580,
    VTX_READ_16_cm	= 581,
    VTX_READ_16_eg	= 582,
    VTX_READ_32_cm	= 583,
    VTX_READ_32_eg	= 584,
    VTX_READ_64_cm	= 585,
    VTX_READ_64_eg	= 586,
    VTX_READ_8_cm	= 587,
    VTX_READ_8_eg	= 588,
    WHILE_LOOP_EG	= 589,
    WHILE_LOOP_R600	= 590,
    XOR_INT	= 591,
    INSTRUCTION_LIST_END = 592
  };

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace R600 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    NullALU	= 1,
    VecALU	= 2,
    AnyALU	= 3,
    TransALU	= 4,
    XALU	= 5,
    SCHED_LIST_END = 6
  };
} // end namespace Sched
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {


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
static const MCOperandInfo OperandInfo45[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc R600Insts[] = {
  { 591,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #591 = XOR_INT
  { 590,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #590 = WHILE_LOOP_R600
  { 589,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #589 = WHILE_LOOP_EG
  { 588,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo83 },  // Inst #588 = VTX_READ_8_eg
  { 587,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo83 },  // Inst #587 = VTX_READ_8_cm
  { 586,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo85 },  // Inst #586 = VTX_READ_64_eg
  { 585,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo85 },  // Inst #585 = VTX_READ_64_cm
  { 584,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo84 },  // Inst #584 = VTX_READ_32_eg
  { 583,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo84 },  // Inst #583 = VTX_READ_32_cm
  { 582,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo83 },  // Inst #582 = VTX_READ_16_eg
  { 581,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo83 },  // Inst #581 = VTX_READ_16_cm
  { 580,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo82 },  // Inst #580 = VTX_READ_128_eg
  { 579,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, OperandInfo82 },  // Inst #579 = VTX_READ_128_cm
  { 578,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #578 = UINT_TO_FLT_r600
  { 577,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #577 = UINT_TO_FLT_eg
  { 576,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #576 = TRUNC
  { 575,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1000ULL, nullptr, OperandInfo82 },  // Inst #575 = TEX_VTX_TEXBUF
  { 574,	4,	1,	0,	1,	0,	0,	0, 0x1000ULL, nullptr, OperandInfo82 },  // Inst #574 = TEX_VTX_CONSTBUF
  { 573,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #573 = TEX_SET_GRADIENTS_V
  { 572,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #572 = TEX_SET_GRADIENTS_H
  { 571,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #571 = TEX_SAMPLE_LB
  { 570,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #570 = TEX_SAMPLE_L
  { 569,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #569 = TEX_SAMPLE_G
  { 568,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #568 = TEX_SAMPLE_C_LB
  { 567,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #567 = TEX_SAMPLE_C_L
  { 566,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #566 = TEX_SAMPLE_C_G
  { 565,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #565 = TEX_SAMPLE_C
  { 564,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #564 = TEX_SAMPLE
  { 563,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #563 = TEX_LDPTR
  { 562,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #562 = TEX_LD
  { 561,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #561 = TEX_GET_TEXTURE_RESINFO
  { 560,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #560 = TEX_GET_GRADIENTS_V
  { 559,	19,	1,	0,	1,	0,	0,	0, 0x2000ULL, nullptr, OperandInfo81 },  // Inst #559 = TEX_GET_GRADIENTS_H
  { 558,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #558 = SUB_INT
  { 557,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #557 = SUBB_UINT
  { 556,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #556 = SNE
  { 555,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, OperandInfo60 },  // Inst #555 = SIN_r700
  { 554,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, OperandInfo60 },  // Inst #554 = SIN_r600
  { 553,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, OperandInfo60 },  // Inst #553 = SIN_eg
  { 552,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, OperandInfo60 },  // Inst #552 = SIN_cm
  { 551,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #551 = SGT
  { 550,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #550 = SGE
  { 549,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #549 = SETNE_INT
  { 548,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #548 = SETNE_DX10
  { 547,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #547 = SETGT_UINT
  { 546,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #546 = SETGT_INT
  { 545,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #545 = SETGT_DX10
  { 544,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #544 = SETGE_UINT
  { 543,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #543 = SETGE_INT
  { 542,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #542 = SETGE_DX10
  { 541,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #541 = SETE_INT
  { 540,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #540 = SETE_DX10
  { 539,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #539 = SETE
  { 538,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #538 = RNDNE
  { 537,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #537 = RECIP_UINT_r600
  { 536,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #536 = RECIP_UINT_eg
  { 535,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #535 = RECIP_IEEE_r600
  { 534,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #534 = RECIP_IEEE_eg
  { 533,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, OperandInfo60 },  // Inst #533 = RECIP_IEEE_cm
  { 532,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #532 = RECIP_CLAMPED_r600
  { 531,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #531 = RECIP_CLAMPED_eg
  { 530,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, OperandInfo60 },  // Inst #530 = RECIP_CLAMPED_cm
  { 529,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #529 = RECIPSQRT_IEEE_r600
  { 528,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #528 = RECIPSQRT_IEEE_eg
  { 527,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, OperandInfo60 },  // Inst #527 = RECIPSQRT_IEEE_cm
  { 526,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #526 = RECIPSQRT_CLAMPED_r600
  { 525,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #525 = RECIPSQRT_CLAMPED_eg
  { 524,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, OperandInfo60 },  // Inst #524 = RECIPSQRT_CLAMPED_cm
  { 523,	3,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, OperandInfo80 },  // Inst #523 = RAT_WRITE_CACHELESS_64_eg
  { 522,	3,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, OperandInfo79 },  // Inst #522 = RAT_WRITE_CACHELESS_32_eg
  { 521,	3,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, OperandInfo78 },  // Inst #521 = RAT_WRITE_CACHELESS_128_eg
  { 520,	4,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo77 },  // Inst #520 = RAT_STORE_TYPED_eg
  { 519,	4,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo77 },  // Inst #519 = RAT_STORE_TYPED_cm
  { 518,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, OperandInfo76 },  // Inst #518 = RAT_STORE_DWORD64
  { 517,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, OperandInfo75 },  // Inst #517 = RAT_STORE_DWORD32
  { 516,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, OperandInfo74 },  // Inst #516 = RAT_STORE_DWORD128
  { 515,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, OperandInfo74 },  // Inst #515 = RAT_MSKOR
  { 514,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #514 = RAT_ATOMIC_XOR_RTN
  { 513,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #513 = RAT_ATOMIC_XOR_NORET
  { 512,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #512 = RAT_ATOMIC_XCHG_INT_RTN
  { 511,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #511 = RAT_ATOMIC_XCHG_INT_NORET
  { 510,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #510 = RAT_ATOMIC_SUB_RTN
  { 509,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #509 = RAT_ATOMIC_SUB_NORET
  { 508,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #508 = RAT_ATOMIC_RSUB_RTN
  { 507,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #507 = RAT_ATOMIC_RSUB_NORET
  { 506,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #506 = RAT_ATOMIC_OR_RTN
  { 505,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #505 = RAT_ATOMIC_OR_NORET
  { 504,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #504 = RAT_ATOMIC_MIN_UINT_RTN
  { 503,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #503 = RAT_ATOMIC_MIN_UINT_NORET
  { 502,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #502 = RAT_ATOMIC_MIN_INT_RTN
  { 501,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #501 = RAT_ATOMIC_MIN_INT_NORET
  { 500,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #500 = RAT_ATOMIC_MAX_UINT_RTN
  { 499,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #499 = RAT_ATOMIC_MAX_UINT_NORET
  { 498,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #498 = RAT_ATOMIC_MAX_INT_RTN
  { 497,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #497 = RAT_ATOMIC_MAX_INT_NORET
  { 496,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #496 = RAT_ATOMIC_INC_UINT_RTN
  { 495,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #495 = RAT_ATOMIC_INC_UINT_NORET
  { 494,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #494 = RAT_ATOMIC_DEC_UINT_RTN
  { 493,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #493 = RAT_ATOMIC_DEC_UINT_NORET
  { 492,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #492 = RAT_ATOMIC_CMPXCHG_INT_RTN
  { 491,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #491 = RAT_ATOMIC_CMPXCHG_INT_NORET
  { 490,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #490 = RAT_ATOMIC_AND_RTN
  { 489,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #489 = RAT_ATOMIC_AND_NORET
  { 488,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #488 = RAT_ATOMIC_ADD_RTN
  { 487,	3,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo73 },  // Inst #487 = RAT_ATOMIC_ADD_NORET
  { 486,	9,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo64 },  // Inst #486 = R600_ExportSwz
  { 485,	7,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo63 },  // Inst #485 = R600_ExportBuf
  { 484,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #484 = PRED_SETNE_INT
  { 483,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #483 = PRED_SETNE
  { 482,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #482 = PRED_SETGT_INT
  { 481,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #481 = PRED_SETGT
  { 480,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #480 = PRED_SETGE_INT
  { 479,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #479 = PRED_SETGE
  { 478,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #478 = PRED_SETE_INT
  { 477,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #477 = PRED_SETE
  { 476,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #476 = POP_R600
  { 475,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #475 = POP_EG
  { 474,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #474 = PAD
  { 473,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #473 = OR_INT
  { 472,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #472 = NOT_INT
  { 471,	21,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #471 = MUL_UINT24_eg
  { 470,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #470 = MUL_LIT_r600
  { 469,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #469 = MUL_LIT_eg
  { 468,	21,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #468 = MUL_INT24_cm
  { 467,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #467 = MUL_IEEE
  { 466,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #466 = MULLO_UINT_r600
  { 465,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #465 = MULLO_UINT_eg
  { 464,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, OperandInfo59 },  // Inst #464 = MULLO_UINT_cm
  { 463,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #463 = MULLO_INT_r600
  { 462,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #462 = MULLO_INT_eg
  { 461,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, OperandInfo59 },  // Inst #461 = MULLO_INT_cm
  { 460,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #460 = MULHI_UINT_r600
  { 459,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #459 = MULHI_UINT_eg
  { 458,	21,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, OperandInfo59 },  // Inst #458 = MULHI_UINT_cm24
  { 457,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, OperandInfo59 },  // Inst #457 = MULHI_UINT_cm
  { 456,	21,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #456 = MULHI_UINT24_eg
  { 455,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #455 = MULHI_INT_r600
  { 454,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #454 = MULHI_INT_eg
  { 453,	21,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, OperandInfo59 },  // Inst #453 = MULHI_INT_cm24
  { 452,	21,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, OperandInfo59 },  // Inst #452 = MULHI_INT_cm
  { 451,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #451 = MULADD_r600
  { 450,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #450 = MULADD_eg
  { 449,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #449 = MULADD_UINT24_eg
  { 448,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #448 = MULADD_INT24_cm
  { 447,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #447 = MULADD_IEEE_r600
  { 446,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #446 = MULADD_IEEE_eg
  { 445,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #445 = MUL
  { 444,	14,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #444 = MOVA_INT_eg
  { 443,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #443 = MOV
  { 442,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #442 = MIN_UINT
  { 441,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #441 = MIN_INT
  { 440,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #440 = MIN_DX10
  { 439,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #439 = MIN
  { 438,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #438 = MAX_UINT
  { 437,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #437 = MAX_INT
  { 436,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #436 = MAX_DX10
  { 435,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #435 = MAX
  { 434,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #434 = LSHR_r600
  { 433,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #433 = LSHR_eg
  { 432,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #432 = LSHL_r600
  { 431,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #431 = LSHL_eg
  { 430,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #430 = LOOP_BREAK_R600
  { 429,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #429 = LOOP_BREAK_EG
  { 428,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #428 = LOG_IEEE_r600
  { 427,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #427 = LOG_IEEE_eg
  { 426,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, OperandInfo60 },  // Inst #426 = LOG_IEEE_cm
  { 425,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #425 = LOG_CLAMPED_r600
  { 424,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #424 = LOG_CLAMPED_eg
  { 423,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo7 },  // Inst #423 = LITERALS
  { 422,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #422 = LDS_XOR_RET
  { 421,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #421 = LDS_XOR
  { 420,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #420 = LDS_WRXCHG_RET
  { 419,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #419 = LDS_WRXCHG
  { 418,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #418 = LDS_WRITE
  { 417,	7,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, OperandInfo70 },  // Inst #417 = LDS_USHORT_READ_RET
  { 416,	7,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, OperandInfo70 },  // Inst #416 = LDS_UBYTE_READ_RET
  { 415,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #415 = LDS_SUB_RET
  { 414,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #414 = LDS_SUB
  { 413,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #413 = LDS_SHORT_WRITE
  { 412,	7,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, OperandInfo70 },  // Inst #412 = LDS_SHORT_READ_RET
  { 411,	7,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, OperandInfo70 },  // Inst #411 = LDS_READ_RET
  { 410,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #410 = LDS_OR_RET
  { 409,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #409 = LDS_OR
  { 408,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #408 = LDS_MIN_UINT_RET
  { 407,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #407 = LDS_MIN_UINT
  { 406,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #406 = LDS_MIN_INT_RET
  { 405,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #405 = LDS_MIN_INT
  { 404,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #404 = LDS_MAX_UINT_RET
  { 403,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #403 = LDS_MAX_UINT
  { 402,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #402 = LDS_MAX_INT_RET
  { 401,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #401 = LDS_MAX_INT
  { 400,	13,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x44200ULL, nullptr, OperandInfo72 },  // Inst #400 = LDS_CMPST_RET
  { 399,	12,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44200ULL, nullptr, OperandInfo71 },  // Inst #399 = LDS_CMPST
  { 398,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #398 = LDS_BYTE_WRITE
  { 397,	7,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, OperandInfo70 },  // Inst #397 = LDS_BYTE_READ_RET
  { 396,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #396 = LDS_AND_RET
  { 395,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #395 = LDS_AND
  { 394,	10,	1,	0,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, OperandInfo69 },  // Inst #394 = LDS_ADD_RET
  { 393,	9,	0,	0,	5,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, OperandInfo68 },  // Inst #393 = LDS_ADD
  { 392,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #392 = KILLGT
  { 391,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #391 = INT_TO_FLT_r600
  { 390,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #390 = INT_TO_FLT_eg
  { 389,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #389 = INTERP_ZW
  { 388,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #388 = INTERP_XY
  { 387,	2,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo67 },  // Inst #387 = INTERP_VEC_LOAD
  { 386,	5,	2,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo66 },  // Inst #386 = INTERP_PAIR_ZW
  { 385,	5,	2,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo65 },  // Inst #385 = INTERP_PAIR_XY
  { 384,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #384 = INTERP_LOAD_P0
  { 383,	0,	0,	0,	3,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x4000ULL, nullptr, nullptr },  // Inst #383 = GROUP_BARRIER
  { 382,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #382 = FRACT
  { 381,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #381 = FMA_eg
  { 380,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #380 = FLT_TO_UINT_r600
  { 379,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #379 = FLT_TO_UINT_eg
  { 378,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #378 = FLT_TO_INT_r600
  { 377,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #377 = FLT_TO_INT_eg
  { 376,	14,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #376 = FLT32_TO_FLT16
  { 375,	14,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #375 = FLT16_TO_FLT32
  { 374,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #374 = FLOOR
  { 373,	14,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #373 = FFBL_INT
  { 372,	14,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #372 = FFBH_UINT
  { 371,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #371 = FETCH_CLAUSE
  { 370,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #370 = EXP_IEEE_r600
  { 369,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #369 = EXP_IEEE_eg
  { 368,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, OperandInfo60 },  // Inst #368 = EXP_IEEE_cm
  { 367,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #367 = END_LOOP_R600
  { 366,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #366 = END_LOOP_EG
  { 365,	9,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo64 },  // Inst #365 = EG_ExportSwz
  { 364,	7,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, OperandInfo63 },  // Inst #364 = EG_ExportBuf
  { 363,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #363 = DOT4_r600
  { 362,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #362 = DOT4_eg
  { 361,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #361 = CUBE_r600_real
  { 360,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #360 = CUBE_eg_real
  { 359,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, OperandInfo60 },  // Inst #359 = COS_r700
  { 358,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, OperandInfo60 },  // Inst #358 = COS_r600
  { 357,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, OperandInfo60 },  // Inst #357 = COS_eg
  { 356,	14,	1,	0,	4,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, OperandInfo60 },  // Inst #356 = COS_cm
  { 355,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #355 = CNDGT_r600
  { 354,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #354 = CNDGT_eg
  { 353,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #353 = CNDGT_INT
  { 352,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #352 = CNDGE_r600
  { 351,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #351 = CNDGE_eg
  { 350,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #350 = CNDGE_INT
  { 349,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #349 = CNDE_r600
  { 348,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #348 = CNDE_eg
  { 347,	19,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #347 = CNDE_INT
  { 346,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #346 = CF_VC_R600
  { 345,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #345 = CF_VC_EG
  { 344,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #344 = CF_TC_R600
  { 343,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #343 = CF_TC_EG
  { 342,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #342 = CF_PUSH_ELSE_R600
  { 341,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #341 = CF_PUSH_EG
  { 340,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #340 = CF_JUMP_R600
  { 339,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #339 = CF_JUMP_EG
  { 338,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #338 = CF_END_R600
  { 337,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #337 = CF_END_EG
  { 336,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #336 = CF_END_CM
  { 335,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #335 = CF_ELSE_R600
  { 334,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo10 },  // Inst #334 = CF_ELSE_EG
  { 333,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #333 = CF_CONTINUE_R600
  { 332,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #332 = CF_CONTINUE_EG
  { 331,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #331 = CF_CALL_FS_R600
  { 330,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr },  // Inst #330 = CF_CALL_FS_EG
  { 329,	9,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo62 },  // Inst #329 = CF_ALU_PUSH_BEFORE
  { 328,	9,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo62 },  // Inst #328 = CF_ALU_POP_AFTER
  { 327,	9,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo62 },  // Inst #327 = CF_ALU_ELSE_AFTER
  { 326,	9,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo62 },  // Inst #326 = CF_ALU_CONTINUE
  { 325,	9,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo62 },  // Inst #325 = CF_ALU_BREAK
  { 324,	9,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo62 },  // Inst #324 = CF_ALU
  { 323,	14,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #323 = CEIL
  { 322,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #322 = BIT_ALIGN_INT_eg
  { 321,	21,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #321 = BFM_INT_eg
  { 320,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #320 = BFI_INT_eg
  { 319,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #319 = BFE_UINT_eg
  { 318,	19,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, OperandInfo61 },  // Inst #318 = BFE_INT_eg
  { 317,	14,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, OperandInfo60 },  // Inst #317 = BCNT_INT
  { 316,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #316 = ASHR_r600
  { 315,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #315 = ASHR_eg
  { 314,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #314 = AND_INT
  { 313,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo3 },  // Inst #313 = ALU_CLAUSE
  { 312,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #312 = ADD_INT
  { 311,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #311 = ADDC_UINT
  { 310,	21,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, OperandInfo59 },  // Inst #310 = ADD
  { 309,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #309 = WHILELOOP
  { 308,	7,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, OperandInfo58 },  // Inst #308 = TXD_SHADOW
  { 307,	7,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, OperandInfo58 },  // Inst #307 = TXD
  { 306,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr },  // Inst #306 = RETURN
  { 305,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #305 = RETDYN
  { 304,	4,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x4000000000000000ULL, nullptr, OperandInfo57 },  // Inst #304 = R600_RegisterStore
  { 303,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x8000000000000000ULL, nullptr, OperandInfo57 },  // Inst #303 = R600_RegisterLoad
  { 302,	4,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo56 },  // Inst #302 = R600_INSERT_ELT_V4
  { 301,	4,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo55 },  // Inst #301 = R600_INSERT_ELT_V2
  { 300,	3,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo54 },  // Inst #300 = R600_EXTRACT_ELT_V4
  { 299,	3,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo53 },  // Inst #299 = R600_EXTRACT_ELT_V2
  { 298,	4,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x180ULL, nullptr, OperandInfo52 },  // Inst #298 = PRED_X
  { 297,	2,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo48 },  // Inst #297 = MOV_IMM_I32
  { 296,	2,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo48 },  // Inst #296 = MOV_IMM_GLOBAL_ADDR
  { 295,	2,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo48 },  // Inst #295 = MOV_IMM_F32
  { 294,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo47 },  // Inst #294 = MASK_WRITE
  { 293,	2,	0,	0,	3,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo51 },  // Inst #293 = JUMP_COND
  { 292,	1,	0,	0,	3,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, OperandInfo2 },  // Inst #292 = JUMP
  { 291,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo47 },  // Inst #291 = IF_PREDICATE_SET
  { 290,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #290 = IF_LOGICALZ_i32
  { 289,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #289 = IF_LOGICALZ_f32
  { 288,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #288 = IF_LOGICALNZ_i32
  { 287,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #287 = IF_LOGICALNZ_f32
  { 286,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo46 },  // Inst #286 = IFC_i32
  { 285,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo46 },  // Inst #285 = IFC_f32
  { 284,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #284 = FUNC
  { 283,	2,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #283 = FNEG_R600
  { 282,	2,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo46 },  // Inst #282 = FABS_R600
  { 281,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #281 = ENDSWITCH
  { 280,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #280 = ENDMAIN
  { 279,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #279 = ENDLOOP
  { 278,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #278 = ENDIF
  { 277,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #277 = ENDFUNC
  { 276,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #276 = END
  { 275,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #275 = ELSE
  { 274,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr },  // Inst #274 = DUMMY_CHAIN
  { 273,	71,	1,	0,	3,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, OperandInfo50 },  // Inst #273 = DOT_4
  { 272,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #272 = DEFAULT
  { 271,	2,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo49 },  // Inst #271 = CUBE_r600_pseudo
  { 270,	2,	1,	0,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, OperandInfo49 },  // Inst #270 = CUBE_eg_pseudo
  { 269,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #269 = CONTINUE_LOGICALZ_i32
  { 268,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #268 = CONTINUE_LOGICALZ_f32
  { 267,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #267 = CONTINUE_LOGICALNZ_i32
  { 266,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #266 = CONTINUE_LOGICALNZ_f32
  { 265,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo46 },  // Inst #265 = CONTINUEC_i32
  { 264,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo46 },  // Inst #264 = CONTINUEC_f32
  { 263,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #263 = CONTINUE
  { 262,	2,	1,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, OperandInfo48 },  // Inst #262 = CONST_COPY
  { 261,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #261 = BREAK_LOGICALZ_i32
  { 260,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #260 = BREAK_LOGICALZ_f32
  { 259,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #259 = BREAK_LOGICALNZ_i32
  { 258,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo47 },  // Inst #258 = BREAK_LOGICALNZ_f32
  { 257,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo46 },  // Inst #257 = BREAKC_i32
  { 256,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, OperandInfo46 },  // Inst #256 = BREAKC_f32
  { 255,	0,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr },  // Inst #255 = BREAK
  { 254,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo45 },  // Inst #254 = BRANCH_COND_i32
  { 253,	2,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo45 },  // Inst #253 = BRANCH_COND_f32
  { 252,	1,	0,	0,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, OperandInfo2 },  // Inst #252 = BRANCH
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
extern const char R600InstrNameData[] = {
  /* 0 */ "CF_TC_R600\0"
  /* 11 */ "CF_VC_R600\0"
  /* 22 */ "CF_END_R600\0"
  /* 34 */ "CF_ELSE_R600\0"
  /* 47 */ "CF_PUSH_ELSE_R600\0"
  /* 65 */ "CF_CONTINUE_R600\0"
  /* 82 */ "FNEG_R600\0"
  /* 92 */ "LOOP_BREAK_R600\0"
  /* 108 */ "CF_JUMP_R600\0"
  /* 121 */ "END_LOOP_R600\0"
  /* 135 */ "WHILE_LOOP_R600\0"
  /* 151 */ "POP_R600\0"
  /* 160 */ "FABS_R600\0"
  /* 170 */ "CF_CALL_FS_R600\0"
  /* 186 */ "DOT4_r600\0"
  /* 196 */ "MULADD_r600\0"
  /* 208 */ "LOG_CLAMPED_r600\0"
  /* 225 */ "RECIP_CLAMPED_r600\0"
  /* 244 */ "RECIPSQRT_CLAMPED_r600\0"
  /* 267 */ "CNDE_r600\0"
  /* 277 */ "MULADD_IEEE_r600\0"
  /* 294 */ "LOG_IEEE_r600\0"
  /* 308 */ "RECIP_IEEE_r600\0"
  /* 324 */ "EXP_IEEE_r600\0"
  /* 338 */ "RECIPSQRT_IEEE_r600\0"
  /* 358 */ "CNDGE_r600\0"
  /* 369 */ "LSHL_r600\0"
  /* 379 */ "SIN_r600\0"
  /* 388 */ "ASHR_r600\0"
  /* 398 */ "LSHR_r600\0"
  /* 408 */ "COS_r600\0"
  /* 417 */ "CNDGT_r600\0"
  /* 428 */ "MUL_LIT_r600\0"
  /* 441 */ "UINT_TO_FLT_r600\0"
  /* 458 */ "MULHI_UINT_r600\0"
  /* 474 */ "MULLO_UINT_r600\0"
  /* 490 */ "FLT_TO_UINT_r600\0"
  /* 507 */ "RECIP_UINT_r600\0"
  /* 523 */ "MULHI_INT_r600\0"
  /* 538 */ "MULLO_INT_r600\0"
  /* 553 */ "FLT_TO_INT_r600\0"
  /* 569 */ "SIN_r700\0"
  /* 578 */ "COS_r700\0"
  /* 587 */ "G_FLOG10\0"
  /* 596 */ "SETGE_DX10\0"
  /* 607 */ "SETNE_DX10\0"
  /* 618 */ "SETE_DX10\0"
  /* 628 */ "MIN_DX10\0"
  /* 637 */ "SETGT_DX10\0"
  /* 648 */ "MAX_DX10\0"
  /* 657 */ "INTERP_LOAD_P0\0"
  /* 672 */ "RAT_STORE_DWORD32\0"
  /* 690 */ "MOV_IMM_F32\0"
  /* 702 */ "MOV_IMM_I32\0"
  /* 714 */ "FLT16_TO_FLT32\0"
  /* 729 */ "CONTINUEC_f32\0"
  /* 743 */ "IFC_f32\0"
  /* 751 */ "BREAKC_f32\0"
  /* 762 */ "BRANCH_COND_f32\0"
  /* 778 */ "CONTINUE_LOGICALZ_f32\0"
  /* 800 */ "IF_LOGICALZ_f32\0"
  /* 816 */ "BREAK_LOGICALZ_f32\0"
  /* 835 */ "CONTINUE_LOGICALNZ_f32\0"
  /* 858 */ "IF_LOGICALNZ_f32\0"
  /* 875 */ "BREAK_LOGICALNZ_f32\0"
  /* 895 */ "CONTINUEC_i32\0"
  /* 909 */ "IFC_i32\0"
  /* 917 */ "BREAKC_i32\0"
  /* 928 */ "BRANCH_COND_i32\0"
  /* 944 */ "CONTINUE_LOGICALZ_i32\0"
  /* 966 */ "IF_LOGICALZ_i32\0"
  /* 982 */ "BREAK_LOGICALZ_i32\0"
  /* 1001 */ "CONTINUE_LOGICALNZ_i32\0"
  /* 1024 */ "IF_LOGICALNZ_i32\0"
  /* 1041 */ "BREAK_LOGICALNZ_i32\0"
  /* 1061 */ "G_FLOG2\0"
  /* 1069 */ "G_FEXP2\0"
  /* 1077 */ "R600_EXTRACT_ELT_V2\0"
  /* 1097 */ "R600_INSERT_ELT_V2\0"
  /* 1116 */ "MULHI_UINT_cm24\0"
  /* 1132 */ "MULHI_INT_cm24\0"
  /* 1147 */ "RAT_STORE_DWORD64\0"
  /* 1165 */ "R600_EXTRACT_ELT_V4\0"
  /* 1185 */ "R600_INSERT_ELT_V4\0"
  /* 1204 */ "DOT_4\0"
  /* 1210 */ "FLT32_TO_FLT16\0"
  /* 1225 */ "RAT_STORE_DWORD128\0"
  /* 1244 */ "G_FMA\0"
  /* 1250 */ "G_STRICT_FMA\0"
  /* 1263 */ "TEX_SAMPLE_C_LB\0"
  /* 1279 */ "TEX_SAMPLE_LB\0"
  /* 1293 */ "G_FSUB\0"
  /* 1300 */ "G_STRICT_FSUB\0"
  /* 1314 */ "G_ATOMICRMW_FSUB\0"
  /* 1331 */ "G_SUB\0"
  /* 1337 */ "LDS_SUB\0"
  /* 1345 */ "G_ATOMICRMW_SUB\0"
  /* 1361 */ "G_INTRINSIC\0"
  /* 1373 */ "ENDFUNC\0"
  /* 1381 */ "G_FPTRUNC\0"
  /* 1391 */ "G_INTRINSIC_TRUNC\0"
  /* 1409 */ "G_TRUNC\0"
  /* 1417 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 1438 */ "G_DYN_STACKALLOC\0"
  /* 1455 */ "TEX_SAMPLE_C\0"
  /* 1468 */ "G_FMAD\0"
  /* 1475 */ "G_INDEXED_SEXTLOAD\0"
  /* 1494 */ "G_SEXTLOAD\0"
  /* 1505 */ "G_INDEXED_ZEXTLOAD\0"
  /* 1524 */ "G_ZEXTLOAD\0"
  /* 1535 */ "INTERP_VEC_LOAD\0"
  /* 1551 */ "G_INDEXED_LOAD\0"
  /* 1566 */ "G_LOAD\0"
  /* 1573 */ "PAD\0"
  /* 1577 */ "G_VECREDUCE_FADD\0"
  /* 1594 */ "G_FADD\0"
  /* 1601 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 1622 */ "G_STRICT_FADD\0"
  /* 1636 */ "G_ATOMICRMW_FADD\0"
  /* 1653 */ "G_VECREDUCE_ADD\0"
  /* 1669 */ "G_ADD\0"
  /* 1675 */ "G_PTR_ADD\0"
  /* 1685 */ "LDS_ADD\0"
  /* 1693 */ "G_ATOMICRMW_ADD\0"
  /* 1709 */ "TEX_LD\0"
  /* 1716 */ "G_ATOMICRMW_NAND\0"
  /* 1733 */ "G_VECREDUCE_AND\0"
  /* 1749 */ "G_AND\0"
  /* 1755 */ "LDS_AND\0"
  /* 1763 */ "G_ATOMICRMW_AND\0"
  /* 1779 */ "LIFETIME_END\0"
  /* 1792 */ "G_BRCOND\0"
  /* 1801 */ "JUMP_COND\0"
  /* 1811 */ "G_LLROUND\0"
  /* 1821 */ "G_LROUND\0"
  /* 1830 */ "G_INTRINSIC_ROUND\0"
  /* 1848 */ "G_INTRINSIC_FPTRUNC_ROUND\0"
  /* 1874 */ "LOAD_STACK_GUARD\0"
  /* 1891 */ "TXD\0"
  /* 1895 */ "PSEUDO_PROBE\0"
  /* 1908 */ "G_SSUBE\0"
  /* 1916 */ "G_USUBE\0"
  /* 1924 */ "G_FENCE\0"
  /* 1932 */ "ARITH_FENCE\0"
  /* 1944 */ "REG_SEQUENCE\0"
  /* 1957 */ "G_SADDE\0"
  /* 1965 */ "G_UADDE\0"
  /* 1973 */ "MUL_IEEE\0"
  /* 1982 */ "G_FMINNUM_IEEE\0"
  /* 1997 */ "G_FMAXNUM_IEEE\0"
  /* 2012 */ "SGE\0"
  /* 2016 */ "PRED_SETGE\0"
  /* 2027 */ "G_JUMP_TABLE\0"
  /* 2040 */ "BUNDLE\0"
  /* 2047 */ "TEX_SAMPLE\0"
  /* 2058 */ "RNDNE\0"
  /* 2064 */ "G_MEMCPY_INLINE\0"
  /* 2080 */ "SNE\0"
  /* 2084 */ "PRED_SETNE\0"
  /* 2095 */ "LOCAL_ESCAPE\0"
  /* 2108 */ "CF_ALU_PUSH_BEFORE\0"
  /* 2127 */ "G_INDEXED_STORE\0"
  /* 2143 */ "G_STORE\0"
  /* 2151 */ "ELSE\0"
  /* 2156 */ "G_BITREVERSE\0"
  /* 2169 */ "FETCH_CLAUSE\0"
  /* 2182 */ "ALU_CLAUSE\0"
  /* 2193 */ "PRED_SETE\0"
  /* 2203 */ "LDS_BYTE_WRITE\0"
  /* 2218 */ "MASK_WRITE\0"
  /* 2229 */ "LDS_WRITE\0"
  /* 2239 */ "LDS_SHORT_WRITE\0"
  /* 2255 */ "DBG_VALUE\0"
  /* 2265 */ "G_GLOBAL_VALUE\0"
  /* 2280 */ "CF_ALU_CONTINUE\0"
  /* 2296 */ "G_MEMMOVE\0"
  /* 2306 */ "G_FREEZE\0"
  /* 2315 */ "G_FCANONICALIZE\0"
  /* 2331 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 2349 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 2367 */ "G_IMPLICIT_DEF\0"
  /* 2382 */ "DBG_INSTR_REF\0"
  /* 2396 */ "ENDIF\0"
  /* 2402 */ "TEX_VTX_CONSTBUF\0"
  /* 2419 */ "TEX_VTX_TEXBUF\0"
  /* 2434 */ "G_FNEG\0"
  /* 2441 */ "EXTRACT_SUBREG\0"
  /* 2456 */ "INSERT_SUBREG\0"
  /* 2470 */ "G_SEXT_INREG\0"
  /* 2483 */ "SUBREG_TO_REG\0"
  /* 2497 */ "CF_TC_EG\0"
  /* 2506 */ "CF_VC_EG\0"
  /* 2515 */ "CF_END_EG\0"
  /* 2525 */ "CF_ELSE_EG\0"
  /* 2536 */ "CF_CONTINUE_EG\0"
  /* 2551 */ "CF_PUSH_EG\0"
  /* 2562 */ "LOOP_BREAK_EG\0"
  /* 2576 */ "CF_JUMP_EG\0"
  /* 2587 */ "END_LOOP_EG\0"
  /* 2599 */ "WHILE_LOOP_EG\0"
  /* 2613 */ "POP_EG\0"
  /* 2620 */ "CF_CALL_FS_EG\0"
  /* 2634 */ "G_ATOMIC_CMPXCHG\0"
  /* 2651 */ "LDS_WRXCHG\0"
  /* 2662 */ "G_ATOMICRMW_XCHG\0"
  /* 2679 */ "G_FLOG\0"
  /* 2686 */ "G_VAARG\0"
  /* 2694 */ "PREALLOCATED_ARG\0"
  /* 2711 */ "TEX_SAMPLE_C_G\0"
  /* 2726 */ "TEX_SAMPLE_G\0"
  /* 2739 */ "BRANCH\0"
  /* 2746 */ "ENDSWITCH\0"
  /* 2756 */ "G_SMULH\0"
  /* 2764 */ "G_UMULH\0"
  /* 2772 */ "TEX_GET_GRADIENTS_H\0"
  /* 2792 */ "TEX_SET_GRADIENTS_H\0"
  /* 2812 */ "DBG_PHI\0"
  /* 2820 */ "G_FPTOSI\0"
  /* 2829 */ "G_FPTOUI\0"
  /* 2838 */ "G_FPOWI\0"
  /* 2846 */ "CF_ALU_BREAK\0"
  /* 2859 */ "G_PTRMASK\0"
  /* 2869 */ "GC_LABEL\0"
  /* 2878 */ "DBG_LABEL\0"
  /* 2888 */ "EH_LABEL\0"
  /* 2897 */ "ANNOTATION_LABEL\0"
  /* 2914 */ "ICALL_BRANCH_FUNNEL\0"
  /* 2934 */ "G_FSHL\0"
  /* 2941 */ "G_SHL\0"
  /* 2947 */ "G_FCEIL\0"
  /* 2955 */ "PATCHABLE_TAIL_CALL\0"
  /* 2975 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 3002 */ "PATCHABLE_EVENT_CALL\0"
  /* 3023 */ "FENTRY_CALL\0"
  /* 3035 */ "KILL\0"
  /* 3040 */ "G_CONSTANT_POOL\0"
  /* 3056 */ "G_ROTL\0"
  /* 3063 */ "G_VECREDUCE_FMUL\0"
  /* 3080 */ "G_FMUL\0"
  /* 3087 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 3108 */ "G_STRICT_FMUL\0"
  /* 3122 */ "G_VECREDUCE_MUL\0"
  /* 3138 */ "G_MUL\0"
  /* 3144 */ "TEX_SAMPLE_C_L\0"
  /* 3159 */ "TEX_SAMPLE_L\0"
  /* 3172 */ "CF_END_CM\0"
  /* 3182 */ "G_FREM\0"
  /* 3189 */ "G_STRICT_FREM\0"
  /* 3203 */ "G_SREM\0"
  /* 3210 */ "G_UREM\0"
  /* 3217 */ "G_SDIVREM\0"
  /* 3227 */ "G_UDIVREM\0"
  /* 3237 */ "INLINEASM\0"
  /* 3247 */ "G_FMINIMUM\0"
  /* 3258 */ "G_FMAXIMUM\0"
  /* 3269 */ "G_FMINNUM\0"
  /* 3279 */ "G_FMAXNUM\0"
  /* 3289 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 3311 */ "G_ASSERT_ALIGN\0"
  /* 3326 */ "G_FCOPYSIGN\0"
  /* 3338 */ "DUMMY_CHAIN\0"
  /* 3350 */ "ENDMAIN\0"
  /* 3358 */ "G_VECREDUCE_FMIN\0"
  /* 3375 */ "G_ATOMICRMW_FMIN\0"
  /* 3392 */ "G_VECREDUCE_SMIN\0"
  /* 3409 */ "G_SMIN\0"
  /* 3416 */ "G_VECREDUCE_UMIN\0"
  /* 3433 */ "G_UMIN\0"
  /* 3440 */ "G_ATOMICRMW_UMIN\0"
  /* 3457 */ "G_ATOMICRMW_MIN\0"
  /* 3473 */ "G_FSIN\0"
  /* 3480 */ "CFI_INSTRUCTION\0"
  /* 3496 */ "RETURN\0"
  /* 3503 */ "RAT_ATOMIC_RSUB_RTN\0"
  /* 3523 */ "RAT_ATOMIC_SUB_RTN\0"
  /* 3542 */ "RAT_ATOMIC_ADD_RTN\0"
  /* 3561 */ "RAT_ATOMIC_AND_RTN\0"
  /* 3580 */ "RAT_ATOMIC_XOR_RTN\0"
  /* 3599 */ "RAT_ATOMIC_OR_RTN\0"
  /* 3617 */ "RAT_ATOMIC_DEC_UINT_RTN\0"
  /* 3641 */ "RAT_ATOMIC_INC_UINT_RTN\0"
  /* 3665 */ "RAT_ATOMIC_MIN_UINT_RTN\0"
  /* 3689 */ "RAT_ATOMIC_MAX_UINT_RTN\0"
  /* 3713 */ "RAT_ATOMIC_CMPXCHG_INT_RTN\0"
  /* 3740 */ "RAT_ATOMIC_XCHG_INT_RTN\0"
  /* 3764 */ "RAT_ATOMIC_MIN_INT_RTN\0"
  /* 3787 */ "RAT_ATOMIC_MAX_INT_RTN\0"
  /* 3810 */ "RETDYN\0"
  /* 3817 */ "G_SSUBO\0"
  /* 3825 */ "G_USUBO\0"
  /* 3833 */ "G_SADDO\0"
  /* 3841 */ "G_UADDO\0"
  /* 3849 */ "TEX_GET_TEXTURE_RESINFO\0"
  /* 3873 */ "G_SMULO\0"
  /* 3881 */ "G_UMULO\0"
  /* 3889 */ "G_BZERO\0"
  /* 3897 */ "STACKMAP\0"
  /* 3906 */ "G_ATOMICRMW_UDEC_WRAP\0"
  /* 3928 */ "G_ATOMICRMW_UINC_WRAP\0"
  /* 3950 */ "G_BSWAP\0"
  /* 3958 */ "G_SITOFP\0"
  /* 3967 */ "G_UITOFP\0"
  /* 3976 */ "G_FCMP\0"
  /* 3983 */ "G_ICMP\0"
  /* 3990 */ "JUMP\0"
  /* 3995 */ "ENDLOOP\0"
  /* 4003 */ "WHILELOOP\0"
  /* 4013 */ "G_CTPOP\0"
  /* 4021 */ "PATCHABLE_OP\0"
  /* 4034 */ "FAULTING_OP\0"
  /* 4046 */ "PREALLOCATED_SETUP\0"
  /* 4065 */ "G_FEXP\0"
  /* 4072 */ "G_BR\0"
  /* 4077 */ "INLINEASM_BR\0"
  /* 4090 */ "G_BLOCK_ADDR\0"
  /* 4103 */ "MOV_IMM_GLOBAL_ADDR\0"
  /* 4123 */ "MEMBARRIER\0"
  /* 4134 */ "GROUP_BARRIER\0"
  /* 4148 */ "CF_ALU_ELSE_AFTER\0"
  /* 4166 */ "CF_ALU_POP_AFTER\0"
  /* 4183 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 4208 */ "G_READCYCLECOUNTER\0"
  /* 4227 */ "G_READ_REGISTER\0"
  /* 4243 */ "G_WRITE_REGISTER\0"
  /* 4260 */ "G_ASHR\0"
  /* 4267 */ "G_FSHR\0"
  /* 4274 */ "G_LSHR\0"
  /* 4281 */ "RAT_MSKOR\0"
  /* 4291 */ "G_FFLOOR\0"
  /* 4300 */ "G_BUILD_VECTOR\0"
  /* 4315 */ "G_SHUFFLE_VECTOR\0"
  /* 4332 */ "G_VECREDUCE_XOR\0"
  /* 4348 */ "G_XOR\0"
  /* 4354 */ "LDS_XOR\0"
  /* 4362 */ "G_ATOMICRMW_XOR\0"
  /* 4378 */ "G_VECREDUCE_OR\0"
  /* 4393 */ "G_OR\0"
  /* 4398 */ "LDS_OR\0"
  /* 4405 */ "G_ATOMICRMW_OR\0"
  /* 4420 */ "G_ROTR\0"
  /* 4427 */ "TEX_LDPTR\0"
  /* 4437 */ "G_INTTOPTR\0"
  /* 4448 */ "G_FABS\0"
  /* 4455 */ "G_ABS\0"
  /* 4461 */ "G_UNMERGE_VALUES\0"
  /* 4478 */ "G_MERGE_VALUES\0"
  /* 4493 */ "LITERALS\0"
  /* 4502 */ "G_FCOS\0"
  /* 4509 */ "G_CONCAT_VECTORS\0"
  /* 4526 */ "COPY_TO_REGCLASS\0"
  /* 4543 */ "G_IS_FPCLASS\0"
  /* 4556 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 4586 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 4613 */ "G_SSUBSAT\0"
  /* 4623 */ "G_USUBSAT\0"
  /* 4633 */ "G_SADDSAT\0"
  /* 4643 */ "G_UADDSAT\0"
  /* 4653 */ "G_SSHLSAT\0"
  /* 4663 */ "G_USHLSAT\0"
  /* 4673 */ "G_SMULFIXSAT\0"
  /* 4686 */ "G_UMULFIXSAT\0"
  /* 4699 */ "G_SDIVFIXSAT\0"
  /* 4712 */ "G_UDIVFIXSAT\0"
  /* 4725 */ "FRACT\0"
  /* 4731 */ "G_EXTRACT\0"
  /* 4741 */ "G_SELECT\0"
  /* 4750 */ "G_BRINDIRECT\0"
  /* 4763 */ "RAT_ATOMIC_RSUB_NORET\0"
  /* 4785 */ "RAT_ATOMIC_SUB_NORET\0"
  /* 4806 */ "RAT_ATOMIC_ADD_NORET\0"
  /* 4827 */ "RAT_ATOMIC_AND_NORET\0"
  /* 4848 */ "RAT_ATOMIC_XOR_NORET\0"
  /* 4869 */ "RAT_ATOMIC_OR_NORET\0"
  /* 4889 */ "RAT_ATOMIC_DEC_UINT_NORET\0"
  /* 4915 */ "RAT_ATOMIC_INC_UINT_NORET\0"
  /* 4941 */ "RAT_ATOMIC_MIN_UINT_NORET\0"
  /* 4967 */ "RAT_ATOMIC_MAX_UINT_NORET\0"
  /* 4993 */ "RAT_ATOMIC_CMPXCHG_INT_NORET\0"
  /* 5022 */ "RAT_ATOMIC_XCHG_INT_NORET\0"
  /* 5048 */ "RAT_ATOMIC_MIN_INT_NORET\0"
  /* 5073 */ "RAT_ATOMIC_MAX_INT_NORET\0"
  /* 5098 */ "LDS_SUB_RET\0"
  /* 5110 */ "LDS_UBYTE_READ_RET\0"
  /* 5129 */ "LDS_BYTE_READ_RET\0"
  /* 5147 */ "LDS_READ_RET\0"
  /* 5160 */ "LDS_USHORT_READ_RET\0"
  /* 5180 */ "LDS_SHORT_READ_RET\0"
  /* 5199 */ "LDS_ADD_RET\0"
  /* 5211 */ "LDS_AND_RET\0"
  /* 5223 */ "PATCHABLE_RET\0"
  /* 5237 */ "LDS_WRXCHG_RET\0"
  /* 5252 */ "LDS_XOR_RET\0"
  /* 5264 */ "LDS_OR_RET\0"
  /* 5275 */ "LDS_MIN_UINT_RET\0"
  /* 5292 */ "LDS_MAX_UINT_RET\0"
  /* 5309 */ "LDS_MIN_INT_RET\0"
  /* 5325 */ "LDS_MAX_INT_RET\0"
  /* 5341 */ "LDS_CMPST_RET\0"
  /* 5355 */ "G_MEMSET\0"
  /* 5364 */ "IF_PREDICATE_SET\0"
  /* 5381 */ "KILLGT\0"
  /* 5388 */ "SGT\0"
  /* 5392 */ "PRED_SETGT\0"
  /* 5403 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 5427 */ "G_BRJT\0"
  /* 5434 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 5455 */ "G_INSERT_VECTOR_ELT\0"
  /* 5475 */ "DEFAULT\0"
  /* 5483 */ "G_FCONSTANT\0"
  /* 5495 */ "G_CONSTANT\0"
  /* 5506 */ "STATEPOINT\0"
  /* 5517 */ "PATCHPOINT\0"
  /* 5528 */ "G_PTRTOINT\0"
  /* 5539 */ "G_FRINT\0"
  /* 5547 */ "G_INTRINSIC_LRINT\0"
  /* 5565 */ "SUBB_UINT\0"
  /* 5575 */ "ADDC_UINT\0"
  /* 5585 */ "SETGE_UINT\0"
  /* 5596 */ "FFBH_UINT\0"
  /* 5606 */ "LDS_MIN_UINT\0"
  /* 5619 */ "SETGT_UINT\0"
  /* 5630 */ "LDS_MAX_UINT\0"
  /* 5643 */ "G_FNEARBYINT\0"
  /* 5656 */ "SUB_INT\0"
  /* 5664 */ "ADD_INT\0"
  /* 5672 */ "AND_INT\0"
  /* 5680 */ "CNDE_INT\0"
  /* 5689 */ "CNDGE_INT\0"
  /* 5699 */ "PRED_SETGE_INT\0"
  /* 5714 */ "PRED_SETNE_INT\0"
  /* 5729 */ "PRED_SETE_INT\0"
  /* 5743 */ "FFBL_INT\0"
  /* 5752 */ "LDS_MIN_INT\0"
  /* 5764 */ "XOR_INT\0"
  /* 5772 */ "CNDGT_INT\0"
  /* 5782 */ "PRED_SETGT_INT\0"
  /* 5797 */ "BCNT_INT\0"
  /* 5806 */ "NOT_INT\0"
  /* 5814 */ "LDS_MAX_INT\0"
  /* 5826 */ "G_VASTART\0"
  /* 5836 */ "LIFETIME_START\0"
  /* 5851 */ "G_INVOKE_REGION_START\0"
  /* 5873 */ "G_INSERT\0"
  /* 5882 */ "G_FSQRT\0"
  /* 5890 */ "G_STRICT_FSQRT\0"
  /* 5905 */ "G_BITCAST\0"
  /* 5915 */ "G_ADDRSPACE_CAST\0"
  /* 5932 */ "DBG_VALUE_LIST\0"
  /* 5947 */ "LDS_CMPST\0"
  /* 5957 */ "G_FPEXT\0"
  /* 5965 */ "G_SEXT\0"
  /* 5972 */ "G_ASSERT_SEXT\0"
  /* 5986 */ "G_ANYEXT\0"
  /* 5995 */ "G_ZEXT\0"
  /* 6002 */ "G_ASSERT_ZEXT\0"
  /* 6016 */ "CF_ALU\0"
  /* 6023 */ "G_FDIV\0"
  /* 6030 */ "G_STRICT_FDIV\0"
  /* 6044 */ "G_SDIV\0"
  /* 6051 */ "G_UDIV\0"
  /* 6058 */ "MOV\0"
  /* 6062 */ "TEX_GET_GRADIENTS_V\0"
  /* 6082 */ "TEX_SET_GRADIENTS_V\0"
  /* 6102 */ "TXD_SHADOW\0"
  /* 6113 */ "G_FPOW\0"
  /* 6120 */ "INTERP_ZW\0"
  /* 6130 */ "INTERP_PAIR_ZW\0"
  /* 6145 */ "G_VECREDUCE_FMAX\0"
  /* 6162 */ "G_ATOMICRMW_FMAX\0"
  /* 6179 */ "G_VECREDUCE_SMAX\0"
  /* 6196 */ "G_SMAX\0"
  /* 6203 */ "G_VECREDUCE_UMAX\0"
  /* 6220 */ "G_UMAX\0"
  /* 6227 */ "G_ATOMICRMW_UMAX\0"
  /* 6244 */ "G_ATOMICRMW_MAX\0"
  /* 6260 */ "G_FRAME_INDEX\0"
  /* 6274 */ "G_SBFX\0"
  /* 6281 */ "G_UBFX\0"
  /* 6288 */ "G_SMULFIX\0"
  /* 6298 */ "G_UMULFIX\0"
  /* 6308 */ "G_SDIVFIX\0"
  /* 6318 */ "G_UDIVFIX\0"
  /* 6328 */ "PRED_X\0"
  /* 6335 */ "G_MEMCPY\0"
  /* 6344 */ "CONST_COPY\0"
  /* 6355 */ "INTERP_XY\0"
  /* 6365 */ "INTERP_PAIR_XY\0"
  /* 6380 */ "G_CTLZ\0"
  /* 6387 */ "G_CTTZ\0"
  /* 6394 */ "R600_RegisterLoad\0"
  /* 6412 */ "R600_RegisterStore\0"
  /* 6431 */ "R600_ExportBuf\0"
  /* 6446 */ "EG_ExportBuf\0"
  /* 6459 */ "VTX_READ_32_eg\0"
  /* 6474 */ "RAT_WRITE_CACHELESS_32_eg\0"
  /* 6500 */ "MULADD_UINT24_eg\0"
  /* 6517 */ "MULHI_UINT24_eg\0"
  /* 6533 */ "MUL_UINT24_eg\0"
  /* 6547 */ "VTX_READ_64_eg\0"
  /* 6562 */ "RAT_WRITE_CACHELESS_64_eg\0"
  /* 6588 */ "DOT4_eg\0"
  /* 6596 */ "VTX_READ_16_eg\0"
  /* 6611 */ "VTX_READ_128_eg\0"
  /* 6627 */ "RAT_WRITE_CACHELESS_128_eg\0"
  /* 6654 */ "VTX_READ_8_eg\0"
  /* 6668 */ "FMA_eg\0"
  /* 6675 */ "MULADD_eg\0"
  /* 6685 */ "LOG_CLAMPED_eg\0"
  /* 6700 */ "RECIP_CLAMPED_eg\0"
  /* 6717 */ "RECIPSQRT_CLAMPED_eg\0"
  /* 6738 */ "RAT_STORE_TYPED_eg\0"
  /* 6757 */ "CNDE_eg\0"
  /* 6765 */ "MULADD_IEEE_eg\0"
  /* 6780 */ "LOG_IEEE_eg\0"
  /* 6792 */ "RECIP_IEEE_eg\0"
  /* 6806 */ "EXP_IEEE_eg\0"
  /* 6818 */ "RECIPSQRT_IEEE_eg\0"
  /* 6836 */ "CNDGE_eg\0"
  /* 6845 */ "LSHL_eg\0"
  /* 6853 */ "SIN_eg\0"
  /* 6860 */ "ASHR_eg\0"
  /* 6868 */ "LSHR_eg\0"
  /* 6876 */ "COS_eg\0"
  /* 6883 */ "CNDGT_eg\0"
  /* 6892 */ "MUL_LIT_eg\0"
  /* 6903 */ "UINT_TO_FLT_eg\0"
  /* 6918 */ "BFE_UINT_eg\0"
  /* 6930 */ "MULHI_UINT_eg\0"
  /* 6944 */ "MULLO_UINT_eg\0"
  /* 6958 */ "FLT_TO_UINT_eg\0"
  /* 6973 */ "RECIP_UINT_eg\0"
  /* 6987 */ "MOVA_INT_eg\0"
  /* 6999 */ "BFE_INT_eg\0"
  /* 7010 */ "BFI_INT_eg\0"
  /* 7021 */ "MULHI_INT_eg\0"
  /* 7034 */ "BFM_INT_eg\0"
  /* 7045 */ "BIT_ALIGN_INT_eg\0"
  /* 7062 */ "MULLO_INT_eg\0"
  /* 7075 */ "FLT_TO_INT_eg\0"
  /* 7089 */ "CUBE_r600_real\0"
  /* 7104 */ "CUBE_eg_real\0"
  /* 7117 */ "VTX_READ_32_cm\0"
  /* 7132 */ "MULADD_INT24_cm\0"
  /* 7148 */ "MUL_INT24_cm\0"
  /* 7161 */ "VTX_READ_64_cm\0"
  /* 7176 */ "VTX_READ_16_cm\0"
  /* 7191 */ "VTX_READ_128_cm\0"
  /* 7207 */ "VTX_READ_8_cm\0"
  /* 7221 */ "RECIP_CLAMPED_cm\0"
  /* 7238 */ "RECIPSQRT_CLAMPED_cm\0"
  /* 7259 */ "RAT_STORE_TYPED_cm\0"
  /* 7278 */ "LOG_IEEE_cm\0"
  /* 7290 */ "RECIP_IEEE_cm\0"
  /* 7304 */ "EXP_IEEE_cm\0"
  /* 7316 */ "RECIPSQRT_IEEE_cm\0"
  /* 7334 */ "SIN_cm\0"
  /* 7341 */ "COS_cm\0"
  /* 7348 */ "MULHI_UINT_cm\0"
  /* 7362 */ "MULLO_UINT_cm\0"
  /* 7376 */ "MULHI_INT_cm\0"
  /* 7389 */ "MULLO_INT_cm\0"
  /* 7402 */ "CUBE_r600_pseudo\0"
  /* 7419 */ "CUBE_eg_pseudo\0"
  /* 7434 */ "R600_ExportSwz\0"
  /* 7449 */ "EG_ExportSwz\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned R600InstrNameIndices[] = {
    2816U, 3237U, 4077U, 3480U, 2888U, 2869U, 2897U, 3035U, 
    2441U, 2456U, 2369U, 2483U, 4526U, 2255U, 5932U, 2382U, 
    2812U, 2878U, 1944U, 6350U, 2040U, 5836U, 1779U, 1895U, 
    1932U, 3897U, 3023U, 5517U, 1874U, 4046U, 2694U, 5506U, 
    2095U, 4034U, 4021U, 4183U, 5223U, 5403U, 2955U, 3002U, 
    2975U, 2914U, 4123U, 5972U, 6002U, 3311U, 1669U, 1331U, 
    3138U, 6044U, 6051U, 3203U, 3210U, 3217U, 3227U, 1749U, 
    4393U, 4348U, 2367U, 2814U, 6260U, 2265U, 3040U, 4731U, 
    4461U, 5873U, 4478U, 4300U, 1417U, 4509U, 5528U, 4437U, 
    5905U, 2306U, 1848U, 1391U, 1830U, 5547U, 3289U, 4208U, 
    1566U, 1494U, 1524U, 1551U, 1475U, 1505U, 2143U, 2127U, 
    4556U, 2634U, 2662U, 1693U, 1345U, 1763U, 1716U, 4405U, 
    4362U, 6244U, 3457U, 6227U, 3440U, 1636U, 1314U, 6162U, 
    3375U, 3928U, 3906U, 1924U, 1792U, 4750U, 5851U, 1361U, 
    4586U, 5986U, 1409U, 5495U, 5483U, 5826U, 2686U, 5965U, 
    2470U, 5995U, 2941U, 4274U, 4260U, 2934U, 4267U, 4420U, 
    3056U, 3983U, 3976U, 4741U, 3841U, 1965U, 3825U, 1916U, 
    3833U, 1957U, 3817U, 1908U, 3881U, 3873U, 2764U, 2756U, 
    4643U, 4633U, 4623U, 4613U, 4663U, 4653U, 6288U, 6298U, 
    4673U, 4686U, 6308U, 6318U, 4699U, 4712U, 1594U, 1293U, 
    3080U, 1244U, 1468U, 6023U, 3182U, 6113U, 2838U, 4065U, 
    1069U, 2679U, 1061U, 587U, 2434U, 5957U, 1381U, 2820U, 
    2829U, 3958U, 3967U, 4448U, 3326U, 4543U, 2315U, 3269U, 
    3279U, 1982U, 1997U, 3247U, 3258U, 1675U, 2859U, 3409U, 
    6196U, 3433U, 6220U, 4455U, 1821U, 1811U, 4072U, 5427U, 
    5455U, 5434U, 4315U, 6387U, 2349U, 6380U, 2331U, 4013U, 
    3950U, 2156U, 2947U, 4502U, 3473U, 5882U, 4291U, 5539U, 
    5643U, 5915U, 4090U, 2027U, 1438U, 1622U, 1300U, 3108U, 
    6030U, 3189U, 1250U, 5890U, 4227U, 4243U, 6335U, 2064U, 
    2296U, 5355U, 3889U, 1601U, 3087U, 1577U, 3063U, 6145U, 
    3358U, 1653U, 3122U, 1733U, 4378U, 4332U, 6179U, 3392U, 
    6203U, 3416U, 6274U, 6281U, 2739U, 762U, 928U, 2853U, 
    751U, 917U, 875U, 1041U, 816U, 982U, 6344U, 2287U, 
    729U, 895U, 835U, 1001U, 778U, 944U, 7419U, 7402U, 
    5475U, 1204U, 3338U, 2151U, 1788U, 1373U, 2396U, 3995U, 
    3350U, 2746U, 160U, 82U, 1376U, 743U, 909U, 858U, 
    1024U, 800U, 966U, 5364U, 3990U, 1801U, 2218U, 690U, 
    4103U, 702U, 6328U, 1077U, 1165U, 1097U, 1185U, 6394U, 
    6412U, 3810U, 3496U, 1891U, 6102U, 4003U, 1590U, 5575U, 
    5664U, 2182U, 5672U, 6860U, 388U, 5797U, 6999U, 6918U, 
    7010U, 7034U, 7045U, 2950U, 6016U, 2846U, 2280U, 4148U, 
    4166U, 2108U, 2620U, 170U, 2536U, 65U, 2525U, 34U, 
    3172U, 2515U, 22U, 2576U, 108U, 2551U, 47U, 2497U, 
    0U, 2506U, 11U, 5680U, 6757U, 267U, 5689U, 6836U, 
    358U, 5772U, 6883U, 417U, 7341U, 6876U, 408U, 578U, 
    7104U, 7089U, 6588U, 186U, 6446U, 7449U, 2587U, 121U, 
    7304U, 6806U, 324U, 2169U, 5596U, 5743U, 4294U, 714U, 
    1210U, 7075U, 553U, 6958U, 490U, 6668U, 4725U, 4134U, 
    657U, 6365U, 6130U, 1535U, 6355U, 6120U, 6904U, 442U, 
    5381U, 1685U, 5199U, 1755U, 5211U, 5129U, 2203U, 5947U, 
    5341U, 5814U, 5325U, 5630U, 5292U, 5752U, 5309U, 5606U, 
    5275U, 4398U, 5264U, 5147U, 5180U, 2239U, 1337U, 5098U, 
    5110U, 5160U, 2229U, 2651U, 5237U, 4354U, 5252U, 4493U, 
    6685U, 208U, 7278U, 6780U, 294U, 2562U, 92U, 6845U, 
    369U, 6868U, 398U, 6158U, 648U, 5818U, 5634U, 3371U, 
    628U, 5756U, 5610U, 6058U, 6987U, 3076U, 6765U, 277U, 
    7132U, 6500U, 6675U, 196U, 7376U, 1132U, 7021U, 523U, 
    6517U, 7348U, 1116U, 6930U, 458U, 7389U, 7062U, 538U, 
    7362U, 6944U, 474U, 1973U, 7148U, 6892U, 428U, 6533U, 
    5806U, 5765U, 1573U, 2613U, 151U, 2193U, 5729U, 2016U, 
    5699U, 5392U, 5782U, 2084U, 5714U, 6431U, 7434U, 4806U, 
    3542U, 4827U, 3561U, 4993U, 3713U, 4889U, 3617U, 4915U, 
    3641U, 5073U, 3787U, 4967U, 3689U, 5048U, 3764U, 4941U, 
    3665U, 4869U, 3599U, 4763U, 3503U, 4785U, 3523U, 5022U, 
    3740U, 4848U, 3580U, 4281U, 1225U, 672U, 1147U, 7259U, 
    6738U, 6627U, 6474U, 6562U, 7238U, 6717U, 244U, 7316U, 
    6818U, 338U, 7221U, 6700U, 225U, 7290U, 6792U, 308U, 
    6973U, 507U, 2058U, 2198U, 618U, 5734U, 596U, 5704U, 
    5585U, 637U, 5787U, 5619U, 607U, 5719U, 2012U, 5388U, 
    7334U, 6853U, 379U, 569U, 2080U, 5565U, 5656U, 2772U, 
    6062U, 3849U, 1709U, 4427U, 2047U, 1455U, 2711U, 3144U, 
    1263U, 2726U, 3159U, 1279U, 2792U, 6082U, 2402U, 2419U, 
    1385U, 6903U, 441U, 7191U, 6611U, 7176U, 6596U, 7117U, 
    6459U, 7161U, 6547U, 7207U, 6654U, 2599U, 135U, 5764U, 
};

static inline void InitR600MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, nullptr, nullptr, 592);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct R600GenInstrInfo : public TargetInstrInfo {
  explicit R600GenInstrInfo(unsigned CFSetupOpcode = ~0u, unsigned CFDestroyOpcode = ~0u, unsigned CatchRetOpcode = ~0u, unsigned ReturnOpcode = ~0u);
  ~R600GenInstrInfo() override = default;

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
extern const MCInstrDesc R600Insts[];
extern const unsigned R600InstrNameIndices[];
extern const char R600InstrNameData[];
R600GenInstrInfo::R600GenInstrInfo(unsigned CFSetupOpcode, unsigned CFDestroyOpcode, unsigned CatchRetOpcode, unsigned ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, nullptr, nullptr, 592);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace R600 {
namespace OpName {
enum {
  ADDR = 98,
  COUNT = 105,
  Enabled = 106,
  KCACHE_ADDR0 = 103,
  KCACHE_ADDR1 = 104,
  KCACHE_BANK0 = 99,
  KCACHE_BANK1 = 100,
  KCACHE_MODE0 = 101,
  KCACHE_MODE1 = 102,
  addr = 72,
  bank_swizzle = 93,
  chan = 73,
  clamp = 80,
  clamp_W = 58,
  clamp_X = 7,
  clamp_Y = 24,
  clamp_Z = 41,
  dst = 0,
  dst_rel = 79,
  dst_rel_W = 57,
  dst_rel_X = 6,
  dst_rel_Y = 23,
  dst_rel_Z = 40,
  last = 90,
  literal = 92,
  literal0 = 70,
  literal1 = 71,
  omod = 78,
  omod_W = 56,
  omod_X = 5,
  omod_Y = 22,
  omod_Z = 39,
  pred_sel = 91,
  pred_sel_W = 69,
  pred_sel_X = 18,
  pred_sel_Y = 35,
  pred_sel_Z = 52,
  src0 = 1,
  src0_W = 59,
  src0_X = 8,
  src0_Y = 25,
  src0_Z = 42,
  src0_abs = 83,
  src0_abs_W = 62,
  src0_abs_X = 11,
  src0_abs_Y = 28,
  src0_abs_Z = 45,
  src0_neg = 81,
  src0_neg_W = 60,
  src0_neg_X = 9,
  src0_neg_Y = 26,
  src0_neg_Z = 43,
  src0_rel = 82,
  src0_rel_W = 61,
  src0_rel_X = 10,
  src0_rel_Y = 27,
  src0_rel_Z = 44,
  src0_sel = 84,
  src0_sel_W = 63,
  src0_sel_X = 12,
  src0_sel_Y = 29,
  src0_sel_Z = 46,
  src1 = 85,
  src1_W = 64,
  src1_X = 13,
  src1_Y = 30,
  src1_Z = 47,
  src1_abs = 88,
  src1_abs_W = 67,
  src1_abs_X = 16,
  src1_abs_Y = 33,
  src1_abs_Z = 50,
  src1_neg = 86,
  src1_neg_W = 65,
  src1_neg_X = 14,
  src1_neg_Y = 31,
  src1_neg_Z = 48,
  src1_rel = 87,
  src1_rel_W = 66,
  src1_rel_X = 15,
  src1_rel_Y = 32,
  src1_rel_Z = 49,
  src1_sel = 89,
  src1_sel_W = 68,
  src1_sel_X = 17,
  src1_sel_Y = 34,
  src1_sel_Z = 51,
  src2 = 94,
  src2_neg = 95,
  src2_rel = 96,
  src2_sel = 97,
  update_exec_mask = 75,
  update_exec_mask_W = 53,
  update_exec_mask_X = 2,
  update_exec_mask_Y = 19,
  update_exec_mask_Z = 36,
  update_pred = 76,
  update_pred_W = 54,
  update_pred_X = 3,
  update_pred_Y = 20,
  update_pred_Z = 37,
  val = 74,
  write = 77,
  write_W = 55,
  write_X = 4,
  write_Y = 21,
  write_Z = 38,
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace R600 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  static const int16_t OperandMap [][107] = {
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 7, 8, -1, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 10, 11, -1, 12, 7, -1, 8, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, -1, -1, -1, -1, -1, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 4, 5, -1, 6, 7, 8, 9, -1, 10, 15, 16, 17, 18, 11, 12, 13, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 6, 7, 8, 9, -1, -1, -1, -1, -1, 10, 11, 12, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 6, 7, -1, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 9, 10, -1, 11, 6, -1, 7, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, },
};
  switch(Opcode) {
  case R600::CUBE_eg_pseudo:
  case R600::CUBE_r600_pseudo:
    return OperandMap[0][NamedIdx];
  case R600::LDS_ADD_RET:
  case R600::LDS_AND_RET:
  case R600::LDS_MAX_INT_RET:
  case R600::LDS_MAX_UINT_RET:
  case R600::LDS_MIN_INT_RET:
  case R600::LDS_MIN_UINT_RET:
  case R600::LDS_OR_RET:
  case R600::LDS_SUB_RET:
  case R600::LDS_WRXCHG_RET:
  case R600::LDS_XOR_RET:
    return OperandMap[1][NamedIdx];
  case R600::LDS_CMPST_RET:
    return OperandMap[2][NamedIdx];
  case R600::LDS_BYTE_READ_RET:
  case R600::LDS_READ_RET:
  case R600::LDS_SHORT_READ_RET:
  case R600::LDS_UBYTE_READ_RET:
  case R600::LDS_USHORT_READ_RET:
    return OperandMap[3][NamedIdx];
  case R600::BFE_INT_eg:
  case R600::BFE_UINT_eg:
  case R600::BFI_INT_eg:
  case R600::BIT_ALIGN_INT_eg:
  case R600::CNDE_INT:
  case R600::CNDE_eg:
  case R600::CNDE_r600:
  case R600::CNDGE_INT:
  case R600::CNDGE_eg:
  case R600::CNDGE_r600:
  case R600::CNDGT_INT:
  case R600::CNDGT_eg:
  case R600::CNDGT_r600:
  case R600::FMA_eg:
  case R600::MULADD_IEEE_eg:
  case R600::MULADD_IEEE_r600:
  case R600::MULADD_INT24_cm:
  case R600::MULADD_UINT24_eg:
  case R600::MULADD_eg:
  case R600::MULADD_r600:
  case R600::MUL_LIT_eg:
  case R600::MUL_LIT_r600:
    return OperandMap[4][NamedIdx];
  case R600::BCNT_INT:
  case R600::CEIL:
  case R600::COS_cm:
  case R600::COS_eg:
  case R600::COS_r600:
  case R600::COS_r700:
  case R600::EXP_IEEE_cm:
  case R600::EXP_IEEE_eg:
  case R600::EXP_IEEE_r600:
  case R600::FFBH_UINT:
  case R600::FFBL_INT:
  case R600::FLOOR:
  case R600::FLT16_TO_FLT32:
  case R600::FLT32_TO_FLT16:
  case R600::FLT_TO_INT_eg:
  case R600::FLT_TO_INT_r600:
  case R600::FLT_TO_UINT_eg:
  case R600::FLT_TO_UINT_r600:
  case R600::FRACT:
  case R600::INTERP_LOAD_P0:
  case R600::INT_TO_FLT_eg:
  case R600::INT_TO_FLT_r600:
  case R600::LOG_CLAMPED_eg:
  case R600::LOG_CLAMPED_r600:
  case R600::LOG_IEEE_cm:
  case R600::LOG_IEEE_eg:
  case R600::LOG_IEEE_r600:
  case R600::MOV:
  case R600::MOVA_INT_eg:
  case R600::NOT_INT:
  case R600::RECIPSQRT_CLAMPED_cm:
  case R600::RECIPSQRT_CLAMPED_eg:
  case R600::RECIPSQRT_CLAMPED_r600:
  case R600::RECIPSQRT_IEEE_cm:
  case R600::RECIPSQRT_IEEE_eg:
  case R600::RECIPSQRT_IEEE_r600:
  case R600::RECIP_CLAMPED_cm:
  case R600::RECIP_CLAMPED_eg:
  case R600::RECIP_CLAMPED_r600:
  case R600::RECIP_IEEE_cm:
  case R600::RECIP_IEEE_eg:
  case R600::RECIP_IEEE_r600:
  case R600::RECIP_UINT_eg:
  case R600::RECIP_UINT_r600:
  case R600::RNDNE:
  case R600::SIN_cm:
  case R600::SIN_eg:
  case R600::SIN_r600:
  case R600::SIN_r700:
  case R600::TRUNC:
  case R600::UINT_TO_FLT_eg:
  case R600::UINT_TO_FLT_r600:
    return OperandMap[5][NamedIdx];
  case R600::ADD:
  case R600::ADDC_UINT:
  case R600::ADD_INT:
  case R600::AND_INT:
  case R600::ASHR_eg:
  case R600::ASHR_r600:
  case R600::BFM_INT_eg:
  case R600::CUBE_eg_real:
  case R600::CUBE_r600_real:
  case R600::DOT4_eg:
  case R600::DOT4_r600:
  case R600::INTERP_XY:
  case R600::INTERP_ZW:
  case R600::KILLGT:
  case R600::LSHL_eg:
  case R600::LSHL_r600:
  case R600::LSHR_eg:
  case R600::LSHR_r600:
  case R600::MAX:
  case R600::MAX_DX10:
  case R600::MAX_INT:
  case R600::MAX_UINT:
  case R600::MIN:
  case R600::MIN_DX10:
  case R600::MIN_INT:
  case R600::MIN_UINT:
  case R600::MUL:
  case R600::MULHI_INT_cm:
  case R600::MULHI_INT_cm24:
  case R600::MULHI_INT_eg:
  case R600::MULHI_INT_r600:
  case R600::MULHI_UINT24_eg:
  case R600::MULHI_UINT_cm:
  case R600::MULHI_UINT_cm24:
  case R600::MULHI_UINT_eg:
  case R600::MULHI_UINT_r600:
  case R600::MULLO_INT_cm:
  case R600::MULLO_INT_eg:
  case R600::MULLO_INT_r600:
  case R600::MULLO_UINT_cm:
  case R600::MULLO_UINT_eg:
  case R600::MULLO_UINT_r600:
  case R600::MUL_IEEE:
  case R600::MUL_INT24_cm:
  case R600::MUL_UINT24_eg:
  case R600::OR_INT:
  case R600::PRED_SETE:
  case R600::PRED_SETE_INT:
  case R600::PRED_SETGE:
  case R600::PRED_SETGE_INT:
  case R600::PRED_SETGT:
  case R600::PRED_SETGT_INT:
  case R600::PRED_SETNE:
  case R600::PRED_SETNE_INT:
  case R600::SETE:
  case R600::SETE_DX10:
  case R600::SETE_INT:
  case R600::SETGE_DX10:
  case R600::SETGE_INT:
  case R600::SETGE_UINT:
  case R600::SETGT_DX10:
  case R600::SETGT_INT:
  case R600::SETGT_UINT:
  case R600::SETNE_DX10:
  case R600::SETNE_INT:
  case R600::SGE:
  case R600::SGT:
  case R600::SNE:
  case R600::SUBB_UINT:
  case R600::SUB_INT:
  case R600::XOR_INT:
    return OperandMap[6][NamedIdx];
  case R600::DOT_4:
    return OperandMap[7][NamedIdx];
  case R600::R600_RegisterLoad:
    return OperandMap[8][NamedIdx];
  case R600::LDS_ADD:
  case R600::LDS_AND:
  case R600::LDS_BYTE_WRITE:
  case R600::LDS_MAX_INT:
  case R600::LDS_MAX_UINT:
  case R600::LDS_MIN_INT:
  case R600::LDS_MIN_UINT:
  case R600::LDS_OR:
  case R600::LDS_SHORT_WRITE:
  case R600::LDS_SUB:
  case R600::LDS_WRITE:
  case R600::LDS_WRXCHG:
  case R600::LDS_XOR:
    return OperandMap[9][NamedIdx];
  case R600::LDS_CMPST:
    return OperandMap[10][NamedIdx];
  case R600::R600_RegisterStore:
    return OperandMap[11][NamedIdx];
  case R600::CF_ALU:
  case R600::CF_ALU_BREAK:
  case R600::CF_ALU_CONTINUE:
  case R600::CF_ALU_ELSE_AFTER:
  case R600::CF_ALU_POP_AFTER:
  case R600::CF_ALU_PUSH_BEFORE:
    return OperandMap[12][NamedIdx];
  default: return -1;
  }
}
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace R600 {
namespace OpTypes {
enum OperandType {
  ABS = 0,
  BANK_SWIZZLE = 1,
  CLAMP = 2,
  CT = 3,
  FRAMEri = 4,
  InstFlag = 5,
  KCACHE = 6,
  LAST = 7,
  LITERAL = 8,
  MEMrr = 9,
  MEMxi = 10,
  NEG = 11,
  OMOD = 12,
  R600_Pred = 13,
  REL = 14,
  RSel = 15,
  SEL = 16,
  UEM = 17,
  UP = 18,
  WRITE = 19,
  brtarget = 20,
  f32imm = 21,
  f64imm = 22,
  i16imm = 23,
  i1imm = 24,
  i32imm = 25,
  i64imm = 26,
  i8imm = 27,
  ptype0 = 28,
  ptype1 = 29,
  ptype2 = 30,
  ptype3 = 31,
  ptype4 = 32,
  ptype5 = 33,
  s16imm = 34,
  type0 = 35,
  type1 = 36,
  type2 = 37,
  type3 = 38,
  type4 = 39,
  type5 = 40,
  u16imm = 41,
  untyped_imm_0 = 42,
  R600_Addr = 43,
  R600_Addr_W = 44,
  R600_Addr_Y = 45,
  R600_Addr_Z = 46,
  R600_ArrayBase = 47,
  R600_KC0 = 48,
  R600_KC0_W = 49,
  R600_KC0_X = 50,
  R600_KC0_Y = 51,
  R600_KC0_Z = 52,
  R600_KC1 = 53,
  R600_KC1_W = 54,
  R600_KC1_X = 55,
  R600_KC1_Y = 56,
  R600_KC1_Z = 57,
  R600_LDS_SRC_REG = 58,
  R600_Predicate = 59,
  R600_Predicate_Bit = 60,
  R600_Reg128 = 61,
  R600_Reg128Vertical = 62,
  R600_Reg32 = 63,
  R600_Reg64 = 64,
  R600_Reg64Vertical = 65,
  R600_TReg32 = 66,
  R600_TReg32_W = 67,
  R600_TReg32_X = 68,
  R600_TReg32_Y = 69,
  R600_TReg32_Z = 70,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace R600 {
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
    /* BRANCH */
    635,
    /* BRANCH_COND_f32 */
    636,
    /* BRANCH_COND_i32 */
    638,
    /* BREAK */
    640,
    /* BREAKC_f32 */
    640,
    /* BREAKC_i32 */
    642,
    /* BREAK_LOGICALNZ_f32 */
    644,
    /* BREAK_LOGICALNZ_i32 */
    645,
    /* BREAK_LOGICALZ_f32 */
    646,
    /* BREAK_LOGICALZ_i32 */
    647,
    /* CONST_COPY */
    648,
    /* CONTINUE */
    650,
    /* CONTINUEC_f32 */
    650,
    /* CONTINUEC_i32 */
    652,
    /* CONTINUE_LOGICALNZ_f32 */
    654,
    /* CONTINUE_LOGICALNZ_i32 */
    655,
    /* CONTINUE_LOGICALZ_f32 */
    656,
    /* CONTINUE_LOGICALZ_i32 */
    657,
    /* CUBE_eg_pseudo */
    658,
    /* CUBE_r600_pseudo */
    660,
    /* DEFAULT */
    662,
    /* DOT_4 */
    662,
    /* DUMMY_CHAIN */
    733,
    /* ELSE */
    733,
    /* END */
    733,
    /* ENDFUNC */
    733,
    /* ENDIF */
    733,
    /* ENDLOOP */
    733,
    /* ENDMAIN */
    733,
    /* ENDSWITCH */
    733,
    /* FABS_R600 */
    733,
    /* FNEG_R600 */
    735,
    /* FUNC */
    737,
    /* IFC_f32 */
    737,
    /* IFC_i32 */
    739,
    /* IF_LOGICALNZ_f32 */
    741,
    /* IF_LOGICALNZ_i32 */
    742,
    /* IF_LOGICALZ_f32 */
    743,
    /* IF_LOGICALZ_i32 */
    744,
    /* IF_PREDICATE_SET */
    745,
    /* JUMP */
    746,
    /* JUMP_COND */
    747,
    /* MASK_WRITE */
    749,
    /* MOV_IMM_F32 */
    750,
    /* MOV_IMM_GLOBAL_ADDR */
    752,
    /* MOV_IMM_I32 */
    754,
    /* PRED_X */
    756,
    /* R600_EXTRACT_ELT_V2 */
    760,
    /* R600_EXTRACT_ELT_V4 */
    763,
    /* R600_INSERT_ELT_V2 */
    766,
    /* R600_INSERT_ELT_V4 */
    770,
    /* R600_RegisterLoad */
    774,
    /* R600_RegisterStore */
    778,
    /* RETDYN */
    782,
    /* RETURN */
    782,
    /* TXD */
    782,
    /* TXD_SHADOW */
    789,
    /* WHILELOOP */
    796,
    /* ADD */
    796,
    /* ADDC_UINT */
    817,
    /* ADD_INT */
    838,
    /* ALU_CLAUSE */
    859,
    /* AND_INT */
    860,
    /* ASHR_eg */
    881,
    /* ASHR_r600 */
    902,
    /* BCNT_INT */
    923,
    /* BFE_INT_eg */
    937,
    /* BFE_UINT_eg */
    956,
    /* BFI_INT_eg */
    975,
    /* BFM_INT_eg */
    994,
    /* BIT_ALIGN_INT_eg */
    1015,
    /* CEIL */
    1034,
    /* CF_ALU */
    1048,
    /* CF_ALU_BREAK */
    1057,
    /* CF_ALU_CONTINUE */
    1066,
    /* CF_ALU_ELSE_AFTER */
    1075,
    /* CF_ALU_POP_AFTER */
    1084,
    /* CF_ALU_PUSH_BEFORE */
    1093,
    /* CF_CALL_FS_EG */
    1102,
    /* CF_CALL_FS_R600 */
    1102,
    /* CF_CONTINUE_EG */
    1102,
    /* CF_CONTINUE_R600 */
    1103,
    /* CF_ELSE_EG */
    1104,
    /* CF_ELSE_R600 */
    1106,
    /* CF_END_CM */
    1108,
    /* CF_END_EG */
    1108,
    /* CF_END_R600 */
    1108,
    /* CF_JUMP_EG */
    1108,
    /* CF_JUMP_R600 */
    1110,
    /* CF_PUSH_EG */
    1112,
    /* CF_PUSH_ELSE_R600 */
    1114,
    /* CF_TC_EG */
    1115,
    /* CF_TC_R600 */
    1117,
    /* CF_VC_EG */
    1119,
    /* CF_VC_R600 */
    1121,
    /* CNDE_INT */
    1123,
    /* CNDE_eg */
    1142,
    /* CNDE_r600 */
    1161,
    /* CNDGE_INT */
    1180,
    /* CNDGE_eg */
    1199,
    /* CNDGE_r600 */
    1218,
    /* CNDGT_INT */
    1237,
    /* CNDGT_eg */
    1256,
    /* CNDGT_r600 */
    1275,
    /* COS_cm */
    1294,
    /* COS_eg */
    1308,
    /* COS_r600 */
    1322,
    /* COS_r700 */
    1336,
    /* CUBE_eg_real */
    1350,
    /* CUBE_r600_real */
    1371,
    /* DOT4_eg */
    1392,
    /* DOT4_r600 */
    1413,
    /* EG_ExportBuf */
    1434,
    /* EG_ExportSwz */
    1441,
    /* END_LOOP_EG */
    1450,
    /* END_LOOP_R600 */
    1451,
    /* EXP_IEEE_cm */
    1452,
    /* EXP_IEEE_eg */
    1466,
    /* EXP_IEEE_r600 */
    1480,
    /* FETCH_CLAUSE */
    1494,
    /* FFBH_UINT */
    1495,
    /* FFBL_INT */
    1509,
    /* FLOOR */
    1523,
    /* FLT16_TO_FLT32 */
    1537,
    /* FLT32_TO_FLT16 */
    1551,
    /* FLT_TO_INT_eg */
    1565,
    /* FLT_TO_INT_r600 */
    1579,
    /* FLT_TO_UINT_eg */
    1593,
    /* FLT_TO_UINT_r600 */
    1607,
    /* FMA_eg */
    1621,
    /* FRACT */
    1640,
    /* GROUP_BARRIER */
    1654,
    /* INTERP_LOAD_P0 */
    1654,
    /* INTERP_PAIR_XY */
    1668,
    /* INTERP_PAIR_ZW */
    1673,
    /* INTERP_VEC_LOAD */
    1678,
    /* INTERP_XY */
    1680,
    /* INTERP_ZW */
    1701,
    /* INT_TO_FLT_eg */
    1722,
    /* INT_TO_FLT_r600 */
    1736,
    /* KILLGT */
    1750,
    /* LDS_ADD */
    1771,
    /* LDS_ADD_RET */
    1780,
    /* LDS_AND */
    1790,
    /* LDS_AND_RET */
    1799,
    /* LDS_BYTE_READ_RET */
    1809,
    /* LDS_BYTE_WRITE */
    1816,
    /* LDS_CMPST */
    1825,
    /* LDS_CMPST_RET */
    1837,
    /* LDS_MAX_INT */
    1850,
    /* LDS_MAX_INT_RET */
    1859,
    /* LDS_MAX_UINT */
    1869,
    /* LDS_MAX_UINT_RET */
    1878,
    /* LDS_MIN_INT */
    1888,
    /* LDS_MIN_INT_RET */
    1897,
    /* LDS_MIN_UINT */
    1907,
    /* LDS_MIN_UINT_RET */
    1916,
    /* LDS_OR */
    1926,
    /* LDS_OR_RET */
    1935,
    /* LDS_READ_RET */
    1945,
    /* LDS_SHORT_READ_RET */
    1952,
    /* LDS_SHORT_WRITE */
    1959,
    /* LDS_SUB */
    1968,
    /* LDS_SUB_RET */
    1977,
    /* LDS_UBYTE_READ_RET */
    1987,
    /* LDS_USHORT_READ_RET */
    1994,
    /* LDS_WRITE */
    2001,
    /* LDS_WRXCHG */
    2010,
    /* LDS_WRXCHG_RET */
    2019,
    /* LDS_XOR */
    2029,
    /* LDS_XOR_RET */
    2038,
    /* LITERALS */
    2048,
    /* LOG_CLAMPED_eg */
    2050,
    /* LOG_CLAMPED_r600 */
    2064,
    /* LOG_IEEE_cm */
    2078,
    /* LOG_IEEE_eg */
    2092,
    /* LOG_IEEE_r600 */
    2106,
    /* LOOP_BREAK_EG */
    2120,
    /* LOOP_BREAK_R600 */
    2121,
    /* LSHL_eg */
    2122,
    /* LSHL_r600 */
    2143,
    /* LSHR_eg */
    2164,
    /* LSHR_r600 */
    2185,
    /* MAX */
    2206,
    /* MAX_DX10 */
    2227,
    /* MAX_INT */
    2248,
    /* MAX_UINT */
    2269,
    /* MIN */
    2290,
    /* MIN_DX10 */
    2311,
    /* MIN_INT */
    2332,
    /* MIN_UINT */
    2353,
    /* MOV */
    2374,
    /* MOVA_INT_eg */
    2388,
    /* MUL */
    2402,
    /* MULADD_IEEE_eg */
    2423,
    /* MULADD_IEEE_r600 */
    2442,
    /* MULADD_INT24_cm */
    2461,
    /* MULADD_UINT24_eg */
    2480,
    /* MULADD_eg */
    2499,
    /* MULADD_r600 */
    2518,
    /* MULHI_INT_cm */
    2537,
    /* MULHI_INT_cm24 */
    2558,
    /* MULHI_INT_eg */
    2579,
    /* MULHI_INT_r600 */
    2600,
    /* MULHI_UINT24_eg */
    2621,
    /* MULHI_UINT_cm */
    2642,
    /* MULHI_UINT_cm24 */
    2663,
    /* MULHI_UINT_eg */
    2684,
    /* MULHI_UINT_r600 */
    2705,
    /* MULLO_INT_cm */
    2726,
    /* MULLO_INT_eg */
    2747,
    /* MULLO_INT_r600 */
    2768,
    /* MULLO_UINT_cm */
    2789,
    /* MULLO_UINT_eg */
    2810,
    /* MULLO_UINT_r600 */
    2831,
    /* MUL_IEEE */
    2852,
    /* MUL_INT24_cm */
    2873,
    /* MUL_LIT_eg */
    2894,
    /* MUL_LIT_r600 */
    2913,
    /* MUL_UINT24_eg */
    2932,
    /* NOT_INT */
    2953,
    /* OR_INT */
    2967,
    /* PAD */
    2988,
    /* POP_EG */
    2988,
    /* POP_R600 */
    2990,
    /* PRED_SETE */
    2992,
    /* PRED_SETE_INT */
    3013,
    /* PRED_SETGE */
    3034,
    /* PRED_SETGE_INT */
    3055,
    /* PRED_SETGT */
    3076,
    /* PRED_SETGT_INT */
    3097,
    /* PRED_SETNE */
    3118,
    /* PRED_SETNE_INT */
    3139,
    /* R600_ExportBuf */
    3160,
    /* R600_ExportSwz */
    3167,
    /* RAT_ATOMIC_ADD_NORET */
    3176,
    /* RAT_ATOMIC_ADD_RTN */
    3179,
    /* RAT_ATOMIC_AND_NORET */
    3182,
    /* RAT_ATOMIC_AND_RTN */
    3185,
    /* RAT_ATOMIC_CMPXCHG_INT_NORET */
    3188,
    /* RAT_ATOMIC_CMPXCHG_INT_RTN */
    3191,
    /* RAT_ATOMIC_DEC_UINT_NORET */
    3194,
    /* RAT_ATOMIC_DEC_UINT_RTN */
    3197,
    /* RAT_ATOMIC_INC_UINT_NORET */
    3200,
    /* RAT_ATOMIC_INC_UINT_RTN */
    3203,
    /* RAT_ATOMIC_MAX_INT_NORET */
    3206,
    /* RAT_ATOMIC_MAX_INT_RTN */
    3209,
    /* RAT_ATOMIC_MAX_UINT_NORET */
    3212,
    /* RAT_ATOMIC_MAX_UINT_RTN */
    3215,
    /* RAT_ATOMIC_MIN_INT_NORET */
    3218,
    /* RAT_ATOMIC_MIN_INT_RTN */
    3221,
    /* RAT_ATOMIC_MIN_UINT_NORET */
    3224,
    /* RAT_ATOMIC_MIN_UINT_RTN */
    3227,
    /* RAT_ATOMIC_OR_NORET */
    3230,
    /* RAT_ATOMIC_OR_RTN */
    3233,
    /* RAT_ATOMIC_RSUB_NORET */
    3236,
    /* RAT_ATOMIC_RSUB_RTN */
    3239,
    /* RAT_ATOMIC_SUB_NORET */
    3242,
    /* RAT_ATOMIC_SUB_RTN */
    3245,
    /* RAT_ATOMIC_XCHG_INT_NORET */
    3248,
    /* RAT_ATOMIC_XCHG_INT_RTN */
    3251,
    /* RAT_ATOMIC_XOR_NORET */
    3254,
    /* RAT_ATOMIC_XOR_RTN */
    3257,
    /* RAT_MSKOR */
    3260,
    /* RAT_STORE_DWORD128 */
    3262,
    /* RAT_STORE_DWORD32 */
    3264,
    /* RAT_STORE_DWORD64 */
    3266,
    /* RAT_STORE_TYPED_cm */
    3268,
    /* RAT_STORE_TYPED_eg */
    3272,
    /* RAT_WRITE_CACHELESS_128_eg */
    3276,
    /* RAT_WRITE_CACHELESS_32_eg */
    3279,
    /* RAT_WRITE_CACHELESS_64_eg */
    3282,
    /* RECIPSQRT_CLAMPED_cm */
    3285,
    /* RECIPSQRT_CLAMPED_eg */
    3299,
    /* RECIPSQRT_CLAMPED_r600 */
    3313,
    /* RECIPSQRT_IEEE_cm */
    3327,
    /* RECIPSQRT_IEEE_eg */
    3341,
    /* RECIPSQRT_IEEE_r600 */
    3355,
    /* RECIP_CLAMPED_cm */
    3369,
    /* RECIP_CLAMPED_eg */
    3383,
    /* RECIP_CLAMPED_r600 */
    3397,
    /* RECIP_IEEE_cm */
    3411,
    /* RECIP_IEEE_eg */
    3425,
    /* RECIP_IEEE_r600 */
    3439,
    /* RECIP_UINT_eg */
    3453,
    /* RECIP_UINT_r600 */
    3467,
    /* RNDNE */
    3481,
    /* SETE */
    3495,
    /* SETE_DX10 */
    3516,
    /* SETE_INT */
    3537,
    /* SETGE_DX10 */
    3558,
    /* SETGE_INT */
    3579,
    /* SETGE_UINT */
    3600,
    /* SETGT_DX10 */
    3621,
    /* SETGT_INT */
    3642,
    /* SETGT_UINT */
    3663,
    /* SETNE_DX10 */
    3684,
    /* SETNE_INT */
    3705,
    /* SGE */
    3726,
    /* SGT */
    3747,
    /* SIN_cm */
    3768,
    /* SIN_eg */
    3782,
    /* SIN_r600 */
    3796,
    /* SIN_r700 */
    3810,
    /* SNE */
    3824,
    /* SUBB_UINT */
    3845,
    /* SUB_INT */
    3866,
    /* TEX_GET_GRADIENTS_H */
    3887,
    /* TEX_GET_GRADIENTS_V */
    3906,
    /* TEX_GET_TEXTURE_RESINFO */
    3925,
    /* TEX_LD */
    3944,
    /* TEX_LDPTR */
    3963,
    /* TEX_SAMPLE */
    3982,
    /* TEX_SAMPLE_C */
    4001,
    /* TEX_SAMPLE_C_G */
    4020,
    /* TEX_SAMPLE_C_L */
    4039,
    /* TEX_SAMPLE_C_LB */
    4058,
    /* TEX_SAMPLE_G */
    4077,
    /* TEX_SAMPLE_L */
    4096,
    /* TEX_SAMPLE_LB */
    4115,
    /* TEX_SET_GRADIENTS_H */
    4134,
    /* TEX_SET_GRADIENTS_V */
    4153,
    /* TEX_VTX_CONSTBUF */
    4172,
    /* TEX_VTX_TEXBUF */
    4176,
    /* TRUNC */
    4180,
    /* UINT_TO_FLT_eg */
    4194,
    /* UINT_TO_FLT_r600 */
    4208,
    /* VTX_READ_128_cm */
    4222,
    /* VTX_READ_128_eg */
    4226,
    /* VTX_READ_16_cm */
    4230,
    /* VTX_READ_16_eg */
    4234,
    /* VTX_READ_32_cm */
    4238,
    /* VTX_READ_32_eg */
    4242,
    /* VTX_READ_64_cm */
    4246,
    /* VTX_READ_64_eg */
    4250,
    /* VTX_READ_8_cm */
    4254,
    /* VTX_READ_8_eg */
    4258,
    /* WHILE_LOOP_EG */
    4262,
    /* WHILE_LOOP_R600 */
    4263,
    /* XOR_INT */
    4264,
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
    /* BRANCH */
    brtarget, 
    /* BRANCH_COND_f32 */
    brtarget, R600_Reg32, 
    /* BRANCH_COND_i32 */
    brtarget, R600_Reg32, 
    /* BREAK */
    /* BREAKC_f32 */
    R600_Reg32, R600_Reg32, 
    /* BREAKC_i32 */
    R600_Reg32, R600_Reg32, 
    /* BREAK_LOGICALNZ_f32 */
    R600_Reg32, 
    /* BREAK_LOGICALNZ_i32 */
    R600_Reg32, 
    /* BREAK_LOGICALZ_f32 */
    R600_Reg32, 
    /* BREAK_LOGICALZ_i32 */
    R600_Reg32, 
    /* CONST_COPY */
    R600_Reg32, i32imm, 
    /* CONTINUE */
    /* CONTINUEC_f32 */
    R600_Reg32, R600_Reg32, 
    /* CONTINUEC_i32 */
    R600_Reg32, R600_Reg32, 
    /* CONTINUE_LOGICALNZ_f32 */
    R600_Reg32, 
    /* CONTINUE_LOGICALNZ_i32 */
    R600_Reg32, 
    /* CONTINUE_LOGICALZ_f32 */
    R600_Reg32, 
    /* CONTINUE_LOGICALZ_i32 */
    R600_Reg32, 
    /* CUBE_eg_pseudo */
    R600_Reg128, R600_Reg128, 
    /* CUBE_r600_pseudo */
    R600_Reg128, R600_Reg128, 
    /* DEFAULT */
    /* DOT_4 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_TReg32_X, NEG, REL, ABS, SEL, R600_TReg32_X, NEG, REL, ABS, SEL, R600_Predicate, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_TReg32_Y, NEG, REL, ABS, SEL, R600_TReg32_Y, NEG, REL, ABS, SEL, R600_Predicate, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_TReg32_Z, NEG, REL, ABS, SEL, R600_TReg32_Z, NEG, REL, ABS, SEL, R600_Predicate, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_TReg32_W, NEG, REL, ABS, SEL, R600_TReg32_W, NEG, REL, ABS, SEL, R600_Predicate, LITERAL, LITERAL, 
    /* DUMMY_CHAIN */
    /* ELSE */
    /* END */
    /* ENDFUNC */
    /* ENDIF */
    /* ENDLOOP */
    /* ENDMAIN */
    /* ENDSWITCH */
    /* FABS_R600 */
    R600_Reg32, R600_Reg32, 
    /* FNEG_R600 */
    R600_Reg32, R600_Reg32, 
    /* FUNC */
    /* IFC_f32 */
    R600_Reg32, R600_Reg32, 
    /* IFC_i32 */
    R600_Reg32, R600_Reg32, 
    /* IF_LOGICALNZ_f32 */
    R600_Reg32, 
    /* IF_LOGICALNZ_i32 */
    R600_Reg32, 
    /* IF_LOGICALZ_f32 */
    R600_Reg32, 
    /* IF_LOGICALZ_i32 */
    R600_Reg32, 
    /* IF_PREDICATE_SET */
    R600_Reg32, 
    /* JUMP */
    brtarget, 
    /* JUMP_COND */
    brtarget, R600_Predicate_Bit, 
    /* MASK_WRITE */
    R600_Reg32, 
    /* MOV_IMM_F32 */
    R600_Reg32, f32imm, 
    /* MOV_IMM_GLOBAL_ADDR */
    R600_Reg32, i32imm, 
    /* MOV_IMM_I32 */
    R600_Reg32, i32imm, 
    /* PRED_X */
    R600_Predicate_Bit, R600_Reg32, i32imm, i32imm, 
    /* R600_EXTRACT_ELT_V2 */
    R600_Reg32, R600_Reg64Vertical, R600_Reg32, 
    /* R600_EXTRACT_ELT_V4 */
    R600_Reg32, R600_Reg128Vertical, R600_Reg32, 
    /* R600_INSERT_ELT_V2 */
    R600_Reg64Vertical, R600_Reg64Vertical, R600_Reg32, R600_Reg32, 
    /* R600_INSERT_ELT_V4 */
    R600_Reg128Vertical, R600_Reg128Vertical, R600_Reg32, R600_Reg32, 
    /* R600_RegisterLoad */
    R600_Reg32, R600_Reg32, i32imm, i32imm, 
    /* R600_RegisterStore */
    R600_Reg32, R600_Reg32, i32imm, i32imm, 
    /* RETDYN */
    /* RETURN */
    /* TXD */
    R600_Reg128, R600_Reg128, R600_Reg128, R600_Reg128, i32imm, i32imm, i32imm, 
    /* TXD_SHADOW */
    R600_Reg128, R600_Reg128, R600_Reg128, R600_Reg128, i32imm, i32imm, i32imm, 
    /* WHILELOOP */
    /* ADD */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ADDC_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ADD_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ALU_CLAUSE */
    i32imm, 
    /* AND_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ASHR_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* ASHR_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BCNT_INT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BFE_INT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BFE_UINT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BFI_INT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BFM_INT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* BIT_ALIGN_INT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CEIL */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CF_ALU */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_BREAK */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_CONTINUE */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_ELSE_AFTER */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_POP_AFTER */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_ALU_PUSH_BEFORE */
    i32imm, i32imm, i32imm, KCACHE, KCACHE, i32imm, i32imm, i32imm, i32imm, 
    /* CF_CALL_FS_EG */
    /* CF_CALL_FS_R600 */
    /* CF_CONTINUE_EG */
    i32imm, 
    /* CF_CONTINUE_R600 */
    i32imm, 
    /* CF_ELSE_EG */
    i32imm, i32imm, 
    /* CF_ELSE_R600 */
    i32imm, i32imm, 
    /* CF_END_CM */
    /* CF_END_EG */
    /* CF_END_R600 */
    /* CF_JUMP_EG */
    i32imm, i32imm, 
    /* CF_JUMP_R600 */
    i32imm, i32imm, 
    /* CF_PUSH_EG */
    i32imm, i32imm, 
    /* CF_PUSH_ELSE_R600 */
    i32imm, 
    /* CF_TC_EG */
    i32imm, i32imm, 
    /* CF_TC_R600 */
    i32imm, i32imm, 
    /* CF_VC_EG */
    i32imm, i32imm, 
    /* CF_VC_R600 */
    i32imm, i32imm, 
    /* CNDE_INT */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDE_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDE_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGE_INT */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGE_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGE_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGT_INT */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CNDGT_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* COS_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* COS_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* COS_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* COS_r700 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CUBE_eg_real */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* CUBE_r600_real */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* DOT4_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* DOT4_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* EG_ExportBuf */
    R600_Reg128, i32imm, i32imm, i32imm, i32imm, i32imm, i32imm, 
    /* EG_ExportSwz */
    R600_Reg128, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, 
    /* END_LOOP_EG */
    i32imm, 
    /* END_LOOP_R600 */
    i32imm, 
    /* EXP_IEEE_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* EXP_IEEE_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* EXP_IEEE_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FETCH_CLAUSE */
    i32imm, 
    /* FFBH_UINT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FFBL_INT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLOOR */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT16_TO_FLT32 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT32_TO_FLT16 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT_TO_INT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT_TO_INT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT_TO_UINT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FLT_TO_UINT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FMA_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* FRACT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* GROUP_BARRIER */
    /* INTERP_LOAD_P0 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* INTERP_PAIR_XY */
    R600_TReg32_X, R600_TReg32_Y, i32imm, R600_TReg32_Y, R600_TReg32_X, 
    /* INTERP_PAIR_ZW */
    R600_TReg32_Z, R600_TReg32_W, i32imm, R600_TReg32_Y, R600_TReg32_X, 
    /* INTERP_VEC_LOAD */
    R600_Reg128, i32imm, 
    /* INTERP_XY */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* INTERP_ZW */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* INT_TO_FLT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* INT_TO_FLT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* KILLGT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LDS_ADD */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_ADD_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_AND */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_AND_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_BYTE_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_BYTE_WRITE */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_CMPST */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_CMPST_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MAX_INT */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MAX_INT_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MAX_UINT */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MAX_UINT_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MIN_INT */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MIN_INT_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MIN_UINT */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_MIN_UINT_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_OR */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_OR_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_SHORT_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_SHORT_WRITE */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_SUB */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_SUB_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_UBYTE_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_USHORT_READ_RET */
    R600_Reg32, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_WRITE */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_WRXCHG */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_WRXCHG_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_XOR */
    R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LDS_XOR_RET */
    R600_Reg32, R600_Reg32, REL, SEL, R600_Reg32, REL, SEL, LAST, R600_Predicate, BANK_SWIZZLE, 
    /* LITERALS */
    LITERAL, LITERAL, 
    /* LOG_CLAMPED_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOG_CLAMPED_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOG_IEEE_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOG_IEEE_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOG_IEEE_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LOOP_BREAK_EG */
    i32imm, 
    /* LOOP_BREAK_R600 */
    i32imm, 
    /* LSHL_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LSHL_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LSHR_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* LSHR_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MAX */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MAX_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MAX_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MAX_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MIN */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MIN_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MIN_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MIN_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MOV */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MOVA_INT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_IEEE_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_IEEE_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_INT24_cm */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_UINT24_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULADD_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_INT_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_INT_cm24 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_INT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_INT_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT24_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT_cm24 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULHI_UINT_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_INT_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_INT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_INT_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_UINT_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_UINT_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MULLO_UINT_r600 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_IEEE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_INT24_cm */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_LIT_eg */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_LIT_r600 */
    R600_Reg32, REL, CLAMP, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, R600_Reg32, NEG, REL, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* MUL_UINT24_eg */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* NOT_INT */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* OR_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PAD */
    /* POP_EG */
    i32imm, i32imm, 
    /* POP_R600 */
    i32imm, i32imm, 
    /* PRED_SETE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETGE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETGE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETGT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETGT_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETNE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* PRED_SETNE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* R600_ExportBuf */
    R600_Reg128, i32imm, i32imm, i32imm, i32imm, i32imm, i32imm, 
    /* R600_ExportSwz */
    R600_Reg128, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, 
    /* RAT_ATOMIC_ADD_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_ADD_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_AND_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_AND_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_CMPXCHG_INT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_CMPXCHG_INT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_DEC_UINT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_DEC_UINT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_INC_UINT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_INC_UINT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MAX_INT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MAX_INT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MAX_UINT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MAX_UINT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MIN_INT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MIN_INT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MIN_UINT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_MIN_UINT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_OR_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_OR_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_RSUB_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_RSUB_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_SUB_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_SUB_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_XCHG_INT_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_XCHG_INT_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_XOR_NORET */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_ATOMIC_XOR_RTN */
    R600_Reg128, R600_Reg128, R600_TReg32_X, 
    /* RAT_MSKOR */
    R600_Reg128, R600_TReg32_X, 
    /* RAT_STORE_DWORD128 */
    R600_Reg128, R600_TReg32_X, 
    /* RAT_STORE_DWORD32 */
    R600_TReg32_X, R600_TReg32_X, 
    /* RAT_STORE_DWORD64 */
    R600_Reg64, R600_TReg32_X, 
    /* RAT_STORE_TYPED_cm */
    R600_Reg128, R600_Reg128, i32imm, InstFlag, 
    /* RAT_STORE_TYPED_eg */
    R600_Reg128, R600_Reg128, i32imm, InstFlag, 
    /* RAT_WRITE_CACHELESS_128_eg */
    R600_Reg128, R600_TReg32_X, InstFlag, 
    /* RAT_WRITE_CACHELESS_32_eg */
    R600_TReg32_X, R600_TReg32_X, InstFlag, 
    /* RAT_WRITE_CACHELESS_64_eg */
    R600_Reg64, R600_TReg32_X, InstFlag, 
    /* RECIPSQRT_CLAMPED_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_CLAMPED_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_CLAMPED_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_IEEE_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_IEEE_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIPSQRT_IEEE_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_CLAMPED_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_CLAMPED_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_CLAMPED_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_IEEE_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_IEEE_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_IEEE_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_UINT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RECIP_UINT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* RNDNE */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETE_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGE_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGE_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGT_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGT_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETGT_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETNE_DX10 */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SETNE_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SGE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SGT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SIN_cm */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SIN_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SIN_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SIN_r700 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SNE */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SUBB_UINT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* SUB_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* TEX_GET_GRADIENTS_H */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_GET_GRADIENTS_V */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_GET_TEXTURE_RESINFO */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_LD */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_LDPTR */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_C */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_C_G */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_C_L */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_C_LB */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_G */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_L */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SAMPLE_LB */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SET_GRADIENTS_H */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_SET_GRADIENTS_V */
    R600_Reg128, R600_Reg128, RSel, RSel, RSel, RSel, i32imm, i32imm, i32imm, RSel, RSel, RSel, RSel, i32imm, i32imm, CT, CT, CT, CT, 
    /* TEX_VTX_CONSTBUF */
    R600_Reg128, R600_TReg32_X, i32imm, i32imm, 
    /* TEX_VTX_TEXBUF */
    R600_Reg128, R600_TReg32_X, i32imm, i32imm, 
    /* TRUNC */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* UINT_TO_FLT_eg */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* UINT_TO_FLT_r600 */
    R600_Reg32, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
    /* VTX_READ_128_cm */
    R600_Reg128, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_128_eg */
    R600_Reg128, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_16_cm */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_16_eg */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_32_cm */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_32_eg */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_64_cm */
    R600_Reg64, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_64_eg */
    R600_Reg64, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_8_cm */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* VTX_READ_8_eg */
    R600_TReg32_X, R600_TReg32_X, i32imm, i8imm, 
    /* WHILE_LOOP_EG */
    i32imm, 
    /* WHILE_LOOP_R600 */
    i32imm, 
    /* XOR_INT */
    R600_Reg32, UEM, UP, WRITE, OMOD, REL, CLAMP, R600_Reg32, NEG, REL, ABS, SEL, R600_Reg32, NEG, REL, ABS, SEL, LAST, R600_Predicate, LITERAL, BANK_SWIZZLE, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace R600 {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace R600 {
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
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace R600 {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace R600_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace R600_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace R600_MC {

} // end namespace R600_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace R600_MC {

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
    CEFBS_None, // BRANCH = 252
    CEFBS_None, // BRANCH_COND_f32 = 253
    CEFBS_None, // BRANCH_COND_i32 = 254
    CEFBS_None, // BREAK = 255
    CEFBS_None, // BREAKC_f32 = 256
    CEFBS_None, // BREAKC_i32 = 257
    CEFBS_None, // BREAK_LOGICALNZ_f32 = 258
    CEFBS_None, // BREAK_LOGICALNZ_i32 = 259
    CEFBS_None, // BREAK_LOGICALZ_f32 = 260
    CEFBS_None, // BREAK_LOGICALZ_i32 = 261
    CEFBS_None, // CONST_COPY = 262
    CEFBS_None, // CONTINUE = 263
    CEFBS_None, // CONTINUEC_f32 = 264
    CEFBS_None, // CONTINUEC_i32 = 265
    CEFBS_None, // CONTINUE_LOGICALNZ_f32 = 266
    CEFBS_None, // CONTINUE_LOGICALNZ_i32 = 267
    CEFBS_None, // CONTINUE_LOGICALZ_f32 = 268
    CEFBS_None, // CONTINUE_LOGICALZ_i32 = 269
    CEFBS_None, // CUBE_eg_pseudo = 270
    CEFBS_None, // CUBE_r600_pseudo = 271
    CEFBS_None, // DEFAULT = 272
    CEFBS_None, // DOT_4 = 273
    CEFBS_None, // DUMMY_CHAIN = 274
    CEFBS_None, // ELSE = 275
    CEFBS_None, // END = 276
    CEFBS_None, // ENDFUNC = 277
    CEFBS_None, // ENDIF = 278
    CEFBS_None, // ENDLOOP = 279
    CEFBS_None, // ENDMAIN = 280
    CEFBS_None, // ENDSWITCH = 281
    CEFBS_None, // FABS_R600 = 282
    CEFBS_None, // FNEG_R600 = 283
    CEFBS_None, // FUNC = 284
    CEFBS_None, // IFC_f32 = 285
    CEFBS_None, // IFC_i32 = 286
    CEFBS_None, // IF_LOGICALNZ_f32 = 287
    CEFBS_None, // IF_LOGICALNZ_i32 = 288
    CEFBS_None, // IF_LOGICALZ_f32 = 289
    CEFBS_None, // IF_LOGICALZ_i32 = 290
    CEFBS_None, // IF_PREDICATE_SET = 291
    CEFBS_None, // JUMP = 292
    CEFBS_None, // JUMP_COND = 293
    CEFBS_None, // MASK_WRITE = 294
    CEFBS_None, // MOV_IMM_F32 = 295
    CEFBS_None, // MOV_IMM_GLOBAL_ADDR = 296
    CEFBS_None, // MOV_IMM_I32 = 297
    CEFBS_None, // PRED_X = 298
    CEFBS_None, // R600_EXTRACT_ELT_V2 = 299
    CEFBS_None, // R600_EXTRACT_ELT_V4 = 300
    CEFBS_None, // R600_INSERT_ELT_V2 = 301
    CEFBS_None, // R600_INSERT_ELT_V4 = 302
    CEFBS_None, // R600_RegisterLoad = 303
    CEFBS_None, // R600_RegisterStore = 304
    CEFBS_None, // RETDYN = 305
    CEFBS_None, // RETURN = 306
    CEFBS_None, // TXD = 307
    CEFBS_None, // TXD_SHADOW = 308
    CEFBS_None, // WHILELOOP = 309
    CEFBS_None, // ADD = 310
    CEFBS_None, // ADDC_UINT = 311
    CEFBS_None, // ADD_INT = 312
    CEFBS_None, // ALU_CLAUSE = 313
    CEFBS_None, // AND_INT = 314
    CEFBS_None, // ASHR_eg = 315
    CEFBS_None, // ASHR_r600 = 316
    CEFBS_None, // BCNT_INT = 317
    CEFBS_None, // BFE_INT_eg = 318
    CEFBS_None, // BFE_UINT_eg = 319
    CEFBS_None, // BFI_INT_eg = 320
    CEFBS_None, // BFM_INT_eg = 321
    CEFBS_None, // BIT_ALIGN_INT_eg = 322
    CEFBS_None, // CEIL = 323
    CEFBS_None, // CF_ALU = 324
    CEFBS_None, // CF_ALU_BREAK = 325
    CEFBS_None, // CF_ALU_CONTINUE = 326
    CEFBS_None, // CF_ALU_ELSE_AFTER = 327
    CEFBS_None, // CF_ALU_POP_AFTER = 328
    CEFBS_None, // CF_ALU_PUSH_BEFORE = 329
    CEFBS_None, // CF_CALL_FS_EG = 330
    CEFBS_None, // CF_CALL_FS_R600 = 331
    CEFBS_None, // CF_CONTINUE_EG = 332
    CEFBS_None, // CF_CONTINUE_R600 = 333
    CEFBS_None, // CF_ELSE_EG = 334
    CEFBS_None, // CF_ELSE_R600 = 335
    CEFBS_None, // CF_END_CM = 336
    CEFBS_None, // CF_END_EG = 337
    CEFBS_None, // CF_END_R600 = 338
    CEFBS_None, // CF_JUMP_EG = 339
    CEFBS_None, // CF_JUMP_R600 = 340
    CEFBS_None, // CF_PUSH_EG = 341
    CEFBS_None, // CF_PUSH_ELSE_R600 = 342
    CEFBS_None, // CF_TC_EG = 343
    CEFBS_None, // CF_TC_R600 = 344
    CEFBS_None, // CF_VC_EG = 345
    CEFBS_None, // CF_VC_R600 = 346
    CEFBS_None, // CNDE_INT = 347
    CEFBS_None, // CNDE_eg = 348
    CEFBS_None, // CNDE_r600 = 349
    CEFBS_None, // CNDGE_INT = 350
    CEFBS_None, // CNDGE_eg = 351
    CEFBS_None, // CNDGE_r600 = 352
    CEFBS_None, // CNDGT_INT = 353
    CEFBS_None, // CNDGT_eg = 354
    CEFBS_None, // CNDGT_r600 = 355
    CEFBS_None, // COS_cm = 356
    CEFBS_None, // COS_eg = 357
    CEFBS_None, // COS_r600 = 358
    CEFBS_None, // COS_r700 = 359
    CEFBS_None, // CUBE_eg_real = 360
    CEFBS_None, // CUBE_r600_real = 361
    CEFBS_None, // DOT4_eg = 362
    CEFBS_None, // DOT4_r600 = 363
    CEFBS_None, // EG_ExportBuf = 364
    CEFBS_None, // EG_ExportSwz = 365
    CEFBS_None, // END_LOOP_EG = 366
    CEFBS_None, // END_LOOP_R600 = 367
    CEFBS_None, // EXP_IEEE_cm = 368
    CEFBS_None, // EXP_IEEE_eg = 369
    CEFBS_None, // EXP_IEEE_r600 = 370
    CEFBS_None, // FETCH_CLAUSE = 371
    CEFBS_None, // FFBH_UINT = 372
    CEFBS_None, // FFBL_INT = 373
    CEFBS_None, // FLOOR = 374
    CEFBS_None, // FLT16_TO_FLT32 = 375
    CEFBS_None, // FLT32_TO_FLT16 = 376
    CEFBS_None, // FLT_TO_INT_eg = 377
    CEFBS_None, // FLT_TO_INT_r600 = 378
    CEFBS_None, // FLT_TO_UINT_eg = 379
    CEFBS_None, // FLT_TO_UINT_r600 = 380
    CEFBS_None, // FMA_eg = 381
    CEFBS_None, // FRACT = 382
    CEFBS_None, // GROUP_BARRIER = 383
    CEFBS_None, // INTERP_LOAD_P0 = 384
    CEFBS_None, // INTERP_PAIR_XY = 385
    CEFBS_None, // INTERP_PAIR_ZW = 386
    CEFBS_None, // INTERP_VEC_LOAD = 387
    CEFBS_None, // INTERP_XY = 388
    CEFBS_None, // INTERP_ZW = 389
    CEFBS_None, // INT_TO_FLT_eg = 390
    CEFBS_None, // INT_TO_FLT_r600 = 391
    CEFBS_None, // KILLGT = 392
    CEFBS_None, // LDS_ADD = 393
    CEFBS_None, // LDS_ADD_RET = 394
    CEFBS_None, // LDS_AND = 395
    CEFBS_None, // LDS_AND_RET = 396
    CEFBS_None, // LDS_BYTE_READ_RET = 397
    CEFBS_None, // LDS_BYTE_WRITE = 398
    CEFBS_None, // LDS_CMPST = 399
    CEFBS_None, // LDS_CMPST_RET = 400
    CEFBS_None, // LDS_MAX_INT = 401
    CEFBS_None, // LDS_MAX_INT_RET = 402
    CEFBS_None, // LDS_MAX_UINT = 403
    CEFBS_None, // LDS_MAX_UINT_RET = 404
    CEFBS_None, // LDS_MIN_INT = 405
    CEFBS_None, // LDS_MIN_INT_RET = 406
    CEFBS_None, // LDS_MIN_UINT = 407
    CEFBS_None, // LDS_MIN_UINT_RET = 408
    CEFBS_None, // LDS_OR = 409
    CEFBS_None, // LDS_OR_RET = 410
    CEFBS_None, // LDS_READ_RET = 411
    CEFBS_None, // LDS_SHORT_READ_RET = 412
    CEFBS_None, // LDS_SHORT_WRITE = 413
    CEFBS_None, // LDS_SUB = 414
    CEFBS_None, // LDS_SUB_RET = 415
    CEFBS_None, // LDS_UBYTE_READ_RET = 416
    CEFBS_None, // LDS_USHORT_READ_RET = 417
    CEFBS_None, // LDS_WRITE = 418
    CEFBS_None, // LDS_WRXCHG = 419
    CEFBS_None, // LDS_WRXCHG_RET = 420
    CEFBS_None, // LDS_XOR = 421
    CEFBS_None, // LDS_XOR_RET = 422
    CEFBS_None, // LITERALS = 423
    CEFBS_None, // LOG_CLAMPED_eg = 424
    CEFBS_None, // LOG_CLAMPED_r600 = 425
    CEFBS_None, // LOG_IEEE_cm = 426
    CEFBS_None, // LOG_IEEE_eg = 427
    CEFBS_None, // LOG_IEEE_r600 = 428
    CEFBS_None, // LOOP_BREAK_EG = 429
    CEFBS_None, // LOOP_BREAK_R600 = 430
    CEFBS_None, // LSHL_eg = 431
    CEFBS_None, // LSHL_r600 = 432
    CEFBS_None, // LSHR_eg = 433
    CEFBS_None, // LSHR_r600 = 434
    CEFBS_None, // MAX = 435
    CEFBS_None, // MAX_DX10 = 436
    CEFBS_None, // MAX_INT = 437
    CEFBS_None, // MAX_UINT = 438
    CEFBS_None, // MIN = 439
    CEFBS_None, // MIN_DX10 = 440
    CEFBS_None, // MIN_INT = 441
    CEFBS_None, // MIN_UINT = 442
    CEFBS_None, // MOV = 443
    CEFBS_None, // MOVA_INT_eg = 444
    CEFBS_None, // MUL = 445
    CEFBS_None, // MULADD_IEEE_eg = 446
    CEFBS_None, // MULADD_IEEE_r600 = 447
    CEFBS_None, // MULADD_INT24_cm = 448
    CEFBS_None, // MULADD_UINT24_eg = 449
    CEFBS_None, // MULADD_eg = 450
    CEFBS_None, // MULADD_r600 = 451
    CEFBS_None, // MULHI_INT_cm = 452
    CEFBS_None, // MULHI_INT_cm24 = 453
    CEFBS_None, // MULHI_INT_eg = 454
    CEFBS_None, // MULHI_INT_r600 = 455
    CEFBS_None, // MULHI_UINT24_eg = 456
    CEFBS_None, // MULHI_UINT_cm = 457
    CEFBS_None, // MULHI_UINT_cm24 = 458
    CEFBS_None, // MULHI_UINT_eg = 459
    CEFBS_None, // MULHI_UINT_r600 = 460
    CEFBS_None, // MULLO_INT_cm = 461
    CEFBS_None, // MULLO_INT_eg = 462
    CEFBS_None, // MULLO_INT_r600 = 463
    CEFBS_None, // MULLO_UINT_cm = 464
    CEFBS_None, // MULLO_UINT_eg = 465
    CEFBS_None, // MULLO_UINT_r600 = 466
    CEFBS_None, // MUL_IEEE = 467
    CEFBS_None, // MUL_INT24_cm = 468
    CEFBS_None, // MUL_LIT_eg = 469
    CEFBS_None, // MUL_LIT_r600 = 470
    CEFBS_None, // MUL_UINT24_eg = 471
    CEFBS_None, // NOT_INT = 472
    CEFBS_None, // OR_INT = 473
    CEFBS_None, // PAD = 474
    CEFBS_None, // POP_EG = 475
    CEFBS_None, // POP_R600 = 476
    CEFBS_None, // PRED_SETE = 477
    CEFBS_None, // PRED_SETE_INT = 478
    CEFBS_None, // PRED_SETGE = 479
    CEFBS_None, // PRED_SETGE_INT = 480
    CEFBS_None, // PRED_SETGT = 481
    CEFBS_None, // PRED_SETGT_INT = 482
    CEFBS_None, // PRED_SETNE = 483
    CEFBS_None, // PRED_SETNE_INT = 484
    CEFBS_None, // R600_ExportBuf = 485
    CEFBS_None, // R600_ExportSwz = 486
    CEFBS_None, // RAT_ATOMIC_ADD_NORET = 487
    CEFBS_None, // RAT_ATOMIC_ADD_RTN = 488
    CEFBS_None, // RAT_ATOMIC_AND_NORET = 489
    CEFBS_None, // RAT_ATOMIC_AND_RTN = 490
    CEFBS_None, // RAT_ATOMIC_CMPXCHG_INT_NORET = 491
    CEFBS_None, // RAT_ATOMIC_CMPXCHG_INT_RTN = 492
    CEFBS_None, // RAT_ATOMIC_DEC_UINT_NORET = 493
    CEFBS_None, // RAT_ATOMIC_DEC_UINT_RTN = 494
    CEFBS_None, // RAT_ATOMIC_INC_UINT_NORET = 495
    CEFBS_None, // RAT_ATOMIC_INC_UINT_RTN = 496
    CEFBS_None, // RAT_ATOMIC_MAX_INT_NORET = 497
    CEFBS_None, // RAT_ATOMIC_MAX_INT_RTN = 498
    CEFBS_None, // RAT_ATOMIC_MAX_UINT_NORET = 499
    CEFBS_None, // RAT_ATOMIC_MAX_UINT_RTN = 500
    CEFBS_None, // RAT_ATOMIC_MIN_INT_NORET = 501
    CEFBS_None, // RAT_ATOMIC_MIN_INT_RTN = 502
    CEFBS_None, // RAT_ATOMIC_MIN_UINT_NORET = 503
    CEFBS_None, // RAT_ATOMIC_MIN_UINT_RTN = 504
    CEFBS_None, // RAT_ATOMIC_OR_NORET = 505
    CEFBS_None, // RAT_ATOMIC_OR_RTN = 506
    CEFBS_None, // RAT_ATOMIC_RSUB_NORET = 507
    CEFBS_None, // RAT_ATOMIC_RSUB_RTN = 508
    CEFBS_None, // RAT_ATOMIC_SUB_NORET = 509
    CEFBS_None, // RAT_ATOMIC_SUB_RTN = 510
    CEFBS_None, // RAT_ATOMIC_XCHG_INT_NORET = 511
    CEFBS_None, // RAT_ATOMIC_XCHG_INT_RTN = 512
    CEFBS_None, // RAT_ATOMIC_XOR_NORET = 513
    CEFBS_None, // RAT_ATOMIC_XOR_RTN = 514
    CEFBS_None, // RAT_MSKOR = 515
    CEFBS_None, // RAT_STORE_DWORD128 = 516
    CEFBS_None, // RAT_STORE_DWORD32 = 517
    CEFBS_None, // RAT_STORE_DWORD64 = 518
    CEFBS_None, // RAT_STORE_TYPED_cm = 519
    CEFBS_None, // RAT_STORE_TYPED_eg = 520
    CEFBS_None, // RAT_WRITE_CACHELESS_128_eg = 521
    CEFBS_None, // RAT_WRITE_CACHELESS_32_eg = 522
    CEFBS_None, // RAT_WRITE_CACHELESS_64_eg = 523
    CEFBS_None, // RECIPSQRT_CLAMPED_cm = 524
    CEFBS_None, // RECIPSQRT_CLAMPED_eg = 525
    CEFBS_None, // RECIPSQRT_CLAMPED_r600 = 526
    CEFBS_None, // RECIPSQRT_IEEE_cm = 527
    CEFBS_None, // RECIPSQRT_IEEE_eg = 528
    CEFBS_None, // RECIPSQRT_IEEE_r600 = 529
    CEFBS_None, // RECIP_CLAMPED_cm = 530
    CEFBS_None, // RECIP_CLAMPED_eg = 531
    CEFBS_None, // RECIP_CLAMPED_r600 = 532
    CEFBS_None, // RECIP_IEEE_cm = 533
    CEFBS_None, // RECIP_IEEE_eg = 534
    CEFBS_None, // RECIP_IEEE_r600 = 535
    CEFBS_None, // RECIP_UINT_eg = 536
    CEFBS_None, // RECIP_UINT_r600 = 537
    CEFBS_None, // RNDNE = 538
    CEFBS_None, // SETE = 539
    CEFBS_None, // SETE_DX10 = 540
    CEFBS_None, // SETE_INT = 541
    CEFBS_None, // SETGE_DX10 = 542
    CEFBS_None, // SETGE_INT = 543
    CEFBS_None, // SETGE_UINT = 544
    CEFBS_None, // SETGT_DX10 = 545
    CEFBS_None, // SETGT_INT = 546
    CEFBS_None, // SETGT_UINT = 547
    CEFBS_None, // SETNE_DX10 = 548
    CEFBS_None, // SETNE_INT = 549
    CEFBS_None, // SGE = 550
    CEFBS_None, // SGT = 551
    CEFBS_None, // SIN_cm = 552
    CEFBS_None, // SIN_eg = 553
    CEFBS_None, // SIN_r600 = 554
    CEFBS_None, // SIN_r700 = 555
    CEFBS_None, // SNE = 556
    CEFBS_None, // SUBB_UINT = 557
    CEFBS_None, // SUB_INT = 558
    CEFBS_None, // TEX_GET_GRADIENTS_H = 559
    CEFBS_None, // TEX_GET_GRADIENTS_V = 560
    CEFBS_None, // TEX_GET_TEXTURE_RESINFO = 561
    CEFBS_None, // TEX_LD = 562
    CEFBS_None, // TEX_LDPTR = 563
    CEFBS_None, // TEX_SAMPLE = 564
    CEFBS_None, // TEX_SAMPLE_C = 565
    CEFBS_None, // TEX_SAMPLE_C_G = 566
    CEFBS_None, // TEX_SAMPLE_C_L = 567
    CEFBS_None, // TEX_SAMPLE_C_LB = 568
    CEFBS_None, // TEX_SAMPLE_G = 569
    CEFBS_None, // TEX_SAMPLE_L = 570
    CEFBS_None, // TEX_SAMPLE_LB = 571
    CEFBS_None, // TEX_SET_GRADIENTS_H = 572
    CEFBS_None, // TEX_SET_GRADIENTS_V = 573
    CEFBS_None, // TEX_VTX_CONSTBUF = 574
    CEFBS_None, // TEX_VTX_TEXBUF = 575
    CEFBS_None, // TRUNC = 576
    CEFBS_None, // UINT_TO_FLT_eg = 577
    CEFBS_None, // UINT_TO_FLT_r600 = 578
    CEFBS_None, // VTX_READ_128_cm = 579
    CEFBS_None, // VTX_READ_128_eg = 580
    CEFBS_None, // VTX_READ_16_cm = 581
    CEFBS_None, // VTX_READ_16_eg = 582
    CEFBS_None, // VTX_READ_32_cm = 583
    CEFBS_None, // VTX_READ_32_eg = 584
    CEFBS_None, // VTX_READ_64_cm = 585
    CEFBS_None, // VTX_READ_64_eg = 586
    CEFBS_None, // VTX_READ_8_cm = 587
    CEFBS_None, // VTX_READ_8_eg = 588
    CEFBS_None, // WHILE_LOOP_EG = 589
    CEFBS_None, // WHILE_LOOP_R600 = 590
    CEFBS_None, // XOR_INT = 591
  };

  assert(Opcode < 592);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &R600InstrNameData[R600InstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace R600_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace R600 {

enum DisableEncoding {
	DisableEncoding_
};

// getLDSNoRetOp
LLVM_READONLY
int getLDSNoRetOp(uint16_t Opcode) {
static const uint16_t getLDSNoRetOpTable[][2] = {
  { R600::LDS_ADD_RET, R600::LDS_ADD },
  { R600::LDS_AND_RET, R600::LDS_AND },
  { R600::LDS_MAX_INT_RET, R600::LDS_MAX_INT },
  { R600::LDS_MAX_UINT_RET, R600::LDS_MAX_UINT },
  { R600::LDS_MIN_INT_RET, R600::LDS_MIN_INT },
  { R600::LDS_MIN_UINT_RET, R600::LDS_MIN_UINT },
  { R600::LDS_OR_RET, R600::LDS_OR },
  { R600::LDS_SUB_RET, R600::LDS_SUB },
  { R600::LDS_WRXCHG_RET, R600::LDS_WRXCHG },
  { R600::LDS_XOR_RET, R600::LDS_XOR },
}; // End of getLDSNoRetOpTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 10;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == getLDSNoRetOpTable[mid][0]) {
      break;
    }
    if (Opcode < getLDSNoRetOpTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getLDSNoRetOpTable[mid][1];
}

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

