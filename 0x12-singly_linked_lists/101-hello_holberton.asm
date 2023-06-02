extern printf	        ;the c function,to be called
section .text           ;code section
	global main

	main:
	push	rbp	;set up stack frame, must be alligned
	
	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0
	call	printf	;call c function

	pop	rbp	;restore stack

	mov	rax,0	;no error
	ret		;return

section .data		;initialized variables
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0	;The printf format
