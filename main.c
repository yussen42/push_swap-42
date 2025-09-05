/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:47:42 by yussen            #+#    #+#             */
/*   Updated: 2025/09/05 07:06:24 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	t_stack_list *stack_a;
	t_stack_list *stack_b;
	char	**temp;
	char	*nmbrs;
	int	i;

	nmbrs = NULL;
	if (ac == 2)
		temp = ft_split(&av[1][0], ' '); //çift tırnak değilde normal şekilde bir argüman verirse ne yapacak o durumuda fixlemek gerek
	else if (ac > 2)
	{
		nmbrs = ft_strjoinws(ac - 1,  &av[1], " ");
		temp = ft_split(nmbrs, ' ');
		free (nmbrs);
	}
	else
		return (1);
	i = 0;
	stack_a = init_stack_a(temp);
	stack_b = NULL;
	if (!stack_a)
		return (1);
	swap_a(stack_a);
	printf("%d", stack_a->next->content);
}
