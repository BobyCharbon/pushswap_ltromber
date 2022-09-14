SRCS = ps_struct.c rotate.c swap.c main.c parsing.c sort.c

HEADERS += push_swap.h

OBJS = ${SRCS:.c=.o}

#CFLAGS += -Wall
#CFLAGS += -Werror
#CFLAGS += -Wextra

CC = clang

NAME = pushswap.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	@echo "OK"

$(OBJS): %.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@


re:	fclean
	$(MAKE)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

out:
	$(CC) -g $(CFLAGS) $(SRCS) && ./a.out

cleanout:
	$(RM) a.out

.PHONY: all clean fclean re
#.SILENT: