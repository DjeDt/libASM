section	.data

section	.text
	global	_ft_memset

_ft_memset:
	push	rbp
	mov	rbp, rsp
	jmp	.fill

.fill:
	mov	r8, rdi		; backup rdi -> r8
	mov	rax, rsi	; set up char to write in ptr
	mov	rcx, rdx	; set up loop len
	repne	stosb		; Fill (E)CX bytes at ES:[(E)DI] with AL
				; repne : termination condition -> [ ecx = 0] & [ZF = 1]
				; Fill (E)CX bytes at ES:[(E)DI] with AL

	inc	rdi		; ptr++
	mov	rax, r8		; return (ptr);
	leave
	ret
