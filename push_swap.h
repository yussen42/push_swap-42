/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:42:30 by yussen            #+#    #+#             */
/*   Updated: 2025/09/20 18:05:38 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_list
{
	int						content;
	int						index;
	struct s_stack_list		*next;
}	t_stack_list;

void			swap_a(t_stack_list *stack_a, int flag);
void			swap_b(t_stack_list *stack_b, int flag);
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
void			ft_free_temp(char **str);
ssize_t			ft_atoi_error_check(const char *nptr);
void			if_len_three(t_stack_list **stack_a);
void			push_b(t_stack_list **stack_a, t_stack_list **stack_b,
					int flag);
void			push_a(t_stack_list **stack_a, t_stack_list **stack_b,
					int flag);
void			free_stack(t_stack_list **stack);
int				find_min(t_stack_list *stack_a);
int				find_max(t_stack_list *stack_a);
int				chunk_count_founder(int nbr);
void			the_algorithm(t_stack_list **a, t_stack_list **b, int size,
					int c_s);
void			assign_indexes(t_stack_list *stack_a);
int				is_sorted(t_stack_list *stack);
void			helper(t_stack_list **a, t_stack_list **b, int *size, int *c_s);
void			ft_lstadd_front(t_stack_list **lst, t_stack_list *new);
void			ft_lstadd_back(t_stack_list **lst, t_stack_list *new);
t_stack_list	*ft_lstnew(int content);
int				ft_lstsize(t_stack_list *lst);
ssize_t			ft_strlen(const char *s);
char			**ft_split(char const *s, char c);
t_stack_list	*ft_lstlast(t_stack_list *lst);
int				ft_atoi(const char *nptr);
void			*ft_calloc(size_t nmemb, size_t size);
void			ft_bzero(void *s, size_t n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				word_count(char const *s, char c);

#endif