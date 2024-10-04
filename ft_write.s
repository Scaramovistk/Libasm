.intel_syntax
	.globl _ft_write
_ft_write:
		#fd = rdi, buffer = rsi, bytes = rdx
	mov rax, 0x2000004
	syscall
	ret
