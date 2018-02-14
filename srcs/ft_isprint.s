section	.data

section	.text
	global	_ft_isprint

_ft_isprint:
	push	rbp
	mov	rbp, rsp

	cmp	rdi, 32
	jl	.nope
	
	cmp	rdi, 126
	jg	.nope
	jmp	.success

.success
	mov	rax, 1
	leave
	ret

.nope
	xor	rax, rax
	leave
	ret
