	.file	"Merge_Sort.c"
	.text
	.globl	min
	.type	min, @function
min:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	cmovle	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	min, .-min
	.globl	merge_sort
	.type	merge_sort, @function
merge_sort:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%rdi, -88(%rbp)
	movl	%esi, -92(%rbp)
	movq	-88(%rbp), %rax
	movq	%rax, -24(%rbp)
	movl	-92(%rbp), %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc
	movq	%rax, -16(%rbp)
	movl	$1, -68(%rbp)
	jmp	.L4
.L16:
	movl	$0, -64(%rbp)
	jmp	.L5
.L15:
	movl	-64(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	-64(%rbp), %edx
	movl	-68(%rbp), %eax
	addl	%eax, %edx
	movl	-92(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	min
	movl	%eax, -40(%rbp)
	movl	-64(%rbp), %edx
	movl	-68(%rbp), %eax
	addl	%eax, %edx
	movl	-68(%rbp), %eax
	addl	%eax, %edx
	movl	-92(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	min
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -60(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -56(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -32(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -52(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -28(%rbp)
	jmp	.L6
.L10:
	movl	-60(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -60(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-56(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-52(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rsi
	movq	-24(%rbp), %rax
	addq	%rsi, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L7
	movl	-56(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -56(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	jmp	.L8
.L7:
	movl	-52(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -52(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
.L8:
	movl	%eax, (%rcx)
.L6:
	movl	-56(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jge	.L11
	movl	-52(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L10
	jmp	.L11
.L12:
	movl	-60(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -60(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-56(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -56(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rcx)
.L11:
	movl	-56(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jl	.L12
	jmp	.L13
.L14:
	movl	-60(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -60(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-52(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -52(%rbp)
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rcx)
.L13:
	movl	-52(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L14
	movl	-68(%rbp), %eax
	addl	%eax, %eax
	addl	%eax, -64(%rbp)
.L5:
	movl	-64(%rbp), %eax
	cmpl	-92(%rbp), %eax
	jl	.L15
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
	movl	-68(%rbp), %eax
	addl	%eax, %eax
	movl	%eax, -68(%rbp)
.L4:
	movl	-68(%rbp), %eax
	cmpl	-92(%rbp), %eax
	jl	.L16
	movq	-24(%rbp), %rax
	cmpq	-88(%rbp), %rax
	je	.L17
	movl	$0, -48(%rbp)
	jmp	.L18
.L19:
	movl	-48(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-16(%rbp), %rax
	addq	%rax, %rdx
	movl	-48(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	addl	$1, -48(%rbp)
.L18:
	movl	-48(%rbp), %eax
	cmpl	-92(%rbp), %eax
	jl	.L19
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
.L17:
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	free
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	merge_sort, .-merge_sort
	.section	.rodata
.LC0:
	.string	"arr[%d] = %d\t"
	.text
	.globl	main
	.type	main, @function
main:
.LFB4:
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
	movl	$23, -48(%rbp)
	movl	$12, -44(%rbp)
	movl	$34, -40(%rbp)
	movl	$56, -36(%rbp)
	movl	$32, -32(%rbp)
	movl	$2, -28(%rbp)
	movl	$30, -24(%rbp)
	movl	$99, -20(%rbp)
	movl	$0, -16(%rbp)
	movl	$9, -52(%rbp)
	movl	-52(%rbp), %edx
	leaq	-48(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	merge_sort
	movl	$0, -56(%rbp)
	jmp	.L21
.L22:
	movl	-56(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %edx
	movl	-56(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -56(%rbp)
.L21:
	movl	-56(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L22
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L24
	call	__stack_chk_fail
.L24:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
