/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 01:03:45 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/11 14:24:22 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_double(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] == tab[i] && i != j)
				return (6);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sorted(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (j < size)
	{
		if (tab[i++] < tab[j++])
			k++;
	}
	if (k == j - 1)
		exit(1);
	return (0);
}

void	while_func(char **s, int *j, int *i, char **av)
{
	while (*j <= *i)
	{
		if (*j > 1)
		{
			*s = ft_strjoin(*s, " ");
		}
		*s = ft_strjoin(*s, av[*j]);
		(*j)++;
	}
}

void	init_func(t_push_data *t_data)
{
	t_data->size_a = 0;
	t_data->size_b = 0;
	t_data->status = 1;
}

int	check_errors(int ac, char **av, t_push_data *t_data)
{
	int		i;
	int		j;
	char	*s;
	char	**p;

	s = NULL;
	j = 1;
	i = ac - 1;
	while_func (&s, &j, &i, av);
	p = ft_split(s, ' ');
	init_func(t_data);
	while (p[t_data->size_a] != NULL)
		t_data->size_a++;
	j = -1;
	t_data->stack_a = malloc(sizeof(int) * t_data->size_a);
	t_data->stack_b = ft_calloc(sizeof(int), t_data->size_a);
	while (p[++j] != NULL)
		t_data->stack_a[j] = ft_atoi(p[j]);
	if (is_double(t_data->stack_a, t_data->size_a) == 6)
		return (t_data->status = 0, 6);
	if (is_sorted(t_data->stack_a, t_data->size_a) == 6)
		return (t_data->status = 0);
	return (free_st(p), free(s), 0);
}
