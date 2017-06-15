# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijoy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/10 16:34:06 by ijoy              #+#    #+#              #
#    Updated: 2017/05/10 16:34:27 by ijoy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_strlcatTest

SRC = main.c ft_strlcat.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC:.c=.o)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(SRC:.c=.o)

re: fclean all
