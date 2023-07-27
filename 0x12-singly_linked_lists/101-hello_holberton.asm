          global    main
          extern    printf
main:
	  mov   rdi, format
	  xor   rax, rax
	  call  printf
	  mov 	rax, 0
	  ret
format: db `Hello, Holberton\n`,0
