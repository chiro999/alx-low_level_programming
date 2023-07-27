          global    main
          extern    printf
main:
	  mov   rdi, string
	  xor   rax, rax
	  call  printf
	  mov 	rax, 0
	  ret
string: db `Hello, Holberton\n`,0
