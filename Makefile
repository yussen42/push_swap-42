NAME = push_swap

CC = cc

LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g

SRC =	main.c\
		ft_strjoinws.c\
		utils.c\
		init_stack_a.c\
		swap_a.c\
		rotate_a.c\
		rotate_b.c\
		reverse_rotate_a.c\
		reverse_rotate_b.c\
		check_error.c\
		push_b.c\
		push_a.c\
		find_min.c\
		find_max.c\
		logaritma.c\
		the_algorithm.c\
		assign_indexes.c\
		is_sorted.c\
		if_len_three.c\
		the_algorithm_helper.c\
		split.c\

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