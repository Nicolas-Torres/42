NAME : libft.a

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OUT =  ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

INCLUDES = includes/

all:		${NAME}

$(NAME) = gcc -Wall -Wextra -Werror -c /srcs/ft_*.c -I (INCLUDES) ar rc $(NAME) $ (OUT) ranlib $(NAME)

clean:
	/bin/rm -f$(OUT)

fclean: 	clean
	/bin/rm -f$(NAME)

re:		fclean all
