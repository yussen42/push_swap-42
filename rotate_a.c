/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 07:39:39 by yussen            #+#    #+#             */
/*   Updated: 2025/09/12 00:10:33 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack_list *stack_a, int flag)
{
	int	i;
	int	first;
	int	size_a;

	i = 0;
	first = stack_a->content;
	size_a = ft_lstsize(stack_a);
	if (size_a < 2)
		return ;
	while (i < size_a - 1)
	{
		stack_a->content = stack_a->next->content;
		stack_a = stack_a->next;
		i++;
	}
	stack_a->content = first;
	if (flag)
		write(1, "ra\n", 3);
}
