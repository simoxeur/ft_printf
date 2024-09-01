# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 11:35:43 by mtalbi            #+#    #+#              #
#    Updated: 2023/12/13 15:47:42 by mtalbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

sources = ft_printf.c ft_printchar.c ft_printstr.c ft_printnbr.c ft_hexadecimal.c ft_printhex.c ft_printptr.c

objs = $(sources:.c=.o) 

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
	
all: $(NAME)

$(NAME): $(objs)
	ar -rc $(NAME) $(objs)
	
clean:
	rm -rf $(objs)
	
fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY : clean