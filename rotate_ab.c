/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:11:15 by yussen            #+#    #+#             */
/*   Updated: 2025/09/12 00:13:48 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_ab(t_stack_list *stack_a, t_stack_list *stack_b)
{
    rotate_a(stack_a, 0);
    rotate_b(stack_b, 0);
    write(1, "rr\n", 3);
}
