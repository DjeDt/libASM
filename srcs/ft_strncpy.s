section .text
	global	_ft_strncpy

_ft_strncpy:
    push	rbp
    mov		rbp, rsp
	push	rdi

.copy:
    cmp		byte [rsi], 0x0
    je		.quit
	cmp		rdx, 0x0
	jle		.quit
    mov		al, byte [rsi]
    mov		byte [rdi], al
    inc		rdi
    inc		rsi
	dec		rdx
	jmp		.copy

.quit:
	pop	rax
    leave
    ret
