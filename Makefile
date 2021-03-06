# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmatos <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 23:01:03 by rmatos            #+#    #+#              #
#    Updated: 2016/08/02 22:48:18 by rmatos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAGS = -Wall -Wextra -Werror
SRC = main.c dyn_arr.c ft_putchar.c make_output.c ft_strcat.c

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
		/bin/rm -f $(NAME)
fclean: clean
		/bin/rm -f $(NAME)
re: fclean all
