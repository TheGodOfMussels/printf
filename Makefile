# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 19:00:55 by dimolin2          #+#    #+#              #
#    Updated: 2022/10/26 19:00:56 by dimolin2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = /bin/rm -f

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar_len.c ft_print_p_len.c \
	ft_putnbrbase_len.c ft_putnbr_len.c \
	ft_putstr_len.c ft_putunsigned_len.c

OBJS = $(SRCS:.c=.o)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

bonus: all

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus
