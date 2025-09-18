/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:05:19 by yussen            #+#    #+#             */
/*   Updated: 2025/09/17 21:37:06 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	reverse_rotate_a(t_stack_list *stack_a, int flag)
// {
// 	int				size;
// 	int				i;
// 	t_stack_list	*temp;
// 	t_stack_list	*last;

// 	i = 1;
// 	size = ft_lstsize(stack_a);
// 	temp = stack_a;
// 	last = ft_lstlast(stack_a);
// 	while (i < size -1)
// 	{
// 		temp = temp->next;
// 		i++;
// 	}
// 	ft_lstadd_front(&stack_a, last);
// 	temp->next = NULL;
// 	if (flag)
// 		write(1, "rra\n", 4);	
// }


void	reverse_rotate_a(t_stack_list **stack_a, int flag)
{
    t_stack_list	*prev;
    t_stack_list	*last;

    if (!stack_a || !*stack_a || !(*stack_a)->next)
        return ;
    prev = *stack_a;
    while (prev->next && prev->next->next)
        prev = prev->next;
    last = prev->next;
    prev->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
    if (flag)
        write(1, "rra\n", 4);
}