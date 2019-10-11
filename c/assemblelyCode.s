	.file	"assemblelyCode.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"2 * 3 --> %ld\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	leaq	8(%rsp), %rdx
	movl	$3, %esi
	movl	$2, %edi
	call	multstore
	movq	8(%rsp), %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.globl	mult2
	.type	mult2, @function
mult2:
.LFB12:
	.cfi_startproc
	movq	%rdi, %rax
	imulq	%rsi, %rax
	ret
	.cfi_endproc
.LFE12:
	.size	mult2, .-mult2
	.ident	"GCC: (GNU) 6.1.0"
	.section	.note.GNU-stack,"",@progbits
