/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:42:26 by yussen            #+#    #+#             */
/*   Updated: 2025/09/13 00:38:33 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack_list *stack_a, int flag)
{
	int	temp;

	temp = 0;

	if (!stack_a->next)
		return ;

	temp = stack_a->content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = temp;
	if (flag)
		write(1, "sa\n", 3);
	return ;
}
