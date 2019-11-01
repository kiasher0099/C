	.file	"Books.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Book 1 title : %s\n"
.LC1:
	.string	"Book 1 author : %s\n"
.LC2:
	.string	"Book 1 subject : %s\n"
.LC3:
	.string	"Book 1 book_id : %d\n"
.LC4:
	.string	"Book 2 title : %s\n"
.LC5:
	.string	"Book 2 author : %s\n"
.LC6:
	.string	"Book 2 subject : %s\n"
.LC7:
	.string	"Book 2 book_id : %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB47:
	.cfi_startproc
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	subq	$440, %rsp
	.cfi_def_cfa_offset 480
	movq	%fs:40, %rax
	movq	%rax, 424(%rsp)
	xorl	%eax, %eax
	movabsq	$7021788497380909123, %rax
	movq	%rax, (%rsp)
	movl	$1852403053, 8(%rsp)
	movw	$103, 12(%rsp)
	leaq	50(%rsp), %r13
	movabsq	$7596518278796178766, %rcx
	movq	%rcx, 50(%rsp)
	movb	$0, 58(%rsp)
	leaq	100(%rsp), %rbx
	movq	%rax, 100(%rsp)
	movabsq	$8454418029087386989, %rax
	movq	%rax, 108(%rsp)
	movl	$1769107316, 116(%rsp)
	movw	$27745, 120(%rsp)
	movb	$0, 122(%rsp)
	movl	$6495407, 200(%rsp)
	movabsq	$2336646254369203540, %rax
	movq	%rax, 208(%rsp)
	movabsq	$29113321670863170, %rcx
	movq	%rcx, 216(%rsp)
	leaq	258(%rsp), %r12
	movabsq	$7596518278796829018, %rcx
	movq	%rcx, 258(%rsp)
	movb	$0, 8(%r12)
	leaq	308(%rsp), %rbp
	movq	%rax, 308(%rsp)
	movabsq	$2334956330884557122, %rax
	movq	%rax, 316(%rsp)
	movabsq	$7809639169054242132, %rax
	movq	%rax, 324(%rsp)
	movb	$0, 332(%rsp)
	movl	$6495700, 408(%rsp)
	movq	%rsp, %rdx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movq	%r13, %rdx
	movl	$.LC1, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movq	%rbx, %rdx
	movl	$.LC2, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movl	200(%rsp), %edx
	movl	$.LC3, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	leaq	208(%rsp), %rdx
	movl	$.LC4, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movq	%r12, %rdx
	movl	$.LC5, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movq	%rbp, %rdx
	movl	$.LC6, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movl	408(%rsp), %edx
	movl	$.LC7, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movq	424(%rsp), %rbx
	xorq	%fs:40, %rbx
	je	.L2
	call	__stack_chk_fail
.L2:
	movl	$0, %eax
	addq	$440, %rsp
	.cfi_def_cfa_offset 40
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE47:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
