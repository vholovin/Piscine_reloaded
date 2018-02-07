# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vholovin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 16:49:22 by vholovin          #+#    #+#              #
#    Updated: 2016/11/07 17:30:42 by vholovin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

PATH_SRC	= ./srcs/

HEADER		= ./includes/

FLAG		= -Wall -Wextra -Werror

SRC 		= 	$(PATH_SRC)ft_putchar.c \
				$(PATH_SRC)ft_putstr.c 	\
				$(PATH_SRC)ft_strcmp.c  \
				$(PATH_SRC)ft_strlen.c  \
				$(PATH_SRC)ft_swap.c

OBJ			=	ft_putchar.o 	\
				ft_putstr.o 	\
				ft_strcmp.o 	\
				ft_strlen.o 	\
				ft_swap.o 		\

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) -I $(HEADER) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all