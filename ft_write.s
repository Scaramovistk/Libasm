.intel_syntax
	.globl _ft_write
	.extern ___error
_ft_write:
		#fd = rdi, buffer = rsi, bytes = rdx
	mov rax, 0x2000004
	syscall
	jc error
	ret

error:
	push rax
	call ___error
	pop qword ptr [rax]
	mov rax, -1
	ret
