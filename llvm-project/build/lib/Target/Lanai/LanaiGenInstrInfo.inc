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

namespace Lanai {
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
    ADJDYNALLOC	= 254,
    CALL	= 255,
    CALLR	= 256,
    ADDC_F_I_HI	= 257,
    ADDC_F_I_LO	= 258,
    ADDC_F_R	= 259,
    ADDC_I_HI	= 260,
    ADDC_I_LO	= 261,
    ADDC_R	= 262,
    ADD_F_I_HI	= 263,
    ADD_F_I_LO	= 264,
    ADD_F_R	= 265,
    ADD_I_HI	= 266,
    ADD_I_LO	= 267,
    ADD_R	= 268,
    AND_F_I_HI	= 269,
    AND_F_I_LO	= 270,
    AND_F_R	= 271,
    AND_I_HI	= 272,
    AND_I_LO	= 273,
    AND_R	= 274,
    BRCC	= 275,
    BRIND_CC	= 276,
    BRIND_CCA	= 277,
    BRR	= 278,
    BT	= 279,
    JR	= 280,
    LDADDR	= 281,
    LDBs_RI	= 282,
    LDBs_RR	= 283,
    LDBz_RI	= 284,
    LDBz_RR	= 285,
    LDHs_RI	= 286,
    LDHs_RR	= 287,
    LDHz_RI	= 288,
    LDHz_RR	= 289,
    LDW_RI	= 290,
    LDW_RR	= 291,
    LDWz_RR	= 292,
    LEADZ	= 293,
    LOG0	= 294,
    LOG1	= 295,
    LOG2	= 296,
    LOG3	= 297,
    LOG4	= 298,
    MOVHI	= 299,
    NOP	= 300,
    OR_F_I_HI	= 301,
    OR_F_I_LO	= 302,
    OR_F_R	= 303,
    OR_I_HI	= 304,
    OR_I_LO	= 305,
    OR_R	= 306,
    POPC	= 307,
    RET	= 308,
    SA_F_I	= 309,
    SA_I	= 310,
    SCC	= 311,
    SELECT	= 312,
    SFSUB_F_RI_HI	= 313,
    SFSUB_F_RI_LO	= 314,
    SFSUB_F_RR	= 315,
    SHL_F_R	= 316,
    SHL_R	= 317,
    SLI	= 318,
    SL_F_I	= 319,
    SL_I	= 320,
    SRA_F_R	= 321,
    SRA_R	= 322,
    SRL_F_R	= 323,
    SRL_R	= 324,
    STADDR	= 325,
    STB_RI	= 326,
    STB_RR	= 327,
    STH_RI	= 328,
    STH_RR	= 329,
    SUBB_F_I_HI	= 330,
    SUBB_F_I_LO	= 331,
    SUBB_F_R	= 332,
    SUBB_I_HI	= 333,
    SUBB_I_LO	= 334,
    SUBB_R	= 335,
    SUB_F_I_HI	= 336,
    SUB_F_I_LO	= 337,
    SUB_F_R	= 338,
    SUB_I_HI	= 339,
    SUB_I_LO	= 340,
    SUB_R	= 341,
    SW_RI	= 342,
    SW_RR	= 343,
    TRAILZ	= 344,
    XOR_F_I_HI	= 345,
    XOR_F_I_LO	= 346,
    XOR_F_R	= 347,
    XOR_I_HI	= 348,
    XOR_I_LO	= 349,
    XOR_R	= 350,
    INSTRUCTION_LIST_END = 351
  };

} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace Lanai {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_ALU_WriteALU	= 1,
    IIC_ALU	= 2,
    IIC_LD_WriteLD	= 3,
    IIC_LDSW_WriteLDSW	= 4,
    WriteLD	= 5,
    IIC_ST_WriteST	= 6,
    IIC_STSW_WriteSTSW	= 7,
    SCHED_LIST_END = 8
  };
} // end namespace Sched
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Lanai::SP, Lanai::SP };
static const MCPhysReg ImplicitList2[] = { Lanai::SP, Lanai::RCA };
static const MCPhysReg ImplicitList3[] = { Lanai::SR, Lanai::SR };
static const MCPhysReg ImplicitList4[] = { Lanai::SR };
static const MCPhysReg ImplicitList5[] = { Lanai::RCA };

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
static const MCOperandInfo OperandInfo45[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc LanaiInsts[] = {
  { 350,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #350 = XOR_R
  { 349,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #349 = XOR_I_LO
  { 348,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #348 = XOR_I_HI
  { 347,	4,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #347 = XOR_F_R
  { 346,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #346 = XOR_F_I_LO
  { 345,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #345 = XOR_F_I_HI
  { 344,	2,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo45 },  // Inst #344 = TRAILZ
  { 343,	4,	0,	4,	6,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #343 = SW_RR
  { 342,	4,	0,	4,	6,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #342 = SW_RI
  { 341,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #341 = SUB_R
  { 340,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #340 = SUB_I_LO
  { 339,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #339 = SUB_I_HI
  { 338,	4,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #338 = SUB_F_R
  { 337,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #337 = SUB_F_I_LO
  { 336,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #336 = SUB_F_I_HI
  { 335,	4,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #335 = SUBB_R
  { 334,	3,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #334 = SUBB_I_LO
  { 333,	3,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #333 = SUBB_I_HI
  { 332,	4,	1,	4,	1,	1,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo48 },  // Inst #332 = SUBB_F_R
  { 331,	3,	1,	4,	1,	1,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo47 },  // Inst #331 = SUBB_F_I_LO
  { 330,	3,	1,	4,	1,	1,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo47 },  // Inst #330 = SUBB_F_I_HI
  { 329,	4,	0,	4,	6,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #329 = STH_RR
  { 328,	4,	0,	4,	7,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #328 = STH_RI
  { 327,	4,	0,	4,	6,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #327 = STB_RR
  { 326,	4,	0,	4,	7,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #326 = STB_RI
  { 325,	2,	0,	4,	6,	0,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo49 },  // Inst #325 = STADDR
  { 324,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #324 = SRL_R
  { 323,	4,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #323 = SRL_F_R
  { 322,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #322 = SRA_R
  { 321,	4,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #321 = SRA_F_R
  { 320,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #320 = SL_I
  { 319,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #319 = SL_F_I
  { 318,	2,	1,	4,	0,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo49 },  // Inst #318 = SLI
  { 317,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #317 = SHL_R
  { 316,	4,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #316 = SHL_F_R
  { 315,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo45 },  // Inst #315 = SFSUB_F_RR
  { 314,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo49 },  // Inst #314 = SFSUB_F_RI_LO
  { 313,	2,	0,	4,	1,	0,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo49 },  // Inst #313 = SFSUB_F_RI_HI
  { 312,	4,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::Select)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo53 },  // Inst #312 = SELECT
  { 311,	2,	1,	4,	2,	1,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo49 },  // Inst #311 = SCC
  { 310,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #310 = SA_I
  { 309,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #309 = SA_F_I
  { 308,	0,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, nullptr },  // Inst #308 = RET
  { 307,	2,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo45 },  // Inst #307 = POPC
  { 306,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #306 = OR_R
  { 305,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #305 = OR_I_LO
  { 304,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #304 = OR_I_HI
  { 303,	4,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #303 = OR_F_R
  { 302,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #302 = OR_F_I_LO
  { 301,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #301 = OR_F_I_HI
  { 300,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #300 = NOP
  { 299,	2,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo49 },  // Inst #299 = MOVHI
  { 298,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #298 = LOG4
  { 297,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #297 = LOG3
  { 296,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #296 = LOG2
  { 295,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #295 = LOG1
  { 294,	0,	0,	4,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr },  // Inst #294 = LOG0
  { 293,	2,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo45 },  // Inst #293 = LEADZ
  { 292,	4,	1,	4,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #292 = LDWz_RR
  { 291,	4,	1,	4,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #291 = LDW_RR
  { 290,	4,	1,	4,	3,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #290 = LDW_RI
  { 289,	4,	1,	4,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #289 = LDHz_RR
  { 288,	4,	1,	4,	4,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #288 = LDHz_RI
  { 287,	4,	1,	4,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #287 = LDHs_RR
  { 286,	4,	1,	4,	4,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #286 = LDHs_RI
  { 285,	4,	1,	4,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #285 = LDBz_RR
  { 284,	4,	1,	4,	4,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #284 = LDBz_RI
  { 283,	4,	1,	4,	5,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo52 },  // Inst #283 = LDBs_RR
  { 282,	4,	1,	4,	4,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo51 },  // Inst #282 = LDBs_RI
  { 281,	2,	1,	4,	3,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo49 },  // Inst #281 = LDADDR
  { 280,	1,	0,	4,	1,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo46 },  // Inst #280 = JR
  { 279,	1,	0,	4,	2,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo2 },  // Inst #279 = BT
  { 278,	2,	0,	4,	0,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo50 },  // Inst #278 = BRR
  { 277,	3,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #277 = BRIND_CCA
  { 276,	2,	0,	4,	1,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo49 },  // Inst #276 = BRIND_CC
  { 275,	2,	0,	4,	2,	1,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo7 },  // Inst #275 = BRCC
  { 274,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #274 = AND_R
  { 273,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #273 = AND_I_LO
  { 272,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #272 = AND_I_HI
  { 271,	4,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #271 = AND_F_R
  { 270,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #270 = AND_F_I_LO
  { 269,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #269 = AND_F_I_HI
  { 268,	4,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo48 },  // Inst #268 = ADD_R
  { 267,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #267 = ADD_I_LO
  { 266,	3,	1,	4,	1,	0,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, OperandInfo47 },  // Inst #266 = ADD_I_HI
  { 265,	4,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #265 = ADD_F_R
  { 264,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #264 = ADD_F_I_LO
  { 263,	3,	1,	4,	1,	0,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #263 = ADD_F_I_HI
  { 262,	4,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo48 },  // Inst #262 = ADDC_R
  { 261,	3,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #261 = ADDC_I_LO
  { 260,	3,	1,	4,	1,	1,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList4, OperandInfo47 },  // Inst #260 = ADDC_I_HI
  { 259,	4,	1,	4,	1,	1,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo48 },  // Inst #259 = ADDC_F_R
  { 258,	3,	1,	4,	1,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo47 },  // Inst #258 = ADDC_F_I_LO
  { 257,	3,	1,	4,	1,	1,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, OperandInfo47 },  // Inst #257 = ADDC_F_I_HI
  { 256,	1,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo46 },  // Inst #256 = CALLR
  { 255,	1,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, OperandInfo2 },  // Inst #255 = CALL
  { 254,	2,	1,	4,	0,	1,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo45 },  // Inst #254 = ADJDYNALLOC
  { 253,	2,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo10 },  // Inst #253 = ADJCALLSTACKUP
  { 252,	2,	0,	4,	0,	1,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, OperandInfo10 },  // Inst #252 = ADJCALLSTACKDOWN
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
extern const char LanaiInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "LOG0\0"
  /* 14 */ "LOG1\0"
  /* 19 */ "G_FLOG2\0"
  /* 27 */ "G_FEXP2\0"
  /* 35 */ "LOG3\0"
  /* 40 */ "LOG4\0"
  /* 45 */ "BRIND_CCA\0"
  /* 55 */ "G_FMA\0"
  /* 61 */ "G_STRICT_FMA\0"
  /* 74 */ "G_FSUB\0"
  /* 81 */ "G_STRICT_FSUB\0"
  /* 95 */ "G_ATOMICRMW_FSUB\0"
  /* 112 */ "G_SUB\0"
  /* 118 */ "G_ATOMICRMW_SUB\0"
  /* 134 */ "BRCC\0"
  /* 139 */ "SCC\0"
  /* 143 */ "BRIND_CC\0"
  /* 152 */ "G_INTRINSIC\0"
  /* 164 */ "G_FPTRUNC\0"
  /* 174 */ "G_INTRINSIC_TRUNC\0"
  /* 192 */ "G_TRUNC\0"
  /* 200 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 221 */ "G_DYN_STACKALLOC\0"
  /* 238 */ "ADJDYNALLOC\0"
  /* 250 */ "POPC\0"
  /* 255 */ "G_FMAD\0"
  /* 262 */ "G_INDEXED_SEXTLOAD\0"
  /* 281 */ "G_SEXTLOAD\0"
  /* 292 */ "G_INDEXED_ZEXTLOAD\0"
  /* 311 */ "G_ZEXTLOAD\0"
  /* 322 */ "G_INDEXED_LOAD\0"
  /* 337 */ "G_LOAD\0"
  /* 344 */ "G_VECREDUCE_FADD\0"
  /* 361 */ "G_FADD\0"
  /* 368 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 389 */ "G_STRICT_FADD\0"
  /* 403 */ "G_ATOMICRMW_FADD\0"
  /* 420 */ "G_VECREDUCE_ADD\0"
  /* 436 */ "G_ADD\0"
  /* 442 */ "G_PTR_ADD\0"
  /* 452 */ "G_ATOMICRMW_ADD\0"
  /* 468 */ "G_ATOMICRMW_NAND\0"
  /* 485 */ "G_VECREDUCE_AND\0"
  /* 501 */ "G_AND\0"
  /* 507 */ "G_ATOMICRMW_AND\0"
  /* 523 */ "LIFETIME_END\0"
  /* 536 */ "G_BRCOND\0"
  /* 545 */ "G_LLROUND\0"
  /* 555 */ "G_LROUND\0"
  /* 564 */ "G_INTRINSIC_ROUND\0"
  /* 582 */ "G_INTRINSIC_FPTRUNC_ROUND\0"
  /* 608 */ "LOAD_STACK_GUARD\0"
  /* 625 */ "PSEUDO_PROBE\0"
  /* 638 */ "G_SSUBE\0"
  /* 646 */ "G_USUBE\0"
  /* 654 */ "G_FENCE\0"
  /* 662 */ "ARITH_FENCE\0"
  /* 674 */ "REG_SEQUENCE\0"
  /* 687 */ "G_SADDE\0"
  /* 695 */ "G_UADDE\0"
  /* 703 */ "G_FMINNUM_IEEE\0"
  /* 718 */ "G_FMAXNUM_IEEE\0"
  /* 733 */ "G_JUMP_TABLE\0"
  /* 746 */ "BUNDLE\0"
  /* 753 */ "G_MEMCPY_INLINE\0"
  /* 769 */ "LOCAL_ESCAPE\0"
  /* 782 */ "G_INDEXED_STORE\0"
  /* 798 */ "G_STORE\0"
  /* 806 */ "G_BITREVERSE\0"
  /* 819 */ "DBG_VALUE\0"
  /* 829 */ "G_GLOBAL_VALUE\0"
  /* 844 */ "G_MEMMOVE\0"
  /* 854 */ "G_FREEZE\0"
  /* 863 */ "G_FCANONICALIZE\0"
  /* 879 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 897 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 915 */ "G_IMPLICIT_DEF\0"
  /* 930 */ "DBG_INSTR_REF\0"
  /* 944 */ "G_FNEG\0"
  /* 951 */ "EXTRACT_SUBREG\0"
  /* 966 */ "INSERT_SUBREG\0"
  /* 980 */ "G_SEXT_INREG\0"
  /* 993 */ "SUBREG_TO_REG\0"
  /* 1007 */ "G_ATOMIC_CMPXCHG\0"
  /* 1024 */ "G_ATOMICRMW_XCHG\0"
  /* 1041 */ "G_FLOG\0"
  /* 1048 */ "G_VAARG\0"
  /* 1056 */ "PREALLOCATED_ARG\0"
  /* 1073 */ "G_SMULH\0"
  /* 1081 */ "G_UMULH\0"
  /* 1089 */ "DBG_PHI\0"
  /* 1097 */ "MOVHI\0"
  /* 1103 */ "SFSUB_F_RI_HI\0"
  /* 1117 */ "SUBB_I_HI\0"
  /* 1127 */ "SUB_I_HI\0"
  /* 1136 */ "ADDC_I_HI\0"
  /* 1146 */ "ADD_I_HI\0"
  /* 1155 */ "AND_I_HI\0"
  /* 1164 */ "SUBB_F_I_HI\0"
  /* 1176 */ "SUB_F_I_HI\0"
  /* 1187 */ "ADDC_F_I_HI\0"
  /* 1199 */ "ADD_F_I_HI\0"
  /* 1210 */ "AND_F_I_HI\0"
  /* 1221 */ "XOR_F_I_HI\0"
  /* 1232 */ "XOR_I_HI\0"
  /* 1241 */ "SLI\0"
  /* 1245 */ "STB_RI\0"
  /* 1252 */ "STH_RI\0"
  /* 1259 */ "LDW_RI\0"
  /* 1266 */ "SW_RI\0"
  /* 1272 */ "LDBs_RI\0"
  /* 1280 */ "LDHs_RI\0"
  /* 1288 */ "LDBz_RI\0"
  /* 1296 */ "LDHz_RI\0"
  /* 1304 */ "G_FPTOSI\0"
  /* 1313 */ "G_FPTOUI\0"
  /* 1322 */ "G_FPOWI\0"
  /* 1330 */ "SA_I\0"
  /* 1335 */ "SA_F_I\0"
  /* 1342 */ "SL_F_I\0"
  /* 1349 */ "SL_I\0"
  /* 1354 */ "G_PTRMASK\0"
  /* 1364 */ "GC_LABEL\0"
  /* 1373 */ "DBG_LABEL\0"
  /* 1383 */ "EH_LABEL\0"
  /* 1392 */ "ANNOTATION_LABEL\0"
  /* 1409 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1429 */ "G_FSHL\0"
  /* 1436 */ "G_SHL\0"
  /* 1442 */ "G_FCEIL\0"
  /* 1450 */ "PATCHABLE_TAIL_CALL\0"
  /* 1470 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1497 */ "PATCHABLE_EVENT_CALL\0"
  /* 1518 */ "FENTRY_CALL\0"
  /* 1530 */ "KILL\0"
  /* 1535 */ "G_CONSTANT_POOL\0"
  /* 1551 */ "G_ROTL\0"
  /* 1558 */ "G_VECREDUCE_FMUL\0"
  /* 1575 */ "G_FMUL\0"
  /* 1582 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 1603 */ "G_STRICT_FMUL\0"
  /* 1617 */ "G_VECREDUCE_MUL\0"
  /* 1633 */ "G_MUL\0"
  /* 1639 */ "G_FREM\0"
  /* 1646 */ "G_STRICT_FREM\0"
  /* 1660 */ "G_SREM\0"
  /* 1667 */ "G_UREM\0"
  /* 1674 */ "G_SDIVREM\0"
  /* 1684 */ "G_UDIVREM\0"
  /* 1694 */ "INLINEASM\0"
  /* 1704 */ "G_FMINIMUM\0"
  /* 1715 */ "G_FMAXIMUM\0"
  /* 1726 */ "G_FMINNUM\0"
  /* 1736 */ "G_FMAXNUM\0"
  /* 1746 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 1768 */ "G_ASSERT_ALIGN\0"
  /* 1783 */ "G_FCOPYSIGN\0"
  /* 1795 */ "G_VECREDUCE_FMIN\0"
  /* 1812 */ "G_ATOMICRMW_FMIN\0"
  /* 1829 */ "G_VECREDUCE_SMIN\0"
  /* 1846 */ "G_SMIN\0"
  /* 1853 */ "G_VECREDUCE_UMIN\0"
  /* 1870 */ "G_UMIN\0"
  /* 1877 */ "G_ATOMICRMW_UMIN\0"
  /* 1894 */ "G_ATOMICRMW_MIN\0"
  /* 1910 */ "G_FSIN\0"
  /* 1917 */ "CFI_INSTRUCTION\0"
  /* 1933 */ "ADJCALLSTACKDOWN\0"
  /* 1950 */ "G_SSUBO\0"
  /* 1958 */ "G_USUBO\0"
  /* 1966 */ "G_SADDO\0"
  /* 1974 */ "G_UADDO\0"
  /* 1982 */ "G_SMULO\0"
  /* 1990 */ "G_UMULO\0"
  /* 1998 */ "SFSUB_F_RI_LO\0"
  /* 2012 */ "SUBB_I_LO\0"
  /* 2022 */ "SUB_I_LO\0"
  /* 2031 */ "ADDC_I_LO\0"
  /* 2041 */ "ADD_I_LO\0"
  /* 2050 */ "AND_I_LO\0"
  /* 2059 */ "SUBB_F_I_LO\0"
  /* 2071 */ "SUB_F_I_LO\0"
  /* 2082 */ "ADDC_F_I_LO\0"
  /* 2094 */ "ADD_F_I_LO\0"
  /* 2105 */ "AND_F_I_LO\0"
  /* 2116 */ "XOR_F_I_LO\0"
  /* 2127 */ "XOR_I_LO\0"
  /* 2136 */ "G_BZERO\0"
  /* 2144 */ "STACKMAP\0"
  /* 2153 */ "G_ATOMICRMW_UDEC_WRAP\0"
  /* 2175 */ "G_ATOMICRMW_UINC_WRAP\0"
  /* 2197 */ "G_BSWAP\0"
  /* 2205 */ "G_SITOFP\0"
  /* 2214 */ "G_UITOFP\0"
  /* 2223 */ "G_FCMP\0"
  /* 2230 */ "G_ICMP\0"
  /* 2237 */ "NOP\0"
  /* 2241 */ "G_CTPOP\0"
  /* 2249 */ "PATCHABLE_OP\0"
  /* 2262 */ "FAULTING_OP\0"
  /* 2274 */ "ADJCALLSTACKUP\0"
  /* 2289 */ "PREALLOCATED_SETUP\0"
  /* 2308 */ "G_FEXP\0"
  /* 2315 */ "G_BR\0"
  /* 2320 */ "INLINEASM_BR\0"
  /* 2333 */ "LDADDR\0"
  /* 2340 */ "STADDR\0"
  /* 2347 */ "G_BLOCK_ADDR\0"
  /* 2360 */ "MEMBARRIER\0"
  /* 2371 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 2396 */ "G_READCYCLECOUNTER\0"
  /* 2415 */ "G_READ_REGISTER\0"
  /* 2431 */ "G_WRITE_REGISTER\0"
  /* 2448 */ "G_ASHR\0"
  /* 2455 */ "G_FSHR\0"
  /* 2462 */ "G_LSHR\0"
  /* 2469 */ "JR\0"
  /* 2472 */ "CALLR\0"
  /* 2478 */ "G_FFLOOR\0"
  /* 2487 */ "G_BUILD_VECTOR\0"
  /* 2502 */ "G_SHUFFLE_VECTOR\0"
  /* 2519 */ "G_VECREDUCE_XOR\0"
  /* 2535 */ "G_XOR\0"
  /* 2541 */ "G_ATOMICRMW_XOR\0"
  /* 2557 */ "G_VECREDUCE_OR\0"
  /* 2572 */ "G_OR\0"
  /* 2577 */ "G_ATOMICRMW_OR\0"
  /* 2592 */ "BRR\0"
  /* 2596 */ "STB_RR\0"
  /* 2603 */ "SFSUB_F_RR\0"
  /* 2614 */ "STH_RR\0"
  /* 2621 */ "LDW_RR\0"
  /* 2628 */ "SW_RR\0"
  /* 2634 */ "LDBs_RR\0"
  /* 2642 */ "LDHs_RR\0"
  /* 2650 */ "LDBz_RR\0"
  /* 2658 */ "LDHz_RR\0"
  /* 2666 */ "LDWz_RR\0"
  /* 2674 */ "G_ROTR\0"
  /* 2681 */ "G_INTTOPTR\0"
  /* 2692 */ "SRA_R\0"
  /* 2698 */ "SUBB_R\0"
  /* 2705 */ "SUB_R\0"
  /* 2711 */ "ADDC_R\0"
  /* 2718 */ "ADD_R\0"
  /* 2724 */ "AND_R\0"
  /* 2730 */ "SRA_F_R\0"
  /* 2738 */ "SUBB_F_R\0"
  /* 2747 */ "SUB_F_R\0"
  /* 2755 */ "ADDC_F_R\0"
  /* 2764 */ "ADD_F_R\0"
  /* 2772 */ "AND_F_R\0"
  /* 2780 */ "SHL_F_R\0"
  /* 2788 */ "SRL_F_R\0"
  /* 2796 */ "XOR_F_R\0"
  /* 2804 */ "SHL_R\0"
  /* 2810 */ "SRL_R\0"
  /* 2816 */ "XOR_R\0"
  /* 2822 */ "G_FABS\0"
  /* 2829 */ "G_ABS\0"
  /* 2835 */ "G_UNMERGE_VALUES\0"
  /* 2852 */ "G_MERGE_VALUES\0"
  /* 2867 */ "G_FCOS\0"
  /* 2874 */ "G_CONCAT_VECTORS\0"
  /* 2891 */ "COPY_TO_REGCLASS\0"
  /* 2908 */ "G_IS_FPCLASS\0"
  /* 2921 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 2951 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 2978 */ "G_SSUBSAT\0"
  /* 2988 */ "G_USUBSAT\0"
  /* 2998 */ "G_SADDSAT\0"
  /* 3008 */ "G_UADDSAT\0"
  /* 3018 */ "G_SSHLSAT\0"
  /* 3028 */ "G_USHLSAT\0"
  /* 3038 */ "G_SMULFIXSAT\0"
  /* 3051 */ "G_UMULFIXSAT\0"
  /* 3064 */ "G_SDIVFIXSAT\0"
  /* 3077 */ "G_UDIVFIXSAT\0"
  /* 3090 */ "BT\0"
  /* 3093 */ "G_EXTRACT\0"
  /* 3103 */ "G_SELECT\0"
  /* 3112 */ "G_BRINDIRECT\0"
  /* 3125 */ "PATCHABLE_RET\0"
  /* 3139 */ "G_MEMSET\0"
  /* 3148 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 3172 */ "G_BRJT\0"
  /* 3179 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 3200 */ "G_INSERT_VECTOR_ELT\0"
  /* 3220 */ "G_FCONSTANT\0"
  /* 3232 */ "G_CONSTANT\0"
  /* 3243 */ "STATEPOINT\0"
  /* 3254 */ "PATCHPOINT\0"
  /* 3265 */ "G_PTRTOINT\0"
  /* 3276 */ "G_FRINT\0"
  /* 3284 */ "G_INTRINSIC_LRINT\0"
  /* 3302 */ "G_FNEARBYINT\0"
  /* 3315 */ "G_VASTART\0"
  /* 3325 */ "LIFETIME_START\0"
  /* 3340 */ "G_INVOKE_REGION_START\0"
  /* 3362 */ "G_INSERT\0"
  /* 3371 */ "G_FSQRT\0"
  /* 3379 */ "G_STRICT_FSQRT\0"
  /* 3394 */ "G_BITCAST\0"
  /* 3404 */ "G_ADDRSPACE_CAST\0"
  /* 3421 */ "DBG_VALUE_LIST\0"
  /* 3436 */ "G_FPEXT\0"
  /* 3444 */ "G_SEXT\0"
  /* 3451 */ "G_ASSERT_SEXT\0"
  /* 3465 */ "G_ANYEXT\0"
  /* 3474 */ "G_ZEXT\0"
  /* 3481 */ "G_ASSERT_ZEXT\0"
  /* 3495 */ "G_FDIV\0"
  /* 3502 */ "G_STRICT_FDIV\0"
  /* 3516 */ "G_SDIV\0"
  /* 3523 */ "G_UDIV\0"
  /* 3530 */ "G_FPOW\0"
  /* 3537 */ "G_VECREDUCE_FMAX\0"
  /* 3554 */ "G_ATOMICRMW_FMAX\0"
  /* 3571 */ "G_VECREDUCE_SMAX\0"
  /* 3588 */ "G_SMAX\0"
  /* 3595 */ "G_VECREDUCE_UMAX\0"
  /* 3612 */ "G_UMAX\0"
  /* 3619 */ "G_ATOMICRMW_UMAX\0"
  /* 3636 */ "G_ATOMICRMW_MAX\0"
  /* 3652 */ "G_FRAME_INDEX\0"
  /* 3666 */ "G_SBFX\0"
  /* 3673 */ "G_UBFX\0"
  /* 3680 */ "G_SMULFIX\0"
  /* 3690 */ "G_UMULFIX\0"
  /* 3700 */ "G_SDIVFIX\0"
  /* 3710 */ "G_UDIVFIX\0"
  /* 3720 */ "G_MEMCPY\0"
  /* 3729 */ "COPY\0"
  /* 3734 */ "LEADZ\0"
  /* 3740 */ "TRAILZ\0"
  /* 3747 */ "G_CTLZ\0"
  /* 3754 */ "G_CTTZ\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned LanaiInstrNameIndices[] = {
    1093U, 1694U, 2320U, 1917U, 1383U, 1364U, 1392U, 1530U, 
    951U, 966U, 917U, 993U, 2891U, 819U, 3421U, 930U, 
    1089U, 1373U, 674U, 3729U, 746U, 3325U, 523U, 625U, 
    662U, 2144U, 1518U, 3254U, 608U, 2289U, 1056U, 3243U, 
    769U, 2262U, 2249U, 2371U, 3125U, 3148U, 1450U, 1497U, 
    1470U, 1409U, 2360U, 3451U, 3481U, 1768U, 436U, 112U, 
    1633U, 3516U, 3523U, 1660U, 1667U, 1674U, 1684U, 501U, 
    2572U, 2535U, 915U, 1091U, 3652U, 829U, 1535U, 3093U, 
    2835U, 3362U, 2852U, 2487U, 200U, 2874U, 3265U, 2681U, 
    3394U, 854U, 582U, 174U, 564U, 3284U, 1746U, 2396U, 
    337U, 281U, 311U, 322U, 262U, 292U, 798U, 782U, 
    2921U, 1007U, 1024U, 452U, 118U, 507U, 468U, 2577U, 
    2541U, 3636U, 1894U, 3619U, 1877U, 403U, 95U, 3554U, 
    1812U, 2175U, 2153U, 654U, 536U, 3112U, 3340U, 152U, 
    2951U, 3465U, 192U, 3232U, 3220U, 3315U, 1048U, 3444U, 
    980U, 3474U, 1436U, 2462U, 2448U, 1429U, 2455U, 2674U, 
    1551U, 2230U, 2223U, 3103U, 1974U, 695U, 1958U, 646U, 
    1966U, 687U, 1950U, 638U, 1990U, 1982U, 1081U, 1073U, 
    3008U, 2998U, 2988U, 2978U, 3028U, 3018U, 3680U, 3690U, 
    3038U, 3051U, 3700U, 3710U, 3064U, 3077U, 361U, 74U, 
    1575U, 55U, 255U, 3495U, 1639U, 3530U, 1322U, 2308U, 
    27U, 1041U, 19U, 0U, 944U, 3436U, 164U, 1304U, 
    1313U, 2205U, 2214U, 2822U, 1783U, 2908U, 863U, 1726U, 
    1736U, 703U, 718U, 1704U, 1715U, 442U, 1354U, 1846U, 
    3588U, 1870U, 3612U, 2829U, 555U, 545U, 2315U, 3172U, 
    3200U, 3179U, 2502U, 3754U, 897U, 3747U, 879U, 2241U, 
    2197U, 806U, 1442U, 2867U, 1910U, 3371U, 2478U, 3276U, 
    3302U, 3404U, 2347U, 733U, 221U, 389U, 81U, 1603U, 
    3502U, 1646U, 61U, 3379U, 2415U, 2431U, 3720U, 753U, 
    844U, 3139U, 2136U, 368U, 1582U, 344U, 1558U, 3537U, 
    1795U, 420U, 1617U, 485U, 2557U, 2519U, 3571U, 1829U, 
    3595U, 1853U, 3666U, 3673U, 1933U, 2274U, 238U, 1465U, 
    2472U, 1187U, 2082U, 2755U, 1136U, 2031U, 2711U, 1199U, 
    2094U, 2764U, 1146U, 2041U, 2718U, 1210U, 2105U, 2772U, 
    1155U, 2050U, 2724U, 134U, 143U, 45U, 2592U, 3090U, 
    2469U, 2333U, 1272U, 2634U, 1288U, 2650U, 1280U, 2642U, 
    1296U, 2658U, 1259U, 2621U, 2666U, 3734U, 9U, 14U, 
    22U, 35U, 40U, 1097U, 2237U, 1222U, 2117U, 2797U, 
    1233U, 2128U, 2817U, 250U, 3135U, 1335U, 1330U, 139U, 
    3105U, 1103U, 1998U, 2603U, 2780U, 2804U, 1241U, 1342U, 
    1349U, 2730U, 2692U, 2788U, 2810U, 2340U, 1245U, 2596U, 
    1252U, 2614U, 1164U, 2059U, 2738U, 1117U, 2012U, 2698U, 
    1176U, 2071U, 2747U, 1127U, 2022U, 2705U, 1266U, 2628U, 
    3740U, 1221U, 2116U, 2796U, 1232U, 2127U, 2816U, 
};

static inline void InitLanaiMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, nullptr, nullptr, 351);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct LanaiGenInstrInfo : public TargetInstrInfo {
  explicit LanaiGenInstrInfo(unsigned CFSetupOpcode = ~0u, unsigned CFDestroyOpcode = ~0u, unsigned CatchRetOpcode = ~0u, unsigned ReturnOpcode = ~0u);
  ~LanaiGenInstrInfo() override = default;

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
extern const MCInstrDesc LanaiInsts[];
extern const unsigned LanaiInstrNameIndices[];
extern const char LanaiInstrNameData[];
LanaiGenInstrInfo::LanaiGenInstrInfo(unsigned CFSetupOpcode, unsigned CFDestroyOpcode, unsigned CatchRetOpcode, unsigned ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, nullptr, nullptr, 351);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Lanai {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Lanai {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Lanai {
namespace OpTypes {
enum OperandType {
  AluOp = 0,
  BrTarget = 1,
  CCOp = 2,
  CallTarget = 3,
  MEMi = 4,
  MEMri = 5,
  MEMrr = 6,
  MEMspls = 7,
  f32imm = 8,
  f64imm = 9,
  i16imm = 10,
  i1imm = 11,
  i32hi16 = 12,
  i32hi16and = 13,
  i32imm = 14,
  i32lo16and = 15,
  i32lo16s = 16,
  i32lo16z = 17,
  i32lo21 = 18,
  i32neg16 = 19,
  i64imm = 20,
  i8imm = 21,
  imm10 = 22,
  immShift = 23,
  pred = 24,
  ptype0 = 25,
  ptype1 = 26,
  ptype2 = 27,
  ptype3 = 28,
  ptype4 = 29,
  ptype5 = 30,
  type0 = 31,
  type1 = 32,
  type2 = 33,
  type3 = 34,
  type4 = 35,
  type5 = 36,
  untyped_imm_0 = 37,
  CCR = 38,
  GPR = 39,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace Lanai {
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
    /* ADJDYNALLOC */
    639,
    /* CALL */
    641,
    /* CALLR */
    642,
    /* ADDC_F_I_HI */
    643,
    /* ADDC_F_I_LO */
    646,
    /* ADDC_F_R */
    649,
    /* ADDC_I_HI */
    653,
    /* ADDC_I_LO */
    656,
    /* ADDC_R */
    659,
    /* ADD_F_I_HI */
    663,
    /* ADD_F_I_LO */
    666,
    /* ADD_F_R */
    669,
    /* ADD_I_HI */
    673,
    /* ADD_I_LO */
    676,
    /* ADD_R */
    679,
    /* AND_F_I_HI */
    683,
    /* AND_F_I_LO */
    686,
    /* AND_F_R */
    689,
    /* AND_I_HI */
    693,
    /* AND_I_LO */
    696,
    /* AND_R */
    699,
    /* BRCC */
    703,
    /* BRIND_CC */
    705,
    /* BRIND_CCA */
    707,
    /* BRR */
    710,
    /* BT */
    712,
    /* JR */
    713,
    /* LDADDR */
    714,
    /* LDBs_RI */
    716,
    /* LDBs_RR */
    720,
    /* LDBz_RI */
    724,
    /* LDBz_RR */
    728,
    /* LDHs_RI */
    732,
    /* LDHs_RR */
    736,
    /* LDHz_RI */
    740,
    /* LDHz_RR */
    744,
    /* LDW_RI */
    748,
    /* LDW_RR */
    752,
    /* LDWz_RR */
    756,
    /* LEADZ */
    760,
    /* LOG0 */
    762,
    /* LOG1 */
    762,
    /* LOG2 */
    762,
    /* LOG3 */
    762,
    /* LOG4 */
    762,
    /* MOVHI */
    762,
    /* NOP */
    764,
    /* OR_F_I_HI */
    764,
    /* OR_F_I_LO */
    767,
    /* OR_F_R */
    770,
    /* OR_I_HI */
    774,
    /* OR_I_LO */
    777,
    /* OR_R */
    780,
    /* POPC */
    784,
    /* RET */
    786,
    /* SA_F_I */
    786,
    /* SA_I */
    789,
    /* SCC */
    792,
    /* SELECT */
    794,
    /* SFSUB_F_RI_HI */
    798,
    /* SFSUB_F_RI_LO */
    800,
    /* SFSUB_F_RR */
    802,
    /* SHL_F_R */
    804,
    /* SHL_R */
    808,
    /* SLI */
    812,
    /* SL_F_I */
    814,
    /* SL_I */
    817,
    /* SRA_F_R */
    820,
    /* SRA_R */
    824,
    /* SRL_F_R */
    828,
    /* SRL_R */
    832,
    /* STADDR */
    836,
    /* STB_RI */
    838,
    /* STB_RR */
    842,
    /* STH_RI */
    846,
    /* STH_RR */
    850,
    /* SUBB_F_I_HI */
    854,
    /* SUBB_F_I_LO */
    857,
    /* SUBB_F_R */
    860,
    /* SUBB_I_HI */
    864,
    /* SUBB_I_LO */
    867,
    /* SUBB_R */
    870,
    /* SUB_F_I_HI */
    874,
    /* SUB_F_I_LO */
    877,
    /* SUB_F_R */
    880,
    /* SUB_I_HI */
    884,
    /* SUB_I_LO */
    887,
    /* SUB_R */
    890,
    /* SW_RI */
    894,
    /* SW_RR */
    898,
    /* TRAILZ */
    902,
    /* XOR_F_I_HI */
    904,
    /* XOR_F_I_LO */
    907,
    /* XOR_F_R */
    910,
    /* XOR_I_HI */
    914,
    /* XOR_I_LO */
    917,
    /* XOR_R */
    920,
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
    /* ADJDYNALLOC */
    GPR, GPR, 
    /* CALL */
    CallTarget, 
    /* CALLR */
    GPR, 
    /* ADDC_F_I_HI */
    GPR, GPR, i32hi16, 
    /* ADDC_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* ADDC_F_R */
    GPR, GPR, GPR, i32imm, 
    /* ADDC_I_HI */
    GPR, GPR, i32hi16, 
    /* ADDC_I_LO */
    GPR, GPR, i32lo16z, 
    /* ADDC_R */
    GPR, GPR, GPR, i32imm, 
    /* ADD_F_I_HI */
    GPR, GPR, i32hi16, 
    /* ADD_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* ADD_F_R */
    GPR, GPR, GPR, i32imm, 
    /* ADD_I_HI */
    GPR, GPR, i32hi16, 
    /* ADD_I_LO */
    GPR, GPR, i32lo16z, 
    /* ADD_R */
    GPR, GPR, GPR, i32imm, 
    /* AND_F_I_HI */
    GPR, GPR, i32hi16and, 
    /* AND_F_I_LO */
    GPR, GPR, i32lo16and, 
    /* AND_F_R */
    GPR, GPR, GPR, i32imm, 
    /* AND_I_HI */
    GPR, GPR, i32hi16and, 
    /* AND_I_LO */
    GPR, GPR, i32lo16and, 
    /* AND_R */
    GPR, GPR, GPR, i32imm, 
    /* BRCC */
    BrTarget, CCOp, 
    /* BRIND_CC */
    GPR, CCOp, 
    /* BRIND_CCA */
    GPR, GPR, CCOp, 
    /* BRR */
    i16imm, CCOp, 
    /* BT */
    BrTarget, 
    /* JR */
    GPR, 
    /* LDADDR */
    GPR, i32lo21, 
    /* LDBs_RI */
    GPR, GPR, imm10, AluOp, 
    /* LDBs_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDBz_RI */
    GPR, GPR, imm10, AluOp, 
    /* LDBz_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDHs_RI */
    GPR, GPR, imm10, AluOp, 
    /* LDHs_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDHz_RI */
    GPR, GPR, imm10, AluOp, 
    /* LDHz_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDW_RI */
    GPR, GPR, i32lo16s, AluOp, 
    /* LDW_RR */
    GPR, GPR, GPR, AluOp, 
    /* LDWz_RR */
    GPR, GPR, GPR, AluOp, 
    /* LEADZ */
    GPR, GPR, 
    /* LOG0 */
    /* LOG1 */
    /* LOG2 */
    /* LOG3 */
    /* LOG4 */
    /* MOVHI */
    GPR, i32hi16, 
    /* NOP */
    /* OR_F_I_HI */
    GPR, GPR, i32hi16, 
    /* OR_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* OR_F_R */
    GPR, GPR, GPR, i32imm, 
    /* OR_I_HI */
    GPR, GPR, i32hi16, 
    /* OR_I_LO */
    GPR, GPR, i32lo16z, 
    /* OR_R */
    GPR, GPR, GPR, i32imm, 
    /* POPC */
    GPR, GPR, 
    /* RET */
    /* SA_F_I */
    GPR, GPR, immShift, 
    /* SA_I */
    GPR, GPR, immShift, 
    /* SCC */
    GPR, CCOp, 
    /* SELECT */
    GPR, GPR, GPR, CCOp, 
    /* SFSUB_F_RI_HI */
    GPR, i32hi16, 
    /* SFSUB_F_RI_LO */
    GPR, i32lo16z, 
    /* SFSUB_F_RR */
    GPR, GPR, 
    /* SHL_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SHL_R */
    GPR, GPR, GPR, i32imm, 
    /* SLI */
    GPR, i32lo21, 
    /* SL_F_I */
    GPR, GPR, immShift, 
    /* SL_I */
    GPR, GPR, immShift, 
    /* SRA_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SRA_R */
    GPR, GPR, GPR, i32imm, 
    /* SRL_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SRL_R */
    GPR, GPR, GPR, i32imm, 
    /* STADDR */
    GPR, i32lo21, 
    /* STB_RI */
    GPR, GPR, imm10, AluOp, 
    /* STB_RR */
    GPR, GPR, GPR, AluOp, 
    /* STH_RI */
    GPR, GPR, imm10, AluOp, 
    /* STH_RR */
    GPR, GPR, GPR, AluOp, 
    /* SUBB_F_I_HI */
    GPR, GPR, i32hi16, 
    /* SUBB_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* SUBB_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SUBB_I_HI */
    GPR, GPR, i32hi16, 
    /* SUBB_I_LO */
    GPR, GPR, i32lo16z, 
    /* SUBB_R */
    GPR, GPR, GPR, i32imm, 
    /* SUB_F_I_HI */
    GPR, GPR, i32hi16, 
    /* SUB_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* SUB_F_R */
    GPR, GPR, GPR, i32imm, 
    /* SUB_I_HI */
    GPR, GPR, i32hi16, 
    /* SUB_I_LO */
    GPR, GPR, i32lo16z, 
    /* SUB_R */
    GPR, GPR, GPR, i32imm, 
    /* SW_RI */
    GPR, GPR, i32lo16s, AluOp, 
    /* SW_RR */
    GPR, GPR, GPR, AluOp, 
    /* TRAILZ */
    GPR, GPR, 
    /* XOR_F_I_HI */
    GPR, GPR, i32hi16, 
    /* XOR_F_I_LO */
    GPR, GPR, i32lo16z, 
    /* XOR_F_R */
    GPR, GPR, GPR, i32imm, 
    /* XOR_I_HI */
    GPR, GPR, i32hi16, 
    /* XOR_I_LO */
    GPR, GPR, i32lo16z, 
    /* XOR_R */
    GPR, GPR, GPR, i32imm, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRINFO_MEM_OPERAND_SIZE
#undef GET_INSTRINFO_MEM_OPERAND_SIZE
namespace llvm {
namespace Lanai {
LLVM_READONLY
static int getMemOperandSize(int OpType) {
  switch (OpType) {
  default: return 0;
  }
}
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_MEM_OPERAND_SIZE

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP
namespace llvm {
namespace Lanai {
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
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_SIZE_MAP

#ifdef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
#undef GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP
namespace llvm {
namespace Lanai {
LLVM_READONLY static int
getLogicalOperandType(uint16_t Opcode, uint16_t LogicalOpIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_LOGICAL_OPERAND_TYPE_MAP

#ifdef GET_INSTRINFO_MC_HELPER_DECLS
#undef GET_INSTRINFO_MC_HELPER_DECLS

namespace llvm {
class MCInst;
class FeatureBitset;

namespace Lanai_MC {

void verifyInstructionPredicates(unsigned Opcode, const FeatureBitset &Features);

} // end namespace Lanai_MC
} // end namespace llvm

#endif // GET_INSTRINFO_MC_HELPER_DECLS

#ifdef GET_INSTRINFO_MC_HELPERS
#undef GET_INSTRINFO_MC_HELPERS

namespace llvm {
namespace Lanai_MC {

} // end namespace Lanai_MC
} // end namespace llvm

#endif // GET_GENISTRINFO_MC_HELPERS

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

namespace llvm {
namespace Lanai_MC {

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
    CEFBS_None, // ADJDYNALLOC = 254
    CEFBS_None, // CALL = 255
    CEFBS_None, // CALLR = 256
    CEFBS_None, // ADDC_F_I_HI = 257
    CEFBS_None, // ADDC_F_I_LO = 258
    CEFBS_None, // ADDC_F_R = 259
    CEFBS_None, // ADDC_I_HI = 260
    CEFBS_None, // ADDC_I_LO = 261
    CEFBS_None, // ADDC_R = 262
    CEFBS_None, // ADD_F_I_HI = 263
    CEFBS_None, // ADD_F_I_LO = 264
    CEFBS_None, // ADD_F_R = 265
    CEFBS_None, // ADD_I_HI = 266
    CEFBS_None, // ADD_I_LO = 267
    CEFBS_None, // ADD_R = 268
    CEFBS_None, // AND_F_I_HI = 269
    CEFBS_None, // AND_F_I_LO = 270
    CEFBS_None, // AND_F_R = 271
    CEFBS_None, // AND_I_HI = 272
    CEFBS_None, // AND_I_LO = 273
    CEFBS_None, // AND_R = 274
    CEFBS_None, // BRCC = 275
    CEFBS_None, // BRIND_CC = 276
    CEFBS_None, // BRIND_CCA = 277
    CEFBS_None, // BRR = 278
    CEFBS_None, // BT = 279
    CEFBS_None, // JR = 280
    CEFBS_None, // LDADDR = 281
    CEFBS_None, // LDBs_RI = 282
    CEFBS_None, // LDBs_RR = 283
    CEFBS_None, // LDBz_RI = 284
    CEFBS_None, // LDBz_RR = 285
    CEFBS_None, // LDHs_RI = 286
    CEFBS_None, // LDHs_RR = 287
    CEFBS_None, // LDHz_RI = 288
    CEFBS_None, // LDHz_RR = 289
    CEFBS_None, // LDW_RI = 290
    CEFBS_None, // LDW_RR = 291
    CEFBS_None, // LDWz_RR = 292
    CEFBS_None, // LEADZ = 293
    CEFBS_None, // LOG0 = 294
    CEFBS_None, // LOG1 = 295
    CEFBS_None, // LOG2 = 296
    CEFBS_None, // LOG3 = 297
    CEFBS_None, // LOG4 = 298
    CEFBS_None, // MOVHI = 299
    CEFBS_None, // NOP = 300
    CEFBS_None, // OR_F_I_HI = 301
    CEFBS_None, // OR_F_I_LO = 302
    CEFBS_None, // OR_F_R = 303
    CEFBS_None, // OR_I_HI = 304
    CEFBS_None, // OR_I_LO = 305
    CEFBS_None, // OR_R = 306
    CEFBS_None, // POPC = 307
    CEFBS_None, // RET = 308
    CEFBS_None, // SA_F_I = 309
    CEFBS_None, // SA_I = 310
    CEFBS_None, // SCC = 311
    CEFBS_None, // SELECT = 312
    CEFBS_None, // SFSUB_F_RI_HI = 313
    CEFBS_None, // SFSUB_F_RI_LO = 314
    CEFBS_None, // SFSUB_F_RR = 315
    CEFBS_None, // SHL_F_R = 316
    CEFBS_None, // SHL_R = 317
    CEFBS_None, // SLI = 318
    CEFBS_None, // SL_F_I = 319
    CEFBS_None, // SL_I = 320
    CEFBS_None, // SRA_F_R = 321
    CEFBS_None, // SRA_R = 322
    CEFBS_None, // SRL_F_R = 323
    CEFBS_None, // SRL_R = 324
    CEFBS_None, // STADDR = 325
    CEFBS_None, // STB_RI = 326
    CEFBS_None, // STB_RR = 327
    CEFBS_None, // STH_RI = 328
    CEFBS_None, // STH_RR = 329
    CEFBS_None, // SUBB_F_I_HI = 330
    CEFBS_None, // SUBB_F_I_LO = 331
    CEFBS_None, // SUBB_F_R = 332
    CEFBS_None, // SUBB_I_HI = 333
    CEFBS_None, // SUBB_I_LO = 334
    CEFBS_None, // SUBB_R = 335
    CEFBS_None, // SUB_F_I_HI = 336
    CEFBS_None, // SUB_F_I_LO = 337
    CEFBS_None, // SUB_F_R = 338
    CEFBS_None, // SUB_I_HI = 339
    CEFBS_None, // SUB_I_LO = 340
    CEFBS_None, // SUB_R = 341
    CEFBS_None, // SW_RI = 342
    CEFBS_None, // SW_RR = 343
    CEFBS_None, // TRAILZ = 344
    CEFBS_None, // XOR_F_I_HI = 345
    CEFBS_None, // XOR_F_I_LO = 346
    CEFBS_None, // XOR_F_R = 347
    CEFBS_None, // XOR_I_HI = 348
    CEFBS_None, // XOR_I_LO = 349
    CEFBS_None, // XOR_R = 350
  };

  assert(Opcode < 351);
  FeatureBitset AvailableFeatures = computeAvailableFeatures(Features);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Opcode]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << &LanaiInstrNameData[LanaiInstrNameIndices[Opcode]]
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str().c_str());
  }
#endif // NDEBUG
}
} // end namespace Lanai_MC
} // end namespace llvm
#endif // ENABLE_INSTR_PREDICATE_VERIFIER

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Lanai {

enum PostEncoderMethod {
	PostEncoderMethod_adjustPqBitsSpls
};

// splsIdempotent
LLVM_READONLY
int splsIdempotent(uint16_t Opcode) {
static const uint16_t splsIdempotentTable[][2] = {
  { Lanai::LDBs_RI, Lanai::LDBs_RI },
  { Lanai::LDBz_RI, Lanai::LDBz_RI },
  { Lanai::LDHs_RI, Lanai::LDHs_RI },
  { Lanai::LDHz_RI, Lanai::LDHz_RI },
  { Lanai::STB_RI, Lanai::STB_RI },
  { Lanai::STH_RI, Lanai::STH_RI },
}; // End of splsIdempotentTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 6;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == splsIdempotentTable[mid][0]) {
      break;
    }
    if (Opcode < splsIdempotentTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return splsIdempotentTable[mid][1];
}

} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

