/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:41:13 by yussen            #+#    #+#             */
/*   Updated: 2025/09/19 23:00:54 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_stack_list **stack_b, int flag)
{
	t_stack_list	*prev;
	t_stack_list	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	prev = *stack_b;
	while (prev->next && prev->next->next)
		prev = prev->next;
	last = prev->next;
	prev->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	if (flag)
		write(1, "rrb\n", 4);
}
