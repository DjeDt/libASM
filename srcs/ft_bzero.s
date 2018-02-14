section	.data

section	.text
	global	_ft_bzero

;	ft_bzero(void *addr, unsigned int len)

_ft_bzero:
	push	rbp			; on met en place la stack
	mov	rbp, rsp		; on save rbp dans rsp
	
.loop:	
	dec	rsi			; len--
	cmp	rsi, 0x0		; si len == 0
	jl	.ret			; ret
	mov	byte [rdi + rsi], 0x0	; on met a 0 le byte de rbx aka ptr[len]
	jmp	.loop			; si != on boucle encore

.ret:
	leave
	ret				; retour
