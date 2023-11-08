	.file	"tail_call_optimisation.c"
	.intel_syntax noprefix
	.text
	.globl	factorial
	.type	factorial, @function
factorial:
.LFB23:
	.cfi_startproc
	endbr64
	mov	eax, esi
	cmp	edi, 1
	je	.L4
.L2:
	imul	eax, edi
	sub	edi, 1
	cmp	edi, 1
	jne	.L2
.L4:
	ret
	.cfi_endproc
.LFE23:
	.size	factorial, .-factorial
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB24:
	.cfi_startproc
	endbr64
	mov	edx, 120
	lea	rsi, .LC0[rip]
	mov	edi, 1
	mov	eax, 0
	jmp	__printf_chk@PLT
	.cfi_endproc
.LFE24:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
