; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -mtriple=ve-unknown-unknown -mattr=+vpu | FileCheck %s

declare <256 x float> @llvm.experimental.vp.strided.load.v256f32.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl)

define fastcc <256 x float> @vp_strided_load_v256f32_rrm(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256f32_rrm:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s2, %s2, (32)0
; CHECK-NEXT:    lvl %s2
; CHECK-NEXT:    vseq %v0
; CHECK-NEXT:    vmulu.l %v0, %s1, %v0, %vm1
; CHECK-NEXT:    vaddu.l %v0, %s0, %v0, %vm1
; CHECK-NEXT:    vgtu %v0, %v0, 0, 0, %vm1
; CHECK-NEXT:    b.l.t (, %s10)
  %r = call <256 x float> @llvm.experimental.vp.strided.load.v256f32.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl)
  ret <256 x float> %r
}

define fastcc <256 x float> @vp_strided_load_v256f32_rr(ptr %ptr, i64 %stride, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256f32_rr:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s2, %s2, (32)0
; CHECK-NEXT:    lvl %s2
; CHECK-NEXT:    vldu %v0, %s1, %s0
; CHECK-NEXT:    b.l.t (, %s10)
  %one = insertelement <256 x i1> undef, i1 1, i32 0
  %allones = shufflevector <256 x i1> %one, <256 x i1> undef, <256 x i32> zeroinitializer
  %r = call <256 x float> @llvm.experimental.vp.strided.load.v256f32.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %allones, i32 %evl)
  ret <256 x float> %r
}

define fastcc <256 x float> @vp_strided_load_v256f32_ri(ptr %ptr, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256f32_ri:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s1, %s1, (32)0
; CHECK-NEXT:    lvl %s1
; CHECK-NEXT:    vldu %v0, 24, %s0
; CHECK-NEXT:    b.l.t (, %s10)
  %one = insertelement <256 x i1> undef, i1 1, i32 0
  %allones = shufflevector <256 x i1> %one, <256 x i1> undef, <256 x i32> zeroinitializer
  %r = call <256 x float> @llvm.experimental.vp.strided.load.v256f32.p0.i64(ptr %ptr, i64 24, <256 x i1> %allones, i32 %evl)
  ret <256 x float> %r
}

declare <256 x i32> @llvm.experimental.vp.strided.load.v256i32.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl)

define fastcc <256 x i32> @vp_strided_load_v256i32_rrm(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256i32_rrm:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s2, %s2, (32)0
; CHECK-NEXT:    lvl %s2
; CHECK-NEXT:    vseq %v0
; CHECK-NEXT:    vmulu.l %v0, %s1, %v0, %vm1
; CHECK-NEXT:    vaddu.l %v0, %s0, %v0, %vm1
; CHECK-NEXT:    vgtl.zx %v0, %v0, 0, 0, %vm1
; CHECK-NEXT:    b.l.t (, %s10)
  %r = call <256 x i32> @llvm.experimental.vp.strided.load.v256i32.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl)
  ret <256 x i32> %r
}

define fastcc <256 x i32> @vp_strided_load_v256i32_rr(ptr %ptr, i64 %stride, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256i32_rr:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s2, %s2, (32)0
; CHECK-NEXT:    lvl %s2
; CHECK-NEXT:    vldl.zx %v0, %s1, %s0
; CHECK-NEXT:    b.l.t (, %s10)
  %one = insertelement <256 x i1> undef, i1 1, i32 0
  %allones = shufflevector <256 x i1> %one, <256 x i1> undef, <256 x i32> zeroinitializer
  %r = call <256 x i32> @llvm.experimental.vp.strided.load.v256i32.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %allones, i32 %evl)
  ret <256 x i32> %r
}

define fastcc <256 x i32> @vp_strided_load_v256i32_ri(ptr %ptr, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256i32_ri:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s1, %s1, (32)0
; CHECK-NEXT:    lvl %s1
; CHECK-NEXT:    vldl.zx %v0, 24, %s0
; CHECK-NEXT:    b.l.t (, %s10)
  %one = insertelement <256 x i1> undef, i1 1, i32 0
  %allones = shufflevector <256 x i1> %one, <256 x i1> undef, <256 x i32> zeroinitializer
  %r = call <256 x i32> @llvm.experimental.vp.strided.load.v256i32.p0.i64(ptr %ptr, i64 24, <256 x i1> %allones, i32 %evl)
  ret <256 x i32> %r
}

declare <256 x double> @llvm.experimental.vp.strided.load.v256f64.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl)

define fastcc <256 x double> @vp_strided_load_v256f64_rrm(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256f64_rrm:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s2, %s2, (32)0
; CHECK-NEXT:    lvl %s2
; CHECK-NEXT:    vseq %v0
; CHECK-NEXT:    vmulu.l %v0, %s1, %v0, %vm1
; CHECK-NEXT:    vaddu.l %v0, %s0, %v0, %vm1
; CHECK-NEXT:    vgt %v0, %v0, 0, 0, %vm1
; CHECK-NEXT:    b.l.t (, %s10)
  %r = call <256 x double> @llvm.experimental.vp.strided.load.v256f64.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl)
  ret <256 x double> %r
}

define fastcc <256 x double> @vp_strided_load_v256f64_rr(ptr %ptr, i64 %stride, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256f64_rr:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s2, %s2, (32)0
; CHECK-NEXT:    lvl %s2
; CHECK-NEXT:    vld %v0, %s1, %s0
; CHECK-NEXT:    b.l.t (, %s10)
  %one = insertelement <256 x i1> undef, i1 1, i32 0
  %allones = shufflevector <256 x i1> %one, <256 x i1> undef, <256 x i32> zeroinitializer
  %r = call <256 x double> @llvm.experimental.vp.strided.load.v256f64.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %allones, i32 %evl)
  ret <256 x double> %r
}

define fastcc <256 x double> @vp_strided_load_v256f64_ri(ptr %ptr, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256f64_ri:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s1, %s1, (32)0
; CHECK-NEXT:    lvl %s1
; CHECK-NEXT:    vld %v0, 24, %s0
; CHECK-NEXT:    b.l.t (, %s10)
  %one = insertelement <256 x i1> undef, i1 1, i32 0
  %allones = shufflevector <256 x i1> %one, <256 x i1> undef, <256 x i32> zeroinitializer
  %r = call <256 x double> @llvm.experimental.vp.strided.load.v256f64.p0.i64(ptr %ptr, i64 24, <256 x i1> %allones, i32 %evl)
  ret <256 x double> %r
}

declare <256 x i64> @llvm.experimental.vp.strided.load.v256i64.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl)

define fastcc <256 x i64> @vp_strided_load_v256i64_rrm(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256i64_rrm:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s2, %s2, (32)0
; CHECK-NEXT:    lvl %s2
; CHECK-NEXT:    vseq %v0
; CHECK-NEXT:    vmulu.l %v0, %s1, %v0, %vm1
; CHECK-NEXT:    vaddu.l %v0, %s0, %v0, %vm1
; CHECK-NEXT:    vgt %v0, %v0, 0, 0, %vm1
; CHECK-NEXT:    b.l.t (, %s10)
  %r = call <256 x i64> @llvm.experimental.vp.strided.load.v256i64.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %mask, i32 %evl)
  ret <256 x i64> %r
}

define fastcc <256 x i64> @vp_strided_load_v256i64_rr(ptr %ptr, i64 %stride, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256i64_rr:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s2, %s2, (32)0
; CHECK-NEXT:    lvl %s2
; CHECK-NEXT:    vld %v0, %s1, %s0
; CHECK-NEXT:    b.l.t (, %s10)
  %one = insertelement <256 x i1> undef, i1 1, i32 0
  %allones = shufflevector <256 x i1> %one, <256 x i1> undef, <256 x i32> zeroinitializer
  %r = call <256 x i64> @llvm.experimental.vp.strided.load.v256i64.p0.i64(ptr %ptr, i64 %stride, <256 x i1> %allones, i32 %evl)
  ret <256 x i64> %r
}

define fastcc <256 x i64> @vp_strided_load_v256i64_ri(ptr %ptr, i32 %evl) {
; CHECK-LABEL: vp_strided_load_v256i64_ri:
; CHECK:       # %bb.0:
; CHECK-NEXT:    and %s1, %s1, (32)0
; CHECK-NEXT:    lvl %s1
; CHECK-NEXT:    vld %v0, 24, %s0
; CHECK-NEXT:    b.l.t (, %s10)
  %one = insertelement <256 x i1> undef, i1 1, i32 0
  %allones = shufflevector <256 x i1> %one, <256 x i1> undef, <256 x i32> zeroinitializer
  %r = call <256 x i64> @llvm.experimental.vp.strided.load.v256i64.p0.i64(ptr %ptr, i64 24, <256 x i1> %allones, i32 %evl)
  ret <256 x i64> %r
}