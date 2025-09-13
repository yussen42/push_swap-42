/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:44:35 by yussen            #+#    #+#             */
/*   Updated: 2025/09/13 01:57:14 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push_b(t_stack_list *stack_a, t_stack_list *stack_b, int flag)
{
	t_stack_list	*temp;
	int				size;
	int				i;

	i = 0;
	temp = stack_a;
	size = ft_lstsize(stack_a);
	while (i < size -1)
	{
		stack_a->next = stack_a->next->next;
		i++;
	}
	ft_lstadd_front(&stack_b, temp);
	if (flag)
		write(2, "pb\n", 3);
}
// 3 2 1 -> 2 1 