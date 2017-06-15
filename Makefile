NAME = libft.a

SRC = ft_atoi.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strcpy.c ft_strlcat.c ft_strnew.c ft_tolower.c ft_bzero.c ft_memalloc.c ft_memset.c ft_putstr.c ft_strdel.c ft_strlen.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_memccpy.c ft_putchar.c ft_putstr_fd.c ft_strdup.c ft_strmap.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strcat.c ft_strequ.c ft_strmapi.c ft_strsplit.c ft_isascii.c ft_memcmp.c ft_putendl.c ft_strchr.c ft_striter.c ft_strncat.c ft_strstr.c ft_isdigit.c ft_memcpy.c ft_putendl_fd.c ft_strclr.c ft_striteri.c ft_strncmp.c ft_strsub.c ft_isprint.c ft_memdel.c ft_putnbr.c ft_strcmp.c ft_strjoin.c ft_strnequ.c ft_strtrim.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -Wall -Wextra -Werror
	ar rc $(NAME) $(SRC:.c=.o)
	ranlib libft.a

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(SRC:.c=.o)

re: fclean all
