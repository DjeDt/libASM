
section	.text
	global	_ft_bzero

_ft_bzero:
	push	rbp
	mov		rbp, rsp
	test	rdi, rdi
	je		.ret				; rdi == null
	test	rsi, rsi
	je		.ret				; rsi == 0

.loop:
	dec		rsi						; len--
	cmp		rsi, 0x0				; if len == 0
	jl		.ret					; then return
	mov		byte [rdi + rsi], 0x0	; on met a 0 le byte de rbx aka ptr[len]
	jmp		.loop					; si != on boucle encore

.ret:
	leave
	ret				; retour
