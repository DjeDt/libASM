%define	MAC_SYSCALL(nb) 0x2000000 | nb
%define	LEN	0x800	; 4096
%define	STDOUT	1
%define	READ	3
%define	WRITE	4

section	.data
msg:
	.err_fd:	db "bad file descriptor", 0x0a
	.len :		equ $ - .err_fd	

section	.text
	global	_ft_cat
	extern	_ft_bzero

_ft_cat:
	push	rbp
	mov	rbp, rsp

	cmp	rdi, 0			; fd is valid ?
	jl	.err_fd
	sub	rsp, LEN		; tmp[4096]

.loop_read:
	push	rdi			; backup fd
	lea	rsi, [rbp - LEN]	; tmp address in rsi
	mov	rdx, LEN
	mov	rax, MAC_SYSCALL(READ)
	syscall				; read

	cmp	rax, 1			; ret < 1 ? return ;
	jl	.ret

	mov	rdi, STDOUT
	lea	rsi, [rbp - LEN]
	mov	rdx, rax		; retour de read
	mov	rax, MAC_SYSCALL(WRITE)
	syscall				; write

	lea	rdi, [rbp - LEN]
	mov	rsi, 0x20
	call	_ft_bzero

	pop	rdi			; fd to rdi
	jmp	.loop_read

.ret:
	leave
	ret

.err_fd:
	mov	rdi, STDOUT
	lea	rsi, [rel msg.err_fd]
	mov	rdx, msg.len
	mov	rax, MAC_SYSCALL(WRITE)
	syscall
	leave
	ret
