# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:16:34 by jbadaire          #+#    #+#              #
#    Updated: 2022/11/14 11:36:04 by jbadaire         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft
BUILD_FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)

all:
	gcc -c $(BUILD_FLAGS) $(SRCS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
