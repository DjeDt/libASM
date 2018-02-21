section .data

section .text
	global	_ft_isalpha

_ft_isalpha:
	push	rbp
	mov	rbp, rsp

	cmp	rdi, 65
	jl	.nope
	cmp	rdi, 122
	jg	.nope
	cmp	rdi, 90
	jle	.success
	cmp	rdi, 97
	jge	.success
	jmp	.nope

.success:
	mov	rax, 1
	leave
	ret

.nope:
	xor	rax, rax
	leave
	ret
