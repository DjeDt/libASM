section	.data

section	.text
	global	_ft_islower

_ft_islower:
	push	rbp
	mov	rbp, rsp
	cmp	rdi, 97
	jl	.nope
	cmp	rdi, 122
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
