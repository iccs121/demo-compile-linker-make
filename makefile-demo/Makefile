# makefile-demo/
# │── src/
# │   ├── main.c
# │   ├── extra_functions.c
# │── include/
# │   ├── extra_functions.h
# │── Makefile

# Note: 
# $@ = target
# $^ = prerequisite

# Compiler and flags
CC = gcc
CFLAGS = -Wall -O2 -Iinclude

# Source files
SRC = src/main.c src/extra_functions.c
OBJ = $(SRC:.c=.o)

# Executable name
TARGET = executable

# Default rule: build the program
all: clean $(TARGET) dist

# Link the object files into the final executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	mv $(TARGET) ./bin/

# Compile each .c file into a .o file
src/%.o: src/%.c include/*.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove compiled files
clean:
	rm -f $(OBJ) $(TARGET)

# Optionally, create a distribution zip file
dist: clean
	zip dist/$(TARGET).zip src/*.c include/*.h