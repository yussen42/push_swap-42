/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:42:30 by yussen            #+#    #+#             */
/*   Updated: 2025/09/18 03:12:55 by yussen           ###   ########.fr       */
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

void			swap_a(t_stack_list *stack_a, int flag);
void			swap_b(int *stack_b, int flag);
void			swap_ab(int *stack_a, int *stack_b);
char			*ft_strjoinws(int size, char **strs, char *sep);
int				size_arg(char **str);
t_stack_list	*init_stack_a(char **temp);
void			rotate_a(t_stack_list **stack_a, int flag);
void			rotate_b(t_stack_list **stack_b, int flag);
void			rotate_ab(t_stack_list *stack_a, t_stack_list *stack_b);
void			reverse_rotate_a(t_stack_list **stack_a, int flag);
void			reverse_rotate_b(t_stack_list **stack_b, int flag);
void			reverse_rotate_ab(t_stack_list *stack_a, t_stack_list *stack_b);
int				check_error(char **str);
int				ft_strcmp(char *s1, char *s2);
void			ft_free(char **str);
ssize_t			ft_atoi_error_check(const char *nptr);
void			if_len_three(t_stack_list **stack_a);
void			push_b(t_stack_list **stack_a, t_stack_list **stack_b, int flag);
void			push_a(t_stack_list **stack_a, t_stack_list **stack_b, int flag);
void            free_stack(t_stack_list **stack);
int	            find_min(t_stack_list *stack_a);
int				find_max(t_stack_list *stack_a);
int             logaritma(int nbr); // ismini ve değişken isimlerini ingilizce yap
void	        the_algorithm(t_stack_list **stack_a, t_stack_list **stack_b, int size, int chunk_size);
void			assign_indexes(t_stack_list *stack_a); //ufak tefek değişiklikler yapılabilir
int             is_sorted(t_stack_list *stack);
#endif