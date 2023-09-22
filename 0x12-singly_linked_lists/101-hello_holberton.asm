section .data
    hello db "Hello, Holberton", 10 ; 10 is the newline character
    hello_len equ $ - hello

section .text
global _start

; File descriptors
%define STDOUT 1
%define SYS_WRITE 1

_start:
    ; syscall: write(STDOUT, hello, hello_len)
    mov rax, SYS_WRITE
    mov rdi, STDOUT
    mov rsi, hello
    mov rdx, hello_len
    syscall

    ; syscall: exit(0)
    mov rax, 60
    xor rdi, rdi
    syscall

