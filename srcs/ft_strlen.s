section	.data

section .text
	global	_ft_strlen

_ft_strlen:
	push	rbp
	mov	rbp, rsp
	jmp	.count

.count:
        mov	rcx, -1			; pour gerer repne et rcx == 0
        mov	rsi, rdi		; backup rdi to rsi 

        mov	al, 0			; byte to search for
        repne	scasb			; repne	: termination condition -> [ ecx = 0] & [ZF = 1]
					; scas	: Find non-AL byte starting at ES:[(E)DI] (b -> byte)
					; both	: Scan string for NULL, decrementing CX for each char

        sub	rdi, rsi		; on mov la chaine dans rdi
        dec	rdi			; don't count the \0 in the string length
        mov	rax, rdi		; save the return value
	leave
        ret
