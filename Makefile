CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
INCLUDES = -I./includes
SRC_DIR = src
OBJ_DIR = obj
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
EXEC = sojobud

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
		rm -f $(OBJ) $(EXEC)

.PHONY: all clean
