CC=gcc
CFLAGS=-I.
DEPS = hellomake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: 19050111004.o hellofunc.o 
	$(CC) -o 19050111004 19050111004.o hellofunc.o 
