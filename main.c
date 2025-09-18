/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:47:42 by yussen            #+#    #+#             */
/*   Updated: 2025/09/18 03:13:43 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	run_all_functions(t_stack_list **stack_a, t_stack_list **stack_b, char **temp)
{
	int	size;
	int chunk_count;
    int chunk_size;

	size = ft_lstsize(*stack_a);
	chunk_count = logaritma(size);
	chunk_size = size / chunk_count;

	ft_free(temp);
	assign_indexes(*stack_a);
	the_algorithm(stack_a, stack_b, size, chunk_size);
	free_stack(stack_a);
	free_stack(stack_b);
}

int main(int ac, char **av)
{
	t_stack_list *stack_a;
	t_stack_list *stack_b;
	char	**temp;
	char	*nmbrs;

	stack_b = NULL;
	if (ac == 2)
		temp = ft_split(&av[1][0], ' ');
	else if (ac > 2)
	{
		nmbrs = ft_strjoinws(ac - 1,  &av[1], " ");
		temp = ft_split(nmbrs, ' ');
		free (nmbrs);
	}
	else
		return (1);
	if (check_error(temp))
		return(1);
	stack_a = init_stack_a(temp);
	run_all_functions(&stack_a, &stack_b, temp);
	return (0);
}
