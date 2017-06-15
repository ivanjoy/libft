NAME = memset

SRC = main.c ft_memset.c

FLAGS = -Wall -Wextra -Werror


all: $NAME

$NAME:
	gcc -c $(SRC)
	gcc -o $(NAME) $(FLAGS) $(patsubst %.c,%.o, $(SRC))

clean:
	rm -f $(patsubst %.c,%.o, $(SRC))

fclean: clean
	rm -f $(NAME)

re: fclean all
