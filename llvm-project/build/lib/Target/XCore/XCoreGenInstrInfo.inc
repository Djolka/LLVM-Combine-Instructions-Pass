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

namespace XCore {
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
    BR_JT	= 254,
    BR_JT32	= 255,
    EH_RETURN	= 256,
    FRAME_TO_ARGS_OFFSET	= 257,
    LDAWFI	= 258,
    LDWFI	= 259,
    SELECT_CC	= 260,
    STWFI	= 261,
    ADD_2rus	= 262,
    ADD_3r	= 263,
    ANDNOT_2r	= 264,
    AND_3r	= 265,
    ASHR_l2rus	= 266,
    ASHR_l3r	= 267,
    BAU_1r	= 268,
    BITREV_l2r	= 269,
    BLACP_lu10	= 270,
    BLACP_u10	= 271,
    BLAT_lu6	= 272,
    BLAT_u6	= 273,
    BLA_1r	= 274,
    BLRB_lu10	= 275,
    BLRB_u10	= 276,
    BLRF_lu10	= 277,
    BLRF_u10	= 278,
    BRBF_lru6	= 279,
    BRBF_ru6	= 280,
    BRBT_lru6	= 281,
    BRBT_ru6	= 282,
    BRBU_lu6	= 283,
    BRBU_u6	= 284,
    BRFF_lru6	= 285,
    BRFF_ru6	= 286,
    BRFT_lru6	= 287,
    BRFT_ru6	= 288,
    BRFU_lu6	= 289,
    BRFU_u6	= 290,
    BRU_1r	= 291,
    BYTEREV_l2r	= 292,
    CHKCT_2r	= 293,
    CHKCT_rus	= 294,
    CLRE_0R	= 295,
    CLRPT_1R	= 296,
    CLRSR_branch_lu6	= 297,
    CLRSR_branch_u6	= 298,
    CLRSR_lu6	= 299,
    CLRSR_u6	= 300,
    CLZ_l2r	= 301,
    CRC8_l4r	= 302,
    CRC_l3r	= 303,
    DCALL_0R	= 304,
    DENTSP_0R	= 305,
    DGETREG_1r	= 306,
    DIVS_l3r	= 307,
    DIVU_l3r	= 308,
    DRESTSP_0R	= 309,
    DRET_0R	= 310,
    ECALLF_1r	= 311,
    ECALLT_1r	= 312,
    EDU_1r	= 313,
    EEF_2r	= 314,
    EET_2r	= 315,
    EEU_1r	= 316,
    ENDIN_2r	= 317,
    ENTSP_lu6	= 318,
    ENTSP_u6	= 319,
    EQ_2rus	= 320,
    EQ_3r	= 321,
    EXTDP_lu6	= 322,
    EXTDP_u6	= 323,
    EXTSP_lu6	= 324,
    EXTSP_u6	= 325,
    FREER_1r	= 326,
    FREET_0R	= 327,
    GETD_l2r	= 328,
    GETED_0R	= 329,
    GETET_0R	= 330,
    GETID_0R	= 331,
    GETKEP_0R	= 332,
    GETKSP_0R	= 333,
    GETN_l2r	= 334,
    GETPS_l2r	= 335,
    GETR_rus	= 336,
    GETSR_lu6	= 337,
    GETSR_u6	= 338,
    GETST_2r	= 339,
    GETTS_2r	= 340,
    INCT_2r	= 341,
    INITCP_2r	= 342,
    INITDP_2r	= 343,
    INITLR_l2r	= 344,
    INITPC_2r	= 345,
    INITSP_2r	= 346,
    INPW_l2rus	= 347,
    INSHR_2r	= 348,
    INT_2r	= 349,
    IN_2r	= 350,
    KCALL_1r	= 351,
    KCALL_lu6	= 352,
    KCALL_u6	= 353,
    KENTSP_lu6	= 354,
    KENTSP_u6	= 355,
    KRESTSP_lu6	= 356,
    KRESTSP_u6	= 357,
    KRET_0R	= 358,
    LADD_l5r	= 359,
    LD16S_3r	= 360,
    LD8U_3r	= 361,
    LDA16B_l3r	= 362,
    LDA16F_l3r	= 363,
    LDAPB_lu10	= 364,
    LDAPB_u10	= 365,
    LDAPF_lu10	= 366,
    LDAPF_lu10_ba	= 367,
    LDAPF_u10	= 368,
    LDAWB_l2rus	= 369,
    LDAWB_l3r	= 370,
    LDAWCP_lu6	= 371,
    LDAWCP_u6	= 372,
    LDAWDP_lru6	= 373,
    LDAWDP_ru6	= 374,
    LDAWF_l2rus	= 375,
    LDAWF_l3r	= 376,
    LDAWSP_lru6	= 377,
    LDAWSP_ru6	= 378,
    LDC_lru6	= 379,
    LDC_ru6	= 380,
    LDET_0R	= 381,
    LDIVU_l5r	= 382,
    LDSED_0R	= 383,
    LDSPC_0R	= 384,
    LDSSR_0R	= 385,
    LDWCP_lru6	= 386,
    LDWCP_lu10	= 387,
    LDWCP_ru6	= 388,
    LDWCP_u10	= 389,
    LDWDP_lru6	= 390,
    LDWDP_ru6	= 391,
    LDWSP_lru6	= 392,
    LDWSP_ru6	= 393,
    LDW_2rus	= 394,
    LDW_3r	= 395,
    LMUL_l6r	= 396,
    LSS_3r	= 397,
    LSUB_l5r	= 398,
    LSU_3r	= 399,
    MACCS_l4r	= 400,
    MACCU_l4r	= 401,
    MJOIN_1r	= 402,
    MKMSK_2r	= 403,
    MKMSK_rus	= 404,
    MSYNC_1r	= 405,
    MUL_l3r	= 406,
    NEG	= 407,
    NOT	= 408,
    OR_3r	= 409,
    OUTCT_2r	= 410,
    OUTCT_rus	= 411,
    OUTPW_l2rus	= 412,
    OUTSHR_2r	= 413,
    OUTT_2r	= 414,
    OUT_2r	= 415,
    PEEK_2r	= 416,
    REMS_l3r	= 417,
    REMU_l3r	= 418,
    RETSP_lu6	= 419,
    RETSP_u6	= 420,
    SETCLK_l2r	= 421,
    SETCP_1r	= 422,
    SETC_l2r	= 423,
    SETC_lru6	= 424,
    SETC_ru6	= 425,
    SETDP_1r	= 426,
    SETD_2r	= 427,
    SETEV_1r	= 428,
    SETKEP_0R	= 429,
    SETN_l2r	= 430,
    SETPSC_2r	= 431,
    SETPS_l2r	= 432,
    SETPT_2r	= 433,
    SETRDY_l2r	= 434,
    SETSP_1r	= 435,
    SETSR_branch_lu6	= 436,
    SETSR_branch_u6	= 437,
    SETSR_lu6	= 438,
    SETSR_u6	= 439,
    SETTW_l2r	= 440,
    SETV_1r	= 441,
    SEXT_2r	= 442,
    SEXT_rus	= 443,
    SHL_2rus	= 444,
    SHL_3r	= 445,
    SHR_2rus	= 446,
    SHR_3r	= 447,
    SSYNC_0r	= 448,
    ST16_l3r	= 449,
    ST8_l3r	= 450,
    STET_0R	= 451,
    STSED_0R	= 452,
    STSPC_0R	= 453,
    STSSR_0R	= 454,
    STWDP_lru6	= 455,
    STWDP_ru6	= 456,
    STWSP_lru6	= 457,
    STWSP_ru6	= 458,
    STW_2rus	= 459,
    STW_l3r	= 460,
    SUB_2rus	= 461,
    SUB_3r	= 462,
    SYNCR_1r	= 463,
    TESTCT_2r	= 464,
    TESTLCL_l2r	= 465,
    TESTWCT_2r	= 466,
    TSETMR_2r	= 467,
    TSETR_3r	= 468,
    TSTART_1R	= 469,
    WAITEF_1R	= 470,
    WAITET_1R	= 471,
    WAITEU_0R	= 472,
    XOR_l3r	= 473,
    ZEXT_2r	= 474,
    ZEXT_rus	= 475,
    INSTRUCTION_LIST_END = 476
  };

} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace XCore {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { XCore::SP, XCore::SP };
static const MCPhysReg ImplicitList2[] = { XCore::SP, XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::LR };
static const MCPhysReg ImplicitList3[] = { XCore::R11 };
static const MCPhysReg ImplicitList4[] = { XCore::SP };

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
static const MCOperandInfo OperandInfo45[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(1) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { XCore::RRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(1) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc XCoreInsts[] = {
  { 475,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo61 },  // Inst #475 = ZEXT_rus
  { 474,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #474 = ZEXT_2r
  { 473,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #473 = XOR_l3r
  { 472,	0,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #472 = WAITEU_0R
  { 471,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #471 = WAITET_1R
  { 470,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #470 = WAITEF_1R
  { 469,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #469 = TSTART_1R
  { 468,	3,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo63 },  // Inst #468 = TSETR_3r
  { 467,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo62 },  // Inst #467 = TSETMR_2r
  { 466,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #466 = TESTWCT_2r
  { 465,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #465 = TESTLCL_l2r
  { 464,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #464 = TESTCT_2r
  { 463,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #463 = SYNCR_1r
  { 462,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #462 = SUB_3r
  { 461,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #461 = SUB_2rus
  { 460,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #460 = STW_l3r
  { 459,	3,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #459 = STW_2rus
  { 458,	2,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo58 },  // Inst #458 = STWSP_ru6
  { 457,	2,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo58 },  // Inst #457 = STWSP_lru6
  { 456,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #456 = STWDP_ru6
  { 455,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #455 = STWDP_lru6
  { 454,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #454 = STSSR_0R
  { 453,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #453 = STSPC_0R
  { 452,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #452 = STSED_0R
  { 451,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #451 = STET_0R
  { 450,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #450 = ST8_l3r
  { 449,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #449 = ST16_l3r
  { 448,	0,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #448 = SSYNC_0r
  { 447,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #447 = SHR_3r
  { 446,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #446 = SHR_2rus
  { 445,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #445 = SHL_3r
  { 444,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #444 = SHL_2rus
  { 443,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo61 },  // Inst #443 = SEXT_rus
  { 442,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #442 = SEXT_2r
  { 441,	1,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo47 },  // Inst #441 = SETV_1r
  { 440,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #440 = SETTW_l2r
  { 439,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #439 = SETSR_u6
  { 438,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #438 = SETSR_lu6
  { 437,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #437 = SETSR_branch_u6
  { 436,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #436 = SETSR_branch_lu6
  { 435,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #435 = SETSP_1r
  { 434,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #434 = SETRDY_l2r
  { 433,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #433 = SETPT_2r
  { 432,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #432 = SETPS_l2r
  { 431,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #431 = SETPSC_2r
  { 430,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #430 = SETN_l2r
  { 429,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr },  // Inst #429 = SETKEP_0R
  { 428,	1,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo47 },  // Inst #428 = SETEV_1r
  { 427,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #427 = SETD_2r
  { 426,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #426 = SETDP_1r
  { 425,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo54 },  // Inst #425 = SETC_ru6
  { 424,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo54 },  // Inst #424 = SETC_lru6
  { 423,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #423 = SETC_l2r
  { 422,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #422 = SETCP_1r
  { 421,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #421 = SETCLK_l2r
  { 420,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #420 = RETSP_u6
  { 419,	1,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #419 = RETSP_lu6
  { 418,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #418 = REMU_l3r
  { 417,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #417 = REMS_l3r
  { 416,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #416 = PEEK_2r
  { 415,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #415 = OUT_2r
  { 414,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #414 = OUTT_2r
  { 413,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #413 = OUTSHR_2r
  { 412,	3,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #412 = OUTPW_l2rus
  { 411,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo54 },  // Inst #411 = OUTCT_rus
  { 410,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #410 = OUTCT_2r
  { 409,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #409 = OR_3r
  { 408,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #408 = NOT
  { 407,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #407 = NEG
  { 406,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #406 = MUL_l3r
  { 405,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #405 = MSYNC_1r
  { 404,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo54 },  // Inst #404 = MKMSK_rus
  { 403,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #403 = MKMSK_2r
  { 402,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #402 = MJOIN_1r
  { 401,	6,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo60 },  // Inst #401 = MACCU_l4r
  { 400,	6,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo60 },  // Inst #400 = MACCS_l4r
  { 399,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #399 = LSU_3r
  { 398,	5,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo57 },  // Inst #398 = LSUB_l5r
  { 397,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #397 = LSS_3r
  { 396,	6,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo59 },  // Inst #396 = LMUL_l6r
  { 395,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #395 = LDW_3r
  { 394,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #394 = LDW_2rus
  { 393,	2,	1,	2,	0,	1,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo58 },  // Inst #393 = LDWSP_ru6
  { 392,	2,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo58 },  // Inst #392 = LDWSP_lru6
  { 391,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #391 = LDWDP_ru6
  { 390,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #390 = LDWDP_lru6
  { 389,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo3 },  // Inst #389 = LDWCP_u10
  { 388,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #388 = LDWCP_ru6
  { 387,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo3 },  // Inst #387 = LDWCP_lu10
  { 386,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #386 = LDWCP_lru6
  { 385,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #385 = LDSSR_0R
  { 384,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #384 = LDSPC_0R
  { 383,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #383 = LDSED_0R
  { 382,	5,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo57 },  // Inst #382 = LDIVU_l5r
  { 381,	0,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #381 = LDET_0R
  { 380,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #380 = LDC_ru6
  { 379,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #379 = LDC_lru6
  { 378,	2,	1,	2,	0,	1,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo58 },  // Inst #378 = LDAWSP_ru6
  { 377,	2,	1,	4,	0,	1,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo58 },  // Inst #377 = LDAWSP_lru6
  { 376,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #376 = LDAWF_l3r
  { 375,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #375 = LDAWF_l2rus
  { 374,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #374 = LDAWDP_ru6
  { 373,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo58 },  // Inst #373 = LDAWDP_lru6
  { 372,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo3 },  // Inst #372 = LDAWCP_u6
  { 371,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo3 },  // Inst #371 = LDAWCP_lu6
  { 370,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #370 = LDAWB_l3r
  { 369,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #369 = LDAWB_l2rus
  { 368,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo2 },  // Inst #368 = LDAPF_u10
  { 367,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo2 },  // Inst #367 = LDAPF_lu10_ba
  { 366,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo2 },  // Inst #366 = LDAPF_lu10
  { 365,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo2 },  // Inst #365 = LDAPB_u10
  { 364,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo2 },  // Inst #364 = LDAPB_lu10
  { 363,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #363 = LDA16F_l3r
  { 362,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #362 = LDA16B_l3r
  { 361,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #361 = LD8U_3r
  { 360,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #360 = LD16S_3r
  { 359,	5,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo57 },  // Inst #359 = LADD_l5r
  { 358,	0,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #358 = KRET_0R
  { 357,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #357 = KRESTSP_u6
  { 356,	1,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #356 = KRESTSP_lu6
  { 355,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #355 = KENTSP_u6
  { 354,	1,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #354 = KENTSP_lu6
  { 353,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #353 = KCALL_u6
  { 352,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #352 = KCALL_lu6
  { 351,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #351 = KCALL_1r
  { 350,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #350 = IN_2r
  { 349,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #349 = INT_2r
  { 348,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #348 = INSHR_2r
  { 347,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #347 = INPW_l2rus
  { 346,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #346 = INITSP_2r
  { 345,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #345 = INITPC_2r
  { 344,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #344 = INITLR_l2r
  { 343,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #343 = INITDP_2r
  { 342,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #342 = INITCP_2r
  { 341,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #341 = INCT_2r
  { 340,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #340 = GETTS_2r
  { 339,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #339 = GETST_2r
  { 338,	1,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo3 },  // Inst #338 = GETSR_u6
  { 337,	1,	0,	4,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo3 },  // Inst #337 = GETSR_lu6
  { 336,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo54 },  // Inst #336 = GETR_rus
  { 335,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #335 = GETPS_l2r
  { 334,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #334 = GETN_l2r
  { 333,	0,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr },  // Inst #333 = GETKSP_0R
  { 332,	0,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr },  // Inst #332 = GETKEP_0R
  { 331,	0,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr },  // Inst #331 = GETID_0R
  { 330,	0,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr },  // Inst #330 = GETET_0R
  { 329,	0,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr },  // Inst #329 = GETED_0R
  { 328,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #328 = GETD_l2r
  { 327,	0,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #327 = FREET_0R
  { 326,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #326 = FREER_1r
  { 325,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #325 = EXTSP_u6
  { 324,	1,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #324 = EXTSP_lu6
  { 323,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #323 = EXTDP_u6
  { 322,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #322 = EXTDP_lu6
  { 321,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #321 = EQ_3r
  { 320,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #320 = EQ_2rus
  { 319,	1,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #319 = ENTSP_u6
  { 318,	1,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo3 },  // Inst #318 = ENTSP_lu6
  { 317,	2,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #317 = ENDIN_2r
  { 316,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #316 = EEU_1r
  { 315,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #315 = EET_2r
  { 314,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #314 = EEF_2r
  { 313,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #313 = EDU_1r
  { 312,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #312 = ECALLT_1r
  { 311,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #311 = ECALLF_1r
  { 310,	0,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #310 = DRET_0R
  { 309,	0,	0,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, nullptr },  // Inst #309 = DRESTSP_0R
  { 308,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #308 = DIVU_l3r
  { 307,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #307 = DIVS_l3r
  { 306,	1,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #306 = DGETREG_1r
  { 305,	0,	0,	2,	0,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr },  // Inst #305 = DENTSP_0R
  { 304,	0,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #304 = DCALL_0R
  { 303,	4,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo56 },  // Inst #303 = CRC_l3r
  { 302,	5,	2,	4,	0,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo55 },  // Inst #302 = CRC8_l4r
  { 301,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #301 = CLZ_l2r
  { 300,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #300 = CLRSR_u6
  { 299,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #299 = CLRSR_lu6
  { 298,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #298 = CLRSR_branch_u6
  { 297,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo3 },  // Inst #297 = CLRSR_branch_lu6
  { 296,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #296 = CLRPT_1R
  { 295,	0,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #295 = CLRE_0R
  { 294,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo54 },  // Inst #294 = CHKCT_rus
  { 293,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #293 = CHKCT_2r
  { 292,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #292 = BYTEREV_l2r
  { 291,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #291 = BRU_1r
  { 290,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #290 = BRFU_u6
  { 289,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #289 = BRFU_lu6
  { 288,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo53 },  // Inst #288 = BRFT_ru6
  { 287,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo53 },  // Inst #287 = BRFT_lru6
  { 286,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo53 },  // Inst #286 = BRFF_ru6
  { 285,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo53 },  // Inst #285 = BRFF_lru6
  { 284,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #284 = BRBU_u6
  { 283,	1,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #283 = BRBU_lu6
  { 282,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo53 },  // Inst #282 = BRBT_ru6
  { 281,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo53 },  // Inst #281 = BRBT_lru6
  { 280,	2,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo53 },  // Inst #280 = BRBF_ru6
  { 279,	2,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo53 },  // Inst #279 = BRBF_lru6
  { 278,	1,	0,	2,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo2 },  // Inst #278 = BLRF_u10
  { 277,	1,	0,	4,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo2 },  // Inst #277 = BLRF_lu10
  { 276,	1,	0,	2,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo2 },  // Inst #276 = BLRB_u10
  { 275,	1,	0,	4,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo2 },  // Inst #275 = BLRB_lu10
  { 274,	1,	0,	2,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo47 },  // Inst #274 = BLA_1r
  { 273,	1,	0,	2,	0,	1,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo3 },  // Inst #273 = BLAT_u6
  { 272,	1,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo3 },  // Inst #272 = BLAT_lu6
  { 271,	1,	0,	2,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo3 },  // Inst #271 = BLACP_u10
  { 270,	1,	0,	4,	0,	1,	6,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo3 },  // Inst #270 = BLACP_lu10
  { 269,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #269 = BITREV_l2r
  { 268,	1,	0,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #268 = BAU_1r
  { 267,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #267 = ASHR_l3r
  { 266,	3,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #266 = ASHR_l2rus
  { 265,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #265 = AND_3r
  { 264,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #264 = ANDNOT_2r
  { 263,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #263 = ADD_3r
  { 262,	3,	1,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo50 },  // Inst #262 = ADD_2rus
  { 261,	3,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #261 = STWFI
  { 260,	4,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo49 },  // Inst #260 = SELECT_CC
  { 259,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #259 = LDWFI
  { 258,	3,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #258 = LDAWFI
  { 257,	1,	1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #257 = FRAME_TO_ARGS_OFFSET
  { 256,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #256 = EH_RETURN
  { 255,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo45 },  // Inst #255 = BR_JT32
  { 254,	2,	0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo45 },  // Inst #254 = BR_JT
  { 253,	2,	0,	0,	0,	1,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo10 },  // Inst #253 = ADJCALLSTACKUP
  { 252,	2,	0,	0,	0,	1,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo10 },  // Inst #252 = ADJCALLSTACKDOWN
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
extern const char XCoreInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "LDAPB_u10\0"
  /* 19 */ "BLRB_u10\0"
  /* 28 */ "LDAPF_u10\0"
  /* 38 */ "BLRF_u10\0"
  /* 47 */ "BLACP_u10\0"
  /* 57 */ "LDWCP_u10\0"
  /* 67 */ "LDAPB_lu10\0"
  /* 78 */ "BLRB_lu10\0"
  /* 88 */ "LDAPF_lu10\0"
  /* 99 */ "BLRF_lu10\0"
  /* 109 */ "BLACP_lu10\0"
  /* 120 */ "LDWCP_lu10\0"
  /* 131 */ "BR_JT32\0"
  /* 139 */ "G_FLOG2\0"
  /* 147 */ "G_FEXP2\0"
  /* 155 */ "KCALL_u6\0"
  /* 164 */ "LDAWCP_u6\0"
  /* 174 */ "EXTDP_u6\0"
  /* 183 */ "RETSP_u6\0"
  /* 192 */ "KENTSP_u6\0"
  /* 202 */ "KRESTSP_u6\0"
  /* 213 */ "EXTSP_u6\0"
  /* 222 */ "CLRSR_u6\0"
  /* 231 */ "GETSR_u6\0"
  /* 240 */ "SETSR_u6\0"
  /* 249 */ "BLAT_u6\0"
  /* 257 */ "BRBU_u6\0"
  /* 265 */ "BRFU_u6\0"
  /* 273 */ "CLRSR_branch_u6\0"
  /* 289 */ "SETSR_branch_u6\0"
  /* 305 */ "KCALL_lu6\0"
  /* 315 */ "LDAWCP_lu6\0"
  /* 326 */ "EXTDP_lu6\0"
  /* 336 */ "RETSP_lu6\0"
  /* 346 */ "KENTSP_lu6\0"
  /* 357 */ "KRESTSP_lu6\0"
  /* 369 */ "EXTSP_lu6\0"
  /* 379 */ "CLRSR_lu6\0"
  /* 389 */ "GETSR_lu6\0"
  /* 399 */ "SETSR_lu6\0"
  /* 409 */ "BLAT_lu6\0"
  /* 418 */ "BRBU_lu6\0"
  /* 427 */ "BRFU_lu6\0"
  /* 436 */ "CLRSR_branch_lu6\0"
  /* 453 */ "SETSR_branch_lu6\0"
  /* 470 */ "LDC_ru6\0"
  /* 478 */ "SETC_ru6\0"
  /* 487 */ "BRBF_ru6\0"
  /* 496 */ "BRFF_ru6\0"
  /* 505 */ "LDWCP_ru6\0"
  /* 515 */ "LDAWDP_ru6\0"
  /* 526 */ "LDWDP_ru6\0"
  /* 536 */ "STWDP_ru6\0"
  /* 546 */ "LDAWSP_ru6\0"
  /* 557 */ "LDWSP_ru6\0"
  /* 567 */ "STWSP_ru6\0"
  /* 577 */ "BRBT_ru6\0"
  /* 586 */ "BRFT_ru6\0"
  /* 595 */ "LDC_lru6\0"
  /* 604 */ "SETC_lru6\0"
  /* 614 */ "BRBF_lru6\0"
  /* 624 */ "BRFF_lru6\0"
  /* 634 */ "LDWCP_lru6\0"
  /* 645 */ "LDAWDP_lru6\0"
  /* 657 */ "LDWDP_lru6\0"
  /* 668 */ "STWDP_lru6\0"
  /* 679 */ "LDAWSP_lru6\0"
  /* 691 */ "LDWSP_lru6\0"
  /* 702 */ "STWSP_lru6\0"
  /* 713 */ "BRBT_lru6\0"
  /* 723 */ "BRFT_lru6\0"
  /* 733 */ "G_FMA\0"
  /* 739 */ "G_STRICT_FMA\0"
  /* 752 */ "G_FSUB\0"
  /* 759 */ "G_STRICT_FSUB\0"
  /* 773 */ "G_ATOMICRMW_FSUB\0"
  /* 790 */ "G_SUB\0"
  /* 796 */ "G_ATOMICRMW_SUB\0"
  /* 812 */ "SELECT_CC\0"
  /* 822 */ "G_INTRINSIC\0"
  /* 834 */ "G_FPTRUNC\0"
  /* 844 */ "G_INTRINSIC_TRUNC\0"
  /* 862 */ "G_TRUNC\0"
  /* 870 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 891 */ "G_DYN_STACKALLOC\0"
  /* 908 */ "G_FMAD\0"
  /* 915 */ "G_INDEXED_SEXTLOAD\0"
  /* 934 */ "G_SEXTLOAD\0"
  /* 945 */ "G_INDEXED_ZEXTLOAD\0"
  /* 964 */ "G_ZEXTLOAD\0"
  /* 975 */ "G_INDEXED_LOAD\0"
  /* 990 */ "G_LOAD\0"
  /* 997 */ "G_VECREDUCE_FADD\0"
  /* 1014 */ "G_FADD\0"
  /* 1021 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 1042 */ "G_STRICT_FADD\0"
  /* 1056 */ "G_ATOMICRMW_FADD\0"
  /* 1073 */ "G_VECREDUCE_ADD\0"
  /* 1089 */ "G_ADD\0"
  /* 1095 */ "G_PTR_ADD\0"
  /* 1105 */ "G_ATOMICRMW_ADD\0"
  /* 1121 */ "G_ATOMICRMW_NAND\0"
  /* 1138 */ "G_VECREDUCE_AND\0"
  /* 1154 */ "G_AND\0"
  /* 1160 */ "G_ATOMICRMW_AND\0"
  /* 1176 */ "LIFETIME_END\0"
  /* 1189 */ "G_BRCOND\0"
  /* 1198 */ "G_LLROUND\0"
  /* 1208 */ "G_LROUND\0"
  /* 1217 */ "G_INTRINSIC_ROUND\0"
  /* 1235 */ "G_INTRINSIC_FPTRUNC_ROUND\0"
  /* 1261 */ "LOAD_STACK_GUARD\0"
  /* 1278 */ "PSEUDO_PROBE\0"
  /* 1291 */ "G_SSUBE\0"
  /* 1299 */ "G_USUBE\0"
  /* 1307 */ "G_FENCE\0"
  /* 1315 */ "ARITH_FENCE\0"
  /* 1327 */ "REG_SEQUENCE\0"
  /* 1340 */ "G_SADDE\0"
  /* 1348 */ "G_UADDE\0"
  /* 1356 */ "G_FMINNUM_IEEE\0"
  /* 1371 */ "G_FMAXNUM_IEEE\0"
  /* 1386 */ "G_JUMP_TABLE\0"
  /* 1399 */ "BUNDLE\0"
  /* 1406 */ "G_MEMCPY_INLINE\0"
  /* 1422 */ "LOCAL_ESCAPE\0"
  /* 1435 */ "G_INDEXED_STORE\0"
  /* 1451 */ "G_STORE\0"
  /* 1459 */ "G_BITREVERSE\0"
  /* 1472 */ "DBG_VALUE\0"
  /* 1482 */ "G_GLOBAL_VALUE\0"
  /* 1497 */ "G_MEMMOVE\0"
  /* 1507 */ "G_FREEZE\0"
  /* 1516 */ "G_FCANONICALIZE\0"
  /* 1532 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 1550 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 1568 */ "G_IMPLICIT_DEF\0"
  /* 1583 */ "DBG_INSTR_REF\0"
  /* 1597 */ "G_FNEG\0"
  /* 1604 */ "EXTRACT_SUBREG\0"
  /* 1619 */ "INSERT_SUBREG\0"
  /* 1633 */ "G_SEXT_INREG\0"
  /* 1646 */ "SUBREG_TO_REG\0"
  /* 1660 */ "G_ATOMIC_CMPXCHG\0"
  /* 1677 */ "G_ATOMICRMW_XCHG\0"
  /* 1694 */ "G_FLOG\0"
  /* 1701 */ "G_VAARG\0"
  /* 1709 */ "PREALLOCATED_ARG\0"
  /* 1726 */ "G_SMULH\0"
  /* 1734 */ "G_UMULH\0"
  /* 1742 */ "LDAWFI\0"
  /* 1749 */ "LDWFI\0"
  /* 1755 */ "STWFI\0"
  /* 1761 */ "DBG_PHI\0"
  /* 1769 */ "G_FPTOSI\0"
  /* 1778 */ "G_FPTOUI\0"
  /* 1787 */ "G_FPOWI\0"
  /* 1795 */ "G_PTRMASK\0"
  /* 1805 */ "GC_LABEL\0"
  /* 1814 */ "DBG_LABEL\0"
  /* 1824 */ "EH_LABEL\0"
  /* 1833 */ "ANNOTATION_LABEL\0"
  /* 1850 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1870 */ "G_FSHL\0"
  /* 1877 */ "G_SHL\0"
  /* 1883 */ "G_FCEIL\0"
  /* 1891 */ "PATCHABLE_TAIL_CALL\0"
  /* 1911 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1938 */ "PATCHABLE_EVENT_CALL\0"
  /* 1959 */ "FENTRY_CALL\0"
  /* 1971 */ "KILL\0"
  /* 1976 */ "G_CONSTANT_POOL\0"
  /* 1992 */ "G_ROTL\0"
  /* 1999 */ "G_VECREDUCE_FMUL\0"
  /* 2016 */ "G_FMUL\0"
  /* 2023 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 2044 */ "G_STRICT_FMUL\0"
  /* 2058 */ "G_VECREDUCE_MUL\0"
  /* 2074 */ "G_MUL\0"
  /* 2080 */ "G_FREM\0"
  /* 2087 */ "G_STRICT_FREM\0"
  /* 2101 */ "G_SREM\0"
  /* 2108 */ "G_UREM\0"
  /* 2115 */ "G_SDIVREM\0"
  /* 2125 */ "G_UDIVREM\0"
  /* 2135 */ "INLINEASM\0"
  /* 2145 */ "G_FMINIMUM\0"
  /* 2156 */ "G_FMAXIMUM\0"
  /* 2167 */ "G_FMINNUM\0"
  /* 2177 */ "G_FMAXNUM\0"
  /* 2187 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 2209 */ "G_ASSERT_ALIGN\0"
  /* 2224 */ "G_FCOPYSIGN\0"
  /* 2236 */ "G_VECREDUCE_FMIN\0"
  /* 2253 */ "G_ATOMICRMW_FMIN\0"
  /* 2270 */ "G_VECREDUCE_SMIN\0"
  /* 2287 */ "G_SMIN\0"
  /* 2294 */ "G_VECREDUCE_UMIN\0"
  /* 2311 */ "G_UMIN\0"
  /* 2318 */ "G_ATOMICRMW_UMIN\0"
  /* 2335 */ "G_ATOMICRMW_MIN\0"
  /* 2351 */ "G_FSIN\0"
  /* 2358 */ "CFI_INSTRUCTION\0"
  /* 2374 */ "EH_RETURN\0"
  /* 2384 */ "ADJCALLSTACKDOWN\0"
  /* 2401 */ "G_SSUBO\0"
  /* 2409 */ "G_USUBO\0"
  /* 2417 */ "G_SADDO\0"
  /* 2425 */ "G_UADDO\0"
  /* 2433 */ "G_SMULO\0"
  /* 2441 */ "G_UMULO\0"
  /* 2449 */ "G_BZERO\0"
  /* 2457 */ "STACKMAP\0"
  /* 2466 */ "G_ATOMICRMW_UDEC_WRAP\0"
  /* 2488 */ "G_ATOMICRMW_UINC_WRAP\0"
  /* 2510 */ "G_BSWAP\0"
  /* 2518 */ "G_SITOFP\0"
  /* 2527 */ "G_UITOFP\0"
  /* 2536 */ "G_FCMP\0"
  /* 2543 */ "G_ICMP\0"
  /* 2550 */ "G_CTPOP\0"
  /* 2558 */ "PATCHABLE_OP\0"
  /* 2571 */ "FAULTING_OP\0"
  /* 2583 */ "ADJCALLSTACKUP\0"
  /* 2598 */ "PREALLOCATED_SETUP\0"
  /* 2617 */ "G_FEXP\0"
  /* 2624 */ "LDSPC_0R\0"
  /* 2633 */ "STSPC_0R\0"
  /* 2642 */ "LDSED_0R\0"
  /* 2651 */ "STSED_0R\0"
  /* 2660 */ "GETED_0R\0"
  /* 2669 */ "GETID_0R\0"
  /* 2678 */ "CLRE_0R\0"
  /* 2686 */ "DCALL_0R\0"
  /* 2695 */ "GETKEP_0R\0"
  /* 2705 */ "SETKEP_0R\0"
  /* 2715 */ "GETKSP_0R\0"
  /* 2725 */ "DENTSP_0R\0"
  /* 2735 */ "DRESTSP_0R\0"
  /* 2746 */ "LDSSR_0R\0"
  /* 2755 */ "STSSR_0R\0"
  /* 2764 */ "LDET_0R\0"
  /* 2772 */ "FREET_0R\0"
  /* 2781 */ "DRET_0R\0"
  /* 2789 */ "KRET_0R\0"
  /* 2797 */ "GETET_0R\0"
  /* 2806 */ "STET_0R\0"
  /* 2814 */ "WAITEU_0R\0"
  /* 2824 */ "WAITEF_1R\0"
  /* 2834 */ "WAITET_1R\0"
  /* 2844 */ "CLRPT_1R\0"
  /* 2853 */ "TSTART_1R\0"
  /* 2863 */ "G_BR\0"
  /* 2868 */ "INLINEASM_BR\0"
  /* 2881 */ "G_BLOCK_ADDR\0"
  /* 2894 */ "MEMBARRIER\0"
  /* 2905 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 2930 */ "G_READCYCLECOUNTER\0"
  /* 2949 */ "G_READ_REGISTER\0"
  /* 2965 */ "G_WRITE_REGISTER\0"
  /* 2982 */ "G_ASHR\0"
  /* 2989 */ "G_FSHR\0"
  /* 2996 */ "G_LSHR\0"
  /* 3003 */ "G_FFLOOR\0"
  /* 3012 */ "G_BUILD_VECTOR\0"
  /* 3027 */ "G_SHUFFLE_VECTOR\0"
  /* 3044 */ "G_VECREDUCE_XOR\0"
  /* 3060 */ "G_XOR\0"
  /* 3066 */ "G_ATOMICRMW_XOR\0"
  /* 3082 */ "G_VECREDUCE_OR\0"
  /* 3097 */ "G_OR\0"
  /* 3102 */ "G_ATOMICRMW_OR\0"
  /* 3117 */ "G_ROTR\0"
  /* 3124 */ "G_INTTOPTR\0"
  /* 3135 */ "G_FABS\0"
  /* 3142 */ "G_ABS\0"
  /* 3148 */ "G_UNMERGE_VALUES\0"
  /* 3165 */ "G_MERGE_VALUES\0"
  /* 3180 */ "G_FCOS\0"
  /* 3187 */ "G_CONCAT_VECTORS\0"
  /* 3204 */ "COPY_TO_REGCLASS\0"
  /* 3221 */ "G_IS_FPCLASS\0"
  /* 3234 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 3264 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 3291 */ "G_SSUBSAT\0"
  /* 3301 */ "G_USUBSAT\0"
  /* 3311 */ "G_SADDSAT\0"
  /* 3321 */ "G_UADDSAT\0"
  /* 3331 */ "G_SSHLSAT\0"
  /* 3341 */ "G_USHLSAT\0"
  /* 3351 */ "G_SMULFIXSAT\0"
  /* 3364 */ "G_UMULFIXSAT\0"
  /* 3377 */ "G_SDIVFIXSAT\0"
  /* 3390 */ "G_UDIVFIXSAT\0"
  /* 3403 */ "G_EXTRACT\0"
  /* 3413 */ "G_SELECT\0"
  /* 3422 */ "G_BRINDIRECT\0"
  /* 3435 */ "PATCHABLE_RET\0"
  /* 3449 */ "FRAME_TO_ARGS_OFFSET\0"
  /* 3470 */ "G_MEMSET\0"
  /* 3479 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 3503 */ "G_BRJT\0"
  /* 3510 */ "BR_JT\0"
  /* 3516 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 3537 */ "G_INSERT_VECTOR_ELT\0"
  /* 3557 */ "G_FCONSTANT\0"
  /* 3569 */ "G_CONSTANT\0"
  /* 3580 */ "STATEPOINT\0"
  /* 3591 */ "PATCHPOINT\0"
  /* 3602 */ "G_PTRTOINT\0"
  /* 3613 */ "G_FRINT\0"
  /* 3621 */ "G_INTRINSIC_LRINT\0"
  /* 3639 */ "G_FNEARBYINT\0"
  /* 3652 */ "NOT\0"
  /* 3656 */ "G_VASTART\0"
  /* 3666 */ "LIFETIME_START\0"
  /* 3681 */ "G_INVOKE_REGION_START\0"
  /* 3703 */ "G_INSERT\0"
  /* 3712 */ "G_FSQRT\0"
  /* 3720 */ "G_STRICT_FSQRT\0"
  /* 3735 */ "G_BITCAST\0"
  /* 3745 */ "G_ADDRSPACE_CAST\0"
  /* 3762 */ "DBG_VALUE_LIST\0"
  /* 3777 */ "G_FPEXT\0"
  /* 3785 */ "G_SEXT\0"
  /* 3792 */ "G_ASSERT_SEXT\0"
  /* 3806 */ "G_ANYEXT\0"
  /* 3815 */ "G_ZEXT\0"
  /* 3822 */ "G_ASSERT_ZEXT\0"
  /* 3836 */ "G_FDIV\0"
  /* 3843 */ "G_STRICT_FDIV\0"
  /* 3857 */ "G_SDIV\0"
  /* 3864 */ "G_UDIV\0"
  /* 3871 */ "G_FPOW\0"
  /* 3878 */ "G_VECREDUCE_FMAX\0"
  /* 3895 */ "G_ATOMICRMW_FMAX\0"
  /* 3912 */ "G_VECREDUCE_SMAX\0"
  /* 3929 */ "G_SMAX\0"
  /* 3936 */ "G_VECREDUCE_UMAX\0"
  /* 3953 */ "G_UMAX\0"
  /* 3960 */ "G_ATOMICRMW_UMAX\0"
  /* 3977 */ "G_ATOMICRMW_MAX\0"
  /* 3993 */ "G_FRAME_INDEX\0"
  /* 4007 */ "G_SBFX\0"
  /* 4014 */ "G_UBFX\0"
  /* 4021 */ "G_SMULFIX\0"
  /* 4031 */ "G_UMULFIX\0"
  /* 4041 */ "G_SDIVFIX\0"
  /* 4051 */ "G_UDIVFIX\0"
  /* 4061 */ "G_MEMCPY\0"
  /* 4070 */ "COPY\0"
  /* 4075 */ "G_CTLZ\0"
  /* 4082 */ "G_CTTZ\0"
  /* 4089 */ "LDAPF_lu10_ba\0"
  /* 4103 */ "SSYNC_0r\0"
  /* 4112 */ "BLA_1r\0"
  /* 4119 */ "MSYNC_1r\0"
  /* 4128 */ "ECALLF_1r\0"
  /* 4138 */ "DGETREG_1r\0"
  /* 4149 */ "KCALL_1r\0"
  /* 4158 */ "MJOIN_1r\0"
  /* 4167 */ "SETCP_1r\0"
  /* 4176 */ "SETDP_1r\0"
  /* 4185 */ "SETSP_1r\0"
  /* 4194 */ "SYNCR_1r\0"
  /* 4203 */ "FREER_1r\0"
  /* 4212 */ "ECALLT_1r\0"
  /* 4222 */ "BAU_1r\0"
  /* 4229 */ "EDU_1r\0"
  /* 4236 */ "EEU_1r\0"
  /* 4243 */ "BRU_1r\0"
  /* 4250 */ "SETEV_1r\0"
  /* 4259 */ "SETV_1r\0"
  /* 4267 */ "INITPC_2r\0"
  /* 4277 */ "SETPSC_2r\0"
  /* 4287 */ "SETD_2r\0"
  /* 4295 */ "EEF_2r\0"
  /* 4302 */ "PEEK_2r\0"
  /* 4310 */ "MKMSK_2r\0"
  /* 4319 */ "ENDIN_2r\0"
  /* 4328 */ "INITCP_2r\0"
  /* 4338 */ "INITDP_2r\0"
  /* 4348 */ "INITSP_2r\0"
  /* 4358 */ "INSHR_2r\0"
  /* 4367 */ "OUTSHR_2r\0"
  /* 4377 */ "TSETMR_2r\0"
  /* 4387 */ "GETTS_2r\0"
  /* 4396 */ "CHKCT_2r\0"
  /* 4405 */ "INCT_2r\0"
  /* 4413 */ "TESTCT_2r\0"
  /* 4423 */ "OUTCT_2r\0"
  /* 4432 */ "TESTWCT_2r\0"
  /* 4443 */ "EET_2r\0"
  /* 4450 */ "INT_2r\0"
  /* 4457 */ "ANDNOT_2r\0"
  /* 4467 */ "SETPT_2r\0"
  /* 4476 */ "GETST_2r\0"
  /* 4485 */ "OUTT_2r\0"
  /* 4493 */ "OUT_2r\0"
  /* 4500 */ "SEXT_2r\0"
  /* 4508 */ "ZEXT_2r\0"
  /* 4516 */ "SETC_l2r\0"
  /* 4525 */ "GETD_l2r\0"
  /* 4534 */ "SETCLK_l2r\0"
  /* 4545 */ "TESTLCL_l2r\0"
  /* 4557 */ "GETN_l2r\0"
  /* 4566 */ "SETN_l2r\0"
  /* 4575 */ "INITLR_l2r\0"
  /* 4586 */ "GETPS_l2r\0"
  /* 4596 */ "SETPS_l2r\0"
  /* 4606 */ "BYTEREV_l2r\0"
  /* 4618 */ "BITREV_l2r\0"
  /* 4629 */ "SETTW_l2r\0"
  /* 4639 */ "SETRDY_l2r\0"
  /* 4650 */ "CLZ_l2r\0"
  /* 4658 */ "SUB_3r\0"
  /* 4665 */ "ADD_3r\0"
  /* 4672 */ "AND_3r\0"
  /* 4679 */ "SHL_3r\0"
  /* 4686 */ "EQ_3r\0"
  /* 4692 */ "SHR_3r\0"
  /* 4699 */ "OR_3r\0"
  /* 4705 */ "TSETR_3r\0"
  /* 4714 */ "LD16S_3r\0"
  /* 4723 */ "LSS_3r\0"
  /* 4730 */ "LD8U_3r\0"
  /* 4738 */ "LSU_3r\0"
  /* 4745 */ "LDW_3r\0"
  /* 4752 */ "ST16_l3r\0"
  /* 4761 */ "ST8_l3r\0"
  /* 4769 */ "LDA16B_l3r\0"
  /* 4780 */ "LDAWB_l3r\0"
  /* 4790 */ "CRC_l3r\0"
  /* 4798 */ "LDA16F_l3r\0"
  /* 4809 */ "LDAWF_l3r\0"
  /* 4819 */ "MUL_l3r\0"
  /* 4827 */ "ASHR_l3r\0"
  /* 4836 */ "XOR_l3r\0"
  /* 4844 */ "REMS_l3r\0"
  /* 4853 */ "DIVS_l3r\0"
  /* 4862 */ "REMU_l3r\0"
  /* 4871 */ "DIVU_l3r\0"
  /* 4880 */ "STW_l3r\0"
  /* 4888 */ "CRC8_l4r\0"
  /* 4897 */ "MACCS_l4r\0"
  /* 4907 */ "MACCU_l4r\0"
  /* 4917 */ "LSUB_l5r\0"
  /* 4926 */ "LADD_l5r\0"
  /* 4935 */ "LDIVU_l5r\0"
  /* 4945 */ "LMUL_l6r\0"
  /* 4954 */ "SUB_2rus\0"
  /* 4963 */ "ADD_2rus\0"
  /* 4972 */ "SHL_2rus\0"
  /* 4981 */ "EQ_2rus\0"
  /* 4989 */ "SHR_2rus\0"
  /* 4998 */ "LDW_2rus\0"
  /* 5007 */ "STW_2rus\0"
  /* 5016 */ "LDAWB_l2rus\0"
  /* 5028 */ "LDAWF_l2rus\0"
  /* 5040 */ "ASHR_l2rus\0"
  /* 5051 */ "INPW_l2rus\0"
  /* 5062 */ "OUTPW_l2rus\0"
  /* 5074 */ "MKMSK_rus\0"
  /* 5084 */ "GETR_rus\0"
  /* 5093 */ "CHKCT_rus\0"
  /* 5103 */ "OUTCT_rus\0"
  /* 5113 */ "SEXT_rus\0"
  /* 5122 */ "ZEXT_rus\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned XCoreInstrNameIndices[] = {
    1765U, 2135U, 2868U, 2358U, 1824U, 1805U, 1833U, 1971U, 
    1604U, 1619U, 1570U, 1646U, 3204U, 1472U, 3762U, 1583U, 
    1761U, 1814U, 1327U, 4070U, 1399U, 3666U, 1176U, 1278U, 
    1315U, 2457U, 1959U, 3591U, 1261U, 2598U, 1709U, 3580U, 
    1422U, 2571U, 2558U, 2905U, 3435U, 3479U, 1891U, 1938U, 
    1911U, 1850U, 2894U, 3792U, 3822U, 2209U, 1089U, 790U, 
    2074U, 3857U, 3864U, 2101U, 2108U, 2115U, 2125U, 1154U, 
    3097U, 3060U, 1568U, 1763U, 3993U, 1482U, 1976U, 3403U, 
    3148U, 3703U, 3165U, 3012U, 870U, 3187U, 3602U, 3124U, 
    3735U, 1507U, 1235U, 844U, 1217U, 3621U, 2187U, 2930U, 
    990U, 934U, 964U, 975U, 915U, 945U, 1451U, 1435U, 
    3234U, 1660U, 1677U, 1105U, 796U, 1160U, 1121U, 3102U, 
    3066U, 3977U, 2335U, 3960U, 2318U, 1056U, 773U, 3895U, 
    2253U, 2488U, 2466U, 1307U, 1189U, 3422U, 3681U, 822U, 
    3264U, 3806U, 862U, 3569U, 3557U, 3656U, 1701U, 3785U, 
    1633U, 3815U, 1877U, 2996U, 2982U, 1870U, 2989U, 3117U, 
    1992U, 2543U, 2536U, 3413U, 2425U, 1348U, 2409U, 1299U, 
    2417U, 1340U, 2401U, 1291U, 2441U, 2433U, 1734U, 1726U, 
    3321U, 3311U, 3301U, 3291U, 3341U, 3331U, 4021U, 4031U, 
    3351U, 3364U, 4041U, 4051U, 3377U, 3390U, 1014U, 752U, 
    2016U, 733U, 908U, 3836U, 2080U, 3871U, 1787U, 2617U, 
    147U, 1694U, 139U, 0U, 1597U, 3777U, 834U, 1769U, 
    1778U, 2518U, 2527U, 3135U, 2224U, 3221U, 1516U, 2167U, 
    2177U, 1356U, 1371U, 2145U, 2156U, 1095U, 1795U, 2287U, 
    3929U, 2311U, 3953U, 3142U, 1208U, 1198U, 2863U, 3503U, 
    3537U, 3516U, 3027U, 4082U, 1550U, 4075U, 1532U, 2550U, 
    2510U, 1459U, 1883U, 3180U, 2351U, 3712U, 3003U, 3613U, 
    3639U, 3745U, 2881U, 1386U, 891U, 1042U, 759U, 2044U, 
    3843U, 2087U, 739U, 3720U, 2949U, 2965U, 4061U, 1406U, 
    1497U, 3470U, 2449U, 1021U, 2023U, 997U, 1999U, 3878U, 
    2236U, 1073U, 2058U, 1138U, 3082U, 3044U, 3912U, 2270U, 
    3936U, 2294U, 4007U, 4014U, 2384U, 2583U, 3510U, 131U, 
    2374U, 3449U, 1742U, 1749U, 812U, 1755U, 4963U, 4665U, 
    4457U, 4672U, 5040U, 4827U, 4222U, 4618U, 109U, 47U, 
    409U, 249U, 4112U, 78U, 19U, 99U, 38U, 614U, 
    487U, 713U, 577U, 418U, 257U, 624U, 496U, 723U, 
    586U, 427U, 265U, 4243U, 4606U, 4396U, 5093U, 2678U, 
    2844U, 436U, 273U, 379U, 222U, 4650U, 4888U, 4790U, 
    2686U, 2725U, 4138U, 4853U, 4871U, 2735U, 2781U, 4128U, 
    4212U, 4229U, 4295U, 4443U, 4236U, 4319U, 347U, 193U, 
    4981U, 4686U, 326U, 174U, 369U, 213U, 4203U, 2772U, 
    4525U, 2660U, 2797U, 2669U, 2695U, 2715U, 4557U, 4586U, 
    5084U, 389U, 231U, 4476U, 4387U, 4405U, 4328U, 4338U, 
    4575U, 4267U, 4348U, 5051U, 4358U, 4450U, 4322U, 4149U, 
    305U, 155U, 346U, 192U, 357U, 202U, 2789U, 4926U, 
    4714U, 4730U, 4769U, 4798U, 67U, 9U, 88U, 4089U, 
    28U, 5016U, 4780U, 315U, 164U, 645U, 515U, 5028U, 
    4809U, 679U, 546U, 595U, 470U, 2764U, 4935U, 2642U, 
    2624U, 2746U, 634U, 120U, 505U, 57U, 657U, 526U, 
    691U, 557U, 4998U, 4745U, 4945U, 4723U, 4917U, 4738U, 
    4897U, 4907U, 4158U, 4310U, 5074U, 4119U, 4819U, 1600U, 
    3652U, 4699U, 4423U, 5103U, 5062U, 4367U, 4485U, 4493U, 
    4302U, 4844U, 4862U, 336U, 183U, 4534U, 4167U, 4516U, 
    604U, 478U, 4176U, 4287U, 4250U, 2705U, 4566U, 4277U, 
    4596U, 4467U, 4639U, 4185U, 453U, 289U, 399U, 240U, 
    4629U, 4259U, 4500U, 5113U, 4972U, 4679U, 4989U, 4692U, 
    4103U, 4752U, 4761U, 2806U, 2651U, 2633U, 2755U, 668U, 
    536U, 702U, 567U, 5007U, 4880U, 4954U, 4658U, 4194U, 
    4413U, 4545U, 4432U, 4377U, 4705U, 2853U, 2824U, 2834U, 
    2814U, 4836U, 4508U, 5122U, 
};

static inline void InitXCoreMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, nullptr, nullptr, 476);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct XCoreGenInstrInfo : public TargetInstrInfo {
  explicit XCoreGenInstrInfo(unsigned CFSetupOpcode = ~0u, unsigned CFDestroyOpcode = ~0u, unsigned CatchRetOpcode = ~0u, unsigned ReturnOpcode = ~0u);
  ~XCoreGenInstrInfo() override = default;

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
extern const MCInstrDesc XCoreInsts[];
extern const unsigned XCoreInstrNameIndices[];
extern const char XCoreInstrNameData[];
XCoreGenInstrInfo::XCoreGenInstrInfo(unsigned CFSetupOpcode, unsigned CFDestroyOpcode, unsigned CatchRetOpcode, unsigned ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, nullptr, nullptr, 476);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace XCore {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace XCore
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace XCore {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace XCore
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace XCore {
namespace OpTypes {
enum OperandType {
  InlineJT = 0,
  InlineJT32 = 1,
  MEMii = 2,
  brtarget = 3,
  brtarget_neg = 4,
  f32imm = 5,
  f64imm = 6,
  i16imm = 7,
  i1imm = 8,
  i32imm = 9,
  i64imm = 10,
  i8imm = 11,
  pcrel_imm = 12,
  pcrel_imm_neg = 13,
  ptype0 = 14,
  ptype1 = 15,
  ptype2 = 16,
  ptype3 = 17,
  ptype4 = 18,
  ptype5 = 19,
  type0 = 20,
  type1 = 21,
  type2 = 22,
  type3 = 23,
  type4 = 24,
  type5 = 25,
  untyped_imm_0 = 26,
  GRRegs = 27,
  RRegs = 28,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace XCore {
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
    /* BR_JT */
    639,
    /* BR_JT32 */
    641,
    /* EH_RETURN */
    643,
    /* FRAME_TO_ARGS_OFFSET */
    645,
    /* LDAWFI */
    646,
    /* LDWFI */
    649,
    /* SELECT_CC */
    652,
    /* STWFI */
    656,
    /* ADD_2rus */
    659,
    /* ADD_3r */
    662,
    /* ANDNOT_2r */
    665,
    /* AND_3r */
    668,
    /* ASHR_l2rus */
    671,
    /* ASHR_l3r */
    674,
    /* BAU_1r */
    677,
    /* BITREV_l2r */
    678,
    /* BLACP_lu10 */
    680,
    /* BLACP_u10 */
    681,
    /* BLAT_lu6 */
    682,
    /* BLAT_u6 */
    683,
    /* BLA_1r */
    684,
    /* BLRB_lu10 */
    685,
    /* BLRB_u10 */
    686,
    /* BLRF_lu10 */
    687,
    /* BLRF_u10 */
    688,
    /* BRBF_lru6 */
    689,
    /* BRBF_ru6 */
    691,
    /* BRBT_lru6 */
    693,
    /* BRBT_ru6 */
    695,
    /* BRBU_lu6 */
    697,
    /* BRBU_u6 */
    698,
    /* BRFF_lru6 */
    699,
    /* BRFF_ru6 */
    701,
    /* BRFT_lru6 */
    703,
    /* BRFT_ru6 */
    705,
    /* BRFU_lu6 */
    707,
    /* BRFU_u6 */
    708,
    /* BRU_1r */
    709,
    /* BYTEREV_l2r */
    710,
    /* CHKCT_2r */
    712,
    /* CHKCT_rus */
    714,
    /* CLRE_0R */
    716,
    /* CLRPT_1R */
    716,
    /* CLRSR_branch_lu6 */
    717,
    /* CLRSR_branch_u6 */
    718,
    /* CLRSR_lu6 */
    719,
    /* CLRSR_u6 */
    720,
    /* CLZ_l2r */
    721,
    /* CRC8_l4r */
    723,
    /* CRC_l3r */
    728,
    /* DCALL_0R */
    732,
    /* DENTSP_0R */
    732,
    /* DGETREG_1r */
    732,
    /* DIVS_l3r */
    733,
    /* DIVU_l3r */
    736,
    /* DRESTSP_0R */
    739,
    /* DRET_0R */
    739,
    /* ECALLF_1r */
    739,
    /* ECALLT_1r */
    740,
    /* EDU_1r */
    741,
    /* EEF_2r */
    742,
    /* EET_2r */
    744,
    /* EEU_1r */
    746,
    /* ENDIN_2r */
    747,
    /* ENTSP_lu6 */
    749,
    /* ENTSP_u6 */
    750,
    /* EQ_2rus */
    751,
    /* EQ_3r */
    754,
    /* EXTDP_lu6 */
    757,
    /* EXTDP_u6 */
    758,
    /* EXTSP_lu6 */
    759,
    /* EXTSP_u6 */
    760,
    /* FREER_1r */
    761,
    /* FREET_0R */
    762,
    /* GETD_l2r */
    762,
    /* GETED_0R */
    764,
    /* GETET_0R */
    764,
    /* GETID_0R */
    764,
    /* GETKEP_0R */
    764,
    /* GETKSP_0R */
    764,
    /* GETN_l2r */
    764,
    /* GETPS_l2r */
    766,
    /* GETR_rus */
    768,
    /* GETSR_lu6 */
    770,
    /* GETSR_u6 */
    771,
    /* GETST_2r */
    772,
    /* GETTS_2r */
    774,
    /* INCT_2r */
    776,
    /* INITCP_2r */
    778,
    /* INITDP_2r */
    780,
    /* INITLR_l2r */
    782,
    /* INITPC_2r */
    784,
    /* INITSP_2r */
    786,
    /* INPW_l2rus */
    788,
    /* INSHR_2r */
    791,
    /* INT_2r */
    794,
    /* IN_2r */
    796,
    /* KCALL_1r */
    798,
    /* KCALL_lu6 */
    799,
    /* KCALL_u6 */
    800,
    /* KENTSP_lu6 */
    801,
    /* KENTSP_u6 */
    802,
    /* KRESTSP_lu6 */
    803,
    /* KRESTSP_u6 */
    804,
    /* KRET_0R */
    805,
    /* LADD_l5r */
    805,
    /* LD16S_3r */
    810,
    /* LD8U_3r */
    813,
    /* LDA16B_l3r */
    816,
    /* LDA16F_l3r */
    819,
    /* LDAPB_lu10 */
    822,
    /* LDAPB_u10 */
    823,
    /* LDAPF_lu10 */
    824,
    /* LDAPF_lu10_ba */
    825,
    /* LDAPF_u10 */
    826,
    /* LDAWB_l2rus */
    827,
    /* LDAWB_l3r */
    830,
    /* LDAWCP_lu6 */
    833,
    /* LDAWCP_u6 */
    834,
    /* LDAWDP_lru6 */
    835,
    /* LDAWDP_ru6 */
    837,
    /* LDAWF_l2rus */
    839,
    /* LDAWF_l3r */
    842,
    /* LDAWSP_lru6 */
    845,
    /* LDAWSP_ru6 */
    847,
    /* LDC_lru6 */
    849,
    /* LDC_ru6 */
    851,
    /* LDET_0R */
    853,
    /* LDIVU_l5r */
    853,
    /* LDSED_0R */
    858,
    /* LDSPC_0R */
    858,
    /* LDSSR_0R */
    858,
    /* LDWCP_lru6 */
    858,
    /* LDWCP_lu10 */
    860,
    /* LDWCP_ru6 */
    861,
    /* LDWCP_u10 */
    863,
    /* LDWDP_lru6 */
    864,
    /* LDWDP_ru6 */
    866,
    /* LDWSP_lru6 */
    868,
    /* LDWSP_ru6 */
    870,
    /* LDW_2rus */
    872,
    /* LDW_3r */
    875,
    /* LMUL_l6r */
    878,
    /* LSS_3r */
    884,
    /* LSUB_l5r */
    887,
    /* LSU_3r */
    892,
    /* MACCS_l4r */
    895,
    /* MACCU_l4r */
    901,
    /* MJOIN_1r */
    907,
    /* MKMSK_2r */
    908,
    /* MKMSK_rus */
    910,
    /* MSYNC_1r */
    912,
    /* MUL_l3r */
    913,
    /* NEG */
    916,
    /* NOT */
    918,
    /* OR_3r */
    920,
    /* OUTCT_2r */
    923,
    /* OUTCT_rus */
    925,
    /* OUTPW_l2rus */
    927,
    /* OUTSHR_2r */
    930,
    /* OUTT_2r */
    933,
    /* OUT_2r */
    935,
    /* PEEK_2r */
    937,
    /* REMS_l3r */
    939,
    /* REMU_l3r */
    942,
    /* RETSP_lu6 */
    945,
    /* RETSP_u6 */
    946,
    /* SETCLK_l2r */
    947,
    /* SETCP_1r */
    949,
    /* SETC_l2r */
    950,
    /* SETC_lru6 */
    952,
    /* SETC_ru6 */
    954,
    /* SETDP_1r */
    956,
    /* SETD_2r */
    957,
    /* SETEV_1r */
    959,
    /* SETKEP_0R */
    960,
    /* SETN_l2r */
    960,
    /* SETPSC_2r */
    962,
    /* SETPS_l2r */
    964,
    /* SETPT_2r */
    966,
    /* SETRDY_l2r */
    968,
    /* SETSP_1r */
    970,
    /* SETSR_branch_lu6 */
    971,
    /* SETSR_branch_u6 */
    972,
    /* SETSR_lu6 */
    973,
    /* SETSR_u6 */
    974,
    /* SETTW_l2r */
    975,
    /* SETV_1r */
    977,
    /* SEXT_2r */
    978,
    /* SEXT_rus */
    981,
    /* SHL_2rus */
    984,
    /* SHL_3r */
    987,
    /* SHR_2rus */
    990,
    /* SHR_3r */
    993,
    /* SSYNC_0r */
    996,
    /* ST16_l3r */
    996,
    /* ST8_l3r */
    999,
    /* STET_0R */
    1002,
    /* STSED_0R */
    1002,
    /* STSPC_0R */
    1002,
    /* STSSR_0R */
    1002,
    /* STWDP_lru6 */
    1002,
    /* STWDP_ru6 */
    1004,
    /* STWSP_lru6 */
    1006,
    /* STWSP_ru6 */
    1008,
    /* STW_2rus */
    1010,
    /* STW_l3r */
    1013,
    /* SUB_2rus */
    1016,
    /* SUB_3r */
    1019,
    /* SYNCR_1r */
    1022,
    /* TESTCT_2r */
    1023,
    /* TESTLCL_l2r */
    1025,
    /* TESTWCT_2r */
    1027,
    /* TSETMR_2r */
    1029,
    /* TSETR_3r */
    1031,
    /* TSTART_1R */
    1034,
    /* WAITEF_1R */
    1035,
    /* WAITET_1R */
    1036,
    /* WAITEU_0R */
    1037,
    /* XOR_l3r */
    1037,
    /* ZEXT_2r */
    1040,
    /* ZEXT_rus */
    1043,
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
    /* BR_JT */
    InlineJT, GRRegs, 
    /* BR_JT32 */
    InlineJT32, GRRegs, 
    /* EH_RETURN */
    GRRegs, GRRegs, 
    /* FRAME_TO_ARGS_OFFSET */
    GRRegs, 
    /* LDAWFI */
    GRRegs, i32imm, i32imm, 
    /* LDWFI */
    GRRegs, i32imm, i32imm, 
    /* SELECT_CC */
    GRRegs, GRRegs, GRRegs, GRRegs, 
    /* STWFI */
    GRRegs, i32imm, i32imm, 
    /* ADD_2rus */
    GRRegs, GRRegs, i32imm, 
    /* ADD_3r */
    GRRegs, GRRegs, GRRegs, 
    /* ANDNOT_2r */
    GRRegs, GRRegs, GRRegs, 
    /* AND_3r */
    GRRegs, GRRegs, GRRegs, 
    /* ASHR_l2rus */
    GRRegs, GRRegs, i32imm, 
    /* ASHR_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* BAU_1r */
    GRRegs, 
    /* BITREV_l2r */
    GRRegs, GRRegs, 
    /* BLACP_lu10 */
    i32imm, 
    /* BLACP_u10 */
    i32imm, 
    /* BLAT_lu6 */
    i32imm, 
    /* BLAT_u6 */
    i32imm, 
    /* BLA_1r */
    GRRegs, 
    /* BLRB_lu10 */
    pcrel_imm_neg, 
    /* BLRB_u10 */
    pcrel_imm_neg, 
    /* BLRF_lu10 */
    pcrel_imm, 
    /* BLRF_u10 */
    pcrel_imm, 
    /* BRBF_lru6 */
    GRRegs, brtarget_neg, 
    /* BRBF_ru6 */
    GRRegs, brtarget_neg, 
    /* BRBT_lru6 */
    GRRegs, brtarget_neg, 
    /* BRBT_ru6 */
    GRRegs, brtarget_neg, 
    /* BRBU_lu6 */
    brtarget_neg, 
    /* BRBU_u6 */
    brtarget_neg, 
    /* BRFF_lru6 */
    GRRegs, brtarget, 
    /* BRFF_ru6 */
    GRRegs, brtarget, 
    /* BRFT_lru6 */
    GRRegs, brtarget, 
    /* BRFT_ru6 */
    GRRegs, brtarget, 
    /* BRFU_lu6 */
    brtarget, 
    /* BRFU_u6 */
    brtarget, 
    /* BRU_1r */
    GRRegs, 
    /* BYTEREV_l2r */
    GRRegs, GRRegs, 
    /* CHKCT_2r */
    GRRegs, GRRegs, 
    /* CHKCT_rus */
    GRRegs, i32imm, 
    /* CLRE_0R */
    /* CLRPT_1R */
    GRRegs, 
    /* CLRSR_branch_lu6 */
    i32imm, 
    /* CLRSR_branch_u6 */
    i32imm, 
    /* CLRSR_lu6 */
    i32imm, 
    /* CLRSR_u6 */
    i32imm, 
    /* CLZ_l2r */
    GRRegs, GRRegs, 
    /* CRC8_l4r */
    GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, 
    /* CRC_l3r */
    GRRegs, GRRegs, GRRegs, GRRegs, 
    /* DCALL_0R */
    /* DENTSP_0R */
    /* DGETREG_1r */
    GRRegs, 
    /* DIVS_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* DIVU_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* DRESTSP_0R */
    /* DRET_0R */
    /* ECALLF_1r */
    GRRegs, 
    /* ECALLT_1r */
    GRRegs, 
    /* EDU_1r */
    GRRegs, 
    /* EEF_2r */
    GRRegs, GRRegs, 
    /* EET_2r */
    GRRegs, GRRegs, 
    /* EEU_1r */
    GRRegs, 
    /* ENDIN_2r */
    GRRegs, GRRegs, 
    /* ENTSP_lu6 */
    i32imm, 
    /* ENTSP_u6 */
    i32imm, 
    /* EQ_2rus */
    GRRegs, GRRegs, i32imm, 
    /* EQ_3r */
    GRRegs, GRRegs, GRRegs, 
    /* EXTDP_lu6 */
    i32imm, 
    /* EXTDP_u6 */
    i32imm, 
    /* EXTSP_lu6 */
    i32imm, 
    /* EXTSP_u6 */
    i32imm, 
    /* FREER_1r */
    GRRegs, 
    /* FREET_0R */
    /* GETD_l2r */
    GRRegs, GRRegs, 
    /* GETED_0R */
    /* GETET_0R */
    /* GETID_0R */
    /* GETKEP_0R */
    /* GETKSP_0R */
    /* GETN_l2r */
    GRRegs, GRRegs, 
    /* GETPS_l2r */
    GRRegs, GRRegs, 
    /* GETR_rus */
    GRRegs, i32imm, 
    /* GETSR_lu6 */
    i32imm, 
    /* GETSR_u6 */
    i32imm, 
    /* GETST_2r */
    GRRegs, GRRegs, 
    /* GETTS_2r */
    GRRegs, GRRegs, 
    /* INCT_2r */
    GRRegs, GRRegs, 
    /* INITCP_2r */
    GRRegs, GRRegs, 
    /* INITDP_2r */
    GRRegs, GRRegs, 
    /* INITLR_l2r */
    GRRegs, GRRegs, 
    /* INITPC_2r */
    GRRegs, GRRegs, 
    /* INITSP_2r */
    GRRegs, GRRegs, 
    /* INPW_l2rus */
    GRRegs, GRRegs, i32imm, 
    /* INSHR_2r */
    GRRegs, GRRegs, GRRegs, 
    /* INT_2r */
    GRRegs, GRRegs, 
    /* IN_2r */
    GRRegs, GRRegs, 
    /* KCALL_1r */
    GRRegs, 
    /* KCALL_lu6 */
    i32imm, 
    /* KCALL_u6 */
    i32imm, 
    /* KENTSP_lu6 */
    i32imm, 
    /* KENTSP_u6 */
    i32imm, 
    /* KRESTSP_lu6 */
    i32imm, 
    /* KRESTSP_u6 */
    i32imm, 
    /* KRET_0R */
    /* LADD_l5r */
    GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, 
    /* LD16S_3r */
    GRRegs, GRRegs, GRRegs, 
    /* LD8U_3r */
    GRRegs, GRRegs, GRRegs, 
    /* LDA16B_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* LDA16F_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* LDAPB_lu10 */
    pcrel_imm_neg, 
    /* LDAPB_u10 */
    pcrel_imm_neg, 
    /* LDAPF_lu10 */
    pcrel_imm, 
    /* LDAPF_lu10_ba */
    pcrel_imm, 
    /* LDAPF_u10 */
    pcrel_imm, 
    /* LDAWB_l2rus */
    GRRegs, GRRegs, i32imm, 
    /* LDAWB_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* LDAWCP_lu6 */
    i32imm, 
    /* LDAWCP_u6 */
    i32imm, 
    /* LDAWDP_lru6 */
    RRegs, i32imm, 
    /* LDAWDP_ru6 */
    RRegs, i32imm, 
    /* LDAWF_l2rus */
    GRRegs, GRRegs, i32imm, 
    /* LDAWF_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* LDAWSP_lru6 */
    RRegs, i32imm, 
    /* LDAWSP_ru6 */
    RRegs, i32imm, 
    /* LDC_lru6 */
    RRegs, i32imm, 
    /* LDC_ru6 */
    RRegs, i32imm, 
    /* LDET_0R */
    /* LDIVU_l5r */
    GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, 
    /* LDSED_0R */
    /* LDSPC_0R */
    /* LDSSR_0R */
    /* LDWCP_lru6 */
    RRegs, i32imm, 
    /* LDWCP_lu10 */
    i32imm, 
    /* LDWCP_ru6 */
    RRegs, i32imm, 
    /* LDWCP_u10 */
    i32imm, 
    /* LDWDP_lru6 */
    RRegs, i32imm, 
    /* LDWDP_ru6 */
    RRegs, i32imm, 
    /* LDWSP_lru6 */
    RRegs, i32imm, 
    /* LDWSP_ru6 */
    RRegs, i32imm, 
    /* LDW_2rus */
    GRRegs, GRRegs, i32imm, 
    /* LDW_3r */
    GRRegs, GRRegs, GRRegs, 
    /* LMUL_l6r */
    GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, 
    /* LSS_3r */
    GRRegs, GRRegs, GRRegs, 
    /* LSUB_l5r */
    GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, 
    /* LSU_3r */
    GRRegs, GRRegs, GRRegs, 
    /* MACCS_l4r */
    GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, 
    /* MACCU_l4r */
    GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, GRRegs, 
    /* MJOIN_1r */
    GRRegs, 
    /* MKMSK_2r */
    GRRegs, GRRegs, 
    /* MKMSK_rus */
    GRRegs, i32imm, 
    /* MSYNC_1r */
    GRRegs, 
    /* MUL_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* NEG */
    GRRegs, GRRegs, 
    /* NOT */
    GRRegs, GRRegs, 
    /* OR_3r */
    GRRegs, GRRegs, GRRegs, 
    /* OUTCT_2r */
    GRRegs, GRRegs, 
    /* OUTCT_rus */
    GRRegs, i32imm, 
    /* OUTPW_l2rus */
    GRRegs, GRRegs, i32imm, 
    /* OUTSHR_2r */
    GRRegs, GRRegs, GRRegs, 
    /* OUTT_2r */
    GRRegs, GRRegs, 
    /* OUT_2r */
    GRRegs, GRRegs, 
    /* PEEK_2r */
    GRRegs, GRRegs, 
    /* REMS_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* REMU_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* RETSP_lu6 */
    i32imm, 
    /* RETSP_u6 */
    i32imm, 
    /* SETCLK_l2r */
    GRRegs, GRRegs, 
    /* SETCP_1r */
    GRRegs, 
    /* SETC_l2r */
    GRRegs, GRRegs, 
    /* SETC_lru6 */
    GRRegs, i32imm, 
    /* SETC_ru6 */
    GRRegs, i32imm, 
    /* SETDP_1r */
    GRRegs, 
    /* SETD_2r */
    GRRegs, GRRegs, 
    /* SETEV_1r */
    GRRegs, 
    /* SETKEP_0R */
    /* SETN_l2r */
    GRRegs, GRRegs, 
    /* SETPSC_2r */
    GRRegs, GRRegs, 
    /* SETPS_l2r */
    GRRegs, GRRegs, 
    /* SETPT_2r */
    GRRegs, GRRegs, 
    /* SETRDY_l2r */
    GRRegs, GRRegs, 
    /* SETSP_1r */
    GRRegs, 
    /* SETSR_branch_lu6 */
    i32imm, 
    /* SETSR_branch_u6 */
    i32imm, 
    /* SETSR_lu6 */
    i32imm, 
    /* SETSR_u6 */
    i32imm, 
    /* SETTW_l2r */
    GRRegs, GRRegs, 
    /* SETV_1r */
    GRRegs, 
    /* SEXT_2r */
    GRRegs, GRRegs, GRRegs, 
    /* SEXT_rus */
    GRRegs, GRRegs, i32imm, 
    /* SHL_2rus */
    GRRegs, GRRegs, i32imm, 
    /* SHL_3r */
    GRRegs, GRRegs, GRRegs, 
    /* SHR_2rus */
    GRRegs, GRRegs, i32imm, 
    /* SHR_3r */
    GRRegs, GRRegs, GRRegs, 
    /* SSYNC_0r */
    /* ST16_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* ST8_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* STET_0R */
    /* STSED_0R */
    /* STSPC_0R */
    /* STSSR_0R */
    /* STWDP_lru6 */
    RRegs, i32imm, 
    /* STWDP_ru6 */
    RRegs, i32imm, 
    /* STWSP_lru6 */
    RRegs, i32imm, 
    /* STWSP_ru6 */
    RRegs, i32imm, 
    /* STW_2rus */
    GRRegs, GRRegs, i32imm, 
    /* STW_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* SUB_2rus */
    GRRegs, GRRegs, i32imm, 
    /* SUB_3r */
    GRRegs, GRRegs, GRRegs, 
    /* SYNCR_1r */
    GRRegs, 
    /* TESTCT_2r */
    GRRegs, GRRegs, 
    /* TESTLCL_l2r */
    GRRegs, GRRegs, 
    /* TESTWCT_2r */
    GRRegs, GRRegs, 
    /* TSETMR_2r */
    i32imm, GRRegs, 
    /* TSETR_3r */
    i32imm, GRRegs, GRRegs, 
    /* TSTART_1R */
    GRRegs, 
    /* WAITEF_1R */
    GRRegs, 
    /* WAITET_1R */
    GRRegs, 
    /* WAITEU_0R */
    /* XOR_l3r */
    GRRegs, GRRegs, GRRegs, 
    /* ZEXT_2r */
    GRRegs, GRRegs, GRRegs, 
    /* ZEXT_rus */
    GRRegs, GRRegs, i32imm, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace XCore {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace XCore {
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
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace XCore {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace XCore_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace XCore_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace XCore_MC {

} // end namespace XCore_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace XCore_MC {

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
    CEFBS_None, // ADJCALLSTACKDOWN = 252
    CEFBS_None, // ADJCALLSTACKUP = 253
    CEFBS_None, // BR_JT = 254
    CEFBS_None, // BR_JT32 = 255
    CEFBS_None, // EH_RETURN = 256
    CEFBS_None, // FRAME_TO_ARGS_OFFSET = 257
    CEFBS_None, // LDAWFI = 258
    CEFBS_None, // LDWFI = 259
    CEFBS_None, // SELECT_CC = 260
    CEFBS_None, // STWFI = 261
    CEFBS_None, // ADD_2rus = 262
    CEFBS_None, // ADD_3r = 263
    CEFBS_None, // ANDNOT_2r = 264
    CEFBS_None, // AND_3r = 265
    CEFBS_None, // ASHR_l2rus = 266
    CEFBS_None, // ASHR_l3r = 267
    CEFBS_None, // BAU_1r = 268
    CEFBS_None, // BITREV_l2r = 269
    CEFBS_None, // BLACP_lu10 = 270
    CEFBS_None, // BLACP_u10 = 271
    CEFBS_None, // BLAT_lu6 = 272
    CEFBS_None, // BLAT_u6 = 273
    CEFBS_None, // BLA_1r = 274
    CEFBS_None, // BLRB_lu10 = 275
    CEFBS_None, // BLRB_u10 = 276
    CEFBS_None, // BLRF_lu10 = 277
    CEFBS_None, // BLRF_u10 = 278
    CEFBS_None, // BRBF_lru6 = 279
    CEFBS_None, // BRBF_ru6 = 280
    CEFBS_None, // BRBT_lru6 = 281
    CEFBS_None, // BRBT_ru6 = 282
    CEFBS_None, // BRBU_lu6 = 283
    CEFBS_None, // BRBU_u6 = 284
    CEFBS_None, // BRFF_lru6 = 285
    CEFBS_None, // BRFF_ru6 = 286
    CEFBS_None, // BRFT_lru6 = 287
    CEFBS_None, // BRFT_ru6 = 288
    CEFBS_None, // BRFU_lu6 = 289
    CEFBS_None, // BRFU_u6 = 290
    CEFBS_None, // BRU_1r = 291
    CEFBS_None, // BYTEREV_l2r = 292
    CEFBS_None, // CHKCT_2r = 293
    CEFBS_None, // CHKCT_rus = 294
    CEFBS_None, // CLRE_0R = 295
    CEFBS_None, // CLRPT_1R = 296
    CEFBS_None, // CLRSR_branch_lu6 = 297
    CEFBS_None, // CLRSR_branch_u6 = 298
    CEFBS_None, // CLRSR_lu6 = 299
    CEFBS_None, // CLRSR_u6 = 300
    CEFBS_None, // CLZ_l2r = 301
    CEFBS_None, // CRC8_l4r = 302
    CEFBS_None, // CRC_l3r = 303
    CEFBS_None, // DCALL_0R = 304
    CEFBS_None, // DENTSP_0R = 305
    CEFBS_None, // DGETREG_1r = 306
    CEFBS_None, // DIVS_l3r = 307
    CEFBS_None, // DIVU_l3r = 308
    CEFBS_None, // DRESTSP_0R = 309
    CEFBS_None, // DRET_0R = 310
    CEFBS_None, // ECALLF_1r = 311
    CEFBS_None, // ECALLT_1r = 312
    CEFBS_None, // EDU_1r = 313
    CEFBS_None, // EEF_2r = 314
    CEFBS_None, // EET_2r = 315
    CEFBS_None, // EEU_1r = 316
    CEFBS_None, // ENDIN_2r = 317
    CEFBS_None, // ENTSP_lu6 = 318
    CEFBS_None, // ENTSP_u6 = 319
    CEFBS_None, // EQ_2rus = 320
    CEFBS_None, // EQ_3r = 321
    CEFBS_None, // EXTDP_lu6 = 322
    CEFBS_None, // EXTDP_u6 = 323
    CEFBS_None, // EXTSP_lu6 = 324
    CEFBS_None, // EXTSP_u6 = 325
    CEFBS_None, // FREER_1r = 326
    CEFBS_None, // FREET_0R = 327
    CEFBS_None, // GETD_l2r = 328
    CEFBS_None, // GETED_0R = 329
    CEFBS_None, // GETET_0R = 330
    CEFBS_None, // GETID_0R = 331
    CEFBS_None, // GETKEP_0R = 332
    CEFBS_None, // GETKSP_0R = 333
    CEFBS_None, // GETN_l2r = 334
    CEFBS_None, // GETPS_l2r = 335
    CEFBS_None, // GETR_rus = 336
    CEFBS_None, // GETSR_lu6 = 337
    CEFBS_None, // GETSR_u6 = 338
    CEFBS_None, // GETST_2r = 339
    CEFBS_None, // GETTS_2r = 340
    CEFBS_None, // INCT_2r = 341
    CEFBS_None, // INITCP_2r = 342
    CEFBS_None, // INITDP_2r = 343
    CEFBS_None, // INITLR_l2r = 344
    CEFBS_None, // INITPC_2r = 345
    CEFBS_None, // INITSP_2r = 346
    CEFBS_None, // INPW_l2rus = 347
    CEFBS_None, // INSHR_2r = 348
    CEFBS_None, // INT_2r = 349
    CEFBS_None, // IN_2r = 350
    CEFBS_None, // KCALL_1r = 351
    CEFBS_None, // KCALL_lu6 = 352
    CEFBS_None, // KCALL_u6 = 353
    CEFBS_None, // KENTSP_lu6 = 354
    CEFBS_None, // KENTSP_u6 = 355
    CEFBS_None, // KRESTSP_lu6 = 356
    CEFBS_None, // KRESTSP_u6 = 357
    CEFBS_None, // KRET_0R = 358
    CEFBS_None, // LADD_l5r = 359
    CEFBS_None, // LD16S_3r = 360
    CEFBS_None, // LD8U_3r = 361
    CEFBS_None, // LDA16B_l3r = 362
    CEFBS_None, // LDA16F_l3r = 363
    CEFBS_None, // LDAPB_lu10 = 364
    CEFBS_None, // LDAPB_u10 = 365
    CEFBS_None, // LDAPF_lu10 = 366
    CEFBS_None, // LDAPF_lu10_ba = 367
    CEFBS_None, // LDAPF_u10 = 368
    CEFBS_None, // LDAWB_l2rus = 369
    CEFBS_None, // LDAWB_l3r = 370
    CEFBS_None, // LDAWCP_lu6 = 371
    CEFBS_None, // LDAWCP_u6 = 372
    CEFBS_None, // LDAWDP_lru6 = 373
    CEFBS_None, // LDAWDP_ru6 = 374
    CEFBS_None, // LDAWF_l2rus = 375
    CEFBS_None, // LDAWF_l3r = 376
    CEFBS_None, // LDAWSP_lru6 = 377
    CEFBS_None, // LDAWSP_ru6 = 378
    CEFBS_None, // LDC_lru6 = 379
    CEFBS_None, // LDC_ru6 = 380
    CEFBS_None, // LDET_0R = 381
    CEFBS_None, // LDIVU_l5r = 382
    CEFBS_None, // LDSED_0R = 383
    CEFBS_None, // LDSPC_0R = 384
    CEFBS_None, // LDSSR_0R = 385
    CEFBS_None, // LDWCP_lru6 = 386
    CEFBS_None, // LDWCP_lu10 = 387
    CEFBS_None, // LDWCP_ru6 = 388
    CEFBS_None, // LDWCP_u10 = 389
    CEFBS_None, // LDWDP_lru6 = 390
    CEFBS_None, // LDWDP_ru6 = 391
    CEFBS_None, // LDWSP_lru6 = 392
    CEFBS_None, // LDWSP_ru6 = 393
    CEFBS_None, // LDW_2rus = 394
    CEFBS_None, // LDW_3r = 395
    CEFBS_None, // LMUL_l6r = 396
    CEFBS_None, // LSS_3r = 397
    CEFBS_None, // LSUB_l5r = 398
    CEFBS_None, // LSU_3r = 399
    CEFBS_None, // MACCS_l4r = 400
    CEFBS_None, // MACCU_l4r = 401
    CEFBS_None, // MJOIN_1r = 402
    CEFBS_None, // MKMSK_2r = 403
    CEFBS_None, // MKMSK_rus = 404
    CEFBS_None, // MSYNC_1r = 405
    CEFBS_None, // MUL_l3r = 406
    CEFBS_None, // NEG = 407
    CEFBS_None, // NOT = 408
    CEFBS_None, // OR_3r = 409
    CEFBS_None, // OUTCT_2r = 410
    CEFBS_None, // OUTCT_rus = 411
    CEFBS_None, // OUTPW_l2rus = 412
    CEFBS_None, // OUTSHR_2r = 413
    CEFBS_None, // OUTT_2r = 414
    CEFBS_None, // OUT_2r = 415
    CEFBS_None, // PEEK_2r = 416
    CEFBS_None, // REMS_l3r = 417
    CEFBS_None, // REMU_l3r = 418
    CEFBS_None, // RETSP_lu6 = 419
    CEFBS_None, // RETSP_u6 = 420
    CEFBS_None, // SETCLK_l2r = 421
    CEFBS_None, // SETCP_1r = 422
    CEFBS_None, // SETC_l2r = 423
    CEFBS_None, // SETC_lru6 = 424
    CEFBS_None, // SETC_ru6 = 425
    CEFBS_None, // SETDP_1r = 426
    CEFBS_None, // SETD_2r = 427
    CEFBS_None, // SETEV_1r = 428
    CEFBS_None, // SETKEP_0R = 429
    CEFBS_None, // SETN_l2r = 430
    CEFBS_None, // SETPSC_2r = 431
    CEFBS_None, // SETPS_l2r = 432
    CEFBS_None, // SETPT_2r = 433
    CEFBS_None, // SETRDY_l2r = 434
    CEFBS_None, // SETSP_1r = 435
    CEFBS_None, // SETSR_branch_lu6 = 436
    CEFBS_None, // SETSR_branch_u6 = 437
    CEFBS_None, // SETSR_lu6 = 438
    CEFBS_None, // SETSR_u6 = 439
    CEFBS_None, // SETTW_l2r = 440
    CEFBS_None, // SETV_1r = 441
    CEFBS_None, // SEXT_2r = 442
    CEFBS_None, // SEXT_rus = 443
    CEFBS_None, // SHL_2rus = 444
    CEFBS_None, // SHL_3r = 445
    CEFBS_None, // SHR_2rus = 446
    CEFBS_None, // SHR_3r = 447
    CEFBS_None, // SSYNC_0r = 448
    CEFBS_None, // ST16_l3r = 449
    CEFBS_None, // ST8_l3r = 450
    CEFBS_None, // STET_0R = 451
    CEFBS_None, // STSED_0R = 452
    CEFBS_None, // STSPC_0R = 453
    CEFBS_None, // STSSR_0R = 454
    CEFBS_None, // STWDP_lru6 = 455
    CEFBS_None, // STWDP_ru6 = 456
    CEFBS_None, // STWSP_lru6 = 457
    CEFBS_None, // STWSP_ru6 = 458
    CEFBS_None, // STW_2rus = 459
    CEFBS_None, // STW_l3r = 460
    CEFBS_None, // SUB_2rus = 461
    CEFBS_None, // SUB_3r = 462
    CEFBS_None, // SYNCR_1r = 463
    CEFBS_None, // TESTCT_2r = 464
    CEFBS_None, // TESTLCL_l2r = 465
    CEFBS_None, // TESTWCT_2r = 466
    CEFBS_None, // TSETMR_2r = 467
    CEFBS_None, // TSETR_3r = 468
    CEFBS_None, // TSTART_1R = 469
    CEFBS_None, // WAITEF_1R = 470
    CEFBS_None, // WAITET_1R = 471
    CEFBS_None, // WAITEU_0R = 472
    CEFBS_None, // XOR_l3r = 473
    CEFBS_None, // ZEXT_2r = 474
    CEFBS_None, // ZEXT_rus = 475
  };

  assert(Opcode < 476);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &XCoreInstrNameData[XCoreInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace XCore_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

