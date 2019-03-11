%define MAC_SYSCALL(nb) 0x2000000 | nb
%define	WRITE	4
%define STDOUT	1

section .text
	global	_ft_putstr
	extern	_ft_strlen

_ft_putstr:
	push	rbp
	mov		rbp, rsp
	push	rdi
	call	_ft_strlen
	mov		rdx, rax
	pop		rsi
	mov		rdi, STDOUT
	mov		rax, MAC_SYSCALL(WRITE)
	syscall
	leave
	ret
