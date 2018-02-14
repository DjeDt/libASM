%define MAC_SYSCALL(nb) 0x2000000 | nb
%define	WRITE	4
%define STDOUT	1

section	.data


section	.text
	global	_ft_puts

_ft_puts:
	push	rbp
	mov	rbp, rsp

.print:
	cmp	byte [rdi], 0x0
	je	.ret
	mov	r8, rdi
	mov	rdi, STDOUT
	mov	rsi, r8
	mov	rdx, 1
	mov	rax, MAC_SYSCALL(WRITE)
	syscall
	mov	rdi, r8
	inc	rdi
	jmp	.print

.ret:
	leave
	ret
