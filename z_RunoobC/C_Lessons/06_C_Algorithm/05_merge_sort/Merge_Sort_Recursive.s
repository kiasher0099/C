	.file	"Merge_Sort_Recursive.c"
	.text
	.globl	merge_sort_recursive
	.type	merge_sort_recursive, @function
merge_sort_recursive:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movl	%ecx, -56(%rbp)
	movl	-52(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jge	.L15
	movl	-56(%rbp), %eax
	subl	-52(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	sarl	%eax
	movl	%eax, %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -24(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %ecx
	movl	-28(%rbp), %edx
	movq	-48(%rbp), %rsi
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	merge_sort_recursive
	movl	-4(%rbp), %ecx
	movl	-24(%rbp), %edx
	movq	-48(%rbp), %rsi
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	merge_sort_recursive
	movl	-52(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L4
.L8:
	movl	-20(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -20(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-28(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rsi
	movq	-40(%rbp), %rax
	addq	%rsi, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L5
	movl	-28(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -28(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	jmp	.L6
.L5:
	movl	-24(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -24(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
.L6:
	movl	%eax, (%rcx)
.L4:
	movl	-28(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jg	.L9
	movl	-24(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jle	.L8
	jmp	.L9
.L10:
	movl	-20(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -20(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-28(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -28(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rcx)
.L9:
	movl	-28(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L10
	jmp	.L11
.L12:
	movl	-20(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -20(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-24(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -24(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rcx)
.L11:
	movl	-24(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jle	.L12
	movl	-52(%rbp), %eax
	movl	%eax, -20(%rbp)
	jmp	.L13
.L14:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-48(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	addl	$1, -20(%rbp)
.L13:
	movl	-20(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jle	.L14
	jmp	.L1
.L15:
	nop
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	merge_sort_recursive, .-merge_sort_recursive
	.globl	merge_sort
	.type	merge_sort, @function
merge_sort:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	movl	-60(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -40(%rbp)
	movl	-60(%rbp), %eax
	cltq
	movq	%rax, %r8
	movl	$0, %r9d
	movl	-60(%rbp), %eax
	cltq
	movq	%rax, %rdx
	movl	$0, %ecx
	movl	-60(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -32(%rbp)
	movl	-60(%rbp), %eax
	leal	-1(%rax), %edx
	movq	-32(%rbp), %rsi
	movq	-56(%rbp), %rax
	movl	%edx, %ecx
	movl	$0, %edx
	movq	%rax, %rdi
	call	merge_sort_recursive
	movq	%rbx, %rsp
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L17
	call	__stack_chk_fail
.L17:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	merge_sort, .-merge_sort
	.section	.rodata
.LC0:
	.string	"arr[%d] = %d\t"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
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
	movl	$21, -64(%rbp)
	movl	$21, -60(%rbp)
	movl	$43, -56(%rbp)
	movl	$55, -52(%rbp)
	movl	$1, -48(%rbp)
	movl	$2, -44(%rbp)
	movl	$5, -40(%rbp)
	movl	$213, -36(%rbp)
	movl	$44, -32(%rbp)
	movl	$13, -28(%rbp)
	movl	$22, -24(%rbp)
	movl	$11, -68(%rbp)
	movl	-68(%rbp), %edx
	leaq	-64(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	merge_sort
	movl	$0, -72(%rbp)
	jmp	.L19
.L20:
	movl	-72(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %edx
	movl	-72(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -72(%rbp)
.L19:
	movl	-72(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jl	.L20
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L22
	call	__stack_chk_fail
.L22:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
