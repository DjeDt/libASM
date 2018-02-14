section	.data

section	.text
	global	_ft_toupper

_ft_toupper:
	push	rbp
	mov	rbp, rsp

	cmp	rdi, 97
	jl	.ret
	cmp	rdi, 122
	jg	.ret

	sub	rdi, 32
	jmp	.ret

.ret:
	mov	rax, rdi
	leave
	ret
