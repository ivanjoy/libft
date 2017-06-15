NAME = ft_memmoveTest

SRC = main.c ft_memmove.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC:.c=.o)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(SRC:.c=.o)

re: fclean all
