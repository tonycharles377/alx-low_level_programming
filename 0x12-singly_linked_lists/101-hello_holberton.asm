section .data
    format db "Hello, Holberton", 0

section .text
    global main

extern printf

main:
    sub rsp, 8               ; Adjust stack alignment if needed
    mov edi, format          ; Pass the format string as the first argument
    xor eax, eax             ; Clear the upper 32 bits of rax
    call printf              ; Call the printf function
    add rsp, 8               ; Restore stack alignment if adjusted
    xor eax, eax             ; Set the exit status to 0
    ret                      ; Return from the main function

