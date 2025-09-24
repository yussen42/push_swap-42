/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 23:40:40 by yussen            #+#    #+#             */
/*   Updated: 2025/09/20 16:59:04 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	*ft_free(char **res, int flag)
{
	while (flag >= 0)
		free(res[flag--]);
	free(res);
	return (NULL);
}

static void	find_start(char const *s, char c, int *i, int *start)
{
	while (s[*i] == c && s[*i])
	{
		(*i)++;
		(*start)++;
	}
}

static void	*fill_word(char const *s, char c, char **res, int i)
{
	int	start;
	int	l_word;
	int	flag;

	flag = 0;
	start = 0;
	while (s[i])
	{
		l_word = 0;
		find_start(s, c, &i, &start);
		while (s[i] != c && s[i])
		{
			l_word++;
			i++;
		}
		if (i > start)
		{
			res[flag] = ft_substr(s, start, l_word);
			if (!res[flag])
				return (ft_free(res, flag));
			flag++;
		}
		start += l_word;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res)
		return (NULL);
	if (!fill_word(s, c, res, i))
		return (NULL);
	res[word_count(s, c)] = NULL;
	return (res);
}
