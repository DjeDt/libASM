section .text
	global	_ft_putendl
	extern	_ft_putstr
	extern	_ft_putchar

_ft_putendl:
	push	rbp
	mov		rbp, rsp

	call	_ft_putstr
	mov		rdi, 0xa
	call	_ft_putchar

	leave
	ret
