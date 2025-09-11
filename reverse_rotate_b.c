/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:41:13 by yussen            #+#    #+#             */
/*   Updated: 2025/09/12 00:16:13 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_stack_list *stack_b, int flag)
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
	if (flag)
		write(1, "rrb\n", 4);
}