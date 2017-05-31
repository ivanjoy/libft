NAME = ft_strdupTest

SRC = main.c ft_strdup.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC:.c=.o)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(SRC:.c=.o)

re: fclean all
