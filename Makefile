# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 17:22:37 by gcosta-d          #+#    #+#              #
#    Updated: 2021/11/24 21:49:24 by gcosta-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft.a
NAME = libftprintf.a
CC = clang
FLAGS = -Wall -Werror -Wextra
SRC = ft_utoa_base.c ft_printf_utils.c ft_printf.c treat_base10.c \
		treat_base16.c treat_char.c ft_itoa.c
OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./includes
	cp ./includes/$(LIBFT) $(NAME)
	ar -rc $(NAME) $(OBJ)

clean: libftclean
	rm -f $(OBJ)

fclean: clean libftfclean
	rm -f $(NAME)

libftclean:
	$(MAKE) -C ./includes clean

libftfclean:
	$(MAKE) -C ./includes fclean

re: fclean all

.PHONY: all clean fclean re