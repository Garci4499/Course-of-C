# Define compiler
CC = gcc

# Define output executable name
TARGET = myprogram

# Define source files
SRCS = main.c

# Define object files (replace .c with .o)
OBJS = $(SRCS:.c=.o)

# Default target (builds the program)
all: $(TARGET)

# Link object files to create the final executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compile source files into object files
%.o: %.c
	$(CC) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)