/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:44:35 by yussen            #+#    #+#             */
/*   Updated: 2025/09/13 20:51:23 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push_b(t_stack_list **stack_a, t_stack_list **stack_b, int flag)
{
	t_stack_list	*temp;

	if (!(*stack_a))
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_lstadd_front(stack_b, temp);
	if (flag)
		write(1, "pb\n", 3);
}
