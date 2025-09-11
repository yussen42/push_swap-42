/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 07:48:14 by yussen            #+#    #+#             */
/*   Updated: 2025/09/12 00:10:53 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_stack_list *stack_b, int flag)
{
	int	i;
	int	first;
	int	size_b;

	i = 0;
	first = stack_b->content;
	size_b = ft_lstsize(stack_b);
	if (size_b < 2)
		return ;
	while (i < size_b - 1)
	{
		stack_b->content = stack_b->next->content;
		stack_b = stack_b->next;
		i++;
	}
	stack_b->content = first;
	if (flag)
		write(1, "rb\n", 3);
}
