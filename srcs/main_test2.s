%define MAC_SYSCALL(nb) 0x2000000 | nb
%define	WRITE	4
%define	STDOUT	1

section .data				; zone de donnee
test:
	.msg:	db "Hello World", 10
	.len:	equ $ - test.msg
	.msg2:	db "test", 10
	.len2:	equ $ - test.msg2

section	.text
	global	_main
	global	_ft_bzero
	extern	_malloc
	extern	_free

_start:
	call	_main
	ret

_main:
	push	rbp				; set up stack
	mov	rsp, rbp			; sauvegarde de la stack
	sub	rsp, 16				; alignement pour la stack

	mov	rdi, STDOUT
	lea	rsi, [rel test.msg]
	mov	rdx, test.len
	mov	rax, MAC_SYSCALL(WRITE)
	syscall					; on print pour tester

	mov	rdi, 50
	call	_malloc
	mov	rdi, rax			; on met la chaine malloce dans le registre 1arg
	mov	rsi, 50				; on met la taille sur rsi aka 2e arg

	call	_ft_bzero

	mov	rdi, STDOUT
	lea	rsi, [rel test.msg2]
	mov	rdx, test.len2
	mov	rax, MAC_SYSCALL(WRITE)
	syscall					; on print pour etre sur que la chaine est ok apres le bzero

	call	_free

	mov	rax, 1				; on met en place le retour
	leave
	ret

_ft_bzero:
	push	rbp			; on met en place la stack
	mov	rbp, rsp		; on save rbp dans rsp
	mov	rcx, 0			; on met un registre a 0 aka count
	mov	rbx, rdi		; on met la chaine dans le registre rbx

loop_start:				; on demare le while
	mov	byte [rbx], 0 		; on met a 0 le byte de rbx aka ptr[x]
	inc	rbx			; ptr++
	inc	rcx			; count++
	cmp	rcx, rsi		; comparaison entre count et le 2e arg de bzero
	jnl	loop_start		; si != on boucle encore

	leave	
	ret				; retour
