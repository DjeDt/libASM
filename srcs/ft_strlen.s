section .text
	global	_ft_strlen

_ft_strlen:
	push	rbp
	mov		rbp, rsp

.count:
	mov		rcx, -1
    mov		rsi, rdi
    mov		al, 0x0
    repne	scasb
    sub		rdi, rsi
    dec		rdi
    mov		rax, rdi
	leave
    ret
