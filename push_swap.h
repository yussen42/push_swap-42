/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:42:30 by yussen            #+#    #+#             */
/*   Updated: 2025/09/05 03:14:53 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

// typedef struct s_stack_list
// {
// 	int						*content;
// 	struct s_stack_list		*next;
// }	t_stack_list;

void			swap_a(int *stack_a);
void			swap_b(int *stack_b);
void			swap_ab(int *stack_a, int *stack_b);
int				is_valid(char *str);
char			*ft_strjoinws(int size, char **strs, char *sep);
int				size_arg(char **str);
t_stack_list	*init_stack_a(char **temp);

#endif