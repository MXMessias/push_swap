# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 13:17:22 by mmessias          #+#    #+#              #
#    Updated: 2024/10/20 19:35:38 by mmessias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap
CC= cc -Wall -Werror -Wextra
SRC= *.c
OBJS= $(SRC: .c=.o)
LIBFT= Libft/libft.a
LIBFT_DIR= libft/

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	
$(OBJS): $(SRC)
	$(CC) -c $(SRC)

clean:
	rm -rf $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
