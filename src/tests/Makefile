CC=gcc

CFLAGS=-Wall -I$(abspath ..)

all: read_line_test split_line_test

read_line_test: read_line_test.o ../line.o
split_line_test: split_line_test.o ../line.o
launch_line_test: launch_line_test.o ../fork.o
	$(CC) -o $@ $(CFLAGS) $^

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $^

clean:
	rm *.o ../*.o read_line_test split_line_test \
	    launch_line_test
