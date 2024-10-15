;
;	include file MACROS.INC for SH4(7750)
;

P1_OFS	.equ	H'80000000
P2_OFS	.equ	H'a0000000

	.macro	push reg
	mov.l	\reg,@-sp
	.endm

	.macro	pop reg
	mov.l	@sp+,\reg
	.endm

	.macro	jump adr
	push	r0
	mov.l	#\adr,r0
	jmp	@r0
	pop	r0
	.endm

	.macro	branch adr
	push	r0
	mov.l	#\adr'-branch\@-4,r0
branch\@
	braf	r0
	pop	r0
	.endm

