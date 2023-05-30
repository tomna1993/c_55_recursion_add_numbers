CC := gcc
#CFLAGS := 
DEST := ./build/

all: recursion_add_numbers.c
	mkdir -p build
	$(CC) recursion_add_numbers.c -lcs50 -o $(DEST)/recursion_add_numbers 