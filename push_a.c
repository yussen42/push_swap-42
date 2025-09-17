/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 20:47:28 by yussen            #+#    #+#             */
/*   Updated: 2025/09/13 20:51:58 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack_list **stack_a, t_stack_list **stack_b, int flag)
{
	t_stack_list	*temp;

	if (!(*stack_b))
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_lstadd_front(stack_a, temp);
	if (flag)
		write(1, "pa\n", 3);
}
