/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:37:31 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/03 14:13:05 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_data{
	int		*stack_a;
	int		*stack_b;
	int		size_a;
	int		size_b;
	int		status;
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
void	swap_b(t_push_data *t_data);
void	swap_a_b(t_push_data *t_data);
void	push_b(t_push_data *t_data);
void	push_a(t_push_data *t_data);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	rotate_a(t_push_data *t_data);
void	rotate_b(t_push_data *t_data);
void	rev_rot_a(t_push_data *t_data);
void	rev_rot_b(t_push_data *t_data);
void	sort_3(t_push_data *t_data);
void	sort_5(t_push_data *t_data);
#endif