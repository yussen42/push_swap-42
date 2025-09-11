/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:47:42 by yussen            #+#    #+#             */
/*   Updated: 2025/09/11 19:17:38 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// is_duplicate, 3'lu siralama, hiç girdi yoksa hiçbir şey yapmama, push'lar, kuralların sa gibi şeylerini yazdırmak max,min int
int main(int ac, char **av)
{
	t_stack_list *stack_a;
	t_stack_list *stack_b;
	char	**temp;
	char	*nmbrs;


	nmbrs = NULL;
	if (ac == 2)
		temp = ft_split(&av[1][0], ' ');
	else if (ac > 2)
	{
		nmbrs = ft_strjoinws(ac - 1,  &av[1], " ");
		temp = ft_split(nmbrs, ' ');
		free (nmbrs);
	}
	else
		return (1);
	if (check_error(temp))
		return(1);
	stack_a = init_stack_a(temp);
	stack_b = NULL;
	if (!stack_a)
		return (1);
}
