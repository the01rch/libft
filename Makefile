# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 14:46:29 by redrouic          #+#    #+#              #
#    Updated: 2023/12/06 17:10:14 by redrouic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_atoi.c\
		ft_itoa.c\
		ft_strdup.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strjoin.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memcmp.c\
		ft_memchr.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_calloc.c\
		ft_substr.c\
		ft_strtrim.c\
		ft_split.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putnbr_fd.c\

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME	=	libft.a

CFLAGS	+=	-Wall -Wextra -Werror

RM	=	rm -rf

all: $(NAME)
	
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
