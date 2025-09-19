/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_algorithm_helper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:57:37 by yussen            #+#    #+#             */
/*   Updated: 2025/09/19 23:29:08 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_next_chunk(int *c_st, int *c_end, int *c_s, int *size)
{
	(*c_st) += *c_s;
	(*c_end) += *c_s;
	if ((*c_end) >= (*size))
		(*c_end) = (*size) - 1;
}

static int	get_next_chunk_checker(int *found, int chunk_size, int *pushed)
{
	if (!(*found) || (*pushed) == chunk_size)
		return (1);
	else
		return (0);
}

static int	c_pusher(t_stack_list **a, t_stack_list **b, int *c_st, int *c_end)
{
	t_stack_list	*tmp;
	int				i;
	int				found;
	int				pushed;

	tmp = *a;
	i = 0;
	found = 0;
	pushed = 0;
	while (tmp)
	{
		if (tmp->index >= (*c_st) && tmp->index <= (*c_end))
		{
			while (i--)
				rotate_a(a, 1);
			push_b(a, b, 1);
			pushed++;
			found = 1;
			break ;
		}
		tmp = tmp->next;
		i++;
	}
	return (get_next_chunk_checker(&found, (*c_end) + 1, &pushed));
}

void	helper(t_stack_list **a, t_stack_list **b, int *size, int *c_s)
{
	int	chunk_start;
	int	chunk_end;
	int	flag;

	chunk_start = 0;
	chunk_end = (*c_s) - 1;
	flag = 0;
	while (*a)
	{
		flag = c_pusher(a, b, &chunk_start, &chunk_end);
		if (flag)
		{
			get_next_chunk(&chunk_start, &chunk_end, c_s, size);
			flag = 0;
		}
		if (chunk_start > (*size))
			break ;
	}
}
