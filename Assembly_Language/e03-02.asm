; a program to add ten numbers without a separate counter
[org 0x0100]

jmp start ; unconditionally jump over data

num1: dw 10, 20, 30, 40, 50, 10, 20, 30, 40, 50
total: dw 0


start:

mov bx, 0 
mov ax, 0 

l1:
   add ax, [num1+bx] 
   add bx, 2 
   cmp bx, 20
   jne l1 ; if not add next number

   mov [total], ax 

mov ax, 0x4c00 
int 0x21