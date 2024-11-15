NAME = libftprintf.a

LIBFTNAME = libft.a

SRCS =	ft_printf.c

CFLAGS = -Wall -Wextra -Werror

CC = cc

LIBFT = ./libft

OBJS = $(SRCS:.c=.o)

all : $(NAME)


$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)


clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean: $(NAME)
	$(MAKE) fclean -C ./libft
	rm -f $(NAME) $(OBJS)

re: fclean all
