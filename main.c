/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:47:42 by yussen            #+#    #+#             */
/*   Updated: 2025/09/17 03:35:15 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//push'lar, sıralanmışmı diye bakma 1 argüman veya 2 argüman girme durumu
// swap, rotate ve push yanlış ben contentleri değiştiriyorum nodeları değil
// swap hariç tüm işlemler node değiştiriyor.
int main(int ac, char **av)
{
	t_stack_list *stack_a;
	t_stack_list *stack_b;
	char	**temp;
	char	*nmbrs;


	stack_b = NULL;
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
	ft_free(temp);
	assign_indexes(stack_a);
	the_algorithm(&stack_a, &stack_b);

}
