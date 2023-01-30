NAME = libftprintf.a

SRC =	ft_printf.c		\
		ft_putchar.c	\
		ft_putstr.c		\
		ft_convert.c	\
		ft_putnbr.c		\
		ft_putnbr_un.c	\
		ft_putnbr_hex.c	\

#SRC_BONUS =
			

OBJS = $(SRC:%.c=%.o)

#OBJS_BONUS = $(OBJS) $(SRC_BONUS:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME) $(OBJS)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

# comp: $(NAME) $(SRC)
# 	$(CC) $(CFLAGS) $(SRC) main.c
# 	make clean

# debug:  $(NAME) $(SRC)
# 	$(CC) -g $(SRC) main.c
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# bonus: $(NAME) $(OBJS_BONUS)
# 	ar -rc $(NAME) $(OBJS_BONUS)

re: fclean all

.PHONY: all clean fclean re