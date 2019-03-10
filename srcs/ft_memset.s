section	.text
	global	_ft_memset

_ft_memset:
	push	rbp
	mov		rbp, rsp

.fill:
	mov		r8, rdi
	mov		rax, rsi
	mov		rcx, rdx
	repne	stosb
	inc		rdi
	mov		rax, r8
	leave
	ret
