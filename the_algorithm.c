/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_algorithm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:17:46 by yussen            #+#    #+#             */
/*   Updated: 2025/09/19 23:08:34 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_min_to_b(t_stack_list **stack_a, t_stack_list **stack_b)
{
	int	min_index;
	int	size;

	min_index = find_min(*stack_a);
	size = ft_lstsize(*stack_a);
	if (min_index <= size / 2)
		while (min_index--)
			rotate_a(stack_a, 1);
	else
		while (min_index++ < size)
			reverse_rotate_a(stack_a, 1);
	push_b(stack_a, stack_b, 1);
}

static void	push_all_a(t_stack_list **stack_a, t_stack_list **stack_b)
{
	int	max_index;
	int	b_size;

	while (*stack_b)
	{
		max_index = find_max(*stack_b);
		b_size = ft_lstsize(*stack_b);
		if (max_index <= b_size / 2)
			while (max_index--)
				rotate_b(stack_b, 1);
		else
			while (max_index++ < b_size)
				reverse_rotate_b(stack_b, 1);
		push_a(stack_a, stack_b, 1);
	}
}

static void	sort_small_list(t_stack_list **a, t_stack_list **b, int size)
{
	if (size == 2 && !is_sorted(*a))
		swap_a(*a, 1);
	else if (size == 3)
		if_len_three(a);
	else if (size == 4 || size == 5)
	{
		while (ft_lstsize(*a) > 3)
			push_min_to_b(a, b);
		if_len_three(a);
		while (*b)
			push_a(a, b, 1);
	}
}

void	the_algorithm(t_stack_list **a, t_stack_list **b, int size, int c_s)
{
	if (size < 6)
		return (sort_small_list(a, b, size));
	the_algorithm_helper(a, b, &size, &c_s);
	push_all_a(a, b);
}
