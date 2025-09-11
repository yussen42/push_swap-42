/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:42:23 by yussen            #+#    #+#             */
/*   Updated: 2025/09/12 00:06:41 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack_list *stack_b, int flag)
{
	int	temp;

	temp = 0;

	if (!stack_b->next)
		return ;

	temp = stack_b->content;
	stack_b->content = stack_b->next->content;
	stack_b->next->content = temp;
	if (flag)
		write(1, "sb\n", 3);
	return ;
}
