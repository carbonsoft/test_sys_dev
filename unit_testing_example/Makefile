CC = clang
CFLAGS_EXTRA := -Wall -Wextra -Wpedantic
objects := func.o
LFLAGS := -Llibs -lfunc

all: build
clean:
	rm -f *.o libs/libfunc.a
build: $(objects)
	mkdir -p libs
	ar rcs libs/libfunc.a $(objects)
	$(CC) $(CFLAGS_EXTRA) main.c $(LFLAGS) -o programm
