NAME        = libftprintf.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

RM          = rm -f
AR          = ar rcs

SRCS        = ft_printf.c ft_printf_utils.c
OBJS        = $(SRCS:.c=.o)
HEADER      = ft_printf.h

LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME) tester
	make fclean -C $(LIBFT_DIR)

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o tester
	./tester

.PHONY: all clean fclean re test