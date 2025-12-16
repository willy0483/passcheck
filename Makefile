CC = gcc
CFLAGS = -Wall -g

app:
	$(CC) $(CFLAGS) src/main.c src/logger.c build/passcheck.a -o build/app


lib: 
	$(CC) $(CFLAGS) -c src/passcheck.c -o build/passcheck.o
	ar rcs build/passcheck.a build/passcheck.o


clean:
	rm -f build/*.[a,o]
