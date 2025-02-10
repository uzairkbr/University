; a program to add ten numbers using register + offset addressing
[org 0x0100]

mov bx, 0 ; initialize array index to zero
mov cx, 10 ; load count of numbers in cx

mov ax, 0 ; initialize sum to zero

l1:
   add ax, [num1+bx] 
   add bx, 2 
   sub cx, 1 ; numbers to be added reduced
   jnz l1 ; if numbers remain add next

mov [total], ax 

mov ax, 0x4c00 ; terminate program
int 0x21

num1: dw 10, 20, 30, 40, 50, 10, 20, 30, 40, 50
total: dw 0