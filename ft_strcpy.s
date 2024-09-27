.intel_syntax noprefix
.text
	.globl _ft_strcpy
_ft_strcpy:
	push rbp
	mov rbp, rsp
	mov rdx, rdi

strcpy_loop:
	mov al, byte ptr [rsi] 
	mov byte ptr [rdi], al 
	cmp al, 0
	je return
	inc rsi
	inc rdi
	jmp strcpy_loop

return:
	mov rax, rdx
	mov rsp, rbp
	pop rbp
	ret
