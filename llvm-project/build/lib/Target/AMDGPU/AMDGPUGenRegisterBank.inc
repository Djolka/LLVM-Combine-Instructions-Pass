/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Bank Source Fragments                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_REGBANK_DECLARATIONS
#undef GET_REGBANK_DECLARATIONS
namespace llvm {
namespace AMDGPU {
enum : unsigned {
  InvalidRegBankID = ~0u,
  AGPRRegBankID = 0,
  SGPRRegBankID = 1,
  VCCRegBankID = 2,
  VGPRRegBankID = 3,
  NumRegisterBanks,
};
} // end namespace AMDGPU
} // end namespace llvm
#endif // GET_REGBANK_DECLARATIONS

#ifdef GET_TARGET_REGBANK_CLASS
#undef GET_TARGET_REGBANK_CLASS
private:
  static RegisterBank *RegBanks[];

protected:
  AMDGPUGenRegisterBankInfo();

#endif // GET_TARGET_REGBANK_CLASS

#ifdef GET_TARGET_REGBANK_IMPL
#undef GET_TARGET_REGBANK_IMPL
namespace llvm {
namespace AMDGPU {
const uint32_t AGPRRegBankCoverageData[] = {
    // 0-31
    (1u << (AMDGPU::AGPR_LO16RegClassID - 0)) |
    (1u << (AMDGPU::AGPR_32RegClassID - 0)) |
    (1u << (AMDGPU::AV_32RegClassID - 0)) |
    0,
    // 32-63
    (1u << (AMDGPU::AReg_64RegClassID - 32)) |
    (1u << (AMDGPU::AReg_64_Align2RegClassID - 32)) |
    (1u << (AMDGPU::AReg_96RegClassID - 32)) |
    (1u << (AMDGPU::AV_64RegClassID - 32)) |
    (1u << (AMDGPU::AV_64_Align2RegClassID - 32)) |
    (1u << (AMDGPU::AV_96RegClassID - 32)) |
    (1u << (AMDGPU::AV_96_Align2RegClassID - 32)) |
    (1u << (AMDGPU::AV_96_with_sub1_sub2_in_AV_64_Align2RegClassID - 32)) |
    0,
    // 64-95
    (1u << (AMDGPU::AReg_96_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AReg_96_with_sub1_sub2_in_AReg_64_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AReg_128RegClassID - 64)) |
    (1u << (AMDGPU::AReg_128_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AV_128RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 64)) |
    0,
    // 96-127
    (1u << (AMDGPU::AReg_160RegClassID - 96)) |
    (1u << (AMDGPU::AReg_160_Align2RegClassID - 96)) |
    (1u << (AMDGPU::AReg_160_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 96)) |
    (1u << (AMDGPU::AV_160RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_Align2RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 96)) |
    0,
    // 128-159
    (1u << (AMDGPU::AReg_192RegClassID - 128)) |
    (1u << (AMDGPU::AReg_192_Align2RegClassID - 128)) |
    (1u << (AMDGPU::AReg_192_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 128)) |
    (1u << (AMDGPU::AV_192RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_Align2RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 128)) |
    0,
    // 160-191
    (1u << (AMDGPU::AReg_224RegClassID - 160)) |
    (1u << (AMDGPU::AReg_224_Align2RegClassID - 160)) |
    (1u << (AMDGPU::AReg_224_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 160)) |
    (1u << (AMDGPU::AV_224RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_Align2RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 160)) |
    0,
    // 192-223
    (1u << (AMDGPU::AReg_256RegClassID - 192)) |
    (1u << (AMDGPU::AReg_256_Align2RegClassID - 192)) |
    (1u << (AMDGPU::AV_256RegClassID - 192)) |
    (1u << (AMDGPU::AV_256_Align2RegClassID - 192)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 192)) |
    0,
    // 224-255
    (1u << (AMDGPU::AReg_256_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 224)) |
    (1u << (AMDGPU::AReg_288RegClassID - 224)) |
    (1u << (AMDGPU::AV_288RegClassID - 224)) |
    (1u << (AMDGPU::AV_288_Align2RegClassID - 224)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 224)) |
    0,
    // 256-287
    (1u << (AMDGPU::AReg_288_Align2RegClassID - 256)) |
    (1u << (AMDGPU::AReg_288_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 256)) |
    0,
    // 288-319
    (1u << (AMDGPU::AReg_320RegClassID - 288)) |
    (1u << (AMDGPU::AReg_320_Align2RegClassID - 288)) |
    (1u << (AMDGPU::AReg_320_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 288)) |
    (1u << (AMDGPU::AV_320RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_Align2RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 288)) |
    0,
    // 320-351
    (1u << (AMDGPU::AReg_352RegClassID - 320)) |
    (1u << (AMDGPU::AReg_352_Align2RegClassID - 320)) |
    (1u << (AMDGPU::AReg_352_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 320)) |
    (1u << (AMDGPU::AV_352RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_Align2RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 320)) |
    0,
    // 352-383
    (1u << (AMDGPU::AReg_384RegClassID - 352)) |
    (1u << (AMDGPU::AReg_384_Align2RegClassID - 352)) |
    (1u << (AMDGPU::AV_384RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_Align2RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 352)) |
    0,
    // 384-415
    (1u << (AMDGPU::AReg_384_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 384)) |
    (1u << (AMDGPU::AV_512RegClassID - 384)) |
    0,
    // 416-447
    (1u << (AMDGPU::AReg_512RegClassID - 416)) |
    (1u << (AMDGPU::AReg_512_Align2RegClassID - 416)) |
    (1u << (AMDGPU::AReg_512_with_sub0_sub1_sub2_sub3_in_AReg_128_with_sub1_sub2_in_AReg_64_Align2RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_Align2RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 416)) |
    0,
    // 448-479
    (1u << (AMDGPU::AReg_1024RegClassID - 448)) |
    0,
    // 480-511
    (1u << (AMDGPU::AReg_1024_Align2RegClassID - 480)) |
    (1u << (AMDGPU::AReg_1024_with_sub1_sub2_in_AReg_64_Align2RegClassID - 480)) |
    0,
    // 512-543
    0,
};
const uint32_t SGPRRegBankCoverageData[] = {
    // 0-31
    (1u << (AMDGPU::SReg_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SGPR_LO16RegClassID - 0)) |
    (1u << (AMDGPU::TTMP_LO16RegClassID - 0)) |
    (1u << (AMDGPU::M0_CLASS_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SReg_32RegClassID - 0)) |
    (1u << (AMDGPU::SReg_32_XEXEC_HIRegClassID - 0)) |
    (1u << (AMDGPU::SReg_32_XEXECRegClassID - 0)) |
    (1u << (AMDGPU::SReg_32_XM0RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1RegClassID - 0)) |
    (1u << (AMDGPU::VS_32RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_with_hi16RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_Lo128RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_Lo128_with_hi16RegClassID - 0)) |
    (1u << (AMDGPU::SRegOrLds_32RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_XEXECRegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_lo16_in_SGPR_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_lo16_in_TTMP_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_sub0RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_XEXEC_with_sub0RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_sub0_and_SReg_1_with_lo16_in_SGPR_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_sub0_and_SReg_1_with_lo16_in_TTMP_LO16RegClassID - 0)) |
    0,
    // 32-63
    (1u << (AMDGPU::SReg_32_XM0_XEXECRegClassID - 32)) |
    (1u << (AMDGPU::SGPR_32RegClassID - 32)) |
    (1u << (AMDGPU::TTMP_32RegClassID - 32)) |
    (1u << (AMDGPU::M0_CLASSRegClassID - 32)) |
    (1u << (AMDGPU::SReg_32_XEXEC_HI_and_SReg_32_XM0RegClassID - 32)) |
    (1u << (AMDGPU::SReg_64RegClassID - 32)) |
    (1u << (AMDGPU::SReg_64_XEXECRegClassID - 32)) |
    (1u << (AMDGPU::SGPR_64RegClassID - 32)) |
    (1u << (AMDGPU::TTMP_64RegClassID - 32)) |
    (1u << (AMDGPU::VS_64RegClassID - 32)) |
    (1u << (AMDGPU::VS_64_with_sub0_in_VS_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::VS_64_with_sub1_in_VS_32_Lo128RegClassID - 32)) |
    0,
    // 64-95
    (1u << (AMDGPU::SReg_96RegClassID - 64)) |
    (1u << (AMDGPU::SGPR_96RegClassID - 64)) |
    (1u << (AMDGPU::SGPR_96_with_sub0_sub1RegClassID - 64)) |
    (1u << (AMDGPU::SGPR_96_with_sub1_sub2RegClassID - 64)) |
    (1u << (AMDGPU::SReg_96_with_sub0_sub1RegClassID - 64)) |
    (1u << (AMDGPU::TTMP_96_with_sub0_sub1RegClassID - 64)) |
    (1u << (AMDGPU::SReg_96_with_sub1_sub2RegClassID - 64)) |
    (1u << (AMDGPU::TTMP_96_with_sub1_sub2RegClassID - 64)) |
    (1u << (AMDGPU::TTMP_96RegClassID - 64)) |
    0,
    // 96-127
    (1u << (AMDGPU::SReg_128RegClassID - 96)) |
    (1u << (AMDGPU::SGPR_128RegClassID - 96)) |
    (1u << (AMDGPU::SGPR_128_with_sub0_sub1_sub2RegClassID - 96)) |
    (1u << (AMDGPU::SGPR_128_with_sub1_sub2_sub3RegClassID - 96)) |
    (1u << (AMDGPU::SReg_128_with_sub0_sub1_sub2RegClassID - 96)) |
    (1u << (AMDGPU::TTMP_128_with_sub0_sub1_sub2RegClassID - 96)) |
    (1u << (AMDGPU::SReg_128_with_sub1_sub2_sub3RegClassID - 96)) |
    (1u << (AMDGPU::TTMP_128_with_sub1_sub2_sub3RegClassID - 96)) |
    (1u << (AMDGPU::TTMP_128RegClassID - 96)) |
    0,
    // 128-159
    (1u << (AMDGPU::SReg_160RegClassID - 128)) |
    (1u << (AMDGPU::SGPR_160RegClassID - 128)) |
    (1u << (AMDGPU::SGPR_160_with_sub0_sub1_sub2RegClassID - 128)) |
    (1u << (AMDGPU::SGPR_160_with_sub2_sub3_sub4RegClassID - 128)) |
    (1u << (AMDGPU::SGPR_160_with_sub1_sub2_sub3RegClassID - 128)) |
    (1u << (AMDGPU::SReg_160_with_sub0_sub1_sub2RegClassID - 128)) |
    (1u << (AMDGPU::TTMP_160_with_sub0_sub1_sub2RegClassID - 128)) |
    (1u << (AMDGPU::SReg_160_with_sub2_sub3_sub4RegClassID - 128)) |
    (1u << (AMDGPU::TTMP_160_with_sub2_sub3_sub4RegClassID - 128)) |
    (1u << (AMDGPU::SReg_160_with_sub1_sub2_sub3RegClassID - 128)) |
    (1u << (AMDGPU::TTMP_160_with_sub1_sub2_sub3RegClassID - 128)) |
    (1u << (AMDGPU::TTMP_160RegClassID - 128)) |
    0,
    // 160-191
    (1u << (AMDGPU::SReg_192RegClassID - 160)) |
    (1u << (AMDGPU::SGPR_192RegClassID - 160)) |
    (1u << (AMDGPU::SGPR_192_with_sub0_sub1_sub2RegClassID - 160)) |
    (1u << (AMDGPU::SGPR_192_with_sub2_sub3_sub4RegClassID - 160)) |
    (1u << (AMDGPU::SGPR_192_with_sub1_sub2_sub3RegClassID - 160)) |
    (1u << (AMDGPU::SReg_192_with_sub0_sub1_sub2RegClassID - 160)) |
    (1u << (AMDGPU::TTMP_192_with_sub0_sub1_sub2RegClassID - 160)) |
    (1u << (AMDGPU::SReg_192_with_sub2_sub3_sub4RegClassID - 160)) |
    (1u << (AMDGPU::TTMP_192_with_sub2_sub3_sub4RegClassID - 160)) |
    (1u << (AMDGPU::SReg_192_with_sub1_sub2_sub3RegClassID - 160)) |
    (1u << (AMDGPU::TTMP_192_with_sub1_sub2_sub3RegClassID - 160)) |
    (1u << (AMDGPU::TTMP_192RegClassID - 160)) |
    0,
    // 192-223
    (1u << (AMDGPU::SReg_224RegClassID - 192)) |
    (1u << (AMDGPU::SGPR_224RegClassID - 192)) |
    (1u << (AMDGPU::SGPR_224_with_sub0_sub1_sub2RegClassID - 192)) |
    (1u << (AMDGPU::SGPR_224_with_sub1_sub2_sub3RegClassID - 192)) |
    (1u << (AMDGPU::SGPR_224_with_sub2_sub3_sub4RegClassID - 192)) |
    (1u << (AMDGPU::SReg_224_with_sub0_sub1_sub2RegClassID - 192)) |
    (1u << (AMDGPU::TTMP_224_with_sub0_sub1_sub2RegClassID - 192)) |
    (1u << (AMDGPU::SReg_224_with_sub1_sub2_sub3RegClassID - 192)) |
    (1u << (AMDGPU::TTMP_224_with_sub1_sub2_sub3RegClassID - 192)) |
    (1u << (AMDGPU::SReg_224_with_sub2_sub3_sub4RegClassID - 192)) |
    (1u << (AMDGPU::TTMP_224_with_sub2_sub3_sub4RegClassID - 192)) |
    (1u << (AMDGPU::TTMP_224RegClassID - 192)) |
    0,
    // 224-255
    (1u << (AMDGPU::SReg_256RegClassID - 224)) |
    (1u << (AMDGPU::SGPR_256RegClassID - 224)) |
    (1u << (AMDGPU::SGPR_256_with_sub0_sub1_sub2RegClassID - 224)) |
    (1u << (AMDGPU::SGPR_256_with_sub1_sub2_sub3RegClassID - 224)) |
    (1u << (AMDGPU::SGPR_256_with_sub2_sub3_sub4RegClassID - 224)) |
    (1u << (AMDGPU::SReg_256_with_sub0_sub1_sub2RegClassID - 224)) |
    (1u << (AMDGPU::TTMP_256_with_sub0_sub1_sub2RegClassID - 224)) |
    (1u << (AMDGPU::SReg_256_with_sub1_sub2_sub3RegClassID - 224)) |
    (1u << (AMDGPU::TTMP_256_with_sub1_sub2_sub3RegClassID - 224)) |
    (1u << (AMDGPU::SReg_256_with_sub2_sub3_sub4RegClassID - 224)) |
    (1u << (AMDGPU::TTMP_256_with_sub2_sub3_sub4RegClassID - 224)) |
    (1u << (AMDGPU::TTMP_256RegClassID - 224)) |
    0,
    // 256-287
    (1u << (AMDGPU::SReg_288RegClassID - 256)) |
    (1u << (AMDGPU::SGPR_288RegClassID - 256)) |
    (1u << (AMDGPU::SGPR_288_with_sub0_sub1_sub2RegClassID - 256)) |
    (1u << (AMDGPU::SGPR_288_with_sub1_sub2_sub3RegClassID - 256)) |
    (1u << (AMDGPU::SGPR_288_with_sub2_sub3_sub4RegClassID - 256)) |
    (1u << (AMDGPU::SReg_288_with_sub0_sub1_sub2RegClassID - 256)) |
    (1u << (AMDGPU::TTMP_288_with_sub0_sub1_sub2RegClassID - 256)) |
    (1u << (AMDGPU::SReg_288_with_sub2_sub3_sub4RegClassID - 256)) |
    (1u << (AMDGPU::TTMP_288RegClassID - 256)) |
    0,
    // 288-319
    (1u << (AMDGPU::TTMP_288_with_sub2_sub3_sub4RegClassID - 288)) |
    (1u << (AMDGPU::SReg_320RegClassID - 288)) |
    0,
    // 320-351
    (1u << (AMDGPU::SGPR_320RegClassID - 320)) |
    (1u << (AMDGPU::SGPR_320_with_sub0_sub1_sub2RegClassID - 320)) |
    (1u << (AMDGPU::SGPR_320_with_sub1_sub2_sub3RegClassID - 320)) |
    (1u << (AMDGPU::SGPR_320_with_sub2_sub3_sub4RegClassID - 320)) |
    (1u << (AMDGPU::SReg_320_with_sub0_sub1_sub2RegClassID - 320)) |
    (1u << (AMDGPU::TTMP_320_with_sub0_sub1_sub2RegClassID - 320)) |
    (1u << (AMDGPU::SReg_320_with_sub2_sub3_sub4RegClassID - 320)) |
    (1u << (AMDGPU::TTMP_320_with_sub2_sub3_sub4RegClassID - 320)) |
    (1u << (AMDGPU::TTMP_320RegClassID - 320)) |
    0,
    // 352-383
    (1u << (AMDGPU::SReg_352RegClassID - 352)) |
    (1u << (AMDGPU::SGPR_352RegClassID - 352)) |
    (1u << (AMDGPU::SGPR_352_with_sub0_sub1_sub2RegClassID - 352)) |
    (1u << (AMDGPU::SGPR_352_with_sub1_sub2_sub3RegClassID - 352)) |
    (1u << (AMDGPU::SGPR_352_with_sub2_sub3_sub4RegClassID - 352)) |
    (1u << (AMDGPU::SReg_352_with_sub0_sub1_sub2RegClassID - 352)) |
    (1u << (AMDGPU::TTMP_352_with_sub0_sub1_sub2RegClassID - 352)) |
    (1u << (AMDGPU::SReg_352_with_sub2_sub3_sub4RegClassID - 352)) |
    (1u << (AMDGPU::TTMP_352_with_sub2_sub3_sub4RegClassID - 352)) |
    (1u << (AMDGPU::TTMP_352RegClassID - 352)) |
    0,
    // 384-415
    (1u << (AMDGPU::SReg_384RegClassID - 384)) |
    (1u << (AMDGPU::SGPR_384RegClassID - 384)) |
    (1u << (AMDGPU::SGPR_384_with_sub0_sub1_sub2RegClassID - 384)) |
    (1u << (AMDGPU::SGPR_384_with_sub1_sub2_sub3RegClassID - 384)) |
    (1u << (AMDGPU::SGPR_384_with_sub2_sub3_sub4RegClassID - 384)) |
    (1u << (AMDGPU::SReg_384_with_sub0_sub1_sub2RegClassID - 384)) |
    (1u << (AMDGPU::TTMP_384_with_sub0_sub1_sub2RegClassID - 384)) |
    (1u << (AMDGPU::SReg_384_with_sub2_sub3_sub4RegClassID - 384)) |
    (1u << (AMDGPU::TTMP_384_with_sub2_sub3_sub4RegClassID - 384)) |
    (1u << (AMDGPU::TTMP_384RegClassID - 384)) |
    0,
    // 416-447
    0,
    // 448-479
    (1u << (AMDGPU::SReg_512RegClassID - 448)) |
    (1u << (AMDGPU::SGPR_512RegClassID - 448)) |
    (1u << (AMDGPU::SGPR_512_with_sub0_sub1_sub2RegClassID - 448)) |
    (1u << (AMDGPU::SGPR_512_with_sub2_sub3_sub4RegClassID - 448)) |
    (1u << (AMDGPU::SGPR_512_with_sub1_sub2_sub3RegClassID - 448)) |
    (1u << (AMDGPU::SReg_512_with_sub0_sub1_sub2RegClassID - 448)) |
    (1u << (AMDGPU::TTMP_512RegClassID - 448)) |
    0,
    // 480-511
    0,
    // 512-543
    (1u << (AMDGPU::SReg_1024RegClassID - 512)) |
    (1u << (AMDGPU::SGPR_1024RegClassID - 512)) |
    (1u << (AMDGPU::SGPR_1024_with_sub0_sub1_sub2RegClassID - 512)) |
    (1u << (AMDGPU::SGPR_1024_with_sub1_sub2_sub3RegClassID - 512)) |
    (1u << (AMDGPU::SGPR_1024_with_sub2_sub3_sub4RegClassID - 512)) |
    0,
};
const uint32_t VCCRegBankCoverageData[] = {
    // 0-31
    (1u << (AMDGPU::SReg_1RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_XEXECRegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_lo16_in_SGPR_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_sub0_and_SReg_1_with_lo16_in_SGPR_LO16RegClassID - 0)) |
    (1u << (AMDGPU::VReg_1RegClassID - 0)) |
    (1u << (AMDGPU::SReg_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SGPR_LO16RegClassID - 0)) |
    (1u << (AMDGPU::VS_32RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_with_hi16RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_Lo128RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_Lo128_with_hi16RegClassID - 0)) |
    (1u << (AMDGPU::SRegOrLds_32RegClassID - 0)) |
    (1u << (AMDGPU::SReg_32RegClassID - 0)) |
    (1u << (AMDGPU::SReg_32_XEXEC_HIRegClassID - 0)) |
    (1u << (AMDGPU::SReg_32_XM0RegClassID - 0)) |
    (1u << (AMDGPU::SReg_32_XEXECRegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_XEXEC_with_sub0RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_sub0_and_SReg_1_with_lo16_in_TTMP_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_lo16_in_TTMP_LO16RegClassID - 0)) |
    (1u << (AMDGPU::TTMP_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_lo16_in_M0_CLASS_LO16RegClassID - 0)) |
    (1u << (AMDGPU::M0_CLASS_LO16RegClassID - 0)) |
    (1u << (AMDGPU::SReg_1_with_sub0RegClassID - 0)) |
    0,
    // 32-63
    (1u << (AMDGPU::SReg_32_XEXEC_HI_and_SReg_32_XM0RegClassID - 32)) |
    (1u << (AMDGPU::SReg_32_XM0_XEXECRegClassID - 32)) |
    (1u << (AMDGPU::SGPR_32RegClassID - 32)) |
    (1u << (AMDGPU::SGPR_64RegClassID - 32)) |
    (1u << (AMDGPU::TTMP_32RegClassID - 32)) |
    (1u << (AMDGPU::TTMP_64RegClassID - 32)) |
    (1u << (AMDGPU::SReg_64_XEXECRegClassID - 32)) |
    (1u << (AMDGPU::M0_CLASSRegClassID - 32)) |
    (1u << (AMDGPU::SReg_64RegClassID - 32)) |
    0,
    // 64-95
    0,
    // 96-127
    0,
    // 128-159
    0,
    // 160-191
    0,
    // 192-223
    0,
    // 224-255
    0,
    // 256-287
    0,
    // 288-319
    0,
    // 320-351
    0,
    // 352-383
    0,
    // 384-415
    0,
    // 416-447
    0,
    // 448-479
    0,
    // 480-511
    0,
    // 512-543
    0,
};
const uint32_t VGPRRegBankCoverageData[] = {
    // 0-31
    (1u << (AMDGPU::VGPR_LO16RegClassID - 0)) |
    (1u << (AMDGPU::VGPR_HI16RegClassID - 0)) |
    (1u << (AMDGPU::VGPR_32RegClassID - 0)) |
    (1u << (AMDGPU::AV_32RegClassID - 0)) |
    (1u << (AMDGPU::VS_32RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_with_hi16RegClassID - 0)) |
    (1u << (AMDGPU::VRegOrLds_32RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_Lo128RegClassID - 0)) |
    (1u << (AMDGPU::VS_32_Lo128_with_hi16RegClassID - 0)) |
    0,
    // 32-63
    (1u << (AMDGPU::VGPR_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::VReg_64RegClassID - 32)) |
    (1u << (AMDGPU::AV_64_with_sub0_in_VGPR_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::VRegOrLds_32_and_VS_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::AV_64_with_sub1_in_VGPR_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::AV_64_Align2_and_AV_64_with_sub0_in_VGPR_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::VReg_64_Align2RegClassID - 32)) |
    (1u << (AMDGPU::VReg_96RegClassID - 32)) |
    (1u << (AMDGPU::AV_64RegClassID - 32)) |
    (1u << (AMDGPU::VS_64RegClassID - 32)) |
    (1u << (AMDGPU::AV_96_with_sub0_in_VGPR_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::VS_64_with_sub0_in_VS_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::VS_64_with_sub1_in_VS_32_Lo128RegClassID - 32)) |
    (1u << (AMDGPU::AV_64_Align2RegClassID - 32)) |
    (1u << (AMDGPU::AV_96RegClassID - 32)) |
    (1u << (AMDGPU::AV_96_Align2RegClassID - 32)) |
    (1u << (AMDGPU::AV_96_with_sub1_sub2_in_AV_64_Align2RegClassID - 32)) |
    0,
    // 64-95
    (1u << (AMDGPU::AV_96_with_sub0_sub1_in_AV_64_with_sub1_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::AV_96_with_sub1_sub2_in_AV_64_with_sub1_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::AV_96_Align2_and_AV_96_with_sub1_sub2_in_AV_64_with_sub1_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::AV_96_with_sub1_sub2_in_AV_64_Align2_and_AV_64_with_sub0_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::AV_96_with_sub0_sub1_in_AV_64_Align2_and_AV_64_with_sub0_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::AV_96_with_sub0_in_VGPR_32_Lo128_and_AV_96_with_sub1_sub2_in_AV_64_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AV_96_with_sub1_sub2_in_VReg_64_Align2RegClassID - 64)) |
    (1u << (AMDGPU::VReg_96_Align2RegClassID - 64)) |
    (1u << (AMDGPU::VReg_128RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 64)) |
    (1u << (AMDGPU::VReg_128_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AV_128RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_Align2RegClassID - 64)) |
    (1u << (AMDGPU::AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 64)) |
    0,
    // 96-127
    (1u << (AMDGPU::AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::VReg_128_with_sub1_sub2_sub3_in_AV_96_Align2_and_AV_96_with_sub1_sub2_in_AV_64_with_sub1_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::VReg_128_with_sub0_sub1_sub2_in_AV_96_with_sub1_sub2_in_AV_64_Align2_and_AV_64_with_sub0_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_128_with_sub0_in_VGPR_32_Lo128_and_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 96)) |
    (1u << (AMDGPU::VReg_160RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_in_VGPR_32_Lo128_and_AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 96)) |
    (1u << (AMDGPU::VReg_160_Align2RegClassID - 96)) |
    (1u << (AMDGPU::AV_160RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_Align2RegClassID - 96)) |
    (1u << (AMDGPU::AV_160_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 96)) |
    0,
    // 128-159
    (1u << (AMDGPU::AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::VReg_192RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_in_VGPR_32_Lo128_and_AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 128)) |
    (1u << (AMDGPU::VReg_192_Align2RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 128)) |
    (1u << (AMDGPU::AV_192RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_Align2RegClassID - 128)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 128)) |
    0,
    // 160-191
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_192_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::VReg_224RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 160)) |
    (1u << (AMDGPU::VReg_224_Align2RegClassID - 160)) |
    (1u << (AMDGPU::AV_224RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_Align2RegClassID - 160)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 160)) |
    0,
    // 192-223
    (1u << (AMDGPU::AV_224_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_224_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_224_with_sub0_in_VGPR_32_Lo128_and_AV_224_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 192)) |
    (1u << (AMDGPU::VReg_256RegClassID - 192)) |
    (1u << (AMDGPU::AV_256_with_sub0_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 192)) |
    (1u << (AMDGPU::VReg_256_Align2RegClassID - 192)) |
    (1u << (AMDGPU::AV_256RegClassID - 192)) |
    (1u << (AMDGPU::AV_256_Align2RegClassID - 192)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 192)) |
    0,
    // 224-255
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_in_VGPR_32_Lo128_and_AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 224)) |
    (1u << (AMDGPU::AV_256_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 224)) |
    (1u << (AMDGPU::VReg_288RegClassID - 224)) |
    (1u << (AMDGPU::AV_288RegClassID - 224)) |
    (1u << (AMDGPU::AV_288_Align2RegClassID - 224)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 224)) |
    0,
    // 256-287
    (1u << (AMDGPU::AV_288_with_sub0_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_in_VGPR_32_Lo128_and_AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 256)) |
    (1u << (AMDGPU::AV_288_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 256)) |
    (1u << (AMDGPU::VReg_288_Align2RegClassID - 256)) |
    0,
    // 288-319
    (1u << (AMDGPU::VReg_320RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_in_VGPR_32_Lo128_and_AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 288)) |
    (1u << (AMDGPU::VReg_320_Align2RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 288)) |
    (1u << (AMDGPU::AV_320RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_Align2RegClassID - 288)) |
    (1u << (AMDGPU::AV_320_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 288)) |
    0,
    // 320-351
    (1u << (AMDGPU::VReg_352RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_in_VGPR_32_Lo128_and_AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 320)) |
    (1u << (AMDGPU::VReg_352_Align2RegClassID - 320)) |
    (1u << (AMDGPU::AV_352RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_Align2RegClassID - 320)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 320)) |
    0,
    // 352-383
    (1u << (AMDGPU::AV_352_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_352_with_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_352_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_352_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::VReg_384RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_with_sub0_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 352)) |
    (1u << (AMDGPU::VReg_384_Align2RegClassID - 352)) |
    (1u << (AMDGPU::AV_384RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_Align2RegClassID - 352)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 352)) |
    0,
    // 384-415
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_in_VGPR_32_Lo128_and_AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 384)) |
    (1u << (AMDGPU::AV_384_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 384)) |
    (1u << (AMDGPU::AV_512RegClassID - 384)) |
    0,
    // 416-447
    (1u << (AMDGPU::VReg_512RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub5_sub6_sub7_sub8_sub9_sub10_sub11_sub12_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub1_sub2_sub3_sub4_sub5_sub6_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_Align2_and_AV_128_with_sub0_in_VGPR_32_Lo128RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_in_VGPR_32_Lo128_and_AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 416)) |
    (1u << (AMDGPU::VReg_512_Align2RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_VReg_64_Align2RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_Align2RegClassID - 416)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_in_AV_128_with_sub1_sub2_in_AV_64_Align2RegClassID - 416)) |
    0,
    // 448-479
    (1u << (AMDGPU::AV_512_with_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_512_with_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_512_with_sub5_sub6_sub7_sub8_sub9_sub10_sub11_sub12_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_512_with_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_512_with_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_512_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_512_with_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_512_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::VReg_1024RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub0_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub1_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub2_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub3_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub4_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub5_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub6_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub7_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub8_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub9_in_VGPR_32_Lo128RegClassID - 448)) |
    (1u << (AMDGPU::AV_1024_with_sub10_in_VGPR_32_Lo128RegClassID - 448)) |
    0,
    // 480-511
    (1u << (AMDGPU::AV_1024_with_sub11_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub12_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub13_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub14_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub15_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub16_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub17_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub18_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub19_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub20_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub21_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub22_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub23_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub24_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub25_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub26_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub27_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub28_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub29_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub30_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub31_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub6_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub4_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::VReg_1024_with_sub0_sub1_sub2_sub3_sub4_in_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_Align2_and_AV_128_with_sub2_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub2_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::VReg_1024_with_sub0_sub1_sub2_in_AV_96_with_sub1_sub2_in_AV_64_Align2_and_AV_64_with_sub0_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub0_in_VGPR_32_Lo128RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub0_in_VGPR_32_Lo128_and_AV_1024_with_sub1_sub2_in_AV_64_Align2RegClassID - 480)) |
    (1u << (AMDGPU::VReg_1024_Align2RegClassID - 480)) |
    (1u << (AMDGPU::AV_1024_with_sub1_sub2_in_VReg_64_Align2RegClassID - 480)) |
    0,
    // 512-543
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub30_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub16_sub17_sub18_sub19_sub20_sub21_sub22_sub23_sub24_sub25_sub26_sub27_sub28_sub29_sub30_sub31_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub14_sub15_sub16_sub17_sub18_sub19_sub20_sub21_sub22_sub23_sub24_sub25_sub26_sub27_sub28_sub29_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub28_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub12_sub13_sub14_sub15_sub16_sub17_sub18_sub19_sub20_sub21_sub22_sub23_sub24_sub25_sub26_sub27_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub26_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub10_sub11_sub12_sub13_sub14_sub15_sub16_sub17_sub18_sub19_sub20_sub21_sub22_sub23_sub24_sub25_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub24_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_sub16_sub17_sub18_sub19_sub20_sub21_sub22_sub23_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub22_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_sub16_sub17_sub18_sub19_sub20_sub21_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub20_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_sub16_sub17_sub18_sub19_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub18_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_sub16_sub17_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub16_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_512_with_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub14_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_512_with_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub12_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_512_with_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub10_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_sub10_sub11_sub12_sub13_sub14_sub15_in_AV_512_with_sub2_sub3_sub4_sub5_sub6_sub7_sub8_sub9_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::AV_1024_Align2_and_AV_1024_with_sub8_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub0_sub1_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_256_with_sub2_sub3_sub4_sub5_sub6_sub7_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    (1u << (AMDGPU::VReg_1024_with_sub0_sub1_sub2_sub3_sub4_sub5_in_AV_192_with_sub1_sub2_sub3_sub4_sub5_in_AV_160_Align2_and_AV_160_with_sub1_sub2_sub3_sub4_in_AV_128_with_sub3_in_VGPR_32_Lo128RegClassID - 512)) |
    0,
};

RegisterBank AGPRRegBank(/* ID */ AMDGPU::AGPRRegBankID, /* Name */ "AGPR", /* Size */ 1024, /* CoveredRegClasses */ AGPRRegBankCoverageData, /* NumRegClasses */ 543);
RegisterBank SGPRRegBank(/* ID */ AMDGPU::SGPRRegBankID, /* Name */ "SGPR", /* Size */ 1024, /* CoveredRegClasses */ SGPRRegBankCoverageData, /* NumRegClasses */ 543);
RegisterBank VCCRegBank(/* ID */ AMDGPU::VCCRegBankID, /* Name */ "VCC", /* Size */ 64, /* CoveredRegClasses */ VCCRegBankCoverageData, /* NumRegClasses */ 543);
RegisterBank VGPRRegBank(/* ID */ AMDGPU::VGPRRegBankID, /* Name */ "VGPR", /* Size */ 1024, /* CoveredRegClasses */ VGPRRegBankCoverageData, /* NumRegClasses */ 543);
} // end namespace AMDGPU

RegisterBank *AMDGPUGenRegisterBankInfo::RegBanks[] = {
    &AMDGPU::AGPRRegBank,
    &AMDGPU::SGPRRegBank,
    &AMDGPU::VCCRegBank,
    &AMDGPU::VGPRRegBank,
};

AMDGPUGenRegisterBankInfo::AMDGPUGenRegisterBankInfo()
    : RegisterBankInfo(RegBanks, AMDGPU::NumRegisterBanks) {
  // Assert that RegBank indices match their ID's
#ifndef NDEBUG
  for (auto RB : enumerate(RegBanks))
    assert(RB.index() == RB.value()->getID() && "Index != ID");
#endif // NDEBUG
}
} // end namespace llvm
#endif // GET_TARGET_REGBANK_IMPL
