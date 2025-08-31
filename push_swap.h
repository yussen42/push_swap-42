/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:42:30 by yussen            #+#    #+#             */
/*   Updated: 2025/08/31 18:45:06 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct t_stack_list
{
	void				*content;
	struct t_stack_list		*next;
}	t_stack_list;

void	swap_a(int *stack_a);
void	swap_b(int *stack_b);
void	swap_ab(int *stack_a, int *stack_b);

#endif