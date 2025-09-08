NAME = push_swap

CC = cc

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

CFLAGS = -Wall -Wextra -Werror -g

SRC =	main.c\
		is_valid.c\
		ft_strjoinws.c\
		utils.c\
		init_stack_a.c\
		swap_a.c\
		rotate_a.c\
		reverse_rotate_a.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR) all

clean:
	rm -rf $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean