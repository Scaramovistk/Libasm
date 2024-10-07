section .text
	global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp

	mov rax, rdi
	xor rcx, rcx

strlen_loop:
	cmp byte [rdi + rcx], 0
	je return
	inc rcx
	jmp strlen_loop

return:
	mov rax, rcx
	mov rsp, rbp
	pop rbp
	ret
