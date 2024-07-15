CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

TARGET = push_swap

SRCS = main.c utils/pa.c utils/pb.c utils/push.c utils/printstack.c utils/ra.c\
		utils/rb.c utils/rr.c utils/rra.c utils/rrb.c utils/rrr.c utils/sa.c\
		utils/sb.c utils/ss.c utils/freestack.c

OBJDIR = obj

OBJS = $(patsubst %.c,$(OBJDIR)/%.o,$(SRCS))

DEPS = stackops.h

all: $(OBJDIR) $(TARGET)

$(OBJDIR):
	mkdir -p $(OBJDIR)/utils

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)

fclean: clean
	rm -rf $(OBJDIR)
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
