section	.data

section	.text
	global	_ft_bzero

_ft_bzero:
	push	rbp			; on met en place la stack
	mov	rbp, rsp		; on save rbp dans rsp
	xor	rcx, rcx		; on met un registre a 0 aka count
	mov	rbx, rdi		; on met la chaine dans le registre rbx

loop:					; on demare le while
	mov	byte [rbx], 0	; on met a 0 le byte de rbx aka ptr[x]
	inc	rbx				; ptr++
	inc	rcx				; count++
	cmp	rcx, rsi		; comparaison entre count et le 2e arg de bzero
	jnl	loop			; si != on boucle encore

	leave
	ret				; retour
