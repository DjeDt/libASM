section .data

section .text
	global	_ft_strcpy

_ft_strcpy:
        push    rbp
        mov     rbp, rsp
	push	rdi

.copy:
        cmp     byte [rsi], 0x0
        je      .quit
        mov     al, byte [rsi]
        mov     byte [rdi], al
        inc     rdi
        inc     rsi
	jmp	.copy

.quit:
	pop	rax
        leave
        ret
