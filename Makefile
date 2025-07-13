CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -I.
SRC = main.c scripts/linked_array.c scripts/call_backs.c 
OBJ = $(SRC:.c=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
