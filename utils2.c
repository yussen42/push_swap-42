/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 23:37:38 by yussen            #+#    #+#             */
/*   Updated: 2025/09/19 23:39:09 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack_list **lst, t_stack_list *new)
{
	t_stack_list	*last;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
void	ft_lstadd_front(t_stack_list **lst, t_stack_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
t_stack_list	*ft_lstnew(int content)
{
	t_stack_list	*node;

	node = malloc(sizeof(t_stack_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}