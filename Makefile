NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =	main.c\
		ft_strjoinws.c\
		utils.c\
		utils2.c\
		utils3.c\
		init_stack_a.c\
		swap_a.c\
		swap_b.c\
		rotate_a.c\
		rotate_b.c\
		reverse_rotate_a.c\
		reverse_rotate_b.c\
		check_error.c\
		push_b.c\
		push_a.c\
		find_min.c\
		find_max.c\
		chunk_count_founder.c\
		the_algorithm.c\
		assign_indexes.c\
		is_sorted.c\
		if_len_three.c\
		the_algorithm_helper.c\
		split.c\
		word_count.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean