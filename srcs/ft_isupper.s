section	.data

section	.text
	global	_ft_isupper

_ft_isupper:
	push	rbp
	mov	rbp, rsp	
	cmp	rdi, 65
	jge	.cmp
	jmp	.nope

.cmp:
	cmp	rdi, 90
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
