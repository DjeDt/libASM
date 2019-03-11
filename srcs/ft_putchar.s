%define MAC_SYSCALL(nb) 0x2000000 | nb
%define	WRITE	4
%define STDOUT	1

section .text
	global	_ft_putchar

_ft_putchar:
	push	rbp
	mov		rbp, rsp

	push	rdi
	mov		rsi, rsp
	mov     rax, MAC_SYSCALL(WRITE)
	mov		rdi, STDOUT
	mov		rdx, 0x1
	syscall

	leave
	ret
