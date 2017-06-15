# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijoy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/08 14:40:05 by ijoy              #+#    #+#              #
#    Updated: 2017/03/08 14:40:12 by ijoy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bzero

SRC = main.c ft_bzero.c

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
