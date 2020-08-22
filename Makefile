all:
	gcc -Wall -Wextra -Werror *.c function/*.c
clean:
	rm -f ./a.out
	rm -f *.c~
