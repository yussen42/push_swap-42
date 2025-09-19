/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:47:42 by yussen            #+#    #+#             */
/*   Updated: 2025/09/19 23:40:09 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	run_all_functions(t_stack_list **a, t_stack_list **b, char **temp)
{
	int	size;
	int	chunk_count;
	int	chunk_size;

	size = ft_lstsize(*a);
	chunk_count = logaritma(size);
	chunk_size = size / chunk_count;
	ft_free(temp);
	assign_indexes(*a);
	the_algorithm(a, b, size, chunk_size);
	free_stack(a);
	free_stack(b);
}
//libftden aldığım fonksiyonları bulup utilse ekle ve libft'yi sil
int	main(int ac, char **av)
{
	t_stack_list	*stack_a;
	t_stack_list	*stack_b;
	char			**temp;
	char			*nmbrs;

	stack_b = NULL;
	if (ac == 2)
		temp = ft_split(&av[1][0], ' ');
	else if (ac > 2)
	{
		nmbrs = ft_strjoinws(ac - 1, &av[1], " ");
		temp = ft_split(nmbrs, ' ');
		free (nmbrs);
	}
	else
		return (1);
	if (check_error(temp))
		return (1);
	stack_a = init_stack_a(temp);
	run_all_functions(&stack_a, &stack_b, temp);
	return (0);
}
