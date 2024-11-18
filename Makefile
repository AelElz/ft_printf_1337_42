# Variables
NAME = libftprintf.a

LIBFTNAME = libft.a

SRCS = ft_printf.c ft_print_all.c ft_puthex_pf.c \
       ft_putpoint_pf.c ft_unsigned_pf.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./include
LIBFT = ./libft

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	cp $(LIBFT)/$(LIBFTNAME) $(NAME)
	ar rc $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C $(LIBFT)
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT)
	rm -f $(NAME)

re: fclean all
