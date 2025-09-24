/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_count_founder.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 16:30:45 by yussen            #+#    #+#             */
/*   Updated: 2025/09/20 16:35:30 by yussen           ###   ########.fr       */
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

int	chunk_count_founder(int nbr)
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
