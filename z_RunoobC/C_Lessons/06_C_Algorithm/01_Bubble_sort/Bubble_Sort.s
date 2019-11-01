	.file	"Bubble_Sort.c"
	.text
	.globl	bubble_sort
	.type	bubble_sort, @function
bubble_sort:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L2
.L6:
	movl	$0, -8(%rbp)
	jmp	.L3
.L5:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L4
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
.L4:
	addl	$1, -8(%rbp)
.L3:
	movl	-28(%rbp), %eax
	subl	$1, %eax
	subl	-12(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jg	.L5
	addl	$1, -12(%rbp)
.L2:
	movl	-28(%rbp), %eax
	subl	$1, %eax
	cmpl	-12(%rbp), %eax
	jg	.L6
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	bubble_sort, .-bubble_sort
	.section	.rodata
	.align 8
.LC0:
	.string	"sizeof(arr) = %lu\tsizeof(*arr) = %lu\tlen = %d\n"
.LC1:
	.string	"%d\t"
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
	movl	$22, -64(%rbp)
	movl	$34, -60(%rbp)
	movl	$3, -56(%rbp)
	movl	$32, -52(%rbp)
	movl	$82, -48(%rbp)
	movl	$55, -44(%rbp)
	movl	$89, -40(%rbp)
	movl	$50, -36(%rbp)
	movl	$37, -32(%rbp)
	movl	$5, -28(%rbp)
	movl	$64, -24(%rbp)
	movl	$35, -20(%rbp)
	movl	$9, -16(%rbp)
	movl	$70, -12(%rbp)
	movl	$14, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, %ecx
	movl	$4, %edx
	movl	$56, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	-68(%rbp), %edx
	leaq	-64(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	bubble_sort
	movl	$0, -72(%rbp)
	jmp	.L8
.L9:
	movl	-72(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
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
