section .text
	global _ft_isalnum

_ft_isalnum:
	push	rbp
	mov		rbp, rsp

	cmp		rdi, 48
	jl		.nope
	cmp		rdi, 122
	jg		.nope

	cmp		rdi, 57
	jle		.success

	cmp		rdi, 65
	jl		.nope
	cmp		rdi, 90
	jle		.success

	cmp		rdi, 97
	jl		.nope

.success:
	mov		rax, 1
	leave
	ret

.nope:
	xor		rax, rax
	leave
	ret
