/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:35:25 by yussen            #+#    #+#             */
/*   Updated: 2025/09/14 23:48:36 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack_list *stack_a)
{
	int	res;
	int	i;
	int	check;

	res = 0;
	i = 0;
	check = stack_a->content;
	while (stack_a->next)
	{
		if (check > stack_a->next->content)
		{
			check = stack_a->next->content;
			res = i + 1;
		}
		i++;
		stack_a = stack_a->next;
	}
	return (res);
}