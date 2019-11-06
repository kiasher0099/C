	.file	"arith.c"
	.text
	.globl	arith
	.type	arith, @function
long arith(long x, long y, long z)
x in %rdi, y in %rsi, z in %rdx
arith:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-40(%rbp), %rax
	xorq	-48(%rbp), %rax		t1 = x ^ y	 	
	movq	%rax, -32(%rbp)
	movq	-56(%rbp), %rdx		3*z \
	movq	%rdx, %rax				\
	addq	%rax, %rax				\
	addq	%rdx, %rax				\
	salq	$4, %rax			t2 = 16 * (3 * z) = 48 * z
	movq	%rax, -24(%rbp)
	movq	-32(%rbp), %rax
	andl	$252645135, %eax	t3 = t1 & 0X0F0F0F0F
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	subq	-16(%rbp), %rax		return t2 - t3
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
