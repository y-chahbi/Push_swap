/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 01:03:45 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/01 08:47:55 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include<stdio.h>

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
		return (6);
	return (0);
}

void	while_func(char **s, int *j, int *i, char **av)
{
	while (*j <= *i)
	{
		if (*j > 1)
			*s = ft_strjoin(*s, " ");
		*s = ft_strjoin(*s, av[*j]);
		(*j)++;
	}
}

void	init_func(t_push_data *t_data)
{
	t_data->size = 0;
	t_data->status = 1;
}

int	check_errors(int ac, char **av, t_push_data *t_data)
{
	int		i;
	int		j;
	char	*s;
	char	**p;

	s = "";
	j = 1;
	i = ac - 1;
	while_func (&s, &j, &i, av);
	p = ft_split(s, ' ');
	init_func(t_data);
	while (p[t_data->size] != NULL)
		t_data->size++;
	j = 0;
	t_data->tab = malloc(sizeof(int) * t_data->size);
	while (p[j] != NULL)
	{
		t_data->tab[j] = ft_atoi(p[j]);
		j++;
	}
	if (is_double(t_data->tab, t_data->size) == 6)
		return (t_data->status = 0, 6);
	if (is_sorted(t_data->tab, t_data->size) == 6)
		return (t_data->status = 0);
	return (0);
}
