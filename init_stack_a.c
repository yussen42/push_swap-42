/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 02:23:31 by yussen            #+#    #+#             */
/*   Updated: 2025/09/13 00:38:10 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static t_stack_list	*lst_new(int value)
{
	t_stack_list	*node;

	node = malloc(sizeof(t_stack_list));
	if (!node)
		return (NULL);
	node->content = value;
	node->next = NULL;
	return (node);
}

t_stack_list	*init_stack_a(char **temp)
{
	t_stack_list	*head;
	int				i;

	head = NULL;
	i = 0;
	while (temp[i])
	{
		ft_lstadd_back(&head, lst_new(ft_atoi(&temp[i][0])));
		i++;
	}
	return (head);
}
