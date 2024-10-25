/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_partrs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:43:08 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/21 08:23:08 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*long_way_malloc(t_push_data *t_data, t_indexing *t_dex)
{
	free(t_dex->long_way);
	t_dex->long_way = malloc(sizeof(int) * (t_data->size_b));
	if (!t_dex->long_way)
		return (NULL);
	return (0);
}

int	ccplace(t_push_data *t_data, int i, int j)
{
	while (j <= t_data->size_a - 2)
	{
		if (t_data->stack_a[j] < t_data->stack_b[i]
			&& t_data->stack_a[j + 1] > t_data->stack_b[i])
			return (j + 1);
		j++;
	}
	return (-1);
}

void	while___(t_push_data *t_data, t_indexing *t_dex, int i, int j)
{
	while (j <= t_data->size_a - 1)
	{
		if (ccplace(t_data, i, j) != -1)
		{
			t_dex->current_p[i] = t_dex->stack_a[ccplace(t_data, i, j)];
			break ;
		}
		else if (t_data->stack_a[j] > t_data->stack_a[t_data->size_a - 1]
			&& t_data->stack_a[t_data->size_a - 1] > t_data->stack_b[i]
			&& t_data->stack_a[j] < t_data->stack_b[i])
		{
			t_dex->current_p[i] = t_dex->stack_a[t_data->size_a - 1];
			break ;
		}
		else if (t_data->stack_b[i] < t_data->stack_a[j])
		{
			t_dex->current_p[i] = t_dex->stack_a[j];
			break ;
		}
		j++;
	}
}

void	long_way(t_push_data *t_data, t_indexing *t_dex, int i)
{
	long_way_malloc(t_data, t_dex);
	while (i <= t_data->size_b - 1)
	{
		if (t_dex->current_p[i] < 0 && t_dex->stack_b[i] > 0)
			t_dex->long_way[i] = (t_dex->current_p[i] * -1) + t_dex->stack_b[i];
		else if (t_dex->current_p[i] > 0 && t_dex->stack_b[i] < 0)
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i] * -1);
		else if (t_dex->current_p[i] == 0 && t_dex->stack_b[i] == 0)
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i]);
		else if (t_dex->current_p[i] == 0 && t_dex->stack_b[i] < 0)
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i] * -1);
		else if (t_dex->current_p[i] < 0 && t_dex->stack_b[i] == 0)
			t_dex->long_way[i] = (t_dex->current_p[i] * -1) + t_dex->stack_b[i];
		else if (t_dex->current_p[i] == 0 && t_dex->stack_b[i] > 0)
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i]);
		else if (t_dex->current_p[i] > 0 && t_dex->stack_b[i] == 0)
			t_dex->long_way[i] = (t_dex->current_p[i]) + (t_dex->stack_b[i]);
		else if (t_dex->current_p[i] < 0 && t_dex->stack_b[i] < 0)
			t_dex->long_way[i] = (t_dex->current_p[i] + t_dex->stack_b[i]) * -1;
		else if (t_dex->current_p[i] > 0 && t_dex->stack_b[i] > 0)
			t_dex->long_way[i] = t_dex->current_p[i] + t_dex->stack_b[i];
		i++;
	}
}

void	*cur__p(t_push_data *t_data, t_indexing *t_dex)
{
	int	i;
	int	j;
	int	max;
	int	min;

	i = 0;
	max = get_max(t_data);
	min = get_min(t_data);
	t_dex->current_p = malloc(sizeof(int) * (t_data->size_b));
	if (!t_dex->current_p)
		return (NULL);
	while (i <= t_data->size_b - 1)
	{
		j = 0;
		if (t_data->stack_b[i] < t_data->stack_a[min])
			t_dex->current_p[i] = t_dex->stack_a[min];
		else if (t_data->stack_b[i] > t_data->stack_a[max])
			t_dex->current_p[i] = t_dex->stack_a[max + 1];
		else
			while___(t_data, t_dex, i, j);
		i++;
	}
	i = 0;
	long_way(t_data, t_dex, i);
	return (0);
}
