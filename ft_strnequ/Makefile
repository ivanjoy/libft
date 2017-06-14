NAME = ft_strnequTest

SRC = main.c ft_strnequ.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -Wall -Wextra -Werror
	gcc -o $(NAME) $(SRC:.c=.o)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(SRC:.c=.o)

re: fclean all
