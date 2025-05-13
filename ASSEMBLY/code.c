section .data
    criminals db 'P', 'Q', 'R', 'S'
    result db ' ', 0

section .text
    global _start

_start:
    ; Assume each of P, Q, R, S is the criminal in turn (0 to 3)
    mov ecx, 0          ; ecx = index for criminal (0=P, 1=Q, 2=R, 3=S)

check_next:
    cmp ecx, 4
    je done             ; if all checked, exit

    push ecx            ; save assumed criminal

    ; Reset truth count
    mov ebx, 0          ; ebx = count of true statements

    ; Check P's statement: "Q did it" (true if assumed criminal == Q)
    cmp ecx, 1
    jne skip_p
    inc ebx
skip_p:

    ;
