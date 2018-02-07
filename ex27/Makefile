# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vholovin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 18:15:23 by vholovin          #+#    #+#              #
#    Updated: 2018/02/06 18:29:18 by vholovin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = display_file.c

SRO = ft_display_file.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	mv display_file.o $(SRO)
	gcc -o $(NAME) $(SRO)

clean:
	rm -f $(SRO)

fclean: clean
	rm -f $(NAME)
