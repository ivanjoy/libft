NAME = libft.a

SRC = main.c <other files>.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -Wall -Wextra -Werror
	ar rc -o $(NAME) $(SRC:.c=.o)
ranlib libft.a

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(SRC:.c=.o)

re: fclean all
