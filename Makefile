# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doley <doley@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 16:42:39 by doley             #+#    #+#              #
#    Updated: 2024/10/16 16:42:45 by doley            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar crs
RM = rm -f

INCLUDES = ./printf.h

SRCS = 		./print_x_xx.c \
			./print.c \
			./utils.c \
			./main.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
				$(AR) $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c $(INCLUDES)
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re