; in x86-64 8 more registers with prefixes "r" were added
	  global    main
          extern    printf
main:
	  mov   rdi, string
; xor a register with itself to set it to 0
	  xor   rax, rax
	  call  printf
	  mov 	rax, 0
	  ret
string: db `Hello, Holberton\n`,0
