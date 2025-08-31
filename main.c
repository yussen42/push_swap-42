/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:47:42 by yussen            #+#    #+#             */
/*   Updated: 2025/08/31 17:38:18 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int *a;
	int *b;
	int	i;
	
	i = 0;
	a = malloc(sizeof(int) * ac - 1);
	if (!a)
		return (1);
	
	while (i < ac -1)
	{
		a[i] = atoi(&av[i + 1][0]);
		i++;
	}
	swap_a(a);
	printf("1: %d\n 2: %d", a[0], a[1]);
	
}
