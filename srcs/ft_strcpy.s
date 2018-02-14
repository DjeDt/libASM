section .data

section .text
	global	_ft_strcpy

;	ft_strcpy(char *dst, char *src)

_ft_strcpy:
        push    rbp
        mov     rbp, rsp

.copy:
        cmp     byte [rsi], 0x0
        je      .quit
        mov     al, byte [rsi]
        mov     byte [rdi], al
        inc     rdi
        inc     rsi
	jmp	.copy

.quit:
	mov	rax, rdi
        leave
        ret
