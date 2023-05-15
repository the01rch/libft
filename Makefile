SRC	=	src/ft_isalpha.c\
		src/ft_isdigit.c\
		src/ft_isalnum.c\
		src/ft_isascii.c\
		src/ft_isprint.c\
		src/ft_toupper.c\
		src/ft_tolower.c\
		src/ft_strlen.c\
		src/ft_putchar_fd.c\
		src/ft_putstr_fd.c\
		src/ft_putendl_fd.c\
		src/ft_itoa.c\
		src/ft_strdup.c\
		src/ft_strncmp.c\
		src/ft_strchr.c\
		src/ft_strrchr.c\
		src/ft_strjoin.c\
		src/ft_split.c

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
	$(RM) $(NAME)

fclean: clean
	$(RM) $(OBJ)

re: fclean all

.PHONY: all clean fclean re
