section	.data

section .text
	global	_ft_strlen

_ft_strlen:
	push	rbp
	mov	rbp, rsp
	xor	rdx, rdx
	jmp	.count

.count:
	cmp	byte [rdi], 0x0
	je	.ret
	inc	rdx
	inc	rdi
	jmp	.count

.ret:
	mov	rax, rdx
	leave
	ret
