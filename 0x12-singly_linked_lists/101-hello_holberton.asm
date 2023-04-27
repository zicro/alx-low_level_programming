section		.text
	extern	printf
	global	main

section		.data
	msg db 'Hello, Holberton', 0xa, 0

main:
	mov		edi, msg
	mov		eax, 0
	call	printf
