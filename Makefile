NAME = push_swap
LIBFT = libft
SRCS = ps_struct.c rotate.c swap.c main.c parsing.c sort.c display.c push.c init.c

LIB_DIR = ./libft/
LIB		= ./libft/libft.a
HEADERS += push_swap.h

OBJS = ${SRCS:.c=.o}

#CFLAGS += -Wall
#CFLAGS += -Werror
#CFLAGS += -Wextra

CC = cc


all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	@$(MAKE) -sC $(LIB_DIR)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIB)
	@echo "OK"

$(OBJS): %.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@


re:	fclean
	$(MAKE)

clean:
	@$(MAKE) -sC $(LIB_DIR) clean
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	@$(MAKE) -sC $(LIB_DIR) fclean
	$(RM) $(NAME)

out:
	$(CC) -g $(CFLAGS) $(SRCS) && ./a.out 

a:	fclean
	@$(MAKE) -sC $(LIB_DIR) fclean
	$(RM) a.out
	$(MAKE)
	$(CC) -g $(CFLAGS) $(LIB) $(SRCS)

cleanout:
	$(RM) a.out

.PHONY: all clean fclean re
#.SILENT: