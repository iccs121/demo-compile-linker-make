	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 3	sdk_version 11, 3
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	stur	wzr, [x29, #-4]
	mov	w9, #1
	stur	w9, [x29, #-8]
	mov	w9, #97
	sturb	w9, [x29, #-9]
	str	xzr, [sp, #24]
	ldur	w9, [x29, #-8]
	ldursb	w10, [x29, #-9]
	add	w9, w9, w10
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	mov	x11, sp
                                        ; implicit-def: $x1
	mov	x1, x9
	str	x1, [x11]
	str	w8, [sp, #20]                   ; 4-byte Folded Spill
	bl	_printf
	ldr	w8, [sp, #20]                   ; 4-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"next char: %c\n"

.subsections_via_symbols
