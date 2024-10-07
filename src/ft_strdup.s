section .text
	global _ft_strdup
	extern _malloc, _ft_strlen, _ft_strcpy
_ft_strdup:
	xor rax, rax
	push rdi
	call _ft_strlen
	inc rax
	mov rdi, rax
	call _malloc
	cmp rax, 0
	je nullptr
	pop rdi
	mov rsi, rdi
	mov rdi, rax
	call _ft_strcpy
	ret

nullptr:
	xor rax, rax
	ret
