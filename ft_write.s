.intel_syntax
.text
	.globl _main
	_main:
		push rbp
		mov rbp, rsp

		lea rdi, [rip + _main.S_0]
		call _puts

		mov rax, 0
		mov rsp, rbp
		pop rbp
		ret
	_main.end:
	_main.S_0:
		.string "Hello, World"