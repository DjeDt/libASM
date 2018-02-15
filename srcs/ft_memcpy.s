section	.data

section	.text
	global	_ft_memcpy

_ft_memcpy:
	push	rbp
	mov	rbp, rsp
	jmp	.fill

.fill:
	mov	r8, rdi		; on save dst
	mov	rcx, rdx	; set up loop len

	mov	al, byte [rsi]	; on met le byte de rsi dans al
	repne	stosb		; Fill (E)CX bytes at ES:[(E)DI] with AL
				; repne : termination condition -> [ ecx = 0] & [ZF = 1]
				; Fill (E)CX bytes at ES:[(E)DI] with AL

	mov	rax, r8		; return (dst);
	leave
	ret
