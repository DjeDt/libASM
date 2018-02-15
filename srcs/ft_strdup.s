section	.data

section	.text
	global	_ft_strdup
	extern	_malloc
	extern	_ft_strlen

_ft_strdup:
	push	rbp
	mov	rbp, rsp
	jmp	.fill

.fill:
	

	leave
	ret
