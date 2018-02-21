%define MAC_SYSCALL(nb) 0x2000000 | nb
%define	WRITE	4
%define STDOUT	1

section	.data
msg:
	.nope:		db "(null)"
	.new_line:	db 0x0a

	.len:		equ $ - .nope

section	.text
	global	_ft_puts
	extern	_ft_strlen

_ft_puts:
	push	rbp
	mov	rbp, rsp
	test	rdi, rdi		; if (!rdi)
	jz	.nul			; then return

.print:
	push	rdi			; backup rdi
	call	_ft_strlen
	mov	rdx, rax
	mov	rdi, STDOUT
	pop	rsi
	mov	rax, MAC_SYSCALL(WRITE)
	syscall
	jmp	.ret

.nul:
	mov	rdi, STDOUT
	lea	rsi, [rel msg.nope]
	mov	rdx, msg.len
	mov	rax, MAC_SYSCALL(WRITE)
	syscall
	leave
	ret

.ret:
	mov	rdi, STDOUT
	lea	rsi, [rel msg.new_line]
	mov	rdx, 1
	mov	rax, MAC_SYSCALL(WRITE)
	syscall
	mov	rax, 1
	leave
	ret
