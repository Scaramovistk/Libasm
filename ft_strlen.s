.intel_syntax
.text
	.globl _ft_strlen
	_ft_strlen:
		push rbp
		mov rbp, rsp

		mov rax, rdi
		xor rcx, rcx

	strlen_loop:
		xor r8, r8
		add r8, rax
		cmp byte ptr [r8 + rcx], 0
		je return
		inc rcx
		jmp strlen_loop

	return:
		mov rax, rcx
		mov rsp, rbp
		pop rbp
		ret
