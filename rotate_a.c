/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 07:39:39 by yussen            #+#    #+#             */
/*   Updated: 2025/09/17 03:39:47 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	rotate_a(t_stack_list *stack_a, int flag)
// {
// 	int	i;
// 	int	first;
// 	int	size_a;

// 	i = 0;
// 	first = stack_a->content;
// 	size_a = ft_lstsize(stack_a);
// 	if (size_a < 2)
// 		return ;
// 	while (i < size_a - 1)
// 	{
// 		stack_a->content = stack_a->next->content;
// 		stack_a = stack_a->next;
// 		i++;
// 	}
// 	stack_a->content = first;
// 	if (flag)
// 		write(1, "ra\n", 3);
// }

void	rotate_a(t_stack_list **stack_a, int flag)
{
    t_stack_list	*first;
    t_stack_list	*last;

    if (!stack_a || !*stack_a || !(*stack_a)->next)
        return ;
    first = *stack_a;
    *stack_a = first->next;
    first->next = NULL;

    last = *stack_a;
    while (last->next)
        last = last->next;
    last->next = first;
    if (flag)
        write(1, "ra\n", 3);
}
