NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
CC = cc

SRS = main.c \
	op1.c \
	op2.c \
	parser.c \
	sorts.c \
	stack1.c \
	stack2.c \
	utils.c

OBJS = $(SRS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
re:	fclean all