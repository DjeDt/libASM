%define	MACSYSCALL(nb) 0x2000000 | nb
%define	LEN		0x1000
%define	STDOUT	1
%define	STDERR	2
%define	READ	3
%define	WRITE	4

section	.data
msg:
	.err_fd:	db "bad file descriptor", 0x0a
	.len:		equ $ - .err_fd

section	.text
	global	_ft_cat
	extern	_ft_bzero

_ft_cat:
	push	rbp
	mov		rbp, rsp
	cmp		edi, 0
	jl		.err_fd
	sub		rsp, LEN

.loop_read:
	push	rdi
	lea		rsi, [rbp - LEN]
	mov		rdx, LEN
	mov		rax, MACSYSCALL(READ)
	syscall

	cmp		rax, 0
	jle		.ret

	mov		rdi, STDOUT
	lea		rsi, [rbp - LEN]
	mov		rdx, rax
	mov		rax, MACSYSCALL(WRITE)
	syscall

	lea		rdi, [rbp - LEN]
	mov		rsi, LEN
	call	_ft_bzero

	pop		rdi
	jmp		.loop_read

.err_fd:
	push	rdi
	mov		rdi, STDERR
	lea		rsi, [rel msg.err_fd]
	mov		rdx, msg.len
	mov		rax, MACSYSCALL(WRITE)
	syscall
	pop		rdi

.ret:
	leave
	ret
