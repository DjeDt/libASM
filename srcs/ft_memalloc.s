section .text
	global	_ft_memalloc
	extern	_ft_bzero
	extern	_malloc

_ft_memalloc:
	push	rbp
	mov		rbp, rsp
	sub		rsp, 8

	push	rdi					; backup len
	call	_malloc
	cmp		rax, 0x0
	jle		.ret

	mov		rdi, rax			; rdi = rax = ptr
	pop		rsi					; rsi = len
	call	_ft_bzero
	mov		rax, rdi			; return (zeroed ptr)

.ret:
	leave
	ret
