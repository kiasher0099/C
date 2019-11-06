	.file	"absdiff_se.c"
	.globl	lt_cnt
	.bss
	.align 8
	.type	lt_cnt, @object
	.size	lt_cnt, 8
lt_cnt:
	.zero	8
	.globl	ge_cnt
	.align 8
	.type	ge_cnt, @object
	.size	ge_cnt, 8
ge_cnt:
	.zero	8
	.text
	.globl	absdiff_se
	.type	absdiff_se, @function
absdiff_se:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	cmpq	-32(%rbp), %rax
	jge	.L2
	movq	lt_cnt(%rip), %rax
	addq	$1, %rax
	movq	%rax, lt_cnt(%rip)
	movq	-32(%rbp), %rax
	subq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L3
.L2:
	movq	ge_cnt(%rip), %rax
	addq	$1, %rax
	movq	%rax, ge_cnt(%rip)
	movq	-24(%rbp), %rax
	subq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
.L3:
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	absdiff_se, .-absdiff_se
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
