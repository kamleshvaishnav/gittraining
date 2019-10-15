CC=gcc
CFLAGS=-I.
DEPS = helloadd.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

helloadd: helloadd.o hellofunc.o
	$(CC) -o helloadd helloadd.o hellofunc.o

.PHONY: clean

clean:
	rm -rf *.o core *~ ./helloadd
