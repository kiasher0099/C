	.file	"Shell_Sort.c"
	.text
	.globl	shell_sort
	.type	shell_sort, @function
shell_sort:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	-28(%rbp), %eax
	sarl	%eax
	movl	%eax, -16(%rbp)
	jmp	.L2
.L8:
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L3
.L7:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	subl	-16(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L4
.L6:
	movl	-8(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	movl	-16(%rbp), %eax
	subl	%eax, -8(%rbp)
.L4:
	cmpl	$0, -8(%rbp)
	js	.L5
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-4(%rbp), %eax
	jg	.L6
.L5:
	movl	-8(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -12(%rbp)
.L3:
	movl	-12(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L7
	sarl	-16(%rbp)
.L2:
	cmpl	$0, -16(%rbp)
	jg	.L8
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	shell_sort, .-shell_sort
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
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$2, -48(%rbp)
	movl	$31, -44(%rbp)
	movl	$21, -40(%rbp)
	movl	$41, -36(%rbp)
	movl	$12, -32(%rbp)
	movl	$42, -28(%rbp)
	movl	$1, -24(%rbp)
	movl	$33, -20(%rbp)
	movl	$23, -16(%rbp)
	movl	$9, -52(%rbp)
	movl	-52(%rbp), %edx
	leaq	-48(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	shell_sort
	movl	$0, -56(%rbp)
	jmp	.L10
.L11:
	movl	-56(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %edx
	movl	-56(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -56(%rbp)
.L10:
	movl	-56(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L11
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L13
	call	__stack_chk_fail
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
