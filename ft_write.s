; Hw to take value
; Hw to return value
; how to set ernoo

.intel_syntax
.text
	.globl _ft_write
	_ft_write:
		push rbp ; BASE pointer
		mov rbp, rsp ; RSP = Stack pointer

		lea rdi, [rip + _main.S_0] ;RIP = next instruction
		call _puts

		mov rax, 0
		mov rsp, rbp
		pop rbp
		ret
	_ft_write.end:
	_main.S_0:
		.string "Hello, World"