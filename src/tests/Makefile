CC=gcc

CFLAGS=-Wall -I$(abspath ..)

all: read_line_test

read_line_test: read_line_test.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $^

clean:
	rm *.o read_line_test
