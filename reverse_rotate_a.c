/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:05:19 by yussen            #+#    #+#             */
/*   Updated: 2025/09/08 17:16:03 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
// 1 2 3 4 5 -> 5 1 2 3 4
void	reverse_rotate_a(t_stack_list *stack_a)
{
	int				size;
	int				i;
	t_stack_list	*temp;
	t_stack_list	*last;

	i = 1;
	size = ft_lstsize(stack_a);
	temp = stack_a;
	last = ft_lstlast(stack_a);
	while (i < size -1)
	{
		temp = temp->next;
		i++;
	}
	ft_lstadd_front(&stack_a, last);
	temp -> next = NULL;
	
	
}