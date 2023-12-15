# Makefile for a simple C program

# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Werror

# Source file and object file
SRC := main.c
OBJ := $(SRC:.c=.o)

# Executable name
EXECUTABLE := main.c

# Default target: build the executable
all: $(EXECUTABLE)

# Target to build the executable
$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

# Generic pattern rule to compile any .c file into an .o file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Target to clean up object files and the executable
clean:
	rm -f $(OBJ) $(EXECUTABLE)

# Phony target to avoid conflicts with file names
.PHONY: all clean