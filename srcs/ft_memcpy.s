section	.text
	global	_ft_memcpy

_ft_memcpy:
	push	rbp
	mov		rbp, rsp
	mov		rcx, rdx
	rep		movsb
	mov		rax, rdi
	leave
	ret
