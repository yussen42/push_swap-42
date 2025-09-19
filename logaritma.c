/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logaritma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:58:08 by yussen            #+#    #+#             */
/*   Updated: 2025/09/19 22:58:24 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_power(int a)
{
	int	val;

	val = 1;
	while (a > 0)
	{
		val *= 2;
		a--;
	}
	return (val);
}

int	logaritma(int nbr)
{
	int	power;

	power = 1;
	while (power)
	{
		if (nbr < get_power(power + 1) && nbr >= get_power(power))
			return (power);
		power++;
	}
	return (0);
}
