section .data
	hello_Str db "Hello, Holberton", 0
	fmt db "%s", 0

section .text
	extern printf

global _MAIN
_MAIN:
	mov rdi, fmt
	mov rsi, hello_Str
	xor rax, rax

call printf

mov eax, 60
xor edi, edi
syscall

