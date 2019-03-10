section .text
	global	_ft_isascii

_ft_isascii:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, 0x0
	jl		.ret
	cmp		rdi, 127
	jg		.ret

.success:
	mov rax, 1
	leave
	ret

.ret:
	xor rax, rax
	leave
	ret
