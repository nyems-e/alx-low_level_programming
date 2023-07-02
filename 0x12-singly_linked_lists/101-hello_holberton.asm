
section .data
	hello_str: db "Hello, Holberton", 10, 0

section .text
	extern printf
	global main
main:
	mov rdi, hello_str
	mov rax, 0
	call printf

