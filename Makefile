CC = gcc
CFLAGS = -Wall -g

default:
	$(CC) $(CFLAGS) -c src/passcheck.c -o build/passcheck.o
	ar rcs build/passcheck.a build/passcheck.o

clean:
	rm -f build/*.[a,o]

