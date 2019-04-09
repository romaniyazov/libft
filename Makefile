# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adavis <adavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/03 13:37:06 by adavis            #+#    #+#              #
#    Updated: 2019/04/09 19:21:49 by adavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
FLAGS		=	-Wall -Werror -Wextra -c
SRC			=	srcs/ft_memset.c \
				srcs/ft_bzero.c \
				srcs/ft_memcpy.c \
				srcs/ft_memccpy.c \
				srcs/ft_memmove.c \
				srcs/ft_memchr.c \
				srcs/ft_memcmp.c \
				srcs/ft_strlen.c \
				srcs/ft_strdup.c \
				srcs/ft_strcpy.c \
				srcs/ft_strncpy.c \
				srcs/ft_strcat.c \
				srcs/ft_strncat.c \
				srcs/ft_strchr.c \
				srcs/ft_strrchr.c \
				srcs/ft_strstr.c \
				srcs/ft_strnstr.c \
				srcs/ft_strcmp.c \
				srcs/ft_strncmp.c \
				srcs/ft_atoi.c \
				srcs/ft_isalpha.c \
				srcs/ft_isdigit.c \
				srcs/ft_isalnum.c \
				srcs/ft_isascii.c \
				srcs/ft_isprint.c \
				srcs/ft_toupper.c \
				srcs/ft_tolower.c \
				srcs/ft_memalloc.c \
				srcs/ft_memdel.c \
				srcs/ft_strnew.c \
				srcs/ft_strdel.c \
				srcs/ft_strclr.c \
				srcs/ft_striter.c \
				srcs/ft_striteri.c \
				srcs/ft_strmap.c \
				srcs/ft_strmapi.c \
				srcs/ft_strequ.c \
				srcs/ft_strnequ.c \
				srcs/ft_strsub.c \
				srcs/ft_strjoin.c \
				srcs/ft_strtrim.c \
				srcs/ft_putchar.c \
				srcs/ft_putstr.c \
				srcs/ft_putendl.c \
				srcs/ft_putnbr.c \
				srcs/ft_putchar_fd.c \
				srcs/ft_putstr_fd.c \
				srcs/ft_putendl_fd.c \
				srcs/ft_putnbr_fd.c \
				srcs/ft_islower.c \
				srcs/ft_isupper.c \
				srcs/ft_isspace.c
OBJ			=	$(SRC:%.c=%.o)

$(NAME):
	gcc $(FLAGS) $(SRC) includes/libft.h
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
