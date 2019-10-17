CC=gcc
CFLAGS=-I.
DEPS = helloadd.h
DESTDIR = ../docker

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

helloadd: helloadd.o hellofunc.o
	$(CC) -o helloadd helloadd.o hellofunc.o

.PHONY: clean

clean:
	rm -rf *.o core *~ ./helloadd

.PHONY: install
install: helloadd
	cp $< $(DESTDIR)/myapp

.PHONY: uninstall
uninstall:
	rm -f $(DESTDIR)/myapp
