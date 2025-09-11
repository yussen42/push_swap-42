/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:33:06 by yussen            #+#    #+#             */
/*   Updated: 2025/09/11 19:17:30 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

 
int	is_duplicate(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str[i])
	{
		
	}
}
int	check_error(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while(str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9') && (str[i][j] != '\0'))
			{
				i = 0;
				while(str[i])
				{
					free(str[i]);
					i++;
				}
				free(str);
				write(1, "Error\n", 6);
				return(1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
