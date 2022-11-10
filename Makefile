SRC	=	src/ft_isalpha.c

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
