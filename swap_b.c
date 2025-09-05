/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:42:23 by yussen            #+#    #+#             */
/*   Updated: 2025/09/05 07:08:24 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack_list *stack_b)
{
	int	temp;

	temp = 0;

	if (!stack_b->next)
		return ;

	temp = stack_b->content;
	stack_b->content = stack_b->next->content;
	stack_b->next->content = temp;
	write(1, "sb\n", 3);
	return ;
}
