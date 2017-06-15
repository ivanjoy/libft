NAME = ft_putendl_fdTest

SRC = main.c ft_putendl_fd.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -Wall -Wextra -Werror
	gcc -o $(NAME) $(SRC:.c=.o)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(SRC:.c=.o)

re: fclean all
