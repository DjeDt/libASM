section	.data

section	.text
	global	_ft_memcpy

_ft_memcpy:
	push	rbp
	mov	rbp, rsp

	mov	rcx, rdx	; set up loop len
	rep	movsb		; copies a single byte from the source string, at address DS:SI
				; to the destination string, at address ES:DI
				; then increments (or decrements, if the Direction flag is set) both SI and DI

	mov	rax, rdi	; return (dst);

	leave
	ret
