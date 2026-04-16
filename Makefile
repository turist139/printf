NAME        = libftprintf.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

RM          = rm -f
AR          = ar rcs

# Исходники ТОЛЬКО от твоего ft_printf
SRCS        = ft_printf.c ft_printf_utils.c
OBJS        = $(SRCS:.c=.o)
HEADER      = ft_printf.h

# Настройки для libft
LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libft.a

all: $(NAME)

# Правило для компиляции самой libft (вызывает make в папке libft)
$(LIBFT):
	make -C $(LIBFT_DIR)

# Главное правило сборки: зависит от готового libft.a и твоих .o файлов
$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Очистка должна очищать и объекты ft_printf, и объекты внутри libft
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