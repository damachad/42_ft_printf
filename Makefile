# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damachad <damachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 08:29:51 by damachad          #+#    #+#              #
#    Updated: 2023/05/03 14:14:12 by damachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

NAME2 = libft.a

SRC = ft_printf.c ft_convert.c ft_putnbr_base.c ft_putnbr_2.c ft_putstr_2.c ft_putchar_2.c

SRC_LIBFT = ft_putchar_fd.c ft_putstr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME2) $(NAME)
	
$(NAME2):
	(cd libft; make all)

$(NAME):
	cc $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

test:
	cc $(CFLAGS) $(SRC) $(SRC_LIBFT) main.c

clean:
	rm -f $(OBJ)
	(cd libft; make clean)

fclean: clean
	rm -f $(NAME)
	(cd libft; rm -f $(NAME2))

re: fclean all