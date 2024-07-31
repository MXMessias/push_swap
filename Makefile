# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 13:17:22 by mmessias          #+#    #+#              #
#    Updated: 2024/07/30 13:28:42 by mmessias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap
CC= cc
CFLAGS= -Wall -Werror -Wextra
SRC= blablabla.c blabla.c bla.c
OBJS= (SRC: .c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(NAME) $()