section .data

section .text
	global	_ft_strcat

_ft_strcat:
	push	rbp
	mov	rbp, rsp
	mov	rbx, rdi		; on bouge s1 dans rbx

check:					; Check si *s1 =='\0'
	cmp	byte [rbx], byte 0x0	; if (rbx == '\0')
	je	copy			; go copy
	inc	rbx			; s1++
	jmp	check			; reloop sur check

copy:					; copie s2 dans s1
	mov	r8b, byte [rsi]		; on prend un registre tmp pour stocker le char
	mov	byte [rbx], r8b		; on copie le char dans s1
	inc	rbx			; s1++
	inc	rsi			; s2++
	cmp	byte [rsi], byte 0x0	; si *s2 == '\0'
	mov	rax, rsi
	leave
	ret
