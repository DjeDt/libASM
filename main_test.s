section .data				; zone de donnee
	scpy:
		.s1:	db "Hello", 0
		.s2:	db " World", 0

section .text
	global	_start
	global	_main
	extern	_ft_strcat
	extern	_malloc
	extern	_strcpy
	extern	_puts
	extern	_exit

_start:
	call	_main
	ret

_main:
	push	rbp			;	set up stack
	mov	rsp, rbp		;	save stack in rsp
;	sub	rsp, 16			;	rajouter des variables sur la stack (alignement)

	mov	rdi, 0x42
	call	_malloc

	mov	rdi, rax
	mov	rsi, [rel scpy.s1]
	call	_ft_strcat

	mov	rdi, rax
	call	_puts
	
	mov	rax, 1			;	rax = registre de retour
;	leave
	ret				;	retour
