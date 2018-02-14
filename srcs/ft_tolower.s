section	.data

section	.text
	global	_ft_tolower

_ft_tolower:
	push	rbp
	mov	rbp, rsp

	cmp	rdi, 65
	jl	.ret
	cmp	rdi, 90
	jg	.ret
	
	add	rdi, 32
	jmp	.ret

.ret:
	mov	rax, rdi
	leave
	ret
