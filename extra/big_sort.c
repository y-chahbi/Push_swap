/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_index_of_longest_sorted(t_push_data *t_data)
{
	int i;
	int j;
	int max;
	int **tab;

	tab = malloc(sizeof(int) * t_data->size_a - 1 );
	i = 0;
	while (i <= t_data->size_a - 1)
	{
		j = i;
		max = 0;
		tab[i] = malloc(sizeof(int));
		while (j <= t_data->size_a - 1)
		{
			if (t_data->stack_a[j] > t_data->stack_a[i])
			{
				max++;
				tab[i][0] = max;
			}
			j++;
			if (j > t_data->size_a - 1)
				j = 0;
			if (j == i)
				break;
		}
		printf("%d\n", tab[i][0]);
		i++;
	}
	int h = 0;
	while (h <= t_data->size_a - 1)
	{
		//printf("%d\n", tab[h][0]);
		h++;
	}
}

void	big_sort(t_push_data *t_data)
{
	find_index_of_longest_sorted(t_data);
}