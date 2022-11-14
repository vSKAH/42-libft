# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:16:34 by jbadaire          #+#    #+#              #
#    Updated: 2022/11/14 14:14:24 by jbadaire         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
BUILD_FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJ_FILES = $(SRCS:.c=.o)

$(NAME): all

all:
	gcc -c $(BUILD_FLAGS) $(SRCS)
	ar -rcs $(NAME) *$(OBJ_FILES)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
