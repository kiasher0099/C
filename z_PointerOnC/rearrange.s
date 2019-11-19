	.file	"rearrange.c"
	.section	.rodata
.LC0:
	.string	"Original input : %s \n"
.LC1:
	.string	"Rearranged line : %s \n"
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
	subq	$2112, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-2096(%rbp), %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	read_column_numbers
	movl	%eax, -2100(%rbp)
	jmp	.L2
.L3:
	leaq	-2016(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leaq	-2096(%rbp), %rcx
	movl	-2100(%rbp), %edx
	leaq	-2016(%rbp), %rsi
	leaq	-1008(%rbp), %rax
	movq	%rax, %rdi
	call	rearrange
	leaq	-1008(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
.L2:
	leaq	-2016(%rbp), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	gets
	cltq
	testq	%rax, %rax
	jne	.L3
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.rodata
.LC2:
	.string	"%d"
	.align 8
.LC3:
	.string	"Last column number is not paired."
	.text
	.globl	read_column_numbers
	.type	read_column_numbers, @function
read_column_numbers:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L7
.L9:
	addl	$1, -8(%rbp)
.L7:
	movl	-8(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L8
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	cmpl	$1, %eax
	jne	.L8
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jns	.L9
.L8:
	movl	-8(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L12
	movl	$.LC3, %edi
	call	puts
	movl	$1, %edi
	call	exit
.L12:
	call	getchar
	movl	%eax, -4(%rbp)
	cmpl	$-1, -4(%rbp)
	je	.L11
	cmpl	$10, -4(%rbp)
	jne	.L12
.L11:
	movl	-8(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	read_column_numbers, .-read_column_numbers
	.globl	rearrange
	.type	rearrange, @function
rearrange:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movq	%rcx, -48(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	strlen
	movl	%eax, -4(%rbp)
	movl	$0, -12(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L15
.L18:
	movl	-16(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-48(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-4(%rbp), %eax
	jge	.L16
	cmpl	$999, -12(%rbp)
	je	.L16
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	cmpl	$999, %eax
	jle	.L17
	movl	$999, %eax
	subl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
.L17:
	movl	-8(%rbp), %eax
	cltq
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	movq	-48(%rbp), %rdx
	addq	%rcx, %rdx
	movl	(%rdx), %edx
	movslq	%edx, %rcx
	movq	-32(%rbp), %rdx
	leaq	(%rcx,%rdx), %rsi
	movl	-12(%rbp), %edx
	movslq	%edx, %rcx
	movq	-24(%rbp), %rdx
	addq	%rdx, %rcx
	movq	%rax, %rdx
	movq	%rcx, %rdi
	call	strncpy
	movl	-8(%rbp), %eax
	addl	%eax, -12(%rbp)
	addl	$2, -16(%rbp)
.L15:
	movl	-16(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L18
.L16:
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	rearrange, .-rearrange
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
