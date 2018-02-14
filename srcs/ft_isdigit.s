section	.data

section	.text
	global	_ft_isdigit

_ft_isdigit:
	push	rbp
	mov	rbp, rsp

	cmp	rdi, 48
	jl	.nope
	cmp	rdi, 57
	jg	.nope
	jmp	.success

.success:
	mov	rax, 1
	leave
	ret

.nope:
	xor	rax, rax
	leave
	ret
