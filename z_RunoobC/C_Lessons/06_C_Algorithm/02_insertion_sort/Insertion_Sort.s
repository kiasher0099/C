	.file	"Insertion_Sort.c"
	.text
	.globl	insertion_sort
	.type	insertion_sort, @function
insertion_sort:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$1, -12(%rbp)
	jmp	.L2
.L6:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L3
.L5:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	subl	$1, -8(%rbp)
.L3:
	cmpl	$0, -8(%rbp)
	jle	.L4
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-4(%rbp), %eax
	jg	.L5
.L4:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -12(%rbp)
.L2:
	movl	-12(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L6
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	insertion_sort, .-insertion_sort
	.section	.rodata
.LC0:
	.string	"arr[%d] = %d\t"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$10, -64(%rbp)
	movl	$3, -60(%rbp)
	movl	$53, -56(%rbp)
	movl	$21, -52(%rbp)
	movl	$55, -48(%rbp)
	movl	$3, -44(%rbp)
	movl	$11, -40(%rbp)
	movl	$9, -36(%rbp)
	movl	$0, -32(%rbp)
	movl	$12, -28(%rbp)
	movl	$11, -24(%rbp)
	movl	$11, -68(%rbp)
	movl	-68(%rbp), %edx
	leaq	-64(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	insertion_sort
	movl	$0, -72(%rbp)
	jmp	.L8
.L9:
	movl	-72(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %edx
	movl	-72(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -72(%rbp)
.L8:
	movl	-72(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jl	.L9
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L11
	call	__stack_chk_fail
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
