/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:37:31 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/20 12:01:15 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_element{
	int	*stack_a;
	int	*stack_b;
	int	*current_p;
	int	*long_way;
}		t_indexing;

typedef struct s_data{
	int		*stack_a;
	int		*stack_b;
	int		size_a;
	int		size_b;
	int		ils;
	int		s_size;
	int		*s_tab;
	int		*incr;
	int		*a__stack;
	int		*save;
	int		*to_push;
	int		much_pushes;
}	t_push_data;

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		check_errors(int ac, char **av, t_push_data *t_data);
size_t	ft_strlen(char *s);
char	**ft_split(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_isdigit(int c);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	push_swap_u(t_push_data *t_data);
void	swap_a(t_push_data *t_data);
void	rotate_bb(t_push_data *t_data);
void	rotate_aa(t_push_data *t_data);
void	swap_bb(t_push_data *t_data);
void	swap_aa(t_push_data *t_data);
void	swap_b(t_push_data *t_data);
void	swap_a_b(t_push_data *t_data);
void	push_b(t_push_data *t_data);
void	push_bb(t_push_data *t_data);
void	push_aa(t_push_data *t_data);
void	push_a(t_push_data *t_data);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	rotate_a(t_push_data *t_data);
void	rotate_b(t_push_data *t_data);
void	rotate_a_b(t_push_data *t_data);
void	rev_rot_bb(t_push_data *t_data);
void	rev_rot_aa(t_push_data *t_data);
void	rev_rot_a_b(t_push_data *t_data);
void	rev_rot_a(t_push_data *t_data);
void	rev_rot_b(t_push_data *t_data);
void	sort_3(t_push_data *t_data);
void	sort_5(t_push_data *t_data);
void	big_sort(t_push_data *t_data);
void	find_index_of_longest_sorted(t_push_data *t_data);
void	the_big_player(t_push_data *t_data);
int		is_sorted_a(t_push_data *t_data);
void	*find_best_move(t_push_data *t_data);
void	s_element_dex(t_push_data *t_data, t_indexing *t_dex);
void	s_el_a_b(t_push_data *t_data, t_indexing *t_dex);
int		get_max(t_push_data *t_data);
int		get_min(t_push_data *t_data);
void	handle_stack_a(int stka__cur, t_push_data *t_data);
void	handle_stack_b(int stkb__dex, t_push_data *t_data);
void	both_rout(int stkb__dex, int stka__cur, t_push_data *t_data);
int		get_index(t_indexing *t_dex, t_push_data *t_data);
void	do_some_magic(t_push_data *t_data, t_indexing *t_dex);
int		find_smal_dex(t_push_data *t_data);
void	last_sort(t_push_data *t_data);
void	*cur__p(t_push_data *t_data, t_indexing *t_dex);
void	checker_u(t_push_data	*t_data);
int		ft_strncmp(char *s1, char *s2, size_t n);
void	incressing(t_push_data *t_data);
void	ft_setnum(int *b, int c, size_t len);
void	free_stacks(t_push_data *t_data);
void	free_st(char **s);
void	*p_ml(t_push_data *t_data);
void	*stack_a_malloc(t_push_data *t_data);
#endif