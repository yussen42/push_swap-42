/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:41:58 by yussen            #+#    #+#             */
/*   Updated: 2025/08/31 18:44:55 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_ab(int *stack_a, int *stack_b)
{
	int	temp;

	temp = 0;

	if (stack_a[1])
	{
		temp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
	}

	if (stack_b[1])
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
	}

	write(1, "ss\n", 3);
	return ;
}