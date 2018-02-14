section	.data

section	.text
	global	_ft_islower

_ft_islower:
	push	rbp
	mov	rbp, rsp
	cmp	rdi, 97
	jge	.cmp
	jmp	.nope

.cmp:
	cmp	rdi, 122
	jle	.success
	jmp	.nope

.success:
	mov	rax, 1
	leave
	ret

.nope:
	mov	rax, 0
	leave
	ret
