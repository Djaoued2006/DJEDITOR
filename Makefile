SRC_LIB = ./src

main: $(SRC_LIB)/include/*.h $(SRC_LIB)/main.c
	cc $(SRC_LIB)/main.c -o main -Wall -Wextra -g -lncurses
