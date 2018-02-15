%define MAC_SYSCALL(nb) 0x2000000 | nb
%define	WRITE	4

section .data				; zone de donnee
	scpy:
		.s0:	db "Hello World", 10, 0
		.len0	equ $ - scpy.s0
		.s1:	db "Hello", 0
		.len1	equ $ - scpy.s1
		.s2:	db " World", 10, 0
		.len2	equ $ - scpy.s2
	
section .text
	global	_start
	global	_main

	extern	_ft_strcat
	extern	_ft_bzero
	extern	_ft_strcpy

	extern	_malloc
	extern	_strcpy
	extern	_puts
	extern	_exit
	extern	_printf

_start:
	call	_main
	ret

_main:
	push	rbp			;	set up stack
	mov	rsp, rbp		;	save stack in rsp
	sub	rsp, 8			;	rajouter des variables sur la stack (alignement)

	; ptr = malloc(0x42)
	mov	rdi, 0x42
	call	_malloc

	; ft_bzero(ptr, 0x42)
	mov	rdi, rax		; on met le retour de malloc dans rdi
	mov	rsi, 0x42		; aka taille
	call	_ft_bzero

	mov	rcx, rdi		; on save ptr

	; ptr2 = malloc(0x42)
	mov	rdi, 0x42
	call	_malloc

;	mov	rdi, rax
;	mov	rsi, 0x42
;	call	_ft_bzero

	mov	rdi, rax	
	mov	rsi, scpy.s0
	call	_ft_strcpy

	mov	rdi, rax
	call	_puts

	mov	rdi, rcx
	mov	rsi, rax
	call	_ft_strcat

	mov	rdi, rax
	call	_puts

	mov	rax, 1			;	rax = registre de retour
	leave
	ret				;	retour
