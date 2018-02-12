%define MAC_SYSCALL(nb) 0x2000000 | nb
%define	WRITE	4
%define	STDOUT	1


section .data				; zone de donnee
test:
	.str db "test string", 10	; test de la chaine pour bzero
	.len equ $ - test.str		; taille de la chaine
	.str2 db "test", 10		; second test
	.len2 equ $ - test.str2		; taille seconde chaine

section .text
	global	_start
	global	_main
	global	_ft_bzero
	extern	_printf

_start:
	call	_main
	ret

_main:
	push	rbp				;	set up stack
	mov	rsp, rbp			;	save stack in rsp
	sub	rsp, 16				;	rajouter des variables sur la stack (alignement)

	mov	rdi, STDOUT
	lea	rsi, [rel test.str]
	mov	rdx, test.len
	mov	rax, MAC_SYSCALL(WRITE)
	syscall
	mov	rdi, STDOUT
	lea	rsi, [rel test.str2]
	mov	rdx, test.len2
	mov	rax, MAC_SYSCALL(WRITE)
	syscall
	call	_ft_bzero
	pop	rbp	
	mov	rax, 1				;	rax = registre de retour
	ret					;	retour

_ft_bzero:
	ret
