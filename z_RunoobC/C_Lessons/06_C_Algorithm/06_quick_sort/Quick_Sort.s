	.file	"Quick_Sort.c"
	.text
	.globl	new_Range
	.type	new_Range, @function
new_Range:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	new_Range, .-new_Range
	.globl	swap
	.type	swap, @function
swap:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movq	-32(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movq	-32(%rbp), %rax
	movl	-4(%rbp), %edx
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	swap, .-swap
	.globl	quick_sort
	.type	quick_sort, @function
quick_sort:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	movq	%rdi, -88(%rbp)
	movl	%esi, -92(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -40(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %r13
	cmpl	$0, -92(%rbp)
	jg	.L5
	movl	$0, %eax
	jmp	.L6
.L5:
	movl	-92(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -56(%rbp)
	movl	-92(%rbp), %eax
	cltq
	movq	%rax, %r8
	movl	$0, %r9d
	movl	-92(%rbp), %eax
	cltq
	movq	%rax, %rdx
	movl	$0, %ecx
	movl	-92(%rbp), %eax
	cltq
	salq	$3, %rax
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
	movq	%rax, -48(%rbp)
	movl	$0, -80(%rbp)
	movl	-80(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -80(%rbp)
	movl	-92(%rbp), %edx
	subl	$1, %edx
	movq	-48(%rbp), %rbx
	movslq	%eax, %r12
	movl	%edx, %esi
	movl	$0, %edi
	call	new_Range
	movq	%rax, (%rbx,%r12,8)
	jmp	.L7
.L17:
	subl	$1, -80(%rbp)
	movq	-48(%rbp), %rax
	movl	-80(%rbp), %edx
	movslq	%edx, %rdx
	movq	(%rax,%rdx,8), %rax
	movq	%rax, -64(%rbp)
	movl	-64(%rbp), %edx
	movl	-60(%rbp), %eax
	cmpl	%eax, %edx
	jl	.L8
	jmp	.L7
.L8:
	movl	-64(%rbp), %edx
	movl	-60(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-88(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -68(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -76(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -72(%rbp)
	jmp	.L9
.L10:
	addl	$1, -76(%rbp)
.L9:
	movl	-76(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-88(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-68(%rbp), %eax
	jl	.L10
	jmp	.L11
.L12:
	subl	$1, -72(%rbp)
.L11:
	movl	-72(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-88(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-68(%rbp), %eax
	jg	.L12
	movl	-76(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jg	.L13
	movl	-72(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-88(%rbp), %rax
	addq	%rax, %rdx
	movl	-76(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-88(%rbp), %rax
	addq	%rcx, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	swap
	addl	$1, -76(%rbp)
	subl	$1, -72(%rbp)
.L13:
	movl	-76(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jle	.L9
	movl	-64(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jge	.L15
	movl	-80(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -80(%rbp)
	movl	-64(%rbp), %edx
	movq	-48(%rbp), %rbx
	movslq	%eax, %r12
	movl	-72(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	new_Range
	movq	%rax, (%rbx,%r12,8)
.L15:
	movl	-60(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jle	.L7
	movl	-80(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -80(%rbp)
	movl	-60(%rbp), %edx
	movq	-48(%rbp), %rbx
	movslq	%eax, %r12
	movl	-76(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	new_Range
	movq	%rax, (%rbx,%r12,8)
.L7:
	cmpl	$0, -80(%rbp)
	jne	.L17
	movl	$1, %eax
.L6:
	movq	%r13, %rsp
	cmpl	$1, %eax
	movq	-40(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L20
	call	__stack_chk_fail
.L20:
	leaq	-24(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	quick_sort, .-quick_sort
	.section	.rodata
.LC0:
	.string	"arr[%d] = %d\t"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
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
	movl	$3, -44(%rbp)
	movl	$1, -40(%rbp)
	movl	$5, -36(%rbp)
	movl	$12, -32(%rbp)
	movl	$4, -28(%rbp)
	movl	$10, -24(%rbp)
	movl	$8, -20(%rbp)
	movl	$7, -16(%rbp)
	movl	$9, -52(%rbp)
	movl	-52(%rbp), %edx
	leaq	-48(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	quick_sort
	movl	$0, -56(%rbp)
	jmp	.L22
.L23:
	movl	-56(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %edx
	movl	-56(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -56(%rbp)
.L22:
	movl	-56(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L23
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L25
	call	__stack_chk_fail
.L25:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
