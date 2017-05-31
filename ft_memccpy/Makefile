# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijoy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/08 15:17:43 by ijoy              #+#    #+#              #
#    Updated: 2017/03/08 15:18:03 by ijoy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = memccpy

SRC = main.c ft_memccpy.c

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
