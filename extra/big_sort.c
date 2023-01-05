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
	int	i;
	int	j;
	int l;
	int k[t_data->size_a - 1][t_data->size_a - 1];

	i = 0;
	l = 0;
	while (i <= t_data->size_a - 1)
	{
		j = 0;
		while (i <= t_data->size_a - 1)
		{
			if (t_data->stack_a[j] >= t_data->stack_a[i])
			{
				k[i][l] = l;
				l++;
			}
			else
			{
				l = 0;
				break ;
			}
			j++;
		}
		i++;
	}
	printf("---%d---", k[t_data->size_a - 1][2]);
}

void	big_sort(t_push_data *t_data)
{
	find_index_of_longest_sorted(t_data);
}