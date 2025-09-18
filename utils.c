/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 23:16:23 by yussen            #+#    #+#             */
/*   Updated: 2025/09/18 04:07:25 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_arg(char **str)
{
	int	i;

	i = 0;
	while (str[i][0])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

ssize_t	ft_atoi_error_check(const char *nptr)
{
	ssize_t	i;
	ssize_t	sign;
	ssize_t	res;

	i = 0;
	sign = 1;
	res = 0;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	if ((sign == 1 && res > 2147483647) || ft_strlen(nptr) >= 10)
		return (1);
	else if (((sign == -1) && -(res) < -2147483648) || ft_strlen(nptr) >= 11)
		return (1);
	else
		return (0);
}
void free_stack(t_stack_list **stack)
{
    t_stack_list *current;
    t_stack_list *next;

    if (!stack || !*stack)
        return ;

    current = *stack;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *stack = NULL;
}
