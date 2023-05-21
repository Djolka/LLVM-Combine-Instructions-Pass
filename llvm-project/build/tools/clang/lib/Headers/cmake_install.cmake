# Install script for directory: /home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/Desktop/llvm-project-build")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/builtins.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/float.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/inttypes.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/iso646.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/limits.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/module.modulemap"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdalign.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdarg.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdatomic.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdbool.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stddef.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__stddef_max_align_t.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdint.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdnoreturn.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/tgmath.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/unwind.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/varargs.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/arm_acle.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/arm_cmse.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/armintr.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/arm64intr.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/arm_neon_sve_bridge.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_math.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_cmath.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_texture_intrinsics.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hexagon_circ_brev_intrinsics.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hexagon_protos.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hexagon_types.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hvx_hexagon_protos.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_libdevice_declares.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_cmath.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_math.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_stdlib.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_runtime_wrapper.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/larchintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/msa.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/opencl-c.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/opencl-c-base.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/altivec.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/htmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/htmxlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/s390intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/vecintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/velintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/velintrin_gen.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/velintrin_approx.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/adxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ammintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/amxfp16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/amxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512bf16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512bitalgintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512bwintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512cdintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512dqintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512erintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512fintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512fp16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512ifmaintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512ifmavlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512pfintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vbmi2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vbmiintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vbmivlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlbf16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlbwintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlcdintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vldqintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlfp16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlvnniintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vnniintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxifmaintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxneconvertintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxvnniint8intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxvnniintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/bmi2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/bmiintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cetintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cldemoteintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/clflushoptintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/clwbintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/clzerointrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cmpccxaddintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/crc32intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/emmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/enqcmdintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/f16cintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/fma4intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/fmaintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/fxsrintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/gfniintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hresetintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ia32intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/immintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/invpcidintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/keylockerintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/lwpintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/lzcntintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/mm3dnow.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/mmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/movdirintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/mwaitxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/nmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/pconfigintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/pkuintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/pmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/popcntintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/prfchiintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/prfchwintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ptwriteintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/raointintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/rdpruintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/rdseedintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/rtmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/serializeintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/sgxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/shaintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/smmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/tbmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/tmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/tsxldtrkintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/uintrintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/vaesintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/vpclmulqdqintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/waitpkgintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/wbnoinvdintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__wmmintrin_aes.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/wmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/x86gprintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/x86intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xopintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xsavecintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xsaveintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xsaveoptintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xsavesintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xtestintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cet.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cpuid.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/wasm_simd128.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/vadefs.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/mm_malloc.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_neon.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_fp16.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_sve.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_bf16.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_mve.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_cde.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/riscv_vector.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include/cuda_wrappers" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cuda_wrappers/algorithm"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cuda_wrappers/cmath"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cuda_wrappers/complex"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include/ppc_wrappers" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/pmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/tmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/smmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/bmiintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/bmi2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/immintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/x86intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/x86gprintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include/openmp_wrappers" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/math.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/cmath"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/complex.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/complex"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/__clang_openmp_device_functions.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/complex_cmath.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcore-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/builtins.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/float.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/inttypes.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/iso646.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/limits.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/module.modulemap"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdalign.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdarg.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdatomic.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdbool.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stddef.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__stddef_max_align_t.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdint.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/stdnoreturn.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/tgmath.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/unwind.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/varargs.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xarm-common-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/arm_acle.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_neon.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_fp16.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xarm-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/arm_cmse.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/armintr.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_mve.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_cde.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xaarch64-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/arm64intr.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/arm_neon_sve_bridge.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_sve.h"
    "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/arm_bf16.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcuda-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include/cuda_wrappers" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cuda_wrappers/algorithm"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cuda_wrappers/cmath"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cuda_wrappers/complex"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcuda-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_math.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_cmath.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_texture_intrinsics.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xhexagon-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hexagon_circ_brev_intrinsics.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hexagon_protos.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hexagon_types.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hvx_hexagon_protos.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xhip-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_libdevice_declares.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_cmath.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_math.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_stdlib.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__clang_hip_runtime_wrapper.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xloongarch-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/larchintrin.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmips-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/msa.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xppc-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include/ppc_wrappers" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/pmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/tmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/smmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/bmiintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/bmi2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/immintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/x86intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ppc_wrappers/x86gprintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xppc-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/altivec.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xppc-htm-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/htmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/htmxlintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xriscv-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES "/home/user/Desktop/KK-projekat/llvm-project/build/tools/clang/lib/Headers/riscv_vector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsystemz-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/s390intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/vecintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xve-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/velintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/velintrin_gen.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/velintrin_approx.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xwebassembly-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/wasm_simd128.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xx86-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/adxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ammintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/amxfp16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/amxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512bf16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512bitalgintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512bwintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512cdintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512dqintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512erintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512fintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512fp16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512ifmaintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512ifmavlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512pfintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vbmi2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vbmiintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vbmivlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlbf16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlbwintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlcdintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vldqintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlfp16intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlvnniintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vnniintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxifmaintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxneconvertintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxvnniint8intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/avxvnniintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/bmi2intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/bmiintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cetintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cldemoteintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/clflushoptintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/clwbintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/clzerointrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cmpccxaddintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/crc32intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/emmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/enqcmdintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/f16cintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/fma4intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/fmaintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/fxsrintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/gfniintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hresetintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ia32intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/immintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/invpcidintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/keylockerintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/lwpintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/lzcntintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/mm3dnow.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/mmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/movdirintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/mwaitxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/nmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/pconfigintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/pkuintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/pmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/popcntintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/prfchiintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/prfchwintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/ptwriteintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/raointintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/rdpruintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/rdseedintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/rtmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/serializeintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/sgxintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/shaintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/smmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/tbmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/tmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/tsxldtrkintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/uintrintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/vaesintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/vpclmulqdqintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/waitpkgintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/wbnoinvdintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__wmmintrin_aes.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/wmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/x86gprintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/x86intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xmmintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xopintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xsavecintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xsaveintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xsaveoptintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xsavesintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/xtestintrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cet.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/cpuid.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xhlsl-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hlsl.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xhlsl-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include/hlsl" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hlsl/hlsl_basic_types.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/hlsl/hlsl_intrinsics.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xopencl-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/opencl-c.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/opencl-c-base.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xopenmp-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include/openmp_wrappers" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/math.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/cmath"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/complex.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/complex"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/__clang_openmp_device_functions.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/complex_cmath.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/openmp_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xutility-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/mm_malloc.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xwindows-resource-headersx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/17/include" TYPE FILE FILES
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/intrin.h"
    "/home/user/Desktop/KK-projekat/llvm-project/clang/lib/Headers/vadefs.h"
    )
endif()

