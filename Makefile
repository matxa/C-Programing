CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
SRCS := src/*.c
OUTNAME = main

all: project
project:
	$(CC) $(CFLAGS) $(SRCS) -o bin/$(OUTNAME)
exec:
	./bin/$(OUTNAME)
clean:
	rm -f bin/$(OUTNAME)
