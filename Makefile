# Variables
NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_puthex_pf.c \
       ft_putpoint_pf.c ft_unsigned_pf.c ft_put_nbr.c\
	   ft_putstr.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
