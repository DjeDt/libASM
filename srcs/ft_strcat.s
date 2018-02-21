section .data

section .text
	global	_ft_strcat

_ft_strcat:
	push	rbp
	mov	rbp, rsp
	push	rdi			; backup rdi

.check:					; Check si *s1 =='\0'
	cmp	byte [rdi], 0x0		; if (rbx == '\0')
	je	.copy			; go copy
	inc	rdi			; s1++
	jmp	.check			; reloop sur check

.copy:					; copie s2 dans s1
	cmp	byte [rsi], 0x0		; *s2 == '\0' ?
	je	.ret
	mov	al, byte [rsi]		; on prend un registre tmp pour stocker *s2
	mov	byte [rdi], al		; on copie *s2 dans *s1
	inc	rdi			; s1++
	inc	rsi			; s2++
	jmp	.copy			; if *s2 != '\0' copy again

.ret:
	mov	byte [rdi], 0x0		; add '\0'
	pop	rdi
	mov	rax, rdi		; return (s1)
	leave
	ret
