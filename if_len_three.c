/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_len_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:19:25 by yussen            #+#    #+#             */
/*   Updated: 2025/09/17 22:04:36 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_len_three(t_stack_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;

	if ((first < second) && (second > third) && (first > third))
		reverse_rotate_a(stack_a, 1);
	else if ((first < second) && (second > third) && (first < third))
	{
		swap_a(*stack_a, 1);
		rotate_a(stack_a, 1);
	}
	else if ((first > second) && (second < third) && (first > third))
		rotate_a(stack_a, 1);
	else if ((first > second) && (second > third) && (first > third))
	{
		rotate_a(stack_a, 1);
		swap_a(*stack_a, 1);
	}
	else if((first > second) && (second < third) && (first < third))
		swap_a(*stack_a, 1);
}