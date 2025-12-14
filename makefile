
DEBUG_FLAGS   = -DDEBUG
RELEASE_FLAGS = -DRELEASE
TEST_FLAGS    = -DTESTING

all: debug

debug:
	gcc $(CFLAGS) $(DEBUG_FLAGS) -c src/passcheck.c -o build/passcheck.o
	ar rcs build/passcheck.a build/passcheck.o

release:
	gcc $(CFLAGS) $(RELEASE_FLAGS) -c src/passcheck.c -o build/passcheck.o
	ar rcs build/passcheck.a build/passcheck.o

testing:
	gcc $(CFLAGS) $(TEST_FLAGS) -c src/passcheck.c -o build/passcheck.o
	ar rcs build/passcheck.a build/passcheck.o

clean:
	rm -f build/*.[a,o]

