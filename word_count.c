/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 16:58:09 by yussen            #+#    #+#             */
/*   Updated: 2025/09/20 17:42:54 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	word_count(char const *s, char c)
{
	int	i;
	int	w_count;
	int	flag;

	i = 0;
	w_count = 0;
	while (s[i])
	{
		flag = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			flag = 1;
		}
		if (flag)
			w_count++;
	}
	return (w_count);
}
