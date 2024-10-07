.intel_syntax
	.globl _ft_strcmp

_ft_strcmp:
	push rbp
	mov rbp, rsp

strcmp_loop:
	mov al, byte ptr [rsi]
	mov bl, byte ptr [rdi]
	cmp al, bl
	jne return
	test al, al
	je return_zero
	inc rsi
	inc rdi
	jmp strcmp_loop

return:
	sub bl, al
	movsx rax, bl
	mov rsp, rbp
	pop rbp
	ret

return_zero:
	cmp al, bl
	jne return
	xor rax, rax
	mov rsp, rbp
	pop rbp
	ret