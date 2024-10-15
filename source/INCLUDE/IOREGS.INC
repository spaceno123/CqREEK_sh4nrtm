;
;	include file IOREGS.INC for SH4(7750)
;

CCR	.equ	H'ff00001c	;32

BASRA	.equ	H'ff000014	; 8
BASRB	.equ	H'ff000018	; 8

TRA	.equ	H'ff000020	;32
EXPEVT	.equ	H'ff000024	;32
INTEVT	.equ	H'ff000028	;32

BARA	.equ	H'ff200000	;32
BAMRA	.equ	H'ff200004	; 8
BBRA	.equ	H'ff200008	;16
BARB	.equ	H'ff20000c	;32
BAMRB	.equ	H'ff200010	; 8
BBRB	.equ	H'ff200014	;16
BDRB	.equ	H'ff200018	;32
BDMRB	.equ	H'ff20001c	;32
BRCR	.equ	H'ff200020	;16

BCR1	.equ	H'ff800000	;32
BCR2	.equ	H'ff800004	;16
WCR1	.equ	H'ff800008	;32
WCR2	.equ	H'ff80000c	;32
WCR3	.equ	H'ff800010	;32
MCR	.equ	H'ff800014	;32

RTCSR	.equ	H'ff80001c	;16

RTCOR	.equ	H'ff800024	;16
RFCR	.equ	H'ff800028	;16

WTCNT	.equ	H'ffc00008	;r8/w16
WTCSR	.equ	H'ffc0000c	;r8/w16

ICR	.equ	H'ffd00000	;16
IPRA	.equ	H'ffd00004	;16
IPRB	.equ	H'ffd00008	;16
IPRC	.equ	H'ffd0000c	;16
IPRD	.equ	H'ffd00010	;16

SCSMR2	.equ	H'ffe80000	;16
SCBRR2	.equ	H'ffe80004	; 8
SCSCR2	.equ	H'ffe80008	;16
SCFTDR2	.equ	H'ffe8000c	; 8
SCFSR2	.equ	H'ffe80010	;16
SCFRDR2	.equ	H'ffe80014	; 8
SCFCR2	.equ	H'ffe80018	;16
SCFDR2	.equ	H'ffe8001c	;16
SCSPTR2	.equ	H'ffe80020	;16
SCLSR2	.equ	H'ffe80024	;16
