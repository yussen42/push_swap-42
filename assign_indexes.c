/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_indexes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:43:57 by yussen            #+#    #+#             */
/*   Updated: 2025/09/16 13:45:41 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_indexes(t_stack_list *stack_a)
{
    t_stack_list *ptr1 = stack_a;
    t_stack_list *ptr2;
    int idx;

    while (ptr1)
    {
        idx = 0;
        ptr2 = stack_a;
        while (ptr2)
        {
            if (ptr2->content < ptr1->content)
                idx++;
            ptr2 = ptr2->next;
        }
        ptr1->index = idx;
        ptr1 = ptr1->next;
    }
}
