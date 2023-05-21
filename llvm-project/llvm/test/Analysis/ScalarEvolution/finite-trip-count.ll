; NOTE: Assertions have been autogenerated by utils/update_analyze_test_checks.py
; RUN: opt < %s -disable-output "-passes=print<scalar-evolution>" -scalar-evolution-max-iterations=0  -scalar-evolution-classify-expressions=0  2>&1 | FileCheck %s

target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

declare void @non_exit_use(i32 %i) #0

define void @SLE(i32 %len) willreturn {
; CHECK-LABEL: 'SLE'
; CHECK-NEXT:  Determining loop execution counts for: @SLE
; CHECK-NEXT:  Loop %for.body: backedge-taken count is (0 smax (1 + %len)<nsw>)
; CHECK-NEXT:  Loop %for.body: constant max backedge-taken count is 2147483647
; CHECK-NEXT:  Loop %for.body: symbolic max backedge-taken count is (0 smax (1 + %len)<nsw>)
; CHECK-NEXT:  Loop %for.body: Predicated backedge-taken count is (0 smax (1 + %len)<nsw>)
; CHECK-NEXT:   Predicates:
; CHECK:       Loop %for.body: Trip multiple is 1
;
entry:
  br label %for.body

for.body:
  %iv = phi i32 [ %inc, %for.body ], [ 0, %entry ]
  call void @non_exit_use(i32 %iv) nounwind willreturn
  %inc = add i32 %iv, 1
  %cmp = icmp sle i32 %iv, %len
  br i1 %cmp, label %for.body, label %for.end

for.end:
  ret void
}

define void @SLE_infinite(i32 %len) {
; CHECK-LABEL: 'SLE_infinite'
; CHECK-NEXT:  Determining loop execution counts for: @SLE_infinite
; CHECK-NEXT:  Loop %for.body: Unpredictable backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable constant max backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable symbolic max backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable predicated backedge-taken count.
;
entry:
  br label %for.body

for.body:
  %iv = phi i32 [ %inc, %for.body ], [ 0, %entry ]
  call void @non_exit_use(i32 %iv) nounwind willreturn
  %inc = add i32 %iv, 1
  %cmp = icmp sle i32 %iv, %len
  br i1 %cmp, label %for.body, label %for.end

for.end:
  ret void
}

define void @ULE(i32 %len) willreturn {
; CHECK-LABEL: 'ULE'
; CHECK-NEXT:  Determining loop execution counts for: @ULE
; CHECK-NEXT:  Loop %for.body: backedge-taken count is (1 + %len)<nuw>
; CHECK-NEXT:  Loop %for.body: constant max backedge-taken count is -1
; CHECK-NEXT:  Loop %for.body: symbolic max backedge-taken count is (1 + %len)<nuw>
; CHECK-NEXT:  Loop %for.body: Predicated backedge-taken count is (1 + %len)<nuw>
; CHECK-NEXT:   Predicates:
; CHECK:       Loop %for.body: Trip multiple is 1
;
entry:
  br label %for.body

for.body:
  %iv = phi i32 [ %inc, %for.body ], [ 0, %entry ]
  call void @non_exit_use(i32 %iv) nounwind willreturn
  %inc = add i32 %iv, 1
  %cmp = icmp ule i32 %iv, %len
  br i1 %cmp, label %for.body, label %for.end

for.end:
  ret void
}

define void @ULE_infinite(i32 %len) {
; CHECK-LABEL: 'ULE_infinite'
; CHECK-NEXT:  Determining loop execution counts for: @ULE_infinite
; CHECK-NEXT:  Loop %for.body: Unpredictable backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable constant max backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable symbolic max backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable predicated backedge-taken count.
;
entry:
  br label %for.body

for.body:
  %iv = phi i32 [ %inc, %for.body ], [ 0, %entry ]
  call void @non_exit_use(i32 %iv) nounwind willreturn
  %inc = add i32 %iv, 1
  %cmp = icmp ule i32 %iv, %len
  br i1 %cmp, label %for.body, label %for.end

for.end:
  ret void
}

define void @SGE(i32 %end) willreturn {
; CHECK-LABEL: 'SGE'
; CHECK-NEXT:  Determining loop execution counts for: @SGE
; CHECK-NEXT:  Loop %for.body: backedge-taken count is (100 + (-1 * (100 smin (-1 + %end)<nsw>)))
; CHECK-NEXT:  Loop %for.body: constant max backedge-taken count is -2147483548
; CHECK-NEXT:  Loop %for.body: symbolic max backedge-taken count is (100 + (-1 * (100 smin (-1 + %end)<nsw>)))
; CHECK-NEXT:  Loop %for.body: Predicated backedge-taken count is (100 + (-1 * (100 smin (-1 + %end)<nsw>)))
; CHECK-NEXT:   Predicates:
; CHECK:       Loop %for.body: Trip multiple is 1
;
entry:
  br label %for.body

for.body:
  %iv = phi i32 [ %inc, %for.body ], [ 100, %entry ]
  call void @non_exit_use(i32 %iv) nounwind willreturn
  %inc = add i32 %iv, -1
  %cmp = icmp sge i32 %iv, %end
  br i1 %cmp, label %for.body, label %for.end

for.end:
  ret void
}

define void @SGE_infinite(i32 %end) {
; CHECK-LABEL: 'SGE_infinite'
; CHECK-NEXT:  Determining loop execution counts for: @SGE_infinite
; CHECK-NEXT:  Loop %for.body: Unpredictable backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable constant max backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable symbolic max backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable predicated backedge-taken count.
;
entry:
  br label %for.body

for.body:
  %iv = phi i32 [ %inc, %for.body ], [ 100, %entry ]
  call void @non_exit_use(i32 %iv) nounwind willreturn
  %inc = add i32 %iv, -1
  %cmp = icmp sge i32 %iv, %end
  br i1 %cmp, label %for.body, label %for.end

for.end:
  ret void
}

define void @UGE(i32 %end) willreturn {
; CHECK-LABEL: 'UGE'
; CHECK-NEXT:  Determining loop execution counts for: @UGE
; CHECK-NEXT:  Loop %for.body: backedge-taken count is (100 + (-1 * (100 umin (-1 + %end)))<nsw>)<nsw>
; CHECK-NEXT:  Loop %for.body: constant max backedge-taken count is 100
; CHECK-NEXT:  Loop %for.body: symbolic max backedge-taken count is (100 + (-1 * (100 umin (-1 + %end)))<nsw>)<nsw>
; CHECK-NEXT:  Loop %for.body: Predicated backedge-taken count is (100 + (-1 * (100 umin (-1 + %end)))<nsw>)<nsw>
; CHECK-NEXT:   Predicates:
; CHECK:       Loop %for.body: Trip multiple is 1
;
entry:
  br label %for.body

for.body:
  %iv = phi i32 [ %inc, %for.body ], [ 100, %entry ]
  call void @non_exit_use(i32 %iv) nounwind willreturn
  %inc = add i32 %iv, -1
  %cmp = icmp uge i32 %iv, %end
  br i1 %cmp, label %for.body, label %for.end

for.end:
  ret void
}

define void @UGE_infinite(i32 %end) {
; CHECK-LABEL: 'UGE_infinite'
; CHECK-NEXT:  Determining loop execution counts for: @UGE_infinite
; CHECK-NEXT:  Loop %for.body: Unpredictable backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable constant max backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable symbolic max backedge-taken count.
; CHECK-NEXT:  Loop %for.body: Unpredictable predicated backedge-taken count.
;
entry:
  br label %for.body

for.body:
  %iv = phi i32 [ %inc, %for.body ], [ 100, %entry ]
  call void @non_exit_use(i32 %iv) nounwind willreturn
  %inc = add i32 %iv, -1
  %cmp = icmp uge i32 %iv, %end
  br i1 %cmp, label %for.body, label %for.end

for.end:
  ret void
}

; FIXME: It would be better to compute ((-2 + %n) /u 2) as trip count here.
define void @pr54191(i64 %n) mustprogress {
; CHECK-LABEL: 'pr54191'
; CHECK-NEXT:  Determining loop execution counts for: @pr54191
; CHECK-NEXT:  Loop %loop: backedge-taken count is ((-3 + (4 smax (1 + %n)<nsw>))<nsw> /u 2)
; CHECK-NEXT:  Loop %loop: constant max backedge-taken count is 4611686018427387901
; CHECK-NEXT:  Loop %loop: symbolic max backedge-taken count is ((-3 + (4 smax (1 + %n)<nsw>))<nsw> /u 2)
; CHECK-NEXT:  Loop %loop: Predicated backedge-taken count is ((-3 + (4 smax (1 + %n)<nsw>))<nsw> /u 2)
; CHECK-NEXT:   Predicates:
; CHECK:       Loop %loop: Trip multiple is 1
;
entry:
  %guard = icmp sgt i64 %n, 1
  br i1 %guard, label %loop, label %exit

loop:
  %iv = phi i64 [ 2, %entry ], [ %iv.next, %loop ]
  %iv.next = add nuw nsw i64 %iv, 2
  %cmp = icmp sle i64 %iv.next, %n
  br i1 %cmp, label %loop, label %exit

exit:
  ret void
}