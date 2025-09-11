/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:41:13 by yussen            #+#    #+#             */
/*   Updated: 2025/09/08 17:44:18 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_stack_list *stack_b)
{
	int				size;
	int				i;
	t_stack_list	*temp;
	t_stack_list	*last;

	i = 1;
	size = ft_lstsize(stack_b);
	temp = stack_b;
	last = ft_lstlast(stack_b);
	while (i < size -1)
	{
		temp = temp->next;
		i++;
	}
	ft_lstadd_back(&stack_b, last);
	temp->next = NULL;
	write(1, "rrb\n", 4);
}