; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py

; RUN: llc -verify-machineinstrs -csky-no-aliases < %s -mtriple=csky -float-abi=hard -mattr=+hard-float -mattr=+2e3 -mattr=+fpuv2_sf -mattr=+fpuv2_df | FileCheck %s --check-prefix=CHECK-DF
; RUN: llc -verify-machineinstrs -csky-no-aliases < %s -mtriple=csky -float-abi=hard -mattr=+hard-float -mattr=+2e3 -mattr=+fpuv3_sf -mattr=+fpuv3_df | FileCheck %s --check-prefix=CHECK-DF2


; double --> float
define float @fptruncR_double_0(double %x) {
;
; CHECK-DF-LABEL: fptruncR_double_0:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtos vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptruncR_double_0:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fdtos vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %fptrunc = fptrunc double %x to float
  ret float %fptrunc
}

define double @fpextR_double_0(float %x) {
;
; CHECK-DF-LABEL: fpextR_double_0:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fstod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fpextR_double_0:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fstod vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %fpext = fpext float %x to double
  ret double %fpext
}

; double --> i32
define i32 @fptosiR_double_1(double %x) {
;
;
; CHECK-DF-LABEL: fptosiR_double_1:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtosi.rz vr0, vr0
; CHECK-DF-NEXT:    fmfvrl a0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptosiR_double_1:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fftoi.f64.s32.rz vr0, vr0
; CHECK-DF2-NEXT:    fmfvr.32.1 a0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %fptosi = fptosi double %x to i32
  ret i32 %fptosi
}


; double --> i16
define i16 @fptosiR_double_2(double %x) {
;
;
; CHECK-DF-LABEL: fptosiR_double_2:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtosi.rz vr0, vr0
; CHECK-DF-NEXT:    fmfvrl a0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptosiR_double_2:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fftoi.f64.s32.rz vr0, vr0
; CHECK-DF2-NEXT:    fmfvr.32.1 a0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %fptosi = fptosi double %x to i16
  ret i16 %fptosi
}


; double --> i8
define i8 @fptosiR_double_3(double %x) {
;
;
; CHECK-DF-LABEL: fptosiR_double_3:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtosi.rz vr0, vr0
; CHECK-DF-NEXT:    fmfvrl a0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptosiR_double_3:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fftoi.f64.s32.rz vr0, vr0
; CHECK-DF2-NEXT:    fmfvr.32.1 a0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %fptosi = fptosi double %x to i8
  ret i8 %fptosi
}

; double --> i1
define i1 @fptosiR_double_4(double %x) {
;
;
; CHECK-DF-LABEL: fptosiR_double_4:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtosi.rz vr0, vr0
; CHECK-DF-NEXT:    fmfvrl a0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptosiR_double_4:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fftoi.f64.s32.rz vr0, vr0
; CHECK-DF2-NEXT:    fmfvr.32.1 a0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %fptosi = fptosi double %x to i1
  ret i1 %fptosi
}

; double --> i32
define i32 @fptouiR_double_1(double %x) {
;
; CHECK-DF-LABEL: fptouiR_double_1:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtoui.rz vr0, vr0
; CHECK-DF-NEXT:    fmfvrl a0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptouiR_double_1:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fftoi.f64.u32.rz vr0, vr0
; CHECK-DF2-NEXT:    fmfvr.32.1 a0, vr0
; CHECK-DF2-NEXT:    rts16

entry:
  %fptoui = fptoui double %x to i32
  ret i32 %fptoui
}


; double --> i16
define i16 @fptouiR_double_2(double %x) {
;
; CHECK-DF-LABEL: fptouiR_double_2:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtoui.rz vr0, vr0
; CHECK-DF-NEXT:    fmfvrl a0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptouiR_double_2:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fftoi.f64.u32.rz vr0, vr0
; CHECK-DF2-NEXT:    fmfvr.32.1 a0, vr0
; CHECK-DF2-NEXT:    rts16

entry:
  %fptoui = fptoui double %x to i16
  ret i16 %fptoui
}


; double --> i8
define i8 @fptouiR_double_3(double %x) {
;
; CHECK-DF-LABEL: fptouiR_double_3:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtoui.rz vr0, vr0
; CHECK-DF-NEXT:    fmfvrl a0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptouiR_double_3:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fftoi.f64.u32.rz vr0, vr0
; CHECK-DF2-NEXT:    fmfvr.32.1 a0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %fptoui = fptoui double %x to i8
  ret i8 %fptoui
}


; double --> i1
define i1 @fptouiR_double_4(double %x) {
;
;
; CHECK-DF-LABEL: fptouiR_double_4:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fdtoui.rz vr0, vr0
; CHECK-DF-NEXT:    fmfvrl a0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: fptouiR_double_4:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fftoi.f64.u32.rz vr0, vr0
; CHECK-DF2-NEXT:    fmfvr.32.1 a0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %fptoui = fptoui double %x to i1
  ret i1 %fptoui
}


; i32/i16/i8/i1 --> double

define double @sitofpR_double_0(i32 %x) {
;
;
; CHECK-DF-LABEL: sitofpR_double_0:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fmtvrl vr0, a0
; CHECK-DF-NEXT:    fsitod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: sitofpR_double_0:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fmtvr.32.1 vr0, a0
; CHECK-DF2-NEXT:    fitof.s32.f64 vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %sitofp = sitofp i32 %x to double
  ret double %sitofp
}

define double @sitofpR_double_1(i16 %x) {
;
;
; CHECK-DF-LABEL: sitofpR_double_1:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    sexth16 a0, a0
; CHECK-DF-NEXT:    fmtvrl vr0, a0
; CHECK-DF-NEXT:    fsitod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: sitofpR_double_1:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    sexth16 a0, a0
; CHECK-DF2-NEXT:    fmtvr.32.1 vr0, a0
; CHECK-DF2-NEXT:    fitof.s32.f64 vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %sitofp = sitofp i16 %x to double
  ret double %sitofp
}

define double @sitofpR_double_2(i8 %x) {
;
;
; CHECK-DF-LABEL: sitofpR_double_2:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    sextb16 a0, a0
; CHECK-DF-NEXT:    fmtvrl vr0, a0
; CHECK-DF-NEXT:    fsitod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: sitofpR_double_2:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    sextb16 a0, a0
; CHECK-DF2-NEXT:    fmtvr.32.1 vr0, a0
; CHECK-DF2-NEXT:    fitof.s32.f64 vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %sitofp = sitofp i8 %x to double
  ret double %sitofp
}

define double @sitofpR_double_3(i1 %x) {
;
;
; CHECK-DF-LABEL: sitofpR_double_3:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    sext32 a0, a0, 0, 0
; CHECK-DF-NEXT:    fmtvrl vr0, a0
; CHECK-DF-NEXT:    fsitod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: sitofpR_double_3:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    sext32 a0, a0, 0, 0
; CHECK-DF2-NEXT:    fmtvr.32.1 vr0, a0
; CHECK-DF2-NEXT:    fitof.s32.f64 vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %sitofp = sitofp i1 %x to double
  ret double %sitofp
}

; i32/i16/i8/i1 --> double

define double @uitofpR_double_0(i32 %x) {
;
;
; CHECK-DF-LABEL: uitofpR_double_0:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    fmtvrl vr0, a0
; CHECK-DF-NEXT:    fuitod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: uitofpR_double_0:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    fmtvr.32.1 vr0, a0
; CHECK-DF2-NEXT:    fitof.u32.f64 vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %uitofp = uitofp i32 %x to double
  ret double %uitofp
}

define double @uitofpR_double_1(i16 %x) {
;
;
; CHECK-DF-LABEL: uitofpR_double_1:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    zexth16 a0, a0
; CHECK-DF-NEXT:    fmtvrl vr0, a0
; CHECK-DF-NEXT:    fuitod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: uitofpR_double_1:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    zexth16 a0, a0
; CHECK-DF2-NEXT:    fmtvr.32.1 vr0, a0
; CHECK-DF2-NEXT:    fitof.u32.f64 vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %uitofp = uitofp i16 %x to double
  ret double %uitofp
}

define double @uitofpR_double_2(i8 %x) {
;
;
; CHECK-DF-LABEL: uitofpR_double_2:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    zextb16 a0, a0
; CHECK-DF-NEXT:    fmtvrl vr0, a0
; CHECK-DF-NEXT:    fuitod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: uitofpR_double_2:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    zextb16 a0, a0
; CHECK-DF2-NEXT:    fmtvr.32.1 vr0, a0
; CHECK-DF2-NEXT:    fitof.u32.f64 vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %uitofp = uitofp i8 %x to double
  ret double %uitofp
}

define double @uitofpR_double_3(i1 %x) {
;
;
; CHECK-DF-LABEL: uitofpR_double_3:
; CHECK-DF:       # %bb.0: # %entry
; CHECK-DF-NEXT:    andi32 a0, a0, 1
; CHECK-DF-NEXT:    fmtvrl vr0, a0
; CHECK-DF-NEXT:    fuitod vr0, vr0
; CHECK-DF-NEXT:    rts16
;
; CHECK-DF2-LABEL: uitofpR_double_3:
; CHECK-DF2:       # %bb.0: # %entry
; CHECK-DF2-NEXT:    andi32 a0, a0, 1
; CHECK-DF2-NEXT:    fmtvr.32.1 vr0, a0
; CHECK-DF2-NEXT:    fitof.u32.f64 vr0, vr0
; CHECK-DF2-NEXT:    rts16
entry:
  %uitofp = uitofp i1 %x to double
  ret double %uitofp
}