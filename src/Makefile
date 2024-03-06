all: build

build: main

main: notation_logic.o stack.o utils.o main.o
	gcc -Wall -Werror -Wextra stack.o notation_logic.o utils.o  main.o -o ../build/main -lm

notation_logic.o:
	gcc -Wall -Werror -Wextra -c libs/notation_logic.c -o notation_logic.o -lm

stack.o:
	gcc -Wall -Werror -Wextra -c libs/stack.c  -o stack.o -lm

utils.o:
	gcc -Wall -Werror -Wextra -c libs/utils.c  -o utils.o -lm

main.o:
	gcc -Wall -Werror -Wextra -c main.c  -o main.o -lm

clean:
	rm -rf *.o ../build/*