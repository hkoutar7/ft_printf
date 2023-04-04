# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 04:33:08 by hkoutar-          #+#    #+#              #
#    Updated: 2023/01/28 04:33:15 by hkoutar-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_pointer.c ft_putc.c ft_putdec.c \
		 ft_puthex.c ft_puts.c ft_putunsdec.c

OBJECT = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

%.o : %.c
	$(CC) $(FLAGS) -c $(SRC)

$(NAME) : $(OBJECT)
	ar -rcs $(NAME) $(OBJECT)

all : $(NAME)

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all

