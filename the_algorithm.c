/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_algorithm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:17:46 by yussen            #+#    #+#             */
/*   Updated: 2025/09/17 03:55:33 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	the_algorithm(t_stack_list *stack_a, t_stack_list *stack_b)
{
	int	chunk_size;
	int	list_size;
	int	chunk_len;
	int	chunk_start;
	int	chunk_end;
	int	i;
	int	j;
	int	k;

	list_size = ft_lstsize(stack_a);
	chunk_size = logaritma(list_size); // ör: sqrt(list_size) veya başka bir fonksiyon
	chunk_len = list_size / chunk_size;
	chunk_start = 0;
	chunk_end = chunk_len - 1;

	j = find_min(stack_a);
	k = ft_lstsize(stack_a);
	while (k)
	{
		i = 0;
		while (i != j)
		{
			rotate_a(stack_a, 1);
			i++;
		}
		push_b(&stack_a, &stack_b, 1);
		k--;
	}
}
