section	.data

section	.text
	global	_ft_strdup
	extern	_malloc
	extern	_ft_strlen
	extern	_ft_memcpy

_ft_strdup:
	push	rbp
	mov	rbp, rsp
	
	push	rdi		; backup src to heap	[1]
	call	_ft_strlen


	mov	rdi, rax
	push	rdi		; backup len to heap	[2]
	call	_malloc
	
	mov	rdi, rax	; on bouge la chaine allouee dans rdi (dst)
	mov	r8, rdi
	pop	rdx		; len to rdx [2]
	pop	rsi		; src to rsi [1]
	call	_ft_memcpy

	mov	rax, r8
	leave
	ret
