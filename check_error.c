/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:33:06 by yussen            #+#    #+#             */
/*   Updated: 2025/09/20 18:03:03 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_duplicate(char **str)
{
	int	i;
	int	j;
	int	n;

	n = 0;
	while (str[n])
		n++;
	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_strcmp(str[i], str[j]) == 0)
			{
				ft_free_temp(str);
				write(2, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static int	is_numeric(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9') && (str[i][j] != '-'))
			{
				ft_free_temp(str);
				write(2, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static int	is_empty_or_one(char **str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (str[0] == NULL || str[1] == NULL)
	{
		ft_free_temp(str);
		write(1, "Error\n", 6);
		return (1);
	}
	else
		return (0);
}

static int	is_max_or_min_int(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_atoi_error_check(str[i]))
		{
			ft_free_temp(str);
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_error(char **str)
{
	int	i;

	i = is_empty_or_one(str);
	if (i == 1)
		return (1);
	i = is_numeric(str);
	if (i == 1)
		return (1);
	i = is_duplicate(str);
	if (i == 1)
		return (1);
	i = is_max_or_min_int(str);
	if (i == 1)
		return (1);
	else
		return (0);
}
