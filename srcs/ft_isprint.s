section	.text
	global	_ft_isprint

_ft_isprint:
	push	rbp
	mov		rbp, rsp

	cmp		rdi, 0x20
	jl		.nope

	cmp		rdi, 0x7e
	jg		.nope

.success:
	mov		rax, 1
	leave
	ret

.nope:
	xor		rax, rax
	leave
	ret
