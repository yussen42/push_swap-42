/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_algorithm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:17:46 by yussen            #+#    #+#             */
/*   Updated: 2025/09/18 13:38:00 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_min_to_b(t_stack_list **stack_a, t_stack_list **stack_b)
{
    int min_index = find_min(*stack_a);
    int size = ft_lstsize(*stack_a); //size sayısı değişiklik gösterebilir kontrol etmem gerek
    if (min_index <= size / 2)
        while (min_index--)
            rotate_a(stack_a, 1);
    else
        while (min_index++ < size)
            reverse_rotate_a(stack_a, 1);
    push_b(stack_a, stack_b, 1);
}

static void push_all_a(t_stack_list **stack_a, t_stack_list **stack_b)
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

static void	sort_small_list(t_stack_list **stack_a, t_stack_list **stack_b, int size)
{
	if (size == 2 && !is_sorted(*stack_a))
        swap_a(*stack_a, 1);
    else if (size == 3)
        if_len_three(stack_a);
    else if (size == 4 || size == 5)
    {
        while (ft_lstsize(*stack_a) > 3)
            push_min_to_b(stack_a, stack_b);
        if_len_three(stack_a);
        while (*stack_b)
            push_a(stack_a, stack_b, 1);
	}
}

void	the_algorithm(t_stack_list **stack_a, t_stack_list **stack_b, int size, int chunk_size)
{
	int	chunk_start;
	int	chunk_end;
	int pushed;

	chunk_start = 0;
	chunk_end = chunk_size -1;
	pushed = 0;
	if (size < 6)
		return (sort_small_list(stack_a, stack_b, size));
    while (*stack_a)
    {
 
    }
    push_all_a(stack_a, stack_b);
}
