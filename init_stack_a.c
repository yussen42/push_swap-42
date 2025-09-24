/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 02:23:31 by yussen            #+#    #+#             */
/*   Updated: 2025/09/20 17:46:59 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_list	*init_stack_a(char **temp)
{
	t_stack_list	*head;
	int				i;

	head = NULL;
	i = 0;
	while (temp[i])
	{
		ft_lstadd_back(&head, ft_lstnew(ft_atoi(&temp[i][0])));
		i++;
	}
	return (head);
}
