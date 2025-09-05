/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinws.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 23:16:45 by yussen            #+#    #+#             */
/*   Updated: 2025/09/05 01:22:23 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	strslen(char **strs, int size)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	len = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			i++;
			len++;
		}
		j++;
	}
	return (len);
}

static void	copy_strs_sep(char *res, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		l = 0;
		while (strs[j][i])
			res[k++] = strs[j][i++];
		while (sep[l] && (j < size - 1))
			res[k++] = sep[l++];
		j++;
	}
	res[k] = '\0';
}

char	*ft_strjoinws(int size, char **strs, char *sep)
{
	char	*res;

	if (size == 0)
	{
		res = malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * strslen(strs, size) * ft_strlen(sep) * (size - 1) + 1);
	if (!res)
		return (NULL);
	copy_strs_sep(res, strs, sep, size);
	return (res);
}
