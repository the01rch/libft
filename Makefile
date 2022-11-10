SRC	=	src/ft_isalpha.c\
		src/ft_isdigit.c\
		src/ft_isalnum.c\
		src/ft_isascii.c\
		src/ft_isprint.c

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
