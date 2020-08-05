CFLAGS_EXTRA := -Wall -Wextra -Wpedantic
sni := sni.o
skbuff := skbuff.o
objects := $(sni) $(skbuff)
LFLAGS := -Llibs -lsni -lskbuff

all: build
clean:
	rm -f *.o libs/libsni.a libs/libskbuff.a
build: $(objects)
	mkdir -p libs
	ar rcs libs/libsni.a $(sni)
	ar rcs libs/libskbuff.a $(skbuff)
	$(CC) $(CFLAGS_EXTRA) main.c $(LFLAGS) -o programm
