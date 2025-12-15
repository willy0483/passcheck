
DEBUG_FLAGS   = -DDEBUG
RELEASE_FLAGS = -DRELEASE
TEST_FLAGS    = -DTESTING

all: debug

debug:
	gcc $(CFLAGS) $(DEBUG_FLAGS) -c src/passcheck.c -o build/passcheck-debug.o
	ar rcs build/passcheck-debug.a build/passcheck-debug.o

release:
	gcc $(CFLAGS) $(RELEASE_FLAGS) -c src/passcheck.c -o build/passcheck-release.o
	ar rcs build/passcheck-release.a build/passcheck-release.o

testing:
	gcc $(CFLAGS) $(TEST_FLAGS) -c src/passcheck.c -o build/passcheck-testing.o
	ar rcs build/passcheck-testing.a build/passcheck-testing.o

clean:
	rm -f build/*.[a,o]

