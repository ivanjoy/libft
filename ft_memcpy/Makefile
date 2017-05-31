# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijoy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/08 14:47:34 by ijoy              #+#    #+#              #
#    Updated: 2017/03/08 14:47:56 by ijoy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = memcpy

SRC = main.c ft_memcpy.c

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
