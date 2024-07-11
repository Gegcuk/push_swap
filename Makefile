# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -Werror -I.  # Add -I. to include the current directory for headers

# Target executable
TARGET = push_swap

# Source files
SRCS = main.c utils/sa.c utils/sb.c utils/push.c utils/printstack.c

# Object files directory
OBJDIR = obj

# Object files
OBJS = $(patsubst %.c,$(OBJDIR)/%.o,$(SRCS))

# Header files
DEPS = stackops.h

# Default target
all: $(OBJDIR) $(TARGET)

# Create object directory
$(OBJDIR):
	mkdir -p $(OBJDIR)/utils

# Rule to create the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files into object files
$(OBJDIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean target to remove object files and executable
clean:
	rm -f $(OBJS) $(TARGET)

# Full clean target to remove object files, executable, and backup files
fclean: clean
	rm -rf $(OBJDIR)
	rm -f $(TARGET)

# Rebuild target to clean and then build from scratch
re: fclean all

# Phony targets
.PHONY: all clean fclean re
