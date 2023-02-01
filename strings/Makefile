
CC = gcc 

main: main.o string_length.o string_copy.o string_cat.o string_compare.o string_reverse.o

main.o: main.c
	$(CC) -c -o main.o main.c

string_length.o: string_length.c
	$(CC) -c -o string_length.o string_length.c

string_copy.o: string_copy.c
	$(CC) -c -o string_copy.o string_copy.c

string_cat.o: string_cat.c
	$(CC) -c -o string_cat.o string_cat.c

string_compare.o: string_compare.c
	$(CC) -c -o string_compare.o string_compare.c

string_reverse.o: string_reverse.c
	$(CC) -c -o string_reverse.o string_reverse.c
clean:
	rm -rf main.o string_length.o string_copy.o string_cat.o string_compare.o string_reverse.o
