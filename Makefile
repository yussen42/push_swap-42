NAME = pushswap.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =	main.c\
		swap_a.c\
		swap_b.c\
		swap_ab.c\

OBJ = $(SRC:.c=.o)


all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean