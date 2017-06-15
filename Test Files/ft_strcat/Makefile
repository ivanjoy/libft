NAME = ft_strcatTest

SRC = main.c ft_strcat.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC:.c=.o)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(SRC:.c=.o)

re: fclean all
