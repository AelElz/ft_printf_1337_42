NAME = libftprintf.a

LIBFTNAME = libft.a

SRCS =	ft_print_all.c ft_puthex_pf.c\
		ft_putpoint_pf.c

CFLAGS = -Wall -Wextra -Werror

CC = cc

LIBFT = ./libft

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	ar rcs $(NAME) $(OBJS)
	ar rsc $(LIBFT)/$(LIBFTNAME)

clean:
	$(MAKE) clean -C $(LIBFT)
	rm -f $(OBJS)

fclean:
	$(MAKE) fclean -C $(LIBFT)
	rm -f $(NAME) $(OBJS)

re: fclean all
