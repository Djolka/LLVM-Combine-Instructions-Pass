/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/SubtargetFeature.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper functions for extracting fields from encoded instructions.
// InsnType must either be integral or an APInt-like object that must:
// * be default-constructible and copy-constructible
// * be constructible from an APInt (this can be private)
// * Support insertBits(bits, startBit, numBits)
// * Support extractBitsAsZExtValue(numBits, startBit)
// * Support the ~, &, ==, and != operators with other objects of the same type
// * Support the != and bitwise & with uint64_t
// * Support put (<<) to raw_ostream&
template <typename InsnType>
#if defined(_MSC_VER) && !defined(__clang__)
__declspec(noinline)
#endif
static std::enable_if_t<std::is_integral<InsnType>::value, InsnType>
fieldFromInstruction(const InsnType &insn, unsigned startBit,
                     unsigned numBits) {
  assert(startBit + numBits <= 64 && "Cannot support >64-bit extractions!");
  assert(startBit + numBits <= (sizeof(InsnType) * 8) &&
         "Instruction field out of bounds!");
  InsnType fieldMask;
  if (numBits == sizeof(InsnType) * 8)
    fieldMask = (InsnType)(-1LL);
  else
    fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
  return (insn & fieldMask) >> startBit;
}

template <typename InsnType>
static std::enable_if_t<!std::is_integral<InsnType>::value, uint64_t>
fieldFromInstruction(const InsnType &insn, unsigned startBit,
                     unsigned numBits) {
  return insn.extractBitsAsZExtValue(numBits, startBit);
}

// Helper function for inserting bits extracted from an encoded instruction into
// a field.
template <typename InsnType>
static std::enable_if_t<std::is_integral<InsnType>::value>
insertBits(InsnType &field, InsnType bits, unsigned startBit, unsigned numBits) {
  assert(startBit + numBits <= sizeof field * 8);
  field |= (InsnType)bits << startBit;
}

template <typename InsnType>
static std::enable_if_t<!std::is_integral<InsnType>::value>
insertBits(InsnType &field, uint64_t bits, unsigned startBit, unsigned numBits) {
  field.insertBits(bits, startBit, numBits);
}

static bool Check(DecodeStatus &Out, DecodeStatus In) {
  Out = static_cast<DecodeStatus>(Out & In);
  return Out != MCDisassembler::Fail;
}

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 203, 2, 0, // Skip to: 723
/* 8 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 11 */      MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 27
/* 16 */      MCD::OPC_CheckField, 25, 5, 0, 48, 30, 0, // Skip to: 7751
/* 23 */      MCD::OPC_Decode, 228, 5, 0, // Opcode: UNIMP
/* 27 */      MCD::OPC_FilterValue, 1, 143, 0, 0, // Skip to: 175
/* 32 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 35 */      MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 71
/* 40 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 43 */      MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 57
/* 48 */      MCD::OPC_CheckPredicate, 0, 18, 30, 0, // Skip to: 7751
/* 53 */      MCD::OPC_Decode, 190, 2, 1, // Opcode: BPICCNT
/* 57 */      MCD::OPC_FilterValue, 1, 9, 30, 0, // Skip to: 7751
/* 62 */      MCD::OPC_CheckPredicate, 0, 4, 30, 0, // Skip to: 7751
/* 67 */      MCD::OPC_Decode, 189, 2, 1, // Opcode: BPICCANT
/* 71 */      MCD::OPC_FilterValue, 1, 47, 0, 0, // Skip to: 123
/* 76 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 79 */      MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 109
/* 84 */      MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 100
/* 89 */      MCD::OPC_CheckField, 25, 4, 8, 4, 0, 0, // Skip to: 100
/* 96 */      MCD::OPC_Decode, 174, 2, 2, // Opcode: BPA
/* 100 */     MCD::OPC_CheckPredicate, 0, 222, 29, 0, // Skip to: 7751
/* 105 */     MCD::OPC_Decode, 187, 2, 1, // Opcode: BPICC
/* 109 */     MCD::OPC_FilterValue, 1, 213, 29, 0, // Skip to: 7751
/* 114 */     MCD::OPC_CheckPredicate, 0, 208, 29, 0, // Skip to: 7751
/* 119 */     MCD::OPC_Decode, 188, 2, 1, // Opcode: BPICCA
/* 123 */     MCD::OPC_FilterValue, 4, 21, 0, 0, // Skip to: 149
/* 128 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 131 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 140
/* 136 */     MCD::OPC_Decode, 206, 2, 1, // Opcode: BPXCCNT
/* 140 */     MCD::OPC_FilterValue, 1, 182, 29, 0, // Skip to: 7751
/* 145 */     MCD::OPC_Decode, 205, 2, 1, // Opcode: BPXCCANT
/* 149 */     MCD::OPC_FilterValue, 5, 173, 29, 0, // Skip to: 7751
/* 154 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 157 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 203, 2, 1, // Opcode: BPXCC
/* 166 */     MCD::OPC_FilterValue, 1, 156, 29, 0, // Skip to: 7751
/* 171 */     MCD::OPC_Decode, 204, 2, 1, // Opcode: BPXCCA
/* 175 */     MCD::OPC_FilterValue, 2, 32, 0, 0, // Skip to: 212
/* 180 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 183 */     MCD::OPC_FilterValue, 0, 15, 0, 0, // Skip to: 203
/* 188 */     MCD::OPC_CheckField, 25, 4, 8, 4, 0, 0, // Skip to: 199
/* 195 */     MCD::OPC_Decode, 168, 2, 0, // Opcode: BA
/* 199 */     MCD::OPC_Decode, 169, 2, 3, // Opcode: BCOND
/* 203 */     MCD::OPC_FilterValue, 1, 119, 29, 0, // Skip to: 7751
/* 208 */     MCD::OPC_Decode, 170, 2, 3, // Opcode: BCONDA
/* 212 */     MCD::OPC_FilterValue, 3, 59, 1, 0, // Skip to: 532
/* 217 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 220 */     MCD::OPC_FilterValue, 1, 21, 0, 0, // Skip to: 246
/* 225 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 228 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 237
/* 233 */     MCD::OPC_Decode, 209, 2, 4, // Opcode: BPZnapn
/* 237 */     MCD::OPC_FilterValue, 1, 85, 29, 0, // Skip to: 7751
/* 242 */     MCD::OPC_Decode, 210, 2, 4, // Opcode: BPZnapt
/* 246 */     MCD::OPC_FilterValue, 2, 21, 0, 0, // Skip to: 272
/* 251 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 254 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 263
/* 259 */     MCD::OPC_Decode, 193, 2, 4, // Opcode: BPLEZnapn
/* 263 */     MCD::OPC_FilterValue, 1, 59, 29, 0, // Skip to: 7751
/* 268 */     MCD::OPC_Decode, 194, 2, 4, // Opcode: BPLEZnapt
/* 272 */     MCD::OPC_FilterValue, 3, 21, 0, 0, // Skip to: 298
/* 277 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 280 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 289
/* 285 */     MCD::OPC_Decode, 197, 2, 4, // Opcode: BPLZnapn
/* 289 */     MCD::OPC_FilterValue, 1, 33, 29, 0, // Skip to: 7751
/* 294 */     MCD::OPC_Decode, 198, 2, 4, // Opcode: BPLZnapt
/* 298 */     MCD::OPC_FilterValue, 5, 21, 0, 0, // Skip to: 324
/* 303 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 306 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 315
/* 311 */     MCD::OPC_Decode, 201, 2, 4, // Opcode: BPNZnapn
/* 315 */     MCD::OPC_FilterValue, 1, 7, 29, 0, // Skip to: 7751
/* 320 */     MCD::OPC_Decode, 202, 2, 4, // Opcode: BPNZnapt
/* 324 */     MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 350
/* 329 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 332 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 341
/* 337 */     MCD::OPC_Decode, 185, 2, 4, // Opcode: BPGZnapn
/* 341 */     MCD::OPC_FilterValue, 1, 237, 28, 0, // Skip to: 7751
/* 346 */     MCD::OPC_Decode, 186, 2, 4, // Opcode: BPGZnapt
/* 350 */     MCD::OPC_FilterValue, 7, 21, 0, 0, // Skip to: 376
/* 355 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 358 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 367
/* 363 */     MCD::OPC_Decode, 181, 2, 4, // Opcode: BPGEZnapn
/* 367 */     MCD::OPC_FilterValue, 1, 211, 28, 0, // Skip to: 7751
/* 372 */     MCD::OPC_Decode, 182, 2, 4, // Opcode: BPGEZnapt
/* 376 */     MCD::OPC_FilterValue, 17, 21, 0, 0, // Skip to: 402
/* 381 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 384 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 393
/* 389 */     MCD::OPC_Decode, 207, 2, 4, // Opcode: BPZapn
/* 393 */     MCD::OPC_FilterValue, 1, 185, 28, 0, // Skip to: 7751
/* 398 */     MCD::OPC_Decode, 208, 2, 4, // Opcode: BPZapt
/* 402 */     MCD::OPC_FilterValue, 18, 21, 0, 0, // Skip to: 428
/* 407 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 410 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 419
/* 415 */     MCD::OPC_Decode, 191, 2, 4, // Opcode: BPLEZapn
/* 419 */     MCD::OPC_FilterValue, 1, 159, 28, 0, // Skip to: 7751
/* 424 */     MCD::OPC_Decode, 192, 2, 4, // Opcode: BPLEZapt
/* 428 */     MCD::OPC_FilterValue, 19, 21, 0, 0, // Skip to: 454
/* 433 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 436 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 445
/* 441 */     MCD::OPC_Decode, 195, 2, 4, // Opcode: BPLZapn
/* 445 */     MCD::OPC_FilterValue, 1, 133, 28, 0, // Skip to: 7751
/* 450 */     MCD::OPC_Decode, 196, 2, 4, // Opcode: BPLZapt
/* 454 */     MCD::OPC_FilterValue, 21, 21, 0, 0, // Skip to: 480
/* 459 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 462 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 471
/* 467 */     MCD::OPC_Decode, 199, 2, 4, // Opcode: BPNZapn
/* 471 */     MCD::OPC_FilterValue, 1, 107, 28, 0, // Skip to: 7751
/* 476 */     MCD::OPC_Decode, 200, 2, 4, // Opcode: BPNZapt
/* 480 */     MCD::OPC_FilterValue, 22, 21, 0, 0, // Skip to: 506
/* 485 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 488 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 497
/* 493 */     MCD::OPC_Decode, 183, 2, 4, // Opcode: BPGZapn
/* 497 */     MCD::OPC_FilterValue, 1, 81, 28, 0, // Skip to: 7751
/* 502 */     MCD::OPC_Decode, 184, 2, 4, // Opcode: BPGZapt
/* 506 */     MCD::OPC_FilterValue, 23, 72, 28, 0, // Skip to: 7751
/* 511 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 514 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 523
/* 519 */     MCD::OPC_Decode, 179, 2, 4, // Opcode: BPGEZapn
/* 523 */     MCD::OPC_FilterValue, 1, 55, 28, 0, // Skip to: 7751
/* 528 */     MCD::OPC_Decode, 180, 2, 4, // Opcode: BPGEZapt
/* 532 */     MCD::OPC_FilterValue, 4, 22, 0, 0, // Skip to: 559
/* 537 */     MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 555
/* 544 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, 0, // Skip to: 555
/* 551 */     MCD::OPC_Decode, 206, 4, 5, // Opcode: NOP
/* 555 */     MCD::OPC_Decode, 246, 4, 6, // Opcode: SETHIi
/* 559 */     MCD::OPC_FilterValue, 5, 107, 0, 0, // Skip to: 671
/* 564 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 567 */     MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 603
/* 572 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 575 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 589
/* 580 */     MCD::OPC_CheckPredicate, 0, 254, 27, 0, // Skip to: 7751
/* 585 */     MCD::OPC_Decode, 178, 2, 7, // Opcode: BPFCCNT
/* 589 */     MCD::OPC_FilterValue, 1, 245, 27, 0, // Skip to: 7751
/* 594 */     MCD::OPC_CheckPredicate, 0, 240, 27, 0, // Skip to: 7751
/* 599 */     MCD::OPC_Decode, 177, 2, 7, // Opcode: BPFCCANT
/* 603 */     MCD::OPC_FilterValue, 1, 231, 27, 0, // Skip to: 7751
/* 608 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 611 */     MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 641
/* 616 */     MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 632
/* 621 */     MCD::OPC_CheckField, 20, 2, 0, 4, 0, 0, // Skip to: 632
/* 628 */     MCD::OPC_Decode, 254, 2, 1, // Opcode: FBCOND_V9
/* 632 */     MCD::OPC_CheckPredicate, 0, 202, 27, 0, // Skip to: 7751
/* 637 */     MCD::OPC_Decode, 175, 2, 7, // Opcode: BPFCC
/* 641 */     MCD::OPC_FilterValue, 1, 193, 27, 0, // Skip to: 7751
/* 646 */     MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 662
/* 651 */     MCD::OPC_CheckField, 20, 2, 0, 4, 0, 0, // Skip to: 662
/* 658 */     MCD::OPC_Decode, 253, 2, 1, // Opcode: FBCONDA_V9
/* 662 */     MCD::OPC_CheckPredicate, 0, 172, 27, 0, // Skip to: 7751
/* 667 */     MCD::OPC_Decode, 176, 2, 7, // Opcode: BPFCCA
/* 671 */     MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 697
/* 676 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 679 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 688
/* 684 */     MCD::OPC_Decode, 251, 2, 3, // Opcode: FBCOND
/* 688 */     MCD::OPC_FilterValue, 1, 146, 27, 0, // Skip to: 7751
/* 693 */     MCD::OPC_Decode, 252, 2, 3, // Opcode: FBCONDA
/* 697 */     MCD::OPC_FilterValue, 7, 137, 27, 0, // Skip to: 7751
/* 702 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 705 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 714
/* 710 */     MCD::OPC_Decode, 219, 2, 3, // Opcode: CBCOND
/* 714 */     MCD::OPC_FilterValue, 1, 120, 27, 0, // Skip to: 7751
/* 719 */     MCD::OPC_Decode, 220, 2, 3, // Opcode: CBCONDA
/* 723 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 732
/* 728 */     MCD::OPC_Decode, 212, 2, 8, // Opcode: CALL
/* 732 */     MCD::OPC_FilterValue, 2, 91, 21, 0, // Skip to: 6204
/* 737 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 740 */     MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 773
/* 745 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 748 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 764
/* 753 */     MCD::OPC_CheckField, 5, 8, 0, 79, 27, 0, // Skip to: 7751
/* 760 */     MCD::OPC_Decode, 151, 2, 9, // Opcode: ADDrr
/* 764 */     MCD::OPC_FilterValue, 1, 70, 27, 0, // Skip to: 7751
/* 769 */     MCD::OPC_Decode, 150, 2, 10, // Opcode: ADDri
/* 773 */     MCD::OPC_FilterValue, 1, 28, 0, 0, // Skip to: 806
/* 778 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 781 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 797
/* 786 */     MCD::OPC_CheckField, 5, 8, 0, 46, 27, 0, // Skip to: 7751
/* 793 */     MCD::OPC_Decode, 164, 2, 9, // Opcode: ANDrr
/* 797 */     MCD::OPC_FilterValue, 1, 37, 27, 0, // Skip to: 7751
/* 802 */     MCD::OPC_Decode, 163, 2, 10, // Opcode: ANDri
/* 806 */     MCD::OPC_FilterValue, 2, 28, 0, 0, // Skip to: 839
/* 811 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 814 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 830
/* 819 */     MCD::OPC_CheckField, 5, 8, 0, 13, 27, 0, // Skip to: 7751
/* 826 */     MCD::OPC_Decode, 217, 4, 9, // Opcode: ORrr
/* 830 */     MCD::OPC_FilterValue, 1, 4, 27, 0, // Skip to: 7751
/* 835 */     MCD::OPC_Decode, 216, 4, 10, // Opcode: ORri
/* 839 */     MCD::OPC_FilterValue, 3, 28, 0, 0, // Skip to: 872
/* 844 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 847 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 863
/* 852 */     MCD::OPC_CheckField, 5, 8, 0, 236, 26, 0, // Skip to: 7751
/* 859 */     MCD::OPC_Decode, 134, 6, 9, // Opcode: XORrr
/* 863 */     MCD::OPC_FilterValue, 1, 227, 26, 0, // Skip to: 7751
/* 868 */     MCD::OPC_Decode, 133, 6, 10, // Opcode: XORri
/* 872 */     MCD::OPC_FilterValue, 4, 28, 0, 0, // Skip to: 905
/* 877 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 880 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 896
/* 885 */     MCD::OPC_CheckField, 5, 8, 0, 203, 26, 0, // Skip to: 7751
/* 892 */     MCD::OPC_Decode, 187, 5, 9, // Opcode: SUBrr
/* 896 */     MCD::OPC_FilterValue, 1, 194, 26, 0, // Skip to: 7751
/* 901 */     MCD::OPC_Decode, 186, 5, 10, // Opcode: SUBri
/* 905 */     MCD::OPC_FilterValue, 5, 28, 0, 0, // Skip to: 938
/* 910 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 913 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 929
/* 918 */     MCD::OPC_CheckField, 5, 8, 0, 170, 26, 0, // Skip to: 7751
/* 925 */     MCD::OPC_Decode, 159, 2, 9, // Opcode: ANDNrr
/* 929 */     MCD::OPC_FilterValue, 1, 161, 26, 0, // Skip to: 7751
/* 934 */     MCD::OPC_Decode, 158, 2, 10, // Opcode: ANDNri
/* 938 */     MCD::OPC_FilterValue, 6, 28, 0, 0, // Skip to: 971
/* 943 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 946 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 962
/* 951 */     MCD::OPC_CheckField, 5, 8, 0, 137, 26, 0, // Skip to: 7751
/* 958 */     MCD::OPC_Decode, 212, 4, 9, // Opcode: ORNrr
/* 962 */     MCD::OPC_FilterValue, 1, 128, 26, 0, // Skip to: 7751
/* 967 */     MCD::OPC_Decode, 211, 4, 10, // Opcode: ORNri
/* 971 */     MCD::OPC_FilterValue, 7, 28, 0, 0, // Skip to: 1004
/* 976 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 979 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 995
/* 984 */     MCD::OPC_CheckField, 5, 8, 0, 104, 26, 0, // Skip to: 7751
/* 991 */     MCD::OPC_Decode, 128, 6, 9, // Opcode: XNORrr
/* 995 */     MCD::OPC_FilterValue, 1, 95, 26, 0, // Skip to: 7751
/* 1000 */    MCD::OPC_Decode, 255, 5, 10, // Opcode: XNORri
/* 1004 */    MCD::OPC_FilterValue, 8, 28, 0, 0, // Skip to: 1037
/* 1009 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1012 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1028
/* 1017 */    MCD::OPC_CheckField, 5, 8, 0, 71, 26, 0, // Skip to: 7751
/* 1024 */    MCD::OPC_Decode, 143, 2, 9, // Opcode: ADDCrr
/* 1028 */    MCD::OPC_FilterValue, 1, 62, 26, 0, // Skip to: 7751
/* 1033 */    MCD::OPC_Decode, 142, 2, 10, // Opcode: ADDCri
/* 1037 */    MCD::OPC_FilterValue, 9, 28, 0, 0, // Skip to: 1070
/* 1042 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1045 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1061
/* 1050 */    MCD::OPC_CheckField, 5, 8, 0, 38, 26, 0, // Skip to: 7751
/* 1057 */    MCD::OPC_Decode, 205, 4, 11, // Opcode: MULXrr
/* 1061 */    MCD::OPC_FilterValue, 1, 29, 26, 0, // Skip to: 7751
/* 1066 */    MCD::OPC_Decode, 204, 4, 12, // Opcode: MULXri
/* 1070 */    MCD::OPC_FilterValue, 10, 28, 0, 0, // Skip to: 1103
/* 1075 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1078 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1094
/* 1083 */    MCD::OPC_CheckField, 5, 8, 0, 5, 26, 0, // Skip to: 7751
/* 1090 */    MCD::OPC_Decode, 227, 5, 9, // Opcode: UMULrr
/* 1094 */    MCD::OPC_FilterValue, 1, 252, 25, 0, // Skip to: 7751
/* 1099 */    MCD::OPC_Decode, 226, 5, 10, // Opcode: UMULri
/* 1103 */    MCD::OPC_FilterValue, 11, 28, 0, 0, // Skip to: 1136
/* 1108 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1111 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1127
/* 1116 */    MCD::OPC_CheckField, 5, 8, 0, 228, 25, 0, // Skip to: 7751
/* 1123 */    MCD::OPC_Decode, 131, 5, 9, // Opcode: SMULrr
/* 1127 */    MCD::OPC_FilterValue, 1, 219, 25, 0, // Skip to: 7751
/* 1132 */    MCD::OPC_Decode, 130, 5, 10, // Opcode: SMULri
/* 1136 */    MCD::OPC_FilterValue, 12, 28, 0, 0, // Skip to: 1169
/* 1141 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1144 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1160
/* 1149 */    MCD::OPC_CheckField, 5, 8, 0, 195, 25, 0, // Skip to: 7751
/* 1156 */    MCD::OPC_Decode, 181, 5, 9, // Opcode: SUBCrr
/* 1160 */    MCD::OPC_FilterValue, 1, 186, 25, 0, // Skip to: 7751
/* 1165 */    MCD::OPC_Decode, 180, 5, 10, // Opcode: SUBCri
/* 1169 */    MCD::OPC_FilterValue, 13, 28, 0, 0, // Skip to: 1202
/* 1174 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1177 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1193
/* 1182 */    MCD::OPC_CheckField, 5, 8, 0, 162, 25, 0, // Skip to: 7751
/* 1189 */    MCD::OPC_Decode, 218, 5, 11, // Opcode: UDIVXrr
/* 1193 */    MCD::OPC_FilterValue, 1, 153, 25, 0, // Skip to: 7751
/* 1198 */    MCD::OPC_Decode, 217, 5, 12, // Opcode: UDIVXri
/* 1202 */    MCD::OPC_FilterValue, 14, 28, 0, 0, // Skip to: 1235
/* 1207 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1210 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1226
/* 1215 */    MCD::OPC_CheckField, 5, 8, 0, 129, 25, 0, // Skip to: 7751
/* 1222 */    MCD::OPC_Decode, 220, 5, 9, // Opcode: UDIVrr
/* 1226 */    MCD::OPC_FilterValue, 1, 120, 25, 0, // Skip to: 7751
/* 1231 */    MCD::OPC_Decode, 219, 5, 10, // Opcode: UDIVri
/* 1235 */    MCD::OPC_FilterValue, 15, 28, 0, 0, // Skip to: 1268
/* 1240 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1243 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1259
/* 1248 */    MCD::OPC_CheckField, 5, 8, 0, 96, 25, 0, // Skip to: 7751
/* 1255 */    MCD::OPC_Decode, 244, 4, 9, // Opcode: SDIVrr
/* 1259 */    MCD::OPC_FilterValue, 1, 87, 25, 0, // Skip to: 7751
/* 1264 */    MCD::OPC_Decode, 243, 4, 10, // Opcode: SDIVri
/* 1268 */    MCD::OPC_FilterValue, 16, 28, 0, 0, // Skip to: 1301
/* 1273 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1276 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1292
/* 1281 */    MCD::OPC_CheckField, 5, 8, 0, 63, 25, 0, // Skip to: 7751
/* 1288 */    MCD::OPC_Decode, 141, 2, 9, // Opcode: ADDCCrr
/* 1292 */    MCD::OPC_FilterValue, 1, 54, 25, 0, // Skip to: 7751
/* 1297 */    MCD::OPC_Decode, 140, 2, 10, // Opcode: ADDCCri
/* 1301 */    MCD::OPC_FilterValue, 17, 28, 0, 0, // Skip to: 1334
/* 1306 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1309 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1325
/* 1314 */    MCD::OPC_CheckField, 5, 8, 0, 30, 25, 0, // Skip to: 7751
/* 1321 */    MCD::OPC_Decode, 155, 2, 9, // Opcode: ANDCCrr
/* 1325 */    MCD::OPC_FilterValue, 1, 21, 25, 0, // Skip to: 7751
/* 1330 */    MCD::OPC_Decode, 154, 2, 10, // Opcode: ANDCCri
/* 1334 */    MCD::OPC_FilterValue, 18, 28, 0, 0, // Skip to: 1367
/* 1339 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1342 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1358
/* 1347 */    MCD::OPC_CheckField, 5, 8, 0, 253, 24, 0, // Skip to: 7751
/* 1354 */    MCD::OPC_Decode, 208, 4, 9, // Opcode: ORCCrr
/* 1358 */    MCD::OPC_FilterValue, 1, 244, 24, 0, // Skip to: 7751
/* 1363 */    MCD::OPC_Decode, 207, 4, 10, // Opcode: ORCCri
/* 1367 */    MCD::OPC_FilterValue, 19, 28, 0, 0, // Skip to: 1400
/* 1372 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1375 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1391
/* 1380 */    MCD::OPC_CheckField, 5, 8, 0, 220, 24, 0, // Skip to: 7751
/* 1387 */    MCD::OPC_Decode, 130, 6, 9, // Opcode: XORCCrr
/* 1391 */    MCD::OPC_FilterValue, 1, 211, 24, 0, // Skip to: 7751
/* 1396 */    MCD::OPC_Decode, 129, 6, 10, // Opcode: XORCCri
/* 1400 */    MCD::OPC_FilterValue, 20, 51, 0, 0, // Skip to: 1456
/* 1405 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1408 */    MCD::OPC_FilterValue, 0, 23, 0, 0, // Skip to: 1436
/* 1413 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1416 */    MCD::OPC_FilterValue, 0, 186, 24, 0, // Skip to: 7751
/* 1421 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 1432
/* 1428 */    MCD::OPC_Decode, 225, 2, 13, // Opcode: CMPrr
/* 1432 */    MCD::OPC_Decode, 179, 5, 9, // Opcode: SUBCCrr
/* 1436 */    MCD::OPC_FilterValue, 1, 166, 24, 0, // Skip to: 7751
/* 1441 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 1452
/* 1448 */    MCD::OPC_Decode, 224, 2, 14, // Opcode: CMPri
/* 1452 */    MCD::OPC_Decode, 178, 5, 10, // Opcode: SUBCCri
/* 1456 */    MCD::OPC_FilterValue, 21, 28, 0, 0, // Skip to: 1489
/* 1461 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1464 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1480
/* 1469 */    MCD::OPC_CheckField, 5, 8, 0, 131, 24, 0, // Skip to: 7751
/* 1476 */    MCD::OPC_Decode, 157, 2, 9, // Opcode: ANDNCCrr
/* 1480 */    MCD::OPC_FilterValue, 1, 122, 24, 0, // Skip to: 7751
/* 1485 */    MCD::OPC_Decode, 156, 2, 10, // Opcode: ANDNCCri
/* 1489 */    MCD::OPC_FilterValue, 22, 28, 0, 0, // Skip to: 1522
/* 1494 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1497 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1513
/* 1502 */    MCD::OPC_CheckField, 5, 8, 0, 98, 24, 0, // Skip to: 7751
/* 1509 */    MCD::OPC_Decode, 210, 4, 9, // Opcode: ORNCCrr
/* 1513 */    MCD::OPC_FilterValue, 1, 89, 24, 0, // Skip to: 7751
/* 1518 */    MCD::OPC_Decode, 209, 4, 10, // Opcode: ORNCCri
/* 1522 */    MCD::OPC_FilterValue, 23, 28, 0, 0, // Skip to: 1555
/* 1527 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1530 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1546
/* 1535 */    MCD::OPC_CheckField, 5, 8, 0, 65, 24, 0, // Skip to: 7751
/* 1542 */    MCD::OPC_Decode, 253, 5, 9, // Opcode: XNORCCrr
/* 1546 */    MCD::OPC_FilterValue, 1, 56, 24, 0, // Skip to: 7751
/* 1551 */    MCD::OPC_Decode, 252, 5, 10, // Opcode: XNORCCri
/* 1555 */    MCD::OPC_FilterValue, 24, 28, 0, 0, // Skip to: 1588
/* 1560 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1563 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1579
/* 1568 */    MCD::OPC_CheckField, 5, 8, 0, 32, 24, 0, // Skip to: 7751
/* 1575 */    MCD::OPC_Decode, 145, 2, 9, // Opcode: ADDErr
/* 1579 */    MCD::OPC_FilterValue, 1, 23, 24, 0, // Skip to: 7751
/* 1584 */    MCD::OPC_Decode, 144, 2, 10, // Opcode: ADDEri
/* 1588 */    MCD::OPC_FilterValue, 26, 28, 0, 0, // Skip to: 1621
/* 1593 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1596 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1612
/* 1601 */    MCD::OPC_CheckField, 5, 8, 0, 255, 23, 0, // Skip to: 7751
/* 1608 */    MCD::OPC_Decode, 224, 5, 9, // Opcode: UMULCCrr
/* 1612 */    MCD::OPC_FilterValue, 1, 246, 23, 0, // Skip to: 7751
/* 1617 */    MCD::OPC_Decode, 223, 5, 10, // Opcode: UMULCCri
/* 1621 */    MCD::OPC_FilterValue, 27, 28, 0, 0, // Skip to: 1654
/* 1626 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1629 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1645
/* 1634 */    MCD::OPC_CheckField, 5, 8, 0, 222, 23, 0, // Skip to: 7751
/* 1641 */    MCD::OPC_Decode, 129, 5, 9, // Opcode: SMULCCrr
/* 1645 */    MCD::OPC_FilterValue, 1, 213, 23, 0, // Skip to: 7751
/* 1650 */    MCD::OPC_Decode, 128, 5, 10, // Opcode: SMULCCri
/* 1654 */    MCD::OPC_FilterValue, 28, 28, 0, 0, // Skip to: 1687
/* 1659 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1662 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1678
/* 1667 */    MCD::OPC_CheckField, 5, 8, 0, 189, 23, 0, // Skip to: 7751
/* 1674 */    MCD::OPC_Decode, 183, 5, 9, // Opcode: SUBErr
/* 1678 */    MCD::OPC_FilterValue, 1, 180, 23, 0, // Skip to: 7751
/* 1683 */    MCD::OPC_Decode, 182, 5, 10, // Opcode: SUBEri
/* 1687 */    MCD::OPC_FilterValue, 30, 28, 0, 0, // Skip to: 1720
/* 1692 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1695 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1711
/* 1700 */    MCD::OPC_CheckField, 5, 8, 0, 156, 23, 0, // Skip to: 7751
/* 1707 */    MCD::OPC_Decode, 216, 5, 9, // Opcode: UDIVCCrr
/* 1711 */    MCD::OPC_FilterValue, 1, 147, 23, 0, // Skip to: 7751
/* 1716 */    MCD::OPC_Decode, 215, 5, 10, // Opcode: UDIVCCri
/* 1720 */    MCD::OPC_FilterValue, 31, 28, 0, 0, // Skip to: 1753
/* 1725 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1728 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1744
/* 1733 */    MCD::OPC_CheckField, 5, 8, 0, 123, 23, 0, // Skip to: 7751
/* 1740 */    MCD::OPC_Decode, 240, 4, 9, // Opcode: SDIVCCrr
/* 1744 */    MCD::OPC_FilterValue, 1, 114, 23, 0, // Skip to: 7751
/* 1749 */    MCD::OPC_Decode, 239, 4, 10, // Opcode: SDIVCCri
/* 1753 */    MCD::OPC_FilterValue, 32, 28, 0, 0, // Skip to: 1786
/* 1758 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1761 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1777
/* 1766 */    MCD::OPC_CheckField, 5, 8, 0, 90, 23, 0, // Skip to: 7751
/* 1773 */    MCD::OPC_Decode, 197, 5, 9, // Opcode: TADDCCrr
/* 1777 */    MCD::OPC_FilterValue, 1, 81, 23, 0, // Skip to: 7751
/* 1782 */    MCD::OPC_Decode, 196, 5, 10, // Opcode: TADDCCri
/* 1786 */    MCD::OPC_FilterValue, 33, 28, 0, 0, // Skip to: 1819
/* 1791 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1794 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1810
/* 1799 */    MCD::OPC_CheckField, 5, 8, 0, 57, 23, 0, // Skip to: 7751
/* 1806 */    MCD::OPC_Decode, 212, 5, 9, // Opcode: TSUBCCrr
/* 1810 */    MCD::OPC_FilterValue, 1, 48, 23, 0, // Skip to: 7751
/* 1815 */    MCD::OPC_Decode, 211, 5, 10, // Opcode: TSUBCCri
/* 1819 */    MCD::OPC_FilterValue, 34, 28, 0, 0, // Skip to: 1852
/* 1824 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1827 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1843
/* 1832 */    MCD::OPC_CheckField, 5, 8, 0, 24, 23, 0, // Skip to: 7751
/* 1839 */    MCD::OPC_Decode, 195, 5, 9, // Opcode: TADDCCTVrr
/* 1843 */    MCD::OPC_FilterValue, 1, 15, 23, 0, // Skip to: 7751
/* 1848 */    MCD::OPC_Decode, 194, 5, 10, // Opcode: TADDCCTVri
/* 1852 */    MCD::OPC_FilterValue, 35, 28, 0, 0, // Skip to: 1885
/* 1857 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1860 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1876
/* 1865 */    MCD::OPC_CheckField, 5, 8, 0, 247, 22, 0, // Skip to: 7751
/* 1872 */    MCD::OPC_Decode, 210, 5, 9, // Opcode: TSUBCCTVrr
/* 1876 */    MCD::OPC_FilterValue, 1, 238, 22, 0, // Skip to: 7751
/* 1881 */    MCD::OPC_Decode, 209, 5, 10, // Opcode: TSUBCCTVri
/* 1885 */    MCD::OPC_FilterValue, 36, 28, 0, 0, // Skip to: 1918
/* 1890 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1893 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1909
/* 1898 */    MCD::OPC_CheckField, 5, 8, 0, 214, 22, 0, // Skip to: 7751
/* 1905 */    MCD::OPC_Decode, 203, 4, 9, // Opcode: MULSCCrr
/* 1909 */    MCD::OPC_FilterValue, 1, 205, 22, 0, // Skip to: 7751
/* 1914 */    MCD::OPC_Decode, 202, 4, 10, // Opcode: MULSCCri
/* 1918 */    MCD::OPC_FilterValue, 37, 39, 0, 0, // Skip to: 1962
/* 1923 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1926 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1935
/* 1931 */    MCD::OPC_Decode, 253, 4, 9, // Opcode: SLLrr
/* 1935 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1944
/* 1940 */    MCD::OPC_Decode, 251, 4, 15, // Opcode: SLLXrr
/* 1944 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1953
/* 1949 */    MCD::OPC_Decode, 252, 4, 16, // Opcode: SLLri
/* 1953 */    MCD::OPC_FilterValue, 3, 161, 22, 0, // Skip to: 7751
/* 1958 */    MCD::OPC_Decode, 250, 4, 17, // Opcode: SLLXri
/* 1962 */    MCD::OPC_FilterValue, 38, 39, 0, 0, // Skip to: 2006
/* 1967 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1970 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1979
/* 1975 */    MCD::OPC_Decode, 139, 5, 9, // Opcode: SRLrr
/* 1979 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1988
/* 1984 */    MCD::OPC_Decode, 137, 5, 15, // Opcode: SRLXrr
/* 1988 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1997
/* 1993 */    MCD::OPC_Decode, 138, 5, 16, // Opcode: SRLri
/* 1997 */    MCD::OPC_FilterValue, 3, 117, 22, 0, // Skip to: 7751
/* 2002 */    MCD::OPC_Decode, 136, 5, 17, // Opcode: SRLXri
/* 2006 */    MCD::OPC_FilterValue, 39, 39, 0, 0, // Skip to: 2050
/* 2011 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2014 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2023
/* 2019 */    MCD::OPC_Decode, 135, 5, 9, // Opcode: SRArr
/* 2023 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 2032
/* 2028 */    MCD::OPC_Decode, 133, 5, 15, // Opcode: SRAXrr
/* 2032 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 2041
/* 2037 */    MCD::OPC_Decode, 134, 5, 16, // Opcode: SRAri
/* 2041 */    MCD::OPC_FilterValue, 3, 73, 22, 0, // Skip to: 7751
/* 2046 */    MCD::OPC_Decode, 132, 5, 17, // Opcode: SRAXri
/* 2050 */    MCD::OPC_FilterValue, 40, 81, 0, 0, // Skip to: 2136
/* 2055 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2058 */    MCD::OPC_FilterValue, 0, 45, 0, 0, // Skip to: 2108
/* 2063 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 2066 */    MCD::OPC_FilterValue, 0, 48, 22, 0, // Skip to: 7751
/* 2071 */    MCD::OPC_ExtractField, 14, 5,  // Inst{18-14} ...
/* 2074 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 2088
/* 2079 */    MCD::OPC_CheckPredicate, 0, 20, 0, 0, // Skip to: 2104
/* 2084 */    MCD::OPC_Decode, 226, 4, 18, // Opcode: RDPC
/* 2088 */    MCD::OPC_FilterValue, 15, 11, 0, 0, // Skip to: 2104
/* 2093 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2104
/* 2100 */    MCD::OPC_Decode, 141, 5, 5, // Opcode: STBAR
/* 2104 */    MCD::OPC_Decode, 225, 4, 19, // Opcode: RDASR
/* 2108 */    MCD::OPC_FilterValue, 1, 6, 22, 0, // Skip to: 7751
/* 2113 */    MCD::OPC_CheckPredicate, 0, 1, 22, 0, // Skip to: 7751
/* 2118 */    MCD::OPC_CheckField, 25, 5, 0, 250, 21, 0, // Skip to: 7751
/* 2125 */    MCD::OPC_CheckField, 14, 5, 15, 243, 21, 0, // Skip to: 7751
/* 2132 */    MCD::OPC_Decode, 188, 4, 20, // Opcode: MEMBARi
/* 2136 */    MCD::OPC_FilterValue, 41, 11, 0, 0, // Skip to: 2152
/* 2141 */    MCD::OPC_CheckField, 0, 19, 0, 227, 21, 0, // Skip to: 7751
/* 2148 */    MCD::OPC_Decode, 228, 4, 18, // Opcode: RDPSR
/* 2152 */    MCD::OPC_FilterValue, 42, 28, 0, 0, // Skip to: 2185
/* 2157 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 2160 */    MCD::OPC_FilterValue, 0, 210, 21, 0, // Skip to: 7751
/* 2165 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, 0, // Skip to: 2176
/* 2172 */    MCD::OPC_Decode, 230, 4, 18, // Opcode: RDWIM
/* 2176 */    MCD::OPC_CheckPredicate, 0, 194, 21, 0, // Skip to: 7751
/* 2181 */    MCD::OPC_Decode, 227, 4, 21, // Opcode: RDPR
/* 2185 */    MCD::OPC_FilterValue, 43, 28, 0, 0, // Skip to: 2218
/* 2190 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 2193 */    MCD::OPC_FilterValue, 0, 177, 21, 0, // Skip to: 7751
/* 2198 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2214
/* 2203 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2214
/* 2210 */    MCD::OPC_Decode, 161, 3, 5, // Opcode: FLUSHW
/* 2214 */    MCD::OPC_Decode, 229, 4, 18, // Opcode: RDTBR
/* 2218 */    MCD::OPC_FilterValue, 44, 141, 0, 0, // Skip to: 2364
/* 2223 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2226 */    MCD::OPC_FilterValue, 0, 64, 0, 0, // Skip to: 2295
/* 2231 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2234 */    MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2264
/* 2239 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2255
/* 2244 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 2255
/* 2251 */    MCD::OPC_Decode, 191, 4, 22, // Opcode: MOVFCCrr
/* 2255 */    MCD::OPC_CheckPredicate, 0, 115, 21, 0, // Skip to: 7751
/* 2260 */    MCD::OPC_Decode, 239, 5, 23, // Opcode: V9MOVFCCrr
/* 2264 */    MCD::OPC_FilterValue, 1, 106, 21, 0, // Skip to: 7751
/* 2269 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2272 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2286
/* 2277 */    MCD::OPC_CheckPredicate, 0, 93, 21, 0, // Skip to: 7751
/* 2282 */    MCD::OPC_Decode, 193, 4, 22, // Opcode: MOVICCrr
/* 2286 */    MCD::OPC_FilterValue, 2, 84, 21, 0, // Skip to: 7751
/* 2291 */    MCD::OPC_Decode, 200, 4, 22, // Opcode: MOVXCCrr
/* 2295 */    MCD::OPC_FilterValue, 1, 75, 21, 0, // Skip to: 7751
/* 2300 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2303 */    MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2333
/* 2308 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2324
/* 2313 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 2324
/* 2320 */    MCD::OPC_Decode, 190, 4, 24, // Opcode: MOVFCCri
/* 2324 */    MCD::OPC_CheckPredicate, 0, 46, 21, 0, // Skip to: 7751
/* 2329 */    MCD::OPC_Decode, 238, 5, 25, // Opcode: V9MOVFCCri
/* 2333 */    MCD::OPC_FilterValue, 1, 37, 21, 0, // Skip to: 7751
/* 2338 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2341 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2355
/* 2346 */    MCD::OPC_CheckPredicate, 0, 24, 21, 0, // Skip to: 7751
/* 2351 */    MCD::OPC_Decode, 192, 4, 24, // Opcode: MOVICCri
/* 2355 */    MCD::OPC_FilterValue, 2, 15, 21, 0, // Skip to: 7751
/* 2360 */    MCD::OPC_Decode, 199, 4, 24, // Opcode: MOVXCCri
/* 2364 */    MCD::OPC_FilterValue, 45, 28, 0, 0, // Skip to: 2397
/* 2369 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2372 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2388
/* 2377 */    MCD::OPC_CheckField, 5, 8, 0, 247, 20, 0, // Skip to: 7751
/* 2384 */    MCD::OPC_Decode, 242, 4, 11, // Opcode: SDIVXrr
/* 2388 */    MCD::OPC_FilterValue, 1, 238, 20, 0, // Skip to: 7751
/* 2393 */    MCD::OPC_Decode, 241, 4, 12, // Opcode: SDIVXri
/* 2397 */    MCD::OPC_FilterValue, 46, 16, 0, 0, // Skip to: 2418
/* 2402 */    MCD::OPC_CheckPredicate, 0, 224, 20, 0, // Skip to: 7751
/* 2407 */    MCD::OPC_CheckField, 5, 14, 0, 217, 20, 0, // Skip to: 7751
/* 2414 */    MCD::OPC_Decode, 220, 4, 26, // Opcode: POPCrr
/* 2418 */    MCD::OPC_FilterValue, 47, 28, 0, 0, // Skip to: 2451
/* 2423 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2426 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2442
/* 2431 */    MCD::OPC_CheckField, 5, 5, 0, 193, 20, 0, // Skip to: 7751
/* 2438 */    MCD::OPC_Decode, 195, 4, 27, // Opcode: MOVRrr
/* 2442 */    MCD::OPC_FilterValue, 1, 184, 20, 0, // Skip to: 7751
/* 2447 */    MCD::OPC_Decode, 194, 4, 28, // Opcode: MOVRri
/* 2451 */    MCD::OPC_FilterValue, 48, 51, 0, 0, // Skip to: 2507
/* 2456 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2459 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2475
/* 2464 */    MCD::OPC_CheckField, 5, 8, 0, 160, 20, 0, // Skip to: 7751
/* 2471 */    MCD::OPC_Decode, 241, 5, 29, // Opcode: WRASRrr
/* 2475 */    MCD::OPC_FilterValue, 1, 151, 20, 0, // Skip to: 7751
/* 2480 */    MCD::OPC_CheckPredicate, 0, 18, 0, 0, // Skip to: 2503
/* 2485 */    MCD::OPC_CheckField, 25, 5, 15, 11, 0, 0, // Skip to: 2503
/* 2492 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, 0, // Skip to: 2503
/* 2499 */    MCD::OPC_Decode, 249, 4, 30, // Opcode: SIR
/* 2503 */    MCD::OPC_Decode, 240, 5, 31, // Opcode: WRASRri
/* 2507 */    MCD::OPC_FilterValue, 49, 79, 0, 0, // Skip to: 2591
/* 2512 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2515 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 2560
/* 2520 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 2523 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2539
/* 2528 */    MCD::OPC_CheckField, 5, 8, 0, 96, 20, 0, // Skip to: 7751
/* 2535 */    MCD::OPC_Decode, 245, 5, 13, // Opcode: WRPSRrr
/* 2539 */    MCD::OPC_FilterValue, 1, 87, 20, 0, // Skip to: 7751
/* 2544 */    MCD::OPC_CheckPredicate, 1, 82, 20, 0, // Skip to: 7751
/* 2549 */    MCD::OPC_CheckField, 5, 8, 0, 75, 20, 0, // Skip to: 7751
/* 2556 */    MCD::OPC_Decode, 224, 4, 13, // Opcode: PWRPSRrr
/* 2560 */    MCD::OPC_FilterValue, 1, 66, 20, 0, // Skip to: 7751
/* 2565 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 2568 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2577
/* 2573 */    MCD::OPC_Decode, 244, 5, 14, // Opcode: WRPSRri
/* 2577 */    MCD::OPC_FilterValue, 1, 49, 20, 0, // Skip to: 7751
/* 2582 */    MCD::OPC_CheckPredicate, 1, 44, 20, 0, // Skip to: 7751
/* 2587 */    MCD::OPC_Decode, 223, 4, 14, // Opcode: PWRPSRri
/* 2591 */    MCD::OPC_FilterValue, 50, 61, 0, 0, // Skip to: 2657
/* 2596 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2599 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 2632
/* 2604 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2607 */    MCD::OPC_FilterValue, 0, 19, 20, 0, // Skip to: 7751
/* 2612 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2623
/* 2619 */    MCD::OPC_Decode, 249, 5, 13, // Opcode: WRWIMrr
/* 2623 */    MCD::OPC_CheckPredicate, 0, 3, 20, 0, // Skip to: 7751
/* 2628 */    MCD::OPC_Decode, 243, 5, 32, // Opcode: WRPRrr
/* 2632 */    MCD::OPC_FilterValue, 1, 250, 19, 0, // Skip to: 7751
/* 2637 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2648
/* 2644 */    MCD::OPC_Decode, 248, 5, 14, // Opcode: WRWIMri
/* 2648 */    MCD::OPC_CheckPredicate, 0, 234, 19, 0, // Skip to: 7751
/* 2653 */    MCD::OPC_Decode, 242, 5, 33, // Opcode: WRPRri
/* 2657 */    MCD::OPC_FilterValue, 51, 42, 0, 0, // Skip to: 2704
/* 2662 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2665 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 2688
/* 2670 */    MCD::OPC_CheckField, 25, 5, 0, 210, 19, 0, // Skip to: 7751
/* 2677 */    MCD::OPC_CheckField, 5, 8, 0, 203, 19, 0, // Skip to: 7751
/* 2684 */    MCD::OPC_Decode, 247, 5, 13, // Opcode: WRTBRrr
/* 2688 */    MCD::OPC_FilterValue, 1, 194, 19, 0, // Skip to: 7751
/* 2693 */    MCD::OPC_CheckField, 25, 5, 0, 187, 19, 0, // Skip to: 7751
/* 2700 */    MCD::OPC_Decode, 246, 5, 14, // Opcode: WRTBRri
/* 2704 */    MCD::OPC_FilterValue, 52, 43, 3, 0, // Skip to: 3520
/* 2709 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2712 */    MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 2728
/* 2717 */    MCD::OPC_CheckField, 14, 5, 0, 163, 19, 0, // Skip to: 7751
/* 2724 */    MCD::OPC_Decode, 176, 3, 34, // Opcode: FMOVS
/* 2728 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2749
/* 2733 */    MCD::OPC_CheckPredicate, 0, 149, 19, 0, // Skip to: 7751
/* 2738 */    MCD::OPC_CheckField, 14, 5, 0, 142, 19, 0, // Skip to: 7751
/* 2745 */    MCD::OPC_Decode, 165, 3, 35, // Opcode: FMOVD
/* 2749 */    MCD::OPC_FilterValue, 3, 16, 0, 0, // Skip to: 2770
/* 2754 */    MCD::OPC_CheckPredicate, 0, 128, 19, 0, // Skip to: 7751
/* 2759 */    MCD::OPC_CheckField, 14, 5, 0, 121, 19, 0, // Skip to: 7751
/* 2766 */    MCD::OPC_Decode, 169, 3, 36, // Opcode: FMOVQ
/* 2770 */    MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 2786
/* 2775 */    MCD::OPC_CheckField, 14, 5, 0, 105, 19, 0, // Skip to: 7751
/* 2782 */    MCD::OPC_Decode, 196, 3, 34, // Opcode: FNEGS
/* 2786 */    MCD::OPC_FilterValue, 6, 16, 0, 0, // Skip to: 2807
/* 2791 */    MCD::OPC_CheckPredicate, 0, 91, 19, 0, // Skip to: 7751
/* 2796 */    MCD::OPC_CheckField, 14, 5, 0, 84, 19, 0, // Skip to: 7751
/* 2803 */    MCD::OPC_Decode, 194, 3, 35, // Opcode: FNEGD
/* 2807 */    MCD::OPC_FilterValue, 7, 16, 0, 0, // Skip to: 2828
/* 2812 */    MCD::OPC_CheckPredicate, 0, 70, 19, 0, // Skip to: 7751
/* 2817 */    MCD::OPC_CheckField, 14, 5, 0, 63, 19, 0, // Skip to: 7751
/* 2824 */    MCD::OPC_Decode, 195, 3, 36, // Opcode: FNEGQ
/* 2828 */    MCD::OPC_FilterValue, 9, 11, 0, 0, // Skip to: 2844
/* 2833 */    MCD::OPC_CheckField, 14, 5, 0, 47, 19, 0, // Skip to: 7751
/* 2840 */    MCD::OPC_Decode, 240, 2, 34, // Opcode: FABSS
/* 2844 */    MCD::OPC_FilterValue, 10, 16, 0, 0, // Skip to: 2865
/* 2849 */    MCD::OPC_CheckPredicate, 0, 33, 19, 0, // Skip to: 7751
/* 2854 */    MCD::OPC_CheckField, 14, 5, 0, 26, 19, 0, // Skip to: 7751
/* 2861 */    MCD::OPC_Decode, 238, 2, 35, // Opcode: FABSD
/* 2865 */    MCD::OPC_FilterValue, 11, 16, 0, 0, // Skip to: 2886
/* 2870 */    MCD::OPC_CheckPredicate, 0, 12, 19, 0, // Skip to: 7751
/* 2875 */    MCD::OPC_CheckField, 14, 5, 0, 5, 19, 0, // Skip to: 7751
/* 2882 */    MCD::OPC_Decode, 239, 2, 36, // Opcode: FABSQ
/* 2886 */    MCD::OPC_FilterValue, 41, 11, 0, 0, // Skip to: 2902
/* 2891 */    MCD::OPC_CheckField, 14, 5, 0, 245, 18, 0, // Skip to: 7751
/* 2898 */    MCD::OPC_Decode, 240, 3, 34, // Opcode: FSQRTS
/* 2902 */    MCD::OPC_FilterValue, 42, 11, 0, 0, // Skip to: 2918
/* 2907 */    MCD::OPC_CheckField, 14, 5, 0, 229, 18, 0, // Skip to: 7751
/* 2914 */    MCD::OPC_Decode, 238, 3, 35, // Opcode: FSQRTD
/* 2918 */    MCD::OPC_FilterValue, 43, 11, 0, 0, // Skip to: 2934
/* 2923 */    MCD::OPC_CheckField, 14, 5, 0, 213, 18, 0, // Skip to: 7751
/* 2930 */    MCD::OPC_Decode, 239, 3, 36, // Opcode: FSQRTQ
/* 2934 */    MCD::OPC_FilterValue, 65, 4, 0, 0, // Skip to: 2943
/* 2939 */    MCD::OPC_Decode, 243, 2, 37, // Opcode: FADDS
/* 2943 */    MCD::OPC_FilterValue, 66, 4, 0, 0, // Skip to: 2952
/* 2948 */    MCD::OPC_Decode, 241, 2, 38, // Opcode: FADDD
/* 2952 */    MCD::OPC_FilterValue, 67, 4, 0, 0, // Skip to: 2961
/* 2957 */    MCD::OPC_Decode, 242, 2, 39, // Opcode: FADDQ
/* 2961 */    MCD::OPC_FilterValue, 69, 4, 0, 0, // Skip to: 2970
/* 2966 */    MCD::OPC_Decode, 255, 3, 37, // Opcode: FSUBS
/* 2970 */    MCD::OPC_FilterValue, 70, 4, 0, 0, // Skip to: 2979
/* 2975 */    MCD::OPC_Decode, 253, 3, 38, // Opcode: FSUBD
/* 2979 */    MCD::OPC_FilterValue, 71, 4, 0, 0, // Skip to: 2988
/* 2984 */    MCD::OPC_Decode, 254, 3, 39, // Opcode: FSUBQ
/* 2988 */    MCD::OPC_FilterValue, 73, 4, 0, 0, // Skip to: 2997
/* 2993 */    MCD::OPC_Decode, 189, 3, 37, // Opcode: FMULS
/* 2997 */    MCD::OPC_FilterValue, 74, 4, 0, 0, // Skip to: 3006
/* 3002 */    MCD::OPC_Decode, 185, 3, 38, // Opcode: FMULD
/* 3006 */    MCD::OPC_FilterValue, 75, 4, 0, 0, // Skip to: 3015
/* 3011 */    MCD::OPC_Decode, 188, 3, 39, // Opcode: FMULQ
/* 3015 */    MCD::OPC_FilterValue, 77, 4, 0, 0, // Skip to: 3024
/* 3020 */    MCD::OPC_Decode, 144, 3, 37, // Opcode: FDIVS
/* 3024 */    MCD::OPC_FilterValue, 78, 4, 0, 0, // Skip to: 3033
/* 3029 */    MCD::OPC_Decode, 142, 3, 38, // Opcode: FDIVD
/* 3033 */    MCD::OPC_FilterValue, 79, 4, 0, 0, // Skip to: 3042
/* 3038 */    MCD::OPC_Decode, 143, 3, 39, // Opcode: FDIVQ
/* 3042 */    MCD::OPC_FilterValue, 81, 9, 0, 0, // Skip to: 3056
/* 3047 */    MCD::OPC_CheckPredicate, 2, 91, 18, 0, // Skip to: 7751
/* 3052 */    MCD::OPC_Decode, 191, 3, 38, // Opcode: FNADDS
/* 3056 */    MCD::OPC_FilterValue, 82, 9, 0, 0, // Skip to: 3070
/* 3061 */    MCD::OPC_CheckPredicate, 2, 77, 18, 0, // Skip to: 7751
/* 3066 */    MCD::OPC_Decode, 190, 3, 38, // Opcode: FNADDD
/* 3070 */    MCD::OPC_FilterValue, 89, 9, 0, 0, // Skip to: 3084
/* 3075 */    MCD::OPC_CheckPredicate, 2, 63, 18, 0, // Skip to: 7751
/* 3080 */    MCD::OPC_Decode, 200, 3, 38, // Opcode: FNMULS
/* 3084 */    MCD::OPC_FilterValue, 90, 9, 0, 0, // Skip to: 3098
/* 3089 */    MCD::OPC_CheckPredicate, 2, 49, 18, 0, // Skip to: 7751
/* 3094 */    MCD::OPC_Decode, 199, 3, 38, // Opcode: FNMULD
/* 3098 */    MCD::OPC_FilterValue, 97, 9, 0, 0, // Skip to: 3112
/* 3103 */    MCD::OPC_CheckPredicate, 2, 35, 18, 0, // Skip to: 7751
/* 3108 */    MCD::OPC_Decode, 152, 3, 38, // Opcode: FHADDS
/* 3112 */    MCD::OPC_FilterValue, 98, 9, 0, 0, // Skip to: 3126
/* 3117 */    MCD::OPC_CheckPredicate, 2, 21, 18, 0, // Skip to: 7751
/* 3122 */    MCD::OPC_Decode, 151, 3, 38, // Opcode: FHADDD
/* 3126 */    MCD::OPC_FilterValue, 101, 9, 0, 0, // Skip to: 3140
/* 3131 */    MCD::OPC_CheckPredicate, 2, 7, 18, 0, // Skip to: 7751
/* 3136 */    MCD::OPC_Decode, 154, 3, 38, // Opcode: FHSUBS
/* 3140 */    MCD::OPC_FilterValue, 102, 9, 0, 0, // Skip to: 3154
/* 3145 */    MCD::OPC_CheckPredicate, 2, 249, 17, 0, // Skip to: 7751
/* 3150 */    MCD::OPC_Decode, 153, 3, 38, // Opcode: FHSUBD
/* 3154 */    MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 3163
/* 3159 */    MCD::OPC_Decode, 237, 3, 40, // Opcode: FSMULD
/* 3163 */    MCD::OPC_FilterValue, 110, 4, 0, 0, // Skip to: 3172
/* 3168 */    MCD::OPC_Decode, 145, 3, 41, // Opcode: FDMULQ
/* 3172 */    MCD::OPC_FilterValue, 113, 9, 0, 0, // Skip to: 3186
/* 3177 */    MCD::OPC_CheckPredicate, 2, 217, 17, 0, // Skip to: 7751
/* 3182 */    MCD::OPC_Decode, 198, 3, 38, // Opcode: FNHADDS
/* 3186 */    MCD::OPC_FilterValue, 114, 9, 0, 0, // Skip to: 3200
/* 3191 */    MCD::OPC_CheckPredicate, 2, 203, 17, 0, // Skip to: 7751
/* 3196 */    MCD::OPC_Decode, 197, 3, 38, // Opcode: FNHADDD
/* 3200 */    MCD::OPC_FilterValue, 121, 9, 0, 0, // Skip to: 3214
/* 3205 */    MCD::OPC_CheckPredicate, 2, 189, 17, 0, // Skip to: 7751
/* 3210 */    MCD::OPC_Decode, 207, 3, 38, // Opcode: FNSMULD
/* 3214 */    MCD::OPC_FilterValue, 129, 1, 11, 0, 0, // Skip to: 3231
/* 3220 */    MCD::OPC_CheckField, 14, 5, 0, 172, 17, 0, // Skip to: 7751
/* 3227 */    MCD::OPC_Decode, 252, 3, 42, // Opcode: FSTOX
/* 3231 */    MCD::OPC_FilterValue, 130, 1, 11, 0, 0, // Skip to: 3248
/* 3237 */    MCD::OPC_CheckField, 14, 5, 0, 155, 17, 0, // Skip to: 7751
/* 3244 */    MCD::OPC_Decode, 149, 3, 35, // Opcode: FDTOX
/* 3248 */    MCD::OPC_FilterValue, 131, 1, 11, 0, 0, // Skip to: 3265
/* 3254 */    MCD::OPC_CheckField, 14, 5, 0, 138, 17, 0, // Skip to: 7751
/* 3261 */    MCD::OPC_Decode, 232, 3, 43, // Opcode: FQTOX
/* 3265 */    MCD::OPC_FilterValue, 132, 1, 11, 0, 0, // Skip to: 3282
/* 3271 */    MCD::OPC_CheckField, 14, 5, 0, 121, 17, 0, // Skip to: 7751
/* 3278 */    MCD::OPC_Decode, 134, 4, 44, // Opcode: FXTOS
/* 3282 */    MCD::OPC_FilterValue, 136, 1, 11, 0, 0, // Skip to: 3299
/* 3288 */    MCD::OPC_CheckField, 14, 5, 0, 104, 17, 0, // Skip to: 7751
/* 3295 */    MCD::OPC_Decode, 132, 4, 35, // Opcode: FXTOD
/* 3299 */    MCD::OPC_FilterValue, 140, 1, 11, 0, 0, // Skip to: 3316
/* 3305 */    MCD::OPC_CheckField, 14, 5, 0, 87, 17, 0, // Skip to: 7751
/* 3312 */    MCD::OPC_Decode, 133, 4, 45, // Opcode: FXTOQ
/* 3316 */    MCD::OPC_FilterValue, 196, 1, 11, 0, 0, // Skip to: 3333
/* 3322 */    MCD::OPC_CheckField, 14, 5, 0, 70, 17, 0, // Skip to: 7751
/* 3329 */    MCD::OPC_Decode, 157, 3, 34, // Opcode: FITOS
/* 3333 */    MCD::OPC_FilterValue, 198, 1, 11, 0, 0, // Skip to: 3350
/* 3339 */    MCD::OPC_CheckField, 14, 5, 0, 53, 17, 0, // Skip to: 7751
/* 3346 */    MCD::OPC_Decode, 148, 3, 44, // Opcode: FDTOS
/* 3350 */    MCD::OPC_FilterValue, 199, 1, 11, 0, 0, // Skip to: 3367
/* 3356 */    MCD::OPC_CheckField, 14, 5, 0, 36, 17, 0, // Skip to: 7751
/* 3363 */    MCD::OPC_Decode, 231, 3, 46, // Opcode: FQTOS
/* 3367 */    MCD::OPC_FilterValue, 200, 1, 11, 0, 0, // Skip to: 3384
/* 3373 */    MCD::OPC_CheckField, 14, 5, 0, 19, 17, 0, // Skip to: 7751
/* 3380 */    MCD::OPC_Decode, 155, 3, 42, // Opcode: FITOD
/* 3384 */    MCD::OPC_FilterValue, 201, 1, 11, 0, 0, // Skip to: 3401
/* 3390 */    MCD::OPC_CheckField, 14, 5, 0, 2, 17, 0, // Skip to: 7751
/* 3397 */    MCD::OPC_Decode, 249, 3, 42, // Opcode: FSTOD
/* 3401 */    MCD::OPC_FilterValue, 203, 1, 11, 0, 0, // Skip to: 3418
/* 3407 */    MCD::OPC_CheckField, 14, 5, 0, 241, 16, 0, // Skip to: 7751
/* 3414 */    MCD::OPC_Decode, 229, 3, 43, // Opcode: FQTOD
/* 3418 */    MCD::OPC_FilterValue, 204, 1, 11, 0, 0, // Skip to: 3435
/* 3424 */    MCD::OPC_CheckField, 14, 5, 0, 224, 16, 0, // Skip to: 7751
/* 3431 */    MCD::OPC_Decode, 156, 3, 47, // Opcode: FITOQ
/* 3435 */    MCD::OPC_FilterValue, 205, 1, 11, 0, 0, // Skip to: 3452
/* 3441 */    MCD::OPC_CheckField, 14, 5, 0, 207, 16, 0, // Skip to: 7751
/* 3448 */    MCD::OPC_Decode, 251, 3, 47, // Opcode: FSTOQ
/* 3452 */    MCD::OPC_FilterValue, 206, 1, 11, 0, 0, // Skip to: 3469
/* 3458 */    MCD::OPC_CheckField, 14, 5, 0, 190, 16, 0, // Skip to: 7751
/* 3465 */    MCD::OPC_Decode, 147, 3, 45, // Opcode: FDTOQ
/* 3469 */    MCD::OPC_FilterValue, 209, 1, 11, 0, 0, // Skip to: 3486
/* 3475 */    MCD::OPC_CheckField, 14, 5, 0, 173, 16, 0, // Skip to: 7751
/* 3482 */    MCD::OPC_Decode, 250, 3, 34, // Opcode: FSTOI
/* 3486 */    MCD::OPC_FilterValue, 210, 1, 11, 0, 0, // Skip to: 3503
/* 3492 */    MCD::OPC_CheckField, 14, 5, 0, 156, 16, 0, // Skip to: 7751
/* 3499 */    MCD::OPC_Decode, 146, 3, 44, // Opcode: FDTOI
/* 3503 */    MCD::OPC_FilterValue, 211, 1, 146, 16, 0, // Skip to: 7751
/* 3509 */    MCD::OPC_CheckField, 14, 5, 0, 139, 16, 0, // Skip to: 7751
/* 3516 */    MCD::OPC_Decode, 230, 3, 46, // Opcode: FQTOI
/* 3520 */    MCD::OPC_FilterValue, 53, 188, 1, 0, // Skip to: 3969
/* 3525 */    MCD::OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 3528 */    MCD::OPC_FilterValue, 1, 94, 0, 0, // Skip to: 3627
/* 3533 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3536 */    MCD::OPC_FilterValue, 0, 41, 0, 0, // Skip to: 3582
/* 3541 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 3544 */    MCD::OPC_FilterValue, 0, 106, 16, 0, // Skip to: 7751
/* 3549 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3552 */    MCD::OPC_FilterValue, 0, 98, 16, 0, // Skip to: 7751
/* 3557 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3573
/* 3562 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3573
/* 3569 */    MCD::OPC_Decode, 177, 3, 48, // Opcode: FMOVS_FCC
/* 3573 */    MCD::OPC_CheckPredicate, 0, 77, 16, 0, // Skip to: 7751
/* 3578 */    MCD::OPC_Decode, 237, 5, 49, // Opcode: V9FMOVS_FCC
/* 3582 */    MCD::OPC_FilterValue, 1, 68, 16, 0, // Skip to: 7751
/* 3587 */    MCD::OPC_ExtractField, 10, 3,  // Inst{12-10} ...
/* 3590 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3611
/* 3595 */    MCD::OPC_CheckPredicate, 0, 55, 16, 0, // Skip to: 7751
/* 3600 */    MCD::OPC_CheckField, 18, 1, 0, 48, 16, 0, // Skip to: 7751
/* 3607 */    MCD::OPC_Decode, 178, 3, 48, // Opcode: FMOVS_ICC
/* 3611 */    MCD::OPC_FilterValue, 4, 39, 16, 0, // Skip to: 7751
/* 3616 */    MCD::OPC_CheckField, 18, 1, 0, 32, 16, 0, // Skip to: 7751
/* 3623 */    MCD::OPC_Decode, 179, 3, 48, // Opcode: FMOVS_XCC
/* 3627 */    MCD::OPC_FilterValue, 2, 94, 0, 0, // Skip to: 3726
/* 3632 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3635 */    MCD::OPC_FilterValue, 0, 41, 0, 0, // Skip to: 3681
/* 3640 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 3643 */    MCD::OPC_FilterValue, 0, 7, 16, 0, // Skip to: 7751
/* 3648 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3651 */    MCD::OPC_FilterValue, 0, 255, 15, 0, // Skip to: 7751
/* 3656 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3672
/* 3661 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3672
/* 3668 */    MCD::OPC_Decode, 166, 3, 50, // Opcode: FMOVD_FCC
/* 3672 */    MCD::OPC_CheckPredicate, 0, 234, 15, 0, // Skip to: 7751
/* 3677 */    MCD::OPC_Decode, 235, 5, 51, // Opcode: V9FMOVD_FCC
/* 3681 */    MCD::OPC_FilterValue, 1, 225, 15, 0, // Skip to: 7751
/* 3686 */    MCD::OPC_ExtractField, 10, 3,  // Inst{12-10} ...
/* 3689 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3710
/* 3694 */    MCD::OPC_CheckPredicate, 0, 212, 15, 0, // Skip to: 7751
/* 3699 */    MCD::OPC_CheckField, 18, 1, 0, 205, 15, 0, // Skip to: 7751
/* 3706 */    MCD::OPC_Decode, 167, 3, 50, // Opcode: FMOVD_ICC
/* 3710 */    MCD::OPC_FilterValue, 4, 196, 15, 0, // Skip to: 7751
/* 3715 */    MCD::OPC_CheckField, 18, 1, 0, 189, 15, 0, // Skip to: 7751
/* 3722 */    MCD::OPC_Decode, 168, 3, 50, // Opcode: FMOVD_XCC
/* 3726 */    MCD::OPC_FilterValue, 3, 94, 0, 0, // Skip to: 3825
/* 3731 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3734 */    MCD::OPC_FilterValue, 0, 41, 0, 0, // Skip to: 3780
/* 3739 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 3742 */    MCD::OPC_FilterValue, 0, 164, 15, 0, // Skip to: 7751
/* 3747 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3750 */    MCD::OPC_FilterValue, 0, 156, 15, 0, // Skip to: 7751
/* 3755 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3771
/* 3760 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3771
/* 3767 */    MCD::OPC_Decode, 170, 3, 52, // Opcode: FMOVQ_FCC
/* 3771 */    MCD::OPC_CheckPredicate, 0, 135, 15, 0, // Skip to: 7751
/* 3776 */    MCD::OPC_Decode, 236, 5, 53, // Opcode: V9FMOVQ_FCC
/* 3780 */    MCD::OPC_FilterValue, 1, 126, 15, 0, // Skip to: 7751
/* 3785 */    MCD::OPC_ExtractField, 10, 3,  // Inst{12-10} ...
/* 3788 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3809
/* 3793 */    MCD::OPC_CheckPredicate, 0, 113, 15, 0, // Skip to: 7751
/* 3798 */    MCD::OPC_CheckField, 18, 1, 0, 106, 15, 0, // Skip to: 7751
/* 3805 */    MCD::OPC_Decode, 171, 3, 52, // Opcode: FMOVQ_ICC
/* 3809 */    MCD::OPC_FilterValue, 4, 97, 15, 0, // Skip to: 7751
/* 3814 */    MCD::OPC_CheckField, 18, 1, 0, 90, 15, 0, // Skip to: 7751
/* 3821 */    MCD::OPC_Decode, 172, 3, 52, // Opcode: FMOVQ_XCC
/* 3825 */    MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 3841
/* 3830 */    MCD::OPC_CheckField, 13, 1, 0, 74, 15, 0, // Skip to: 7751
/* 3837 */    MCD::OPC_Decode, 175, 3, 54, // Opcode: FMOVRS
/* 3841 */    MCD::OPC_FilterValue, 6, 11, 0, 0, // Skip to: 3857
/* 3846 */    MCD::OPC_CheckField, 13, 1, 0, 58, 15, 0, // Skip to: 7751
/* 3853 */    MCD::OPC_Decode, 173, 3, 55, // Opcode: FMOVRD
/* 3857 */    MCD::OPC_FilterValue, 7, 11, 0, 0, // Skip to: 3873
/* 3862 */    MCD::OPC_CheckField, 13, 1, 0, 42, 15, 0, // Skip to: 7751
/* 3869 */    MCD::OPC_Decode, 174, 3, 56, // Opcode: FMOVRQ
/* 3873 */    MCD::OPC_FilterValue, 17, 11, 0, 0, // Skip to: 3889
/* 3878 */    MCD::OPC_CheckField, 10, 4, 2, 26, 15, 0, // Skip to: 7751
/* 3885 */    MCD::OPC_Decode, 234, 5, 57, // Opcode: V9FCMPS
/* 3889 */    MCD::OPC_FilterValue, 18, 11, 0, 0, // Skip to: 3905
/* 3894 */    MCD::OPC_CheckField, 10, 4, 2, 10, 15, 0, // Skip to: 7751
/* 3901 */    MCD::OPC_Decode, 229, 5, 58, // Opcode: V9FCMPD
/* 3905 */    MCD::OPC_FilterValue, 19, 11, 0, 0, // Skip to: 3921
/* 3910 */    MCD::OPC_CheckField, 10, 4, 2, 250, 14, 0, // Skip to: 7751
/* 3917 */    MCD::OPC_Decode, 233, 5, 59, // Opcode: V9FCMPQ
/* 3921 */    MCD::OPC_FilterValue, 21, 11, 0, 0, // Skip to: 3937
/* 3926 */    MCD::OPC_CheckField, 10, 4, 2, 234, 14, 0, // Skip to: 7751
/* 3933 */    MCD::OPC_Decode, 232, 5, 57, // Opcode: V9FCMPES
/* 3937 */    MCD::OPC_FilterValue, 22, 11, 0, 0, // Skip to: 3953
/* 3942 */    MCD::OPC_CheckField, 10, 4, 2, 218, 14, 0, // Skip to: 7751
/* 3949 */    MCD::OPC_Decode, 230, 5, 58, // Opcode: V9FCMPED
/* 3953 */    MCD::OPC_FilterValue, 23, 209, 14, 0, // Skip to: 7751
/* 3958 */    MCD::OPC_CheckField, 10, 4, 2, 202, 14, 0, // Skip to: 7751
/* 3965 */    MCD::OPC_Decode, 231, 5, 59, // Opcode: V9FCMPEQ
/* 3969 */    MCD::OPC_FilterValue, 54, 35, 7, 0, // Skip to: 5801
/* 3974 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3977 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 3991
/* 3982 */    MCD::OPC_CheckPredicate, 3, 180, 14, 0, // Skip to: 7751
/* 3987 */    MCD::OPC_Decode, 234, 2, 11, // Opcode: EDGE8
/* 3991 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4005
/* 3996 */    MCD::OPC_CheckPredicate, 4, 166, 14, 0, // Skip to: 7751
/* 4001 */    MCD::OPC_Decode, 237, 2, 11, // Opcode: EDGE8N
/* 4005 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4019
/* 4010 */    MCD::OPC_CheckPredicate, 3, 152, 14, 0, // Skip to: 7751
/* 4015 */    MCD::OPC_Decode, 235, 2, 11, // Opcode: EDGE8L
/* 4019 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 4033
/* 4024 */    MCD::OPC_CheckPredicate, 4, 138, 14, 0, // Skip to: 7751
/* 4029 */    MCD::OPC_Decode, 236, 2, 11, // Opcode: EDGE8LN
/* 4033 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4047
/* 4038 */    MCD::OPC_CheckPredicate, 3, 124, 14, 0, // Skip to: 7751
/* 4043 */    MCD::OPC_Decode, 226, 2, 11, // Opcode: EDGE16
/* 4047 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4061
/* 4052 */    MCD::OPC_CheckPredicate, 4, 110, 14, 0, // Skip to: 7751
/* 4057 */    MCD::OPC_Decode, 229, 2, 11, // Opcode: EDGE16N
/* 4061 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 4075
/* 4066 */    MCD::OPC_CheckPredicate, 3, 96, 14, 0, // Skip to: 7751
/* 4071 */    MCD::OPC_Decode, 227, 2, 11, // Opcode: EDGE16L
/* 4075 */    MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 4089
/* 4080 */    MCD::OPC_CheckPredicate, 4, 82, 14, 0, // Skip to: 7751
/* 4085 */    MCD::OPC_Decode, 228, 2, 11, // Opcode: EDGE16LN
/* 4089 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 4103
/* 4094 */    MCD::OPC_CheckPredicate, 3, 68, 14, 0, // Skip to: 7751
/* 4099 */    MCD::OPC_Decode, 230, 2, 11, // Opcode: EDGE32
/* 4103 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 4117
/* 4108 */    MCD::OPC_CheckPredicate, 4, 54, 14, 0, // Skip to: 7751
/* 4113 */    MCD::OPC_Decode, 233, 2, 11, // Opcode: EDGE32N
/* 4117 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 4131
/* 4122 */    MCD::OPC_CheckPredicate, 3, 40, 14, 0, // Skip to: 7751
/* 4127 */    MCD::OPC_Decode, 231, 2, 11, // Opcode: EDGE32L
/* 4131 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 4145
/* 4136 */    MCD::OPC_CheckPredicate, 4, 26, 14, 0, // Skip to: 7751
/* 4141 */    MCD::OPC_Decode, 232, 2, 11, // Opcode: EDGE32LN
/* 4145 */    MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 4159
/* 4150 */    MCD::OPC_CheckPredicate, 3, 12, 14, 0, // Skip to: 7751
/* 4155 */    MCD::OPC_Decode, 167, 2, 11, // Opcode: ARRAY8
/* 4159 */    MCD::OPC_FilterValue, 17, 9, 0, 0, // Skip to: 4173
/* 4164 */    MCD::OPC_CheckPredicate, 2, 254, 13, 0, // Skip to: 7751
/* 4169 */    MCD::OPC_Decode, 146, 2, 11, // Opcode: ADDXC
/* 4173 */    MCD::OPC_FilterValue, 18, 9, 0, 0, // Skip to: 4187
/* 4178 */    MCD::OPC_CheckPredicate, 3, 240, 13, 0, // Skip to: 7751
/* 4183 */    MCD::OPC_Decode, 165, 2, 11, // Opcode: ARRAY16
/* 4187 */    MCD::OPC_FilterValue, 19, 9, 0, 0, // Skip to: 4201
/* 4192 */    MCD::OPC_CheckPredicate, 2, 226, 13, 0, // Skip to: 7751
/* 4197 */    MCD::OPC_Decode, 147, 2, 11, // Opcode: ADDXCCC
/* 4201 */    MCD::OPC_FilterValue, 20, 9, 0, 0, // Skip to: 4215
/* 4206 */    MCD::OPC_CheckPredicate, 3, 212, 13, 0, // Skip to: 7751
/* 4211 */    MCD::OPC_Decode, 166, 2, 11, // Opcode: ARRAY32
/* 4215 */    MCD::OPC_FilterValue, 22, 9, 0, 0, // Skip to: 4229
/* 4220 */    MCD::OPC_CheckPredicate, 2, 198, 13, 0, // Skip to: 7751
/* 4225 */    MCD::OPC_Decode, 225, 5, 11, // Opcode: UMULXHI
/* 4229 */    MCD::OPC_FilterValue, 23, 16, 0, 0, // Skip to: 4250
/* 4234 */    MCD::OPC_CheckPredicate, 2, 184, 13, 0, // Skip to: 7751
/* 4239 */    MCD::OPC_CheckField, 14, 5, 0, 177, 13, 0, // Skip to: 7751
/* 4246 */    MCD::OPC_Decode, 187, 4, 60, // Opcode: LZCNT
/* 4250 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 4264
/* 4255 */    MCD::OPC_CheckPredicate, 3, 163, 13, 0, // Skip to: 7751
/* 4260 */    MCD::OPC_Decode, 152, 2, 11, // Opcode: ALIGNADDR
/* 4264 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 4278
/* 4269 */    MCD::OPC_CheckPredicate, 4, 149, 13, 0, // Skip to: 7751
/* 4274 */    MCD::OPC_Decode, 173, 2, 11, // Opcode: BMASK
/* 4278 */    MCD::OPC_FilterValue, 26, 9, 0, 0, // Skip to: 4292
/* 4283 */    MCD::OPC_CheckPredicate, 3, 135, 13, 0, // Skip to: 7751
/* 4288 */    MCD::OPC_Decode, 153, 2, 11, // Opcode: ALIGNADDRL
/* 4292 */    MCD::OPC_FilterValue, 27, 23, 0, 0, // Skip to: 4320
/* 4297 */    MCD::OPC_CheckPredicate, 2, 121, 13, 0, // Skip to: 7751
/* 4302 */    MCD::OPC_CheckField, 25, 5, 0, 114, 13, 0, // Skip to: 7751
/* 4309 */    MCD::OPC_CheckField, 14, 5, 0, 107, 13, 0, // Skip to: 7751
/* 4316 */    MCD::OPC_Decode, 223, 2, 61, // Opcode: CMASK8
/* 4320 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 4334
/* 4325 */    MCD::OPC_CheckPredicate, 4, 93, 13, 0, // Skip to: 7751
/* 4330 */    MCD::OPC_Decode, 211, 2, 38, // Opcode: BSHUFFLE
/* 4334 */    MCD::OPC_FilterValue, 29, 23, 0, 0, // Skip to: 4362
/* 4339 */    MCD::OPC_CheckPredicate, 2, 79, 13, 0, // Skip to: 7751
/* 4344 */    MCD::OPC_CheckField, 25, 5, 0, 72, 13, 0, // Skip to: 7751
/* 4351 */    MCD::OPC_CheckField, 14, 5, 0, 65, 13, 0, // Skip to: 7751
/* 4358 */    MCD::OPC_Decode, 221, 2, 61, // Opcode: CMASK16
/* 4362 */    MCD::OPC_FilterValue, 31, 23, 0, 0, // Skip to: 4390
/* 4367 */    MCD::OPC_CheckPredicate, 2, 51, 13, 0, // Skip to: 7751
/* 4372 */    MCD::OPC_CheckField, 25, 5, 0, 44, 13, 0, // Skip to: 7751
/* 4379 */    MCD::OPC_CheckField, 14, 5, 0, 37, 13, 0, // Skip to: 7751
/* 4386 */    MCD::OPC_Decode, 222, 2, 61, // Opcode: CMASK32
/* 4390 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 4404
/* 4395 */    MCD::OPC_CheckPredicate, 3, 23, 13, 0, // Skip to: 7751
/* 4400 */    MCD::OPC_Decode, 134, 3, 62, // Opcode: FCMPLE16
/* 4404 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 4418
/* 4409 */    MCD::OPC_CheckPredicate, 2, 9, 13, 0, // Skip to: 7751
/* 4414 */    MCD::OPC_Decode, 235, 3, 38, // Opcode: FSLL16
/* 4418 */    MCD::OPC_FilterValue, 34, 9, 0, 0, // Skip to: 4432
/* 4423 */    MCD::OPC_CheckPredicate, 3, 251, 12, 0, // Skip to: 7751
/* 4428 */    MCD::OPC_Decode, 136, 3, 62, // Opcode: FCMPNE16
/* 4432 */    MCD::OPC_FilterValue, 35, 9, 0, 0, // Skip to: 4446
/* 4437 */    MCD::OPC_CheckPredicate, 2, 237, 12, 0, // Skip to: 7751
/* 4442 */    MCD::OPC_Decode, 247, 3, 38, // Opcode: FSRL16
/* 4446 */    MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 4460
/* 4451 */    MCD::OPC_CheckPredicate, 3, 223, 12, 0, // Skip to: 7751
/* 4456 */    MCD::OPC_Decode, 135, 3, 62, // Opcode: FCMPLE32
/* 4460 */    MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 4474
/* 4465 */    MCD::OPC_CheckPredicate, 2, 209, 12, 0, // Skip to: 7751
/* 4470 */    MCD::OPC_Decode, 236, 3, 38, // Opcode: FSLL32
/* 4474 */    MCD::OPC_FilterValue, 38, 9, 0, 0, // Skip to: 4488
/* 4479 */    MCD::OPC_CheckPredicate, 3, 195, 12, 0, // Skip to: 7751
/* 4484 */    MCD::OPC_Decode, 137, 3, 62, // Opcode: FCMPNE32
/* 4488 */    MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 4502
/* 4493 */    MCD::OPC_CheckPredicate, 2, 181, 12, 0, // Skip to: 7751
/* 4498 */    MCD::OPC_Decode, 248, 3, 38, // Opcode: FSRL32
/* 4502 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 4516
/* 4507 */    MCD::OPC_CheckPredicate, 3, 167, 12, 0, // Skip to: 7751
/* 4512 */    MCD::OPC_Decode, 132, 3, 62, // Opcode: FCMPGT16
/* 4516 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 4530
/* 4521 */    MCD::OPC_CheckPredicate, 2, 153, 12, 0, // Skip to: 7751
/* 4526 */    MCD::OPC_Decode, 233, 3, 38, // Opcode: FSLAS16
/* 4530 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 4544
/* 4535 */    MCD::OPC_CheckPredicate, 3, 139, 12, 0, // Skip to: 7751
/* 4540 */    MCD::OPC_Decode, 130, 3, 62, // Opcode: FCMPEQ16
/* 4544 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 4558
/* 4549 */    MCD::OPC_CheckPredicate, 2, 125, 12, 0, // Skip to: 7751
/* 4554 */    MCD::OPC_Decode, 241, 3, 38, // Opcode: FSRA16
/* 4558 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 4572
/* 4563 */    MCD::OPC_CheckPredicate, 3, 111, 12, 0, // Skip to: 7751
/* 4568 */    MCD::OPC_Decode, 133, 3, 62, // Opcode: FCMPGT32
/* 4572 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 4586
/* 4577 */    MCD::OPC_CheckPredicate, 2, 97, 12, 0, // Skip to: 7751
/* 4582 */    MCD::OPC_Decode, 234, 3, 38, // Opcode: FSLAS32
/* 4586 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 4600
/* 4591 */    MCD::OPC_CheckPredicate, 3, 83, 12, 0, // Skip to: 7751
/* 4596 */    MCD::OPC_Decode, 131, 3, 62, // Opcode: FCMPEQ32
/* 4600 */    MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 4614
/* 4605 */    MCD::OPC_CheckPredicate, 2, 69, 12, 0, // Skip to: 7751
/* 4610 */    MCD::OPC_Decode, 242, 3, 38, // Opcode: FSRA32
/* 4614 */    MCD::OPC_FilterValue, 49, 9, 0, 0, // Skip to: 4628
/* 4619 */    MCD::OPC_CheckPredicate, 3, 55, 12, 0, // Skip to: 7751
/* 4624 */    MCD::OPC_Decode, 182, 3, 38, // Opcode: FMUL8X16
/* 4628 */    MCD::OPC_FilterValue, 51, 9, 0, 0, // Skip to: 4642
/* 4633 */    MCD::OPC_CheckPredicate, 3, 41, 12, 0, // Skip to: 7751
/* 4638 */    MCD::OPC_Decode, 184, 3, 38, // Opcode: FMUL8X16AU
/* 4642 */    MCD::OPC_FilterValue, 53, 9, 0, 0, // Skip to: 4656
/* 4647 */    MCD::OPC_CheckPredicate, 3, 27, 12, 0, // Skip to: 7751
/* 4652 */    MCD::OPC_Decode, 183, 3, 38, // Opcode: FMUL8X16AL
/* 4656 */    MCD::OPC_FilterValue, 54, 9, 0, 0, // Skip to: 4670
/* 4661 */    MCD::OPC_CheckPredicate, 3, 13, 12, 0, // Skip to: 7751
/* 4666 */    MCD::OPC_Decode, 180, 3, 38, // Opcode: FMUL8SUX16
/* 4670 */    MCD::OPC_FilterValue, 55, 9, 0, 0, // Skip to: 4684
/* 4675 */    MCD::OPC_CheckPredicate, 3, 255, 11, 0, // Skip to: 7751
/* 4680 */    MCD::OPC_Decode, 181, 3, 38, // Opcode: FMUL8ULX16
/* 4684 */    MCD::OPC_FilterValue, 56, 9, 0, 0, // Skip to: 4698
/* 4689 */    MCD::OPC_CheckPredicate, 3, 241, 11, 0, // Skip to: 7751
/* 4694 */    MCD::OPC_Decode, 186, 3, 38, // Opcode: FMULD8SUX16
/* 4698 */    MCD::OPC_FilterValue, 57, 9, 0, 0, // Skip to: 4712
/* 4703 */    MCD::OPC_CheckPredicate, 3, 227, 11, 0, // Skip to: 7751
/* 4708 */    MCD::OPC_Decode, 187, 3, 38, // Opcode: FMULD8ULX16
/* 4712 */    MCD::OPC_FilterValue, 58, 9, 0, 0, // Skip to: 4726
/* 4717 */    MCD::OPC_CheckPredicate, 3, 213, 11, 0, // Skip to: 7751
/* 4722 */    MCD::OPC_Decode, 217, 3, 38, // Opcode: FPACK32
/* 4726 */    MCD::OPC_FilterValue, 59, 16, 0, 0, // Skip to: 4747
/* 4731 */    MCD::OPC_CheckPredicate, 3, 199, 11, 0, // Skip to: 7751
/* 4736 */    MCD::OPC_CheckField, 14, 5, 0, 192, 11, 0, // Skip to: 7751
/* 4743 */    MCD::OPC_Decode, 216, 3, 35, // Opcode: FPACK16
/* 4747 */    MCD::OPC_FilterValue, 61, 16, 0, 0, // Skip to: 4768
/* 4752 */    MCD::OPC_CheckPredicate, 3, 178, 11, 0, // Skip to: 7751
/* 4757 */    MCD::OPC_CheckField, 14, 5, 0, 171, 11, 0, // Skip to: 7751
/* 4764 */    MCD::OPC_Decode, 218, 3, 35, // Opcode: FPACKFIX
/* 4768 */    MCD::OPC_FilterValue, 62, 9, 0, 0, // Skip to: 4782
/* 4773 */    MCD::OPC_CheckPredicate, 3, 157, 11, 0, // Skip to: 7751
/* 4778 */    MCD::OPC_Decode, 218, 4, 38, // Opcode: PDIST
/* 4782 */    MCD::OPC_FilterValue, 63, 9, 0, 0, // Skip to: 4796
/* 4787 */    MCD::OPC_CheckPredicate, 2, 143, 11, 0, // Skip to: 7751
/* 4792 */    MCD::OPC_Decode, 219, 4, 38, // Opcode: PDISTN
/* 4796 */    MCD::OPC_FilterValue, 64, 9, 0, 0, // Skip to: 4810
/* 4801 */    MCD::OPC_CheckPredicate, 2, 129, 11, 0, // Skip to: 7751
/* 4806 */    MCD::OPC_Decode, 164, 3, 38, // Opcode: FMEAN16
/* 4810 */    MCD::OPC_FilterValue, 66, 9, 0, 0, // Skip to: 4824
/* 4815 */    MCD::OPC_CheckPredicate, 2, 115, 11, 0, // Skip to: 7751
/* 4820 */    MCD::OPC_Decode, 223, 3, 38, // Opcode: FPADD64
/* 4824 */    MCD::OPC_FilterValue, 68, 9, 0, 0, // Skip to: 4838
/* 4829 */    MCD::OPC_CheckPredicate, 2, 101, 11, 0, // Skip to: 7751
/* 4834 */    MCD::OPC_Decode, 255, 2, 38, // Opcode: FCHKSM16
/* 4838 */    MCD::OPC_FilterValue, 72, 9, 0, 0, // Skip to: 4852
/* 4843 */    MCD::OPC_CheckPredicate, 3, 87, 11, 0, // Skip to: 7751
/* 4848 */    MCD::OPC_Decode, 244, 2, 38, // Opcode: FALIGNADATA
/* 4852 */    MCD::OPC_FilterValue, 75, 9, 0, 0, // Skip to: 4866
/* 4857 */    MCD::OPC_CheckPredicate, 3, 73, 11, 0, // Skip to: 7751
/* 4862 */    MCD::OPC_Decode, 224, 3, 38, // Opcode: FPMERGE
/* 4866 */    MCD::OPC_FilterValue, 77, 16, 0, 0, // Skip to: 4887
/* 4871 */    MCD::OPC_CheckPredicate, 3, 59, 11, 0, // Skip to: 7751
/* 4876 */    MCD::OPC_CheckField, 14, 5, 0, 52, 11, 0, // Skip to: 7751
/* 4883 */    MCD::OPC_Decode, 150, 3, 35, // Opcode: FEXPAND
/* 4887 */    MCD::OPC_FilterValue, 80, 9, 0, 0, // Skip to: 4901
/* 4892 */    MCD::OPC_CheckPredicate, 3, 38, 11, 0, // Skip to: 7751
/* 4897 */    MCD::OPC_Decode, 219, 3, 38, // Opcode: FPADD16
/* 4901 */    MCD::OPC_FilterValue, 81, 9, 0, 0, // Skip to: 4915
/* 4906 */    MCD::OPC_CheckPredicate, 3, 24, 11, 0, // Skip to: 7751
/* 4911 */    MCD::OPC_Decode, 220, 3, 38, // Opcode: FPADD16S
/* 4915 */    MCD::OPC_FilterValue, 82, 9, 0, 0, // Skip to: 4929
/* 4920 */    MCD::OPC_CheckPredicate, 3, 10, 11, 0, // Skip to: 7751
/* 4925 */    MCD::OPC_Decode, 221, 3, 38, // Opcode: FPADD32
/* 4929 */    MCD::OPC_FilterValue, 83, 9, 0, 0, // Skip to: 4943
/* 4934 */    MCD::OPC_CheckPredicate, 3, 252, 10, 0, // Skip to: 7751
/* 4939 */    MCD::OPC_Decode, 222, 3, 38, // Opcode: FPADD32S
/* 4943 */    MCD::OPC_FilterValue, 84, 9, 0, 0, // Skip to: 4957
/* 4948 */    MCD::OPC_CheckPredicate, 3, 238, 10, 0, // Skip to: 7751
/* 4953 */    MCD::OPC_Decode, 225, 3, 38, // Opcode: FPSUB16
/* 4957 */    MCD::OPC_FilterValue, 85, 9, 0, 0, // Skip to: 4971
/* 4962 */    MCD::OPC_CheckPredicate, 3, 224, 10, 0, // Skip to: 7751
/* 4967 */    MCD::OPC_Decode, 226, 3, 38, // Opcode: FPSUB16S
/* 4971 */    MCD::OPC_FilterValue, 86, 9, 0, 0, // Skip to: 4985
/* 4976 */    MCD::OPC_CheckPredicate, 3, 210, 10, 0, // Skip to: 7751
/* 4981 */    MCD::OPC_Decode, 227, 3, 38, // Opcode: FPSUB32
/* 4985 */    MCD::OPC_FilterValue, 87, 9, 0, 0, // Skip to: 4999
/* 4990 */    MCD::OPC_CheckPredicate, 3, 196, 10, 0, // Skip to: 7751
/* 4995 */    MCD::OPC_Decode, 228, 3, 38, // Opcode: FPSUB32S
/* 4999 */    MCD::OPC_FilterValue, 96, 23, 0, 0, // Skip to: 5027
/* 5004 */    MCD::OPC_CheckPredicate, 3, 182, 10, 0, // Skip to: 7751
/* 5009 */    MCD::OPC_CheckField, 14, 5, 0, 175, 10, 0, // Skip to: 7751
/* 5016 */    MCD::OPC_CheckField, 0, 5, 0, 168, 10, 0, // Skip to: 7751
/* 5023 */    MCD::OPC_Decode, 135, 4, 63, // Opcode: FZERO
/* 5027 */    MCD::OPC_FilterValue, 97, 23, 0, 0, // Skip to: 5055
/* 5032 */    MCD::OPC_CheckPredicate, 3, 154, 10, 0, // Skip to: 7751
/* 5037 */    MCD::OPC_CheckField, 14, 5, 0, 147, 10, 0, // Skip to: 7751
/* 5044 */    MCD::OPC_CheckField, 0, 5, 0, 140, 10, 0, // Skip to: 7751
/* 5051 */    MCD::OPC_Decode, 136, 4, 64, // Opcode: FZEROS
/* 5055 */    MCD::OPC_FilterValue, 98, 9, 0, 0, // Skip to: 5069
/* 5060 */    MCD::OPC_CheckPredicate, 3, 126, 10, 0, // Skip to: 7751
/* 5065 */    MCD::OPC_Decode, 201, 3, 38, // Opcode: FNOR
/* 5069 */    MCD::OPC_FilterValue, 99, 9, 0, 0, // Skip to: 5083
/* 5074 */    MCD::OPC_CheckPredicate, 3, 112, 10, 0, // Skip to: 7751
/* 5079 */    MCD::OPC_Decode, 202, 3, 37, // Opcode: FNORS
/* 5083 */    MCD::OPC_FilterValue, 100, 9, 0, 0, // Skip to: 5097
/* 5088 */    MCD::OPC_CheckPredicate, 3, 98, 10, 0, // Skip to: 7751
/* 5093 */    MCD::OPC_Decode, 248, 2, 38, // Opcode: FANDNOT2
/* 5097 */    MCD::OPC_FilterValue, 101, 9, 0, 0, // Skip to: 5111
/* 5102 */    MCD::OPC_CheckPredicate, 3, 84, 10, 0, // Skip to: 7751
/* 5107 */    MCD::OPC_Decode, 249, 2, 37, // Opcode: FANDNOT2S
/* 5111 */    MCD::OPC_FilterValue, 102, 16, 0, 0, // Skip to: 5132
/* 5116 */    MCD::OPC_CheckPredicate, 3, 70, 10, 0, // Skip to: 7751
/* 5121 */    MCD::OPC_CheckField, 14, 5, 0, 63, 10, 0, // Skip to: 7751
/* 5128 */    MCD::OPC_Decode, 205, 3, 35, // Opcode: FNOT2
/* 5132 */    MCD::OPC_FilterValue, 103, 16, 0, 0, // Skip to: 5153
/* 5137 */    MCD::OPC_CheckPredicate, 3, 49, 10, 0, // Skip to: 7751
/* 5142 */    MCD::OPC_CheckField, 14, 5, 0, 42, 10, 0, // Skip to: 7751
/* 5149 */    MCD::OPC_Decode, 206, 3, 34, // Opcode: FNOT2S
/* 5153 */    MCD::OPC_FilterValue, 104, 9, 0, 0, // Skip to: 5167
/* 5158 */    MCD::OPC_CheckPredicate, 3, 28, 10, 0, // Skip to: 7751
/* 5163 */    MCD::OPC_Decode, 246, 2, 38, // Opcode: FANDNOT1
/* 5167 */    MCD::OPC_FilterValue, 105, 9, 0, 0, // Skip to: 5181
/* 5172 */    MCD::OPC_CheckPredicate, 3, 14, 10, 0, // Skip to: 7751
/* 5177 */    MCD::OPC_Decode, 247, 2, 37, // Opcode: FANDNOT1S
/* 5181 */    MCD::OPC_FilterValue, 106, 16, 0, 0, // Skip to: 5202
/* 5186 */    MCD::OPC_CheckPredicate, 3, 0, 10, 0, // Skip to: 7751
/* 5191 */    MCD::OPC_CheckField, 0, 5, 0, 249, 9, 0, // Skip to: 7751
/* 5198 */    MCD::OPC_Decode, 203, 3, 65, // Opcode: FNOT1
/* 5202 */    MCD::OPC_FilterValue, 107, 16, 0, 0, // Skip to: 5223
/* 5207 */    MCD::OPC_CheckPredicate, 3, 235, 9, 0, // Skip to: 7751
/* 5212 */    MCD::OPC_CheckField, 0, 5, 0, 228, 9, 0, // Skip to: 7751
/* 5219 */    MCD::OPC_Decode, 204, 3, 66, // Opcode: FNOT1S
/* 5223 */    MCD::OPC_FilterValue, 108, 9, 0, 0, // Skip to: 5237
/* 5228 */    MCD::OPC_CheckPredicate, 3, 214, 9, 0, // Skip to: 7751
/* 5233 */    MCD::OPC_Decode, 130, 4, 38, // Opcode: FXOR
/* 5237 */    MCD::OPC_FilterValue, 109, 9, 0, 0, // Skip to: 5251
/* 5242 */    MCD::OPC_CheckPredicate, 3, 200, 9, 0, // Skip to: 7751
/* 5247 */    MCD::OPC_Decode, 131, 4, 37, // Opcode: FXORS
/* 5251 */    MCD::OPC_FilterValue, 110, 9, 0, 0, // Skip to: 5265
/* 5256 */    MCD::OPC_CheckPredicate, 3, 186, 9, 0, // Skip to: 7751
/* 5261 */    MCD::OPC_Decode, 192, 3, 38, // Opcode: FNAND
/* 5265 */    MCD::OPC_FilterValue, 111, 9, 0, 0, // Skip to: 5279
/* 5270 */    MCD::OPC_CheckPredicate, 3, 172, 9, 0, // Skip to: 7751
/* 5275 */    MCD::OPC_Decode, 193, 3, 37, // Opcode: FNANDS
/* 5279 */    MCD::OPC_FilterValue, 112, 9, 0, 0, // Skip to: 5293
/* 5284 */    MCD::OPC_CheckPredicate, 3, 158, 9, 0, // Skip to: 7751
/* 5289 */    MCD::OPC_Decode, 245, 2, 38, // Opcode: FAND
/* 5293 */    MCD::OPC_FilterValue, 113, 9, 0, 0, // Skip to: 5307
/* 5298 */    MCD::OPC_CheckPredicate, 3, 144, 9, 0, // Skip to: 7751
/* 5303 */    MCD::OPC_Decode, 250, 2, 37, // Opcode: FANDS
/* 5307 */    MCD::OPC_FilterValue, 114, 9, 0, 0, // Skip to: 5321
/* 5312 */    MCD::OPC_CheckPredicate, 3, 130, 9, 0, // Skip to: 7751
/* 5317 */    MCD::OPC_Decode, 128, 4, 38, // Opcode: FXNOR
/* 5321 */    MCD::OPC_FilterValue, 115, 9, 0, 0, // Skip to: 5335
/* 5326 */    MCD::OPC_CheckPredicate, 3, 116, 9, 0, // Skip to: 7751
/* 5331 */    MCD::OPC_Decode, 129, 4, 37, // Opcode: FXNORS
/* 5335 */    MCD::OPC_FilterValue, 116, 16, 0, 0, // Skip to: 5356
/* 5340 */    MCD::OPC_CheckPredicate, 3, 102, 9, 0, // Skip to: 7751
/* 5345 */    MCD::OPC_CheckField, 0, 5, 0, 95, 9, 0, // Skip to: 7751
/* 5352 */    MCD::OPC_Decode, 243, 3, 65, // Opcode: FSRC1
/* 5356 */    MCD::OPC_FilterValue, 117, 16, 0, 0, // Skip to: 5377
/* 5361 */    MCD::OPC_CheckPredicate, 3, 81, 9, 0, // Skip to: 7751
/* 5366 */    MCD::OPC_CheckField, 0, 5, 0, 74, 9, 0, // Skip to: 7751
/* 5373 */    MCD::OPC_Decode, 244, 3, 66, // Opcode: FSRC1S
/* 5377 */    MCD::OPC_FilterValue, 118, 9, 0, 0, // Skip to: 5391
/* 5382 */    MCD::OPC_CheckPredicate, 3, 60, 9, 0, // Skip to: 7751
/* 5387 */    MCD::OPC_Decode, 213, 3, 38, // Opcode: FORNOT2
/* 5391 */    MCD::OPC_FilterValue, 119, 9, 0, 0, // Skip to: 5405
/* 5396 */    MCD::OPC_CheckPredicate, 3, 46, 9, 0, // Skip to: 7751
/* 5401 */    MCD::OPC_Decode, 214, 3, 37, // Opcode: FORNOT2S
/* 5405 */    MCD::OPC_FilterValue, 120, 16, 0, 0, // Skip to: 5426
/* 5410 */    MCD::OPC_CheckPredicate, 3, 32, 9, 0, // Skip to: 7751
/* 5415 */    MCD::OPC_CheckField, 14, 5, 0, 25, 9, 0, // Skip to: 7751
/* 5422 */    MCD::OPC_Decode, 245, 3, 35, // Opcode: FSRC2
/* 5426 */    MCD::OPC_FilterValue, 121, 16, 0, 0, // Skip to: 5447
/* 5431 */    MCD::OPC_CheckPredicate, 3, 11, 9, 0, // Skip to: 7751
/* 5436 */    MCD::OPC_CheckField, 14, 5, 0, 4, 9, 0, // Skip to: 7751
/* 5443 */    MCD::OPC_Decode, 246, 3, 34, // Opcode: FSRC2S
/* 5447 */    MCD::OPC_FilterValue, 122, 9, 0, 0, // Skip to: 5461
/* 5452 */    MCD::OPC_CheckPredicate, 3, 246, 8, 0, // Skip to: 7751
/* 5457 */    MCD::OPC_Decode, 211, 3, 38, // Opcode: FORNOT1
/* 5461 */    MCD::OPC_FilterValue, 123, 9, 0, 0, // Skip to: 5475
/* 5466 */    MCD::OPC_CheckPredicate, 3, 232, 8, 0, // Skip to: 7751
/* 5471 */    MCD::OPC_Decode, 212, 3, 37, // Opcode: FORNOT1S
/* 5475 */    MCD::OPC_FilterValue, 124, 9, 0, 0, // Skip to: 5489
/* 5480 */    MCD::OPC_CheckPredicate, 3, 218, 8, 0, // Skip to: 7751
/* 5485 */    MCD::OPC_Decode, 210, 3, 38, // Opcode: FOR
/* 5489 */    MCD::OPC_FilterValue, 125, 9, 0, 0, // Skip to: 5503
/* 5494 */    MCD::OPC_CheckPredicate, 3, 204, 8, 0, // Skip to: 7751
/* 5499 */    MCD::OPC_Decode, 215, 3, 37, // Opcode: FORS
/* 5503 */    MCD::OPC_FilterValue, 126, 23, 0, 0, // Skip to: 5531
/* 5508 */    MCD::OPC_CheckPredicate, 3, 190, 8, 0, // Skip to: 7751
/* 5513 */    MCD::OPC_CheckField, 14, 5, 0, 183, 8, 0, // Skip to: 7751
/* 5520 */    MCD::OPC_CheckField, 0, 5, 0, 176, 8, 0, // Skip to: 7751
/* 5527 */    MCD::OPC_Decode, 208, 3, 63, // Opcode: FONE
/* 5531 */    MCD::OPC_FilterValue, 127, 23, 0, 0, // Skip to: 5559
/* 5536 */    MCD::OPC_CheckPredicate, 3, 162, 8, 0, // Skip to: 7751
/* 5541 */    MCD::OPC_CheckField, 14, 5, 0, 155, 8, 0, // Skip to: 7751
/* 5548 */    MCD::OPC_CheckField, 0, 5, 0, 148, 8, 0, // Skip to: 7751
/* 5555 */    MCD::OPC_Decode, 209, 3, 64, // Opcode: FONES
/* 5559 */    MCD::OPC_FilterValue, 128, 1, 30, 0, 0, // Skip to: 5595
/* 5565 */    MCD::OPC_CheckPredicate, 3, 133, 8, 0, // Skip to: 7751
/* 5570 */    MCD::OPC_CheckField, 25, 5, 0, 126, 8, 0, // Skip to: 7751
/* 5577 */    MCD::OPC_CheckField, 14, 5, 0, 119, 8, 0, // Skip to: 7751
/* 5584 */    MCD::OPC_CheckField, 0, 5, 0, 112, 8, 0, // Skip to: 7751
/* 5591 */    MCD::OPC_Decode, 247, 4, 5, // Opcode: SHUTDOWN
/* 5595 */    MCD::OPC_FilterValue, 129, 1, 30, 0, 0, // Skip to: 5631
/* 5601 */    MCD::OPC_CheckPredicate, 4, 97, 8, 0, // Skip to: 7751
/* 5606 */    MCD::OPC_CheckField, 25, 5, 0, 90, 8, 0, // Skip to: 7751
/* 5613 */    MCD::OPC_CheckField, 14, 5, 0, 83, 8, 0, // Skip to: 7751
/* 5620 */    MCD::OPC_CheckField, 0, 5, 0, 76, 8, 0, // Skip to: 7751
/* 5627 */    MCD::OPC_Decode, 248, 4, 5, // Opcode: SIAM
/* 5631 */    MCD::OPC_FilterValue, 144, 2, 16, 0, 0, // Skip to: 5653
/* 5637 */    MCD::OPC_CheckPredicate, 2, 61, 8, 0, // Skip to: 7751
/* 5642 */    MCD::OPC_CheckField, 14, 5, 0, 54, 8, 0, // Skip to: 7751
/* 5649 */    MCD::OPC_Decode, 189, 4, 67, // Opcode: MOVDTOX
/* 5653 */    MCD::OPC_FilterValue, 145, 2, 16, 0, 0, // Skip to: 5675
/* 5659 */    MCD::OPC_CheckPredicate, 2, 39, 8, 0, // Skip to: 7751
/* 5664 */    MCD::OPC_CheckField, 14, 5, 0, 32, 8, 0, // Skip to: 7751
/* 5671 */    MCD::OPC_Decode, 197, 4, 67, // Opcode: MOVSTOUW
/* 5675 */    MCD::OPC_FilterValue, 147, 2, 16, 0, 0, // Skip to: 5697
/* 5681 */    MCD::OPC_CheckPredicate, 2, 17, 8, 0, // Skip to: 7751
/* 5686 */    MCD::OPC_CheckField, 14, 5, 0, 10, 8, 0, // Skip to: 7751
/* 5693 */    MCD::OPC_Decode, 196, 4, 67, // Opcode: MOVSTOSW
/* 5697 */    MCD::OPC_FilterValue, 149, 2, 9, 0, 0, // Skip to: 5712
/* 5703 */    MCD::OPC_CheckPredicate, 2, 251, 7, 0, // Skip to: 7751
/* 5708 */    MCD::OPC_Decode, 250, 5, 11, // Opcode: XMULX
/* 5712 */    MCD::OPC_FilterValue, 151, 2, 9, 0, 0, // Skip to: 5727
/* 5718 */    MCD::OPC_CheckPredicate, 2, 236, 7, 0, // Skip to: 7751
/* 5723 */    MCD::OPC_Decode, 251, 5, 11, // Opcode: XMULXHI
/* 5727 */    MCD::OPC_FilterValue, 152, 2, 16, 0, 0, // Skip to: 5749
/* 5733 */    MCD::OPC_CheckPredicate, 2, 221, 7, 0, // Skip to: 7751
/* 5738 */    MCD::OPC_CheckField, 14, 5, 0, 214, 7, 0, // Skip to: 7751
/* 5745 */    MCD::OPC_Decode, 201, 4, 68, // Opcode: MOVXTOD
/* 5749 */    MCD::OPC_FilterValue, 153, 2, 16, 0, 0, // Skip to: 5771
/* 5755 */    MCD::OPC_CheckPredicate, 2, 199, 7, 0, // Skip to: 7751
/* 5760 */    MCD::OPC_CheckField, 14, 5, 0, 192, 7, 0, // Skip to: 7751
/* 5767 */    MCD::OPC_Decode, 198, 4, 68, // Opcode: MOVWTOS
/* 5771 */    MCD::OPC_FilterValue, 209, 2, 9, 0, 0, // Skip to: 5786
/* 5777 */    MCD::OPC_CheckPredicate, 2, 177, 7, 0, // Skip to: 7751
/* 5782 */    MCD::OPC_Decode, 159, 3, 58, // Opcode: FLCMPS
/* 5786 */    MCD::OPC_FilterValue, 210, 2, 167, 7, 0, // Skip to: 7751
/* 5792 */    MCD::OPC_CheckPredicate, 2, 162, 7, 0, // Skip to: 7751
/* 5797 */    MCD::OPC_Decode, 158, 3, 58, // Opcode: FLCMPD
/* 5801 */    MCD::OPC_FilterValue, 56, 28, 0, 0, // Skip to: 5834
/* 5806 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5809 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 5825
/* 5814 */    MCD::OPC_CheckField, 5, 8, 0, 138, 7, 0, // Skip to: 7751
/* 5821 */    MCD::OPC_Decode, 140, 4, 69, // Opcode: JMPLrr
/* 5825 */    MCD::OPC_FilterValue, 1, 129, 7, 0, // Skip to: 7751
/* 5830 */    MCD::OPC_Decode, 139, 4, 70, // Opcode: JMPLri
/* 5834 */    MCD::OPC_FilterValue, 57, 42, 0, 0, // Skip to: 5881
/* 5839 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5842 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 5865
/* 5847 */    MCD::OPC_CheckField, 25, 5, 0, 105, 7, 0, // Skip to: 7751
/* 5854 */    MCD::OPC_CheckField, 5, 8, 0, 98, 7, 0, // Skip to: 7751
/* 5861 */    MCD::OPC_Decode, 236, 4, 71, // Opcode: RETTrr
/* 5865 */    MCD::OPC_FilterValue, 1, 89, 7, 0, // Skip to: 7751
/* 5870 */    MCD::OPC_CheckField, 25, 5, 0, 82, 7, 0, // Skip to: 7751
/* 5877 */    MCD::OPC_Decode, 235, 4, 72, // Opcode: RETTri
/* 5881 */    MCD::OPC_FilterValue, 58, 119, 0, 0, // Skip to: 6005
/* 5886 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5889 */    MCD::OPC_FilterValue, 16, 18, 0, 0, // Skip to: 5912
/* 5894 */    MCD::OPC_CheckField, 29, 1, 0, 58, 7, 0, // Skip to: 7751
/* 5901 */    MCD::OPC_CheckField, 5, 3, 0, 51, 7, 0, // Skip to: 7751
/* 5908 */    MCD::OPC_Decode, 214, 5, 73, // Opcode: TXCCrr
/* 5912 */    MCD::OPC_FilterValue, 32, 72, 0, 0, // Skip to: 5989
/* 5917 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5920 */    MCD::OPC_FilterValue, 1, 18, 0, 0, // Skip to: 5943
/* 5925 */    MCD::OPC_CheckField, 25, 5, 8, 27, 7, 0, // Skip to: 7751
/* 5932 */    MCD::OPC_CheckField, 14, 5, 0, 20, 7, 0, // Skip to: 7751
/* 5939 */    MCD::OPC_Decode, 191, 5, 5, // Opcode: TA1
/* 5943 */    MCD::OPC_FilterValue, 3, 18, 0, 0, // Skip to: 5966
/* 5948 */    MCD::OPC_CheckField, 25, 5, 8, 4, 7, 0, // Skip to: 7751
/* 5955 */    MCD::OPC_CheckField, 14, 5, 0, 253, 6, 0, // Skip to: 7751
/* 5962 */    MCD::OPC_Decode, 192, 5, 5, // Opcode: TA3
/* 5966 */    MCD::OPC_FilterValue, 5, 244, 6, 0, // Skip to: 7751
/* 5971 */    MCD::OPC_CheckField, 25, 5, 8, 237, 6, 0, // Skip to: 7751
/* 5978 */    MCD::OPC_CheckField, 14, 5, 0, 230, 6, 0, // Skip to: 7751
/* 5985 */    MCD::OPC_Decode, 193, 5, 5, // Opcode: TA5
/* 5989 */    MCD::OPC_FilterValue, 48, 221, 6, 0, // Skip to: 7751
/* 5994 */    MCD::OPC_CheckField, 29, 1, 0, 214, 6, 0, // Skip to: 7751
/* 6001 */    MCD::OPC_Decode, 213, 5, 74, // Opcode: TXCCri
/* 6005 */    MCD::OPC_FilterValue, 59, 62, 0, 0, // Skip to: 6072
/* 6010 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6013 */    MCD::OPC_FilterValue, 0, 38, 0, 0, // Skip to: 6056
/* 6018 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6021 */    MCD::OPC_FilterValue, 0, 189, 6, 0, // Skip to: 7751
/* 6026 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6029 */    MCD::OPC_FilterValue, 0, 181, 6, 0, // Skip to: 7751
/* 6034 */    MCD::OPC_CheckField, 14, 5, 0, 11, 0, 0, // Skip to: 6052
/* 6041 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, 0, // Skip to: 6052
/* 6048 */    MCD::OPC_Decode, 160, 3, 5, // Opcode: FLUSH
/* 6052 */    MCD::OPC_Decode, 163, 3, 71, // Opcode: FLUSHrr
/* 6056 */    MCD::OPC_FilterValue, 1, 154, 6, 0, // Skip to: 7751
/* 6061 */    MCD::OPC_CheckField, 25, 5, 0, 147, 6, 0, // Skip to: 7751
/* 6068 */    MCD::OPC_Decode, 162, 3, 72, // Opcode: FLUSHri
/* 6072 */    MCD::OPC_FilterValue, 60, 28, 0, 0, // Skip to: 6105
/* 6077 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6080 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6096
/* 6085 */    MCD::OPC_CheckField, 5, 8, 0, 123, 6, 0, // Skip to: 7751
/* 6092 */    MCD::OPC_Decode, 238, 4, 9, // Opcode: SAVErr
/* 6096 */    MCD::OPC_FilterValue, 1, 114, 6, 0, // Skip to: 7751
/* 6101 */    MCD::OPC_Decode, 237, 4, 10, // Opcode: SAVEri
/* 6105 */    MCD::OPC_FilterValue, 61, 28, 0, 0, // Skip to: 6138
/* 6110 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6113 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6129
/* 6118 */    MCD::OPC_CheckField, 5, 8, 0, 90, 6, 0, // Skip to: 7751
/* 6125 */    MCD::OPC_Decode, 232, 4, 9, // Opcode: RESTORErr
/* 6129 */    MCD::OPC_FilterValue, 1, 81, 6, 0, // Skip to: 7751
/* 6134 */    MCD::OPC_Decode, 231, 4, 10, // Opcode: RESTOREri
/* 6138 */    MCD::OPC_FilterValue, 62, 28, 0, 0, // Skip to: 6171
/* 6143 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6146 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6162
/* 6151 */    MCD::OPC_CheckField, 5, 8, 0, 57, 6, 0, // Skip to: 7751
/* 6158 */    MCD::OPC_Decode, 222, 5, 9, // Opcode: UMACrr
/* 6162 */    MCD::OPC_FilterValue, 1, 48, 6, 0, // Skip to: 7751
/* 6167 */    MCD::OPC_Decode, 221, 5, 10, // Opcode: UMACri
/* 6171 */    MCD::OPC_FilterValue, 63, 39, 6, 0, // Skip to: 7751
/* 6176 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6179 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6195
/* 6184 */    MCD::OPC_CheckField, 5, 8, 0, 24, 6, 0, // Skip to: 7751
/* 6191 */    MCD::OPC_Decode, 255, 4, 9, // Opcode: SMACrr
/* 6195 */    MCD::OPC_FilterValue, 1, 15, 6, 0, // Skip to: 7751
/* 6200 */    MCD::OPC_Decode, 254, 4, 10, // Opcode: SMACri
/* 6204 */    MCD::OPC_FilterValue, 3, 6, 6, 0, // Skip to: 7751
/* 6209 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 6212 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 6245
/* 6217 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6220 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6236
/* 6225 */    MCD::OPC_CheckField, 5, 8, 0, 239, 5, 0, // Skip to: 7751
/* 6232 */    MCD::OPC_Decode, 184, 4, 69, // Opcode: LDrr
/* 6236 */    MCD::OPC_FilterValue, 1, 230, 5, 0, // Skip to: 7751
/* 6241 */    MCD::OPC_Decode, 183, 4, 70, // Opcode: LDri
/* 6245 */    MCD::OPC_FilterValue, 1, 28, 0, 0, // Skip to: 6278
/* 6250 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6253 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6269
/* 6258 */    MCD::OPC_CheckField, 5, 8, 0, 206, 5, 0, // Skip to: 7751
/* 6265 */    MCD::OPC_Decode, 175, 4, 69, // Opcode: LDUBrr
/* 6269 */    MCD::OPC_FilterValue, 1, 197, 5, 0, // Skip to: 7751
/* 6274 */    MCD::OPC_Decode, 174, 4, 70, // Opcode: LDUBri
/* 6278 */    MCD::OPC_FilterValue, 2, 28, 0, 0, // Skip to: 6311
/* 6283 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6286 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6302
/* 6291 */    MCD::OPC_CheckField, 5, 8, 0, 173, 5, 0, // Skip to: 7751
/* 6298 */    MCD::OPC_Decode, 178, 4, 69, // Opcode: LDUHrr
/* 6302 */    MCD::OPC_FilterValue, 1, 164, 5, 0, // Skip to: 7751
/* 6307 */    MCD::OPC_Decode, 177, 4, 70, // Opcode: LDUHri
/* 6311 */    MCD::OPC_FilterValue, 3, 28, 0, 0, // Skip to: 6344
/* 6316 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6319 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6335
/* 6324 */    MCD::OPC_CheckField, 5, 8, 0, 140, 5, 0, // Skip to: 7751
/* 6331 */    MCD::OPC_Decode, 153, 4, 75, // Opcode: LDDrr
/* 6335 */    MCD::OPC_FilterValue, 1, 131, 5, 0, // Skip to: 7751
/* 6340 */    MCD::OPC_Decode, 152, 4, 76, // Opcode: LDDri
/* 6344 */    MCD::OPC_FilterValue, 4, 28, 0, 0, // Skip to: 6377
/* 6349 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6352 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6368
/* 6357 */    MCD::OPC_CheckField, 5, 8, 0, 107, 5, 0, // Skip to: 7751
/* 6364 */    MCD::OPC_Decode, 177, 5, 77, // Opcode: STrr
/* 6368 */    MCD::OPC_FilterValue, 1, 98, 5, 0, // Skip to: 7751
/* 6373 */    MCD::OPC_Decode, 176, 5, 78, // Opcode: STri
/* 6377 */    MCD::OPC_FilterValue, 5, 28, 0, 0, // Skip to: 6410
/* 6382 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6385 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6401
/* 6390 */    MCD::OPC_CheckField, 5, 8, 0, 74, 5, 0, // Skip to: 7751
/* 6397 */    MCD::OPC_Decode, 144, 5, 77, // Opcode: STBrr
/* 6401 */    MCD::OPC_FilterValue, 1, 65, 5, 0, // Skip to: 7751
/* 6406 */    MCD::OPC_Decode, 143, 5, 78, // Opcode: STBri
/* 6410 */    MCD::OPC_FilterValue, 6, 28, 0, 0, // Skip to: 6443
/* 6415 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6418 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6434
/* 6423 */    MCD::OPC_CheckField, 5, 8, 0, 41, 5, 0, // Skip to: 7751
/* 6430 */    MCD::OPC_Decode, 168, 5, 77, // Opcode: STHrr
/* 6434 */    MCD::OPC_FilterValue, 1, 32, 5, 0, // Skip to: 7751
/* 6439 */    MCD::OPC_Decode, 167, 5, 78, // Opcode: STHri
/* 6443 */    MCD::OPC_FilterValue, 7, 28, 0, 0, // Skip to: 6476
/* 6448 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6451 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6467
/* 6456 */    MCD::OPC_CheckField, 5, 8, 0, 8, 5, 0, // Skip to: 7751
/* 6463 */    MCD::OPC_Decode, 160, 5, 79, // Opcode: STDrr
/* 6467 */    MCD::OPC_FilterValue, 1, 255, 4, 0, // Skip to: 7751
/* 6472 */    MCD::OPC_Decode, 159, 5, 80, // Opcode: STDri
/* 6476 */    MCD::OPC_FilterValue, 8, 28, 0, 0, // Skip to: 6509
/* 6481 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6484 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6500
/* 6489 */    MCD::OPC_CheckField, 5, 8, 0, 231, 4, 0, // Skip to: 7751
/* 6496 */    MCD::OPC_Decode, 172, 4, 81, // Opcode: LDSWrr
/* 6500 */    MCD::OPC_FilterValue, 1, 222, 4, 0, // Skip to: 7751
/* 6505 */    MCD::OPC_Decode, 171, 4, 82, // Opcode: LDSWri
/* 6509 */    MCD::OPC_FilterValue, 9, 28, 0, 0, // Skip to: 6542
/* 6514 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6517 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6533
/* 6522 */    MCD::OPC_CheckField, 5, 8, 0, 198, 4, 0, // Skip to: 7751
/* 6529 */    MCD::OPC_Decode, 164, 4, 69, // Opcode: LDSBrr
/* 6533 */    MCD::OPC_FilterValue, 1, 189, 4, 0, // Skip to: 7751
/* 6538 */    MCD::OPC_Decode, 163, 4, 70, // Opcode: LDSBri
/* 6542 */    MCD::OPC_FilterValue, 10, 28, 0, 0, // Skip to: 6575
/* 6547 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6550 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6566
/* 6555 */    MCD::OPC_CheckField, 5, 8, 0, 165, 4, 0, // Skip to: 7751
/* 6562 */    MCD::OPC_Decode, 167, 4, 69, // Opcode: LDSHrr
/* 6566 */    MCD::OPC_FilterValue, 1, 156, 4, 0, // Skip to: 7751
/* 6571 */    MCD::OPC_Decode, 166, 4, 70, // Opcode: LDSHri
/* 6575 */    MCD::OPC_FilterValue, 11, 28, 0, 0, // Skip to: 6608
/* 6580 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6583 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6599
/* 6588 */    MCD::OPC_CheckField, 5, 8, 0, 132, 4, 0, // Skip to: 7751
/* 6595 */    MCD::OPC_Decode, 182, 4, 81, // Opcode: LDXrr
/* 6599 */    MCD::OPC_FilterValue, 1, 123, 4, 0, // Skip to: 7751
/* 6604 */    MCD::OPC_Decode, 181, 4, 82, // Opcode: LDXri
/* 6608 */    MCD::OPC_FilterValue, 13, 28, 0, 0, // Skip to: 6641
/* 6613 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6616 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6632
/* 6621 */    MCD::OPC_CheckField, 5, 8, 0, 99, 4, 0, // Skip to: 7751
/* 6628 */    MCD::OPC_Decode, 170, 4, 69, // Opcode: LDSTUBrr
/* 6632 */    MCD::OPC_FilterValue, 1, 90, 4, 0, // Skip to: 7751
/* 6637 */    MCD::OPC_Decode, 169, 4, 70, // Opcode: LDSTUBri
/* 6641 */    MCD::OPC_FilterValue, 14, 28, 0, 0, // Skip to: 6674
/* 6646 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6649 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6665
/* 6654 */    MCD::OPC_CheckField, 5, 8, 0, 66, 4, 0, // Skip to: 7751
/* 6661 */    MCD::OPC_Decode, 175, 5, 83, // Opcode: STXrr
/* 6665 */    MCD::OPC_FilterValue, 1, 57, 4, 0, // Skip to: 7751
/* 6670 */    MCD::OPC_Decode, 174, 5, 84, // Opcode: STXri
/* 6674 */    MCD::OPC_FilterValue, 15, 28, 0, 0, // Skip to: 6707
/* 6679 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6682 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6698
/* 6687 */    MCD::OPC_CheckField, 5, 8, 0, 33, 4, 0, // Skip to: 7751
/* 6694 */    MCD::OPC_Decode, 190, 5, 85, // Opcode: SWAPrr
/* 6698 */    MCD::OPC_FilterValue, 1, 24, 4, 0, // Skip to: 7751
/* 6703 */    MCD::OPC_Decode, 189, 5, 86, // Opcode: SWAPri
/* 6707 */    MCD::OPC_FilterValue, 16, 11, 0, 0, // Skip to: 6723
/* 6712 */    MCD::OPC_CheckField, 13, 1, 0, 8, 4, 0, // Skip to: 7751
/* 6719 */    MCD::OPC_Decode, 141, 4, 87, // Opcode: LDArr
/* 6723 */    MCD::OPC_FilterValue, 17, 11, 0, 0, // Skip to: 6739
/* 6728 */    MCD::OPC_CheckField, 13, 1, 0, 248, 3, 0, // Skip to: 7751
/* 6735 */    MCD::OPC_Decode, 173, 4, 87, // Opcode: LDUBArr
/* 6739 */    MCD::OPC_FilterValue, 18, 11, 0, 0, // Skip to: 6755
/* 6744 */    MCD::OPC_CheckField, 13, 1, 0, 232, 3, 0, // Skip to: 7751
/* 6751 */    MCD::OPC_Decode, 176, 4, 87, // Opcode: LDUHArr
/* 6755 */    MCD::OPC_FilterValue, 19, 11, 0, 0, // Skip to: 6771
/* 6760 */    MCD::OPC_CheckField, 13, 1, 0, 216, 3, 0, // Skip to: 7751
/* 6767 */    MCD::OPC_Decode, 146, 4, 88, // Opcode: LDDArr
/* 6771 */    MCD::OPC_FilterValue, 20, 11, 0, 0, // Skip to: 6787
/* 6776 */    MCD::OPC_CheckField, 13, 1, 0, 200, 3, 0, // Skip to: 7751
/* 6783 */    MCD::OPC_Decode, 140, 5, 89, // Opcode: STArr
/* 6787 */    MCD::OPC_FilterValue, 21, 11, 0, 0, // Skip to: 6803
/* 6792 */    MCD::OPC_CheckField, 13, 1, 0, 184, 3, 0, // Skip to: 7751
/* 6799 */    MCD::OPC_Decode, 142, 5, 89, // Opcode: STBArr
/* 6803 */    MCD::OPC_FilterValue, 22, 11, 0, 0, // Skip to: 6819
/* 6808 */    MCD::OPC_CheckField, 13, 1, 0, 168, 3, 0, // Skip to: 7751
/* 6815 */    MCD::OPC_Decode, 166, 5, 89, // Opcode: STHArr
/* 6819 */    MCD::OPC_FilterValue, 23, 11, 0, 0, // Skip to: 6835
/* 6824 */    MCD::OPC_CheckField, 13, 1, 0, 152, 3, 0, // Skip to: 7751
/* 6831 */    MCD::OPC_Decode, 149, 5, 90, // Opcode: STDArr
/* 6835 */    MCD::OPC_FilterValue, 25, 11, 0, 0, // Skip to: 6851
/* 6840 */    MCD::OPC_CheckField, 13, 1, 0, 136, 3, 0, // Skip to: 7751
/* 6847 */    MCD::OPC_Decode, 162, 4, 87, // Opcode: LDSBArr
/* 6851 */    MCD::OPC_FilterValue, 26, 11, 0, 0, // Skip to: 6867
/* 6856 */    MCD::OPC_CheckField, 13, 1, 0, 120, 3, 0, // Skip to: 7751
/* 6863 */    MCD::OPC_Decode, 165, 4, 87, // Opcode: LDSHArr
/* 6867 */    MCD::OPC_FilterValue, 29, 11, 0, 0, // Skip to: 6883
/* 6872 */    MCD::OPC_CheckField, 13, 1, 0, 104, 3, 0, // Skip to: 7751
/* 6879 */    MCD::OPC_Decode, 168, 4, 87, // Opcode: LDSTUBArr
/* 6883 */    MCD::OPC_FilterValue, 31, 11, 0, 0, // Skip to: 6899
/* 6888 */    MCD::OPC_CheckField, 13, 1, 0, 88, 3, 0, // Skip to: 7751
/* 6895 */    MCD::OPC_Decode, 188, 5, 91, // Opcode: SWAPArr
/* 6899 */    MCD::OPC_FilterValue, 32, 28, 0, 0, // Skip to: 6932
/* 6904 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6907 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6923
/* 6912 */    MCD::OPC_CheckField, 5, 8, 0, 64, 3, 0, // Skip to: 7751
/* 6919 */    MCD::OPC_Decode, 158, 4, 92, // Opcode: LDFrr
/* 6923 */    MCD::OPC_FilterValue, 1, 55, 3, 0, // Skip to: 7751
/* 6928 */    MCD::OPC_Decode, 157, 4, 93, // Opcode: LDFri
/* 6932 */    MCD::OPC_FilterValue, 33, 79, 0, 0, // Skip to: 7016
/* 6937 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6940 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 6985
/* 6945 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6948 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6964
/* 6953 */    MCD::OPC_CheckField, 5, 8, 0, 23, 3, 0, // Skip to: 7751
/* 6960 */    MCD::OPC_Decode, 156, 4, 71, // Opcode: LDFSRrr
/* 6964 */    MCD::OPC_FilterValue, 1, 14, 3, 0, // Skip to: 7751
/* 6969 */    MCD::OPC_CheckPredicate, 0, 9, 3, 0, // Skip to: 7751
/* 6974 */    MCD::OPC_CheckField, 5, 8, 0, 2, 3, 0, // Skip to: 7751
/* 6981 */    MCD::OPC_Decode, 180, 4, 71, // Opcode: LDXFSRrr
/* 6985 */    MCD::OPC_FilterValue, 1, 249, 2, 0, // Skip to: 7751
/* 6990 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6993 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 7002
/* 6998 */    MCD::OPC_Decode, 155, 4, 72, // Opcode: LDFSRri
/* 7002 */    MCD::OPC_FilterValue, 1, 232, 2, 0, // Skip to: 7751
/* 7007 */    MCD::OPC_CheckPredicate, 0, 227, 2, 0, // Skip to: 7751
/* 7012 */    MCD::OPC_Decode, 179, 4, 72, // Opcode: LDXFSRri
/* 7016 */    MCD::OPC_FilterValue, 34, 38, 0, 0, // Skip to: 7059
/* 7021 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7024 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 7045
/* 7029 */    MCD::OPC_CheckPredicate, 0, 205, 2, 0, // Skip to: 7751
/* 7034 */    MCD::OPC_CheckField, 5, 8, 0, 198, 2, 0, // Skip to: 7751
/* 7041 */    MCD::OPC_Decode, 161, 4, 94, // Opcode: LDQFrr
/* 7045 */    MCD::OPC_FilterValue, 1, 189, 2, 0, // Skip to: 7751
/* 7050 */    MCD::OPC_CheckPredicate, 0, 184, 2, 0, // Skip to: 7751
/* 7055 */    MCD::OPC_Decode, 160, 4, 95, // Opcode: LDQFri
/* 7059 */    MCD::OPC_FilterValue, 35, 28, 0, 0, // Skip to: 7092
/* 7064 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7067 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7083
/* 7072 */    MCD::OPC_CheckField, 5, 8, 0, 160, 2, 0, // Skip to: 7751
/* 7079 */    MCD::OPC_Decode, 151, 4, 96, // Opcode: LDDFrr
/* 7083 */    MCD::OPC_FilterValue, 1, 151, 2, 0, // Skip to: 7751
/* 7088 */    MCD::OPC_Decode, 150, 4, 97, // Opcode: LDDFri
/* 7092 */    MCD::OPC_FilterValue, 36, 28, 0, 0, // Skip to: 7125
/* 7097 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7100 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7116
/* 7105 */    MCD::OPC_CheckField, 5, 8, 0, 127, 2, 0, // Skip to: 7751
/* 7112 */    MCD::OPC_Decode, 165, 5, 98, // Opcode: STFrr
/* 7116 */    MCD::OPC_FilterValue, 1, 118, 2, 0, // Skip to: 7751
/* 7121 */    MCD::OPC_Decode, 164, 5, 99, // Opcode: STFri
/* 7125 */    MCD::OPC_FilterValue, 37, 79, 0, 0, // Skip to: 7209
/* 7130 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7133 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 7178
/* 7138 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7141 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7157
/* 7146 */    MCD::OPC_CheckField, 5, 8, 0, 86, 2, 0, // Skip to: 7751
/* 7153 */    MCD::OPC_Decode, 163, 5, 71, // Opcode: STFSRrr
/* 7157 */    MCD::OPC_FilterValue, 1, 77, 2, 0, // Skip to: 7751
/* 7162 */    MCD::OPC_CheckPredicate, 0, 72, 2, 0, // Skip to: 7751
/* 7167 */    MCD::OPC_CheckField, 5, 8, 0, 65, 2, 0, // Skip to: 7751
/* 7174 */    MCD::OPC_Decode, 173, 5, 71, // Opcode: STXFSRrr
/* 7178 */    MCD::OPC_FilterValue, 1, 56, 2, 0, // Skip to: 7751
/* 7183 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7186 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 7195
/* 7191 */    MCD::OPC_Decode, 162, 5, 72, // Opcode: STFSRri
/* 7195 */    MCD::OPC_FilterValue, 1, 39, 2, 0, // Skip to: 7751
/* 7200 */    MCD::OPC_CheckPredicate, 0, 34, 2, 0, // Skip to: 7751
/* 7205 */    MCD::OPC_Decode, 172, 5, 72, // Opcode: STXFSRri
/* 7209 */    MCD::OPC_FilterValue, 38, 61, 0, 0, // Skip to: 7275
/* 7214 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7217 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 7250
/* 7222 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 7225 */    MCD::OPC_FilterValue, 0, 9, 2, 0, // Skip to: 7751
/* 7230 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 7241
/* 7237 */    MCD::OPC_Decode, 156, 5, 71, // Opcode: STDFQrr
/* 7241 */    MCD::OPC_CheckPredicate, 0, 249, 1, 0, // Skip to: 7751
/* 7246 */    MCD::OPC_Decode, 171, 5, 100, // Opcode: STQFrr
/* 7250 */    MCD::OPC_FilterValue, 1, 240, 1, 0, // Skip to: 7751
/* 7255 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 7266
/* 7262 */    MCD::OPC_Decode, 155, 5, 72, // Opcode: STDFQri
/* 7266 */    MCD::OPC_CheckPredicate, 0, 224, 1, 0, // Skip to: 7751
/* 7271 */    MCD::OPC_Decode, 170, 5, 101, // Opcode: STQFri
/* 7275 */    MCD::OPC_FilterValue, 39, 28, 0, 0, // Skip to: 7308
/* 7280 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7283 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7299
/* 7288 */    MCD::OPC_CheckField, 5, 8, 0, 200, 1, 0, // Skip to: 7751
/* 7295 */    MCD::OPC_Decode, 158, 5, 102, // Opcode: STDFrr
/* 7299 */    MCD::OPC_FilterValue, 1, 191, 1, 0, // Skip to: 7751
/* 7304 */    MCD::OPC_Decode, 157, 5, 103, // Opcode: STDFri
/* 7308 */    MCD::OPC_FilterValue, 45, 38, 0, 0, // Skip to: 7351
/* 7313 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7316 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 7337
/* 7321 */    MCD::OPC_CheckPredicate, 0, 169, 1, 0, // Skip to: 7751
/* 7326 */    MCD::OPC_CheckField, 5, 8, 0, 162, 1, 0, // Skip to: 7751
/* 7333 */    MCD::OPC_Decode, 222, 4, 104, // Opcode: PREFETCHr
/* 7337 */    MCD::OPC_FilterValue, 1, 153, 1, 0, // Skip to: 7751
/* 7342 */    MCD::OPC_CheckPredicate, 0, 148, 1, 0, // Skip to: 7751
/* 7347 */    MCD::OPC_Decode, 221, 4, 105, // Opcode: PREFETCHi
/* 7351 */    MCD::OPC_FilterValue, 48, 37, 0, 0, // Skip to: 7393
/* 7356 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7359 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7384
/* 7364 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7375
/* 7371 */    MCD::OPC_Decode, 145, 4, 106, // Opcode: LDCrr
/* 7375 */    MCD::OPC_CheckPredicate, 0, 115, 1, 0, // Skip to: 7751
/* 7380 */    MCD::OPC_Decode, 154, 4, 107, // Opcode: LDFArr
/* 7384 */    MCD::OPC_FilterValue, 1, 106, 1, 0, // Skip to: 7751
/* 7389 */    MCD::OPC_Decode, 144, 4, 108, // Opcode: LDCri
/* 7393 */    MCD::OPC_FilterValue, 49, 42, 0, 0, // Skip to: 7440
/* 7398 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7401 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 7424
/* 7406 */    MCD::OPC_CheckField, 25, 5, 0, 82, 1, 0, // Skip to: 7751
/* 7413 */    MCD::OPC_CheckField, 5, 8, 0, 75, 1, 0, // Skip to: 7751
/* 7420 */    MCD::OPC_Decode, 143, 4, 71, // Opcode: LDCSRrr
/* 7424 */    MCD::OPC_FilterValue, 1, 66, 1, 0, // Skip to: 7751
/* 7429 */    MCD::OPC_CheckField, 25, 5, 0, 59, 1, 0, // Skip to: 7751
/* 7436 */    MCD::OPC_Decode, 142, 4, 72, // Opcode: LDCSRri
/* 7440 */    MCD::OPC_FilterValue, 50, 16, 0, 0, // Skip to: 7461
/* 7445 */    MCD::OPC_CheckPredicate, 0, 45, 1, 0, // Skip to: 7751
/* 7450 */    MCD::OPC_CheckField, 13, 1, 0, 38, 1, 0, // Skip to: 7751
/* 7457 */    MCD::OPC_Decode, 159, 4, 109, // Opcode: LDQFArr
/* 7461 */    MCD::OPC_FilterValue, 51, 37, 0, 0, // Skip to: 7503
/* 7466 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7469 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7494
/* 7474 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7485
/* 7481 */    MCD::OPC_Decode, 148, 4, 110, // Opcode: LDDCrr
/* 7485 */    MCD::OPC_CheckPredicate, 0, 5, 1, 0, // Skip to: 7751
/* 7490 */    MCD::OPC_Decode, 149, 4, 111, // Opcode: LDDFArr
/* 7494 */    MCD::OPC_FilterValue, 1, 252, 0, 0, // Skip to: 7751
/* 7499 */    MCD::OPC_Decode, 147, 4, 112, // Opcode: LDDCri
/* 7503 */    MCD::OPC_FilterValue, 52, 37, 0, 0, // Skip to: 7545
/* 7508 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7511 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7536
/* 7516 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7527
/* 7523 */    MCD::OPC_Decode, 148, 5, 113, // Opcode: STCrr
/* 7527 */    MCD::OPC_CheckPredicate, 0, 219, 0, 0, // Skip to: 7751
/* 7532 */    MCD::OPC_Decode, 161, 5, 114, // Opcode: STFArr
/* 7536 */    MCD::OPC_FilterValue, 1, 210, 0, 0, // Skip to: 7751
/* 7541 */    MCD::OPC_Decode, 147, 5, 115, // Opcode: STCri
/* 7545 */    MCD::OPC_FilterValue, 53, 42, 0, 0, // Skip to: 7592
/* 7550 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7553 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 7576
/* 7558 */    MCD::OPC_CheckField, 25, 5, 0, 186, 0, 0, // Skip to: 7751
/* 7565 */    MCD::OPC_CheckField, 5, 8, 0, 179, 0, 0, // Skip to: 7751
/* 7572 */    MCD::OPC_Decode, 146, 5, 71, // Opcode: STCSRrr
/* 7576 */    MCD::OPC_FilterValue, 1, 170, 0, 0, // Skip to: 7751
/* 7581 */    MCD::OPC_CheckField, 25, 5, 0, 163, 0, 0, // Skip to: 7751
/* 7588 */    MCD::OPC_Decode, 145, 5, 72, // Opcode: STCSRri
/* 7592 */    MCD::OPC_FilterValue, 54, 51, 0, 0, // Skip to: 7648
/* 7597 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7600 */    MCD::OPC_FilterValue, 0, 27, 0, 0, // Skip to: 7632
/* 7605 */    MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 7623
/* 7612 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7623
/* 7619 */    MCD::OPC_Decode, 151, 5, 71, // Opcode: STDCQrr
/* 7623 */    MCD::OPC_CheckPredicate, 0, 123, 0, 0, // Skip to: 7751
/* 7628 */    MCD::OPC_Decode, 169, 5, 116, // Opcode: STQFArr
/* 7632 */    MCD::OPC_FilterValue, 1, 114, 0, 0, // Skip to: 7751
/* 7637 */    MCD::OPC_CheckField, 25, 5, 0, 107, 0, 0, // Skip to: 7751
/* 7644 */    MCD::OPC_Decode, 150, 5, 72, // Opcode: STDCQri
/* 7648 */    MCD::OPC_FilterValue, 55, 37, 0, 0, // Skip to: 7690
/* 7653 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7656 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7681
/* 7661 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7672
/* 7668 */    MCD::OPC_Decode, 153, 5, 117, // Opcode: STDCrr
/* 7672 */    MCD::OPC_CheckPredicate, 0, 74, 0, 0, // Skip to: 7751
/* 7677 */    MCD::OPC_Decode, 154, 5, 118, // Opcode: STDFArr
/* 7681 */    MCD::OPC_FilterValue, 1, 65, 0, 0, // Skip to: 7751
/* 7686 */    MCD::OPC_Decode, 152, 5, 119, // Opcode: STDCri
/* 7690 */    MCD::OPC_FilterValue, 60, 39, 0, 0, // Skip to: 7734
/* 7695 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7698 */    MCD::OPC_FilterValue, 0, 48, 0, 0, // Skip to: 7751
/* 7703 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 7706 */    MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 7715
/* 7711 */    MCD::OPC_Decode, 215, 2, 120, // Opcode: CASAasi10
/* 7715 */    MCD::OPC_FilterValue, 128, 1, 9, 0, 0, // Skip to: 7730
/* 7721 */    MCD::OPC_CheckPredicate, 0, 4, 0, 0, // Skip to: 7730
/* 7726 */    MCD::OPC_Decode, 218, 2, 120, // Opcode: CASrr
/* 7730 */    MCD::OPC_Decode, 216, 2, 121, // Opcode: CASArr
/* 7734 */    MCD::OPC_FilterValue, 62, 12, 0, 0, // Skip to: 7751
/* 7739 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, 0, // Skip to: 7751
/* 7747 */    MCD::OPC_Decode, 217, 2, 122, // Opcode: CASXrr
/* 7751 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 33
/* 8 */       MCD::OPC_CheckField, 29, 3, 4, 41, 0, 0, // Skip to: 56
/* 15 */      MCD::OPC_CheckField, 19, 6, 58, 34, 0, 0, // Skip to: 56
/* 22 */      MCD::OPC_CheckField, 5, 3, 0, 27, 0, 0, // Skip to: 56
/* 29 */      MCD::OPC_Decode, 208, 5, 73, // Opcode: TRAPrr
/* 33 */      MCD::OPC_FilterValue, 32, 18, 0, 0, // Skip to: 56
/* 38 */      MCD::OPC_CheckField, 29, 3, 4, 11, 0, 0, // Skip to: 56
/* 45 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 207, 5, 74, // Opcode: TRAPri
/* 56 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV932[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 30, 0, 0, // Skip to: 38
/* 8 */       MCD::OPC_CheckPredicate, 0, 53, 0, 0, // Skip to: 66
/* 13 */      MCD::OPC_CheckField, 29, 3, 4, 46, 0, 0, // Skip to: 66
/* 20 */      MCD::OPC_CheckField, 19, 6, 58, 39, 0, 0, // Skip to: 66
/* 27 */      MCD::OPC_CheckField, 5, 3, 0, 32, 0, 0, // Skip to: 66
/* 34 */      MCD::OPC_Decode, 201, 5, 73, // Opcode: TICCrr
/* 38 */      MCD::OPC_FilterValue, 32, 23, 0, 0, // Skip to: 66
/* 43 */      MCD::OPC_CheckPredicate, 0, 18, 0, 0, // Skip to: 66
/* 48 */      MCD::OPC_CheckField, 29, 3, 4, 11, 0, 0, // Skip to: 66
/* 55 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 200, 5, 74, // Opcode: TICCri
/* 66 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset &Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeaturePWRPSR]);
  case 2:
    return (Bits[Sparc::FeatureVIS3]);
  case 3:
    return (Bits[Sparc::FeatureVIS]);
  case 4:
    return (Bits[Sparc::FeatureVIS2]);
  }
}

template <typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const MCDisassembler *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  using TmpType = std::conditional_t<std::is_integral<InsnType>::value, InsnType, uint64_t>;
  TmpType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = 0x0;
    insertBits(tmp, fieldFromInstruction(insn, 0, 14), 0, 14);
    insertBits(tmp, fieldFromInstruction(insn, 20, 2), 14, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 5:
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (!Check(S, DecodeCall(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (!Check(S, DecodeSIMM13(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (!Check(S, DecodeSIMM13(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePRRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 10, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 10, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (!Check(S, DecodeSIMM13(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (!Check(S, DecodeSIMM13(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodePRRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodePRRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (!Check(S, DecodeSIMM13(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 10, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 10, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 10, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeCoprocRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeCoprocRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeCoprocPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeCoprocPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeCoprocRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeCoprocRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeCoprocPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodePointerLikeRegClass0(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeCoprocPairRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (!Check(S, DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder))) { return MCDisassembler::Fail; }
    return S;
  }
}

template <typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const MCDisassembler *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset &Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint64_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      uint64_t Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      uint64_t FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      unsigned PtrLen = 0;
      uint64_t ExpectedValue = decodeULEB128(++Ptr, &PtrLen);
      Ptr += PtrLen;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      LLVM_DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        LLVM_DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        LLVM_DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      uint64_t PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      uint64_t NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) != 0 || (~insn & NegativeMask) != 0;
      if (Fail)
        S = MCDisassembler::SoftFail;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n" : "PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      LLVM_DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // end namespace llvm
