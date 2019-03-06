CC=gcc

CFLAGS=-Wall

all: read_line_test

read_line_test: read_line_test.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $^

clean:
	rm *.o read_line_test
