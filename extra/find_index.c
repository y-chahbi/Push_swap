/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_biggest_index(t_push_data *t_data, int **tab)
{
	int size;
	int count;
	int tmp;

	size = t_data->size_a - 1;
	count = 0;
	tmp = 0;
	while (count <= size)
	{
		if (tab[count][0] > tmp)
		{
			tmp = tab[count][0];
			t_data->ils = count;
		}
		count++;
	}
}

void	if_in_mywhile(t_push_data *t_data, int *j, int *i, int **tab)
{
	int tmp;
	int max;

	max = 0;
	tmp = t_data->stack_a[*i];
	while (*j <= t_data->size_a - 1)
	{
		if (t_data->stack_a[*j] > t_data->stack_a[*i] && t_data->stack_a[*j] >= tmp)
		{
			tmp = t_data->stack_a[*j];
			max++;
			tab[*i][0] = max;
		}
		(*j)++;
		if (*j > t_data->size_a - 1)
			*j = 0;
		if (*j == *i)
			break;
	}
}

void	find_index_of_longest_sorted(t_push_data *t_data)
{
	int i;
	int j;
	int **tab;

	tab = malloc(sizeof(int*) * t_data->size_a - 1);
	i = 0;
	t_data->ils = 0;
	while (i < t_data->size_a)
	{
		j = i;
		tab[i] = malloc(sizeof(int));
		if_in_mywhile(t_data, &j, &i, tab);
		i++;
	}
	get_biggest_index(t_data, tab);
}