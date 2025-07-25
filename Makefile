CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
SRC = main.c utils.c
OBJ = $(SRC:.c=.o)
EXEC = sojobud

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ) $(EXEC)

.PHONY: all clean
