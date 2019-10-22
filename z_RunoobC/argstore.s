	.file	"argstore.c"
	.globl	k1
	.data
	.align 4
	.type	k1, @object
	.size	k1, 4
k1:
	.long	1
	.comm	k2,4,4
	.align 4
	.type	k3, @object
	.size	k3, 4
k3:
	.long	2
	.local	k4
	.comm	k4,4,4
	.section	.rodata
.LC0:
	.string	"hello"
	.align 8
.LC1:
	.string	"stack area - variables address \t\ti: %p\n"
	.align 8
.LC2:
	.string	"stack area - variables address \t\tp: %p\n"
	.align 8
.LC3:
	.string	"stack area - variables address \t  str: %p\n"
	.align 8
.LC4:
	.string	"stack area - variables address \t    q: %p\n"
	.align 8
.LC5:
	.string	"Heap area - malloc: \t\t\t    %p\n"
	.align 8
.LC6:
	.string	"Global int with value:\t           k1: %p\n"
	.align 8
.LC7:
	.string	"Global int no value: \t\t       k2: %p\n"
	.align 8
.LC8:
	.string	"Static int with value:             k3: %p\n"
	.align 8
.LC9:
	.string	"Static int no value:    \t\t   k4: %p\n"
	.align 8
.LC10:
	.string	"Local static int with value:\t   m1: %p\n"
	.align 8
.LC11:
	.string	"Local static int no value:\t\t   m2: %p\n"
	.align 8
.LC12:
	.string	"Literal constant address:\t\t   %p, %s\n"
	.align 8
.LC13:
	.string	"Main program address:  \t\t       %p\n"
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
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -52(%rbp)
	movabsq	$478560413032, %rax
	movq	%rax, -32(%rbp)
	movw	$0, -24(%rbp)
	movq	$.LC0, -40(%rbp)
	movl	$100, %edi
	call	malloc
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	free
	leaq	-52(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	leaq	-40(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	movq	-48(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	movl	$k1, %esi
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	movl	$k2, %esi
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	movl	$k3, %esi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	movl	$k4, %esi
	movl	$.LC9, %edi
	movl	$0, %eax
	call	printf
	movl	$m1.2808, %esi
	movl	$.LC10, %edi
	movl	$0, %eax
	call	printf
	movl	$m2.2809, %esi
	movl	$.LC11, %edi
	movl	$0, %eax
	call	printf
	movq	-40(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC12, %edi
	movl	$0, %eax
	call	printf
	movl	$main, %esi
	movl	$.LC13, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.data
	.align 4
	.type	m1.2808, @object
	.size	m1.2808, 4
m1.2808:
	.long	2
	.local	m2.2809
	.comm	m2.2809,4,4
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
