section	.data

section	.text
	global	_ft_isupper

_ft_isupper:
	push	rbp
	mov	rbp, rsp	

	cmp	rdi, 65
	jl	.nope

	cmp	rdi, 90
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
