
section	.text
	global	_ft_bzero

_ft_bzero:
	push	rbp
	mov		rbp, rsp
	test	rdi, rdi
	je		.ret
	cmp		rsi, 0x0
	je		.ret

.loop:
	cmp		rsi, 0x0
	je		.ret
	dec		rsi
	mov		byte [rdi + rsi], 0x0
	jmp		.loop

.ret:
	leave
	ret
