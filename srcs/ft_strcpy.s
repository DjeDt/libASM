
_ft_strcpy:
        push    rbp
        mov     rbp, rsp
        mov     rbx, rdi
boucle:
        cmp     [rsi], byte 0x0
        je      _quit
        mov     r8b, byte[rsi]
        mov     byte [rbx], r8b
        inc     rbx
        inc     rsi
_quit:
        leave
        ret
