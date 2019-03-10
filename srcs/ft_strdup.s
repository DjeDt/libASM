section	.text
	global	_ft_strdup
	extern	_malloc
	extern	_ft_strlen
	extern	_ft_memcpy

_ft_strdup:
	push	rbp
	mov		rbp, rsp
	push	rdi
	call	_ft_strlen

	mov		rdi, rax
	push	rdi
	call	_malloc
	cmp		rax, 0x0
	je		.ret

	mov		rdi, rax
	mov		r8, rdi
	pop		rdx
	pop		rsi
	call	_ft_memcpy
	mov		rax, r8

.ret:
	leave
	ret
