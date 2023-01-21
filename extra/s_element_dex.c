/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_element_dex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:49:12 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/21 12:02:44 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(t_push_data *t_data)
{
	int	i;
	int	temp;
	int	index;

	temp = t_data->stack_a[0];
	i = 0;
	index = 0;
	while (i <= t_data->size_a - 1)
	{
		if (t_data->stack_a[i] > temp)
		{
			temp = t_data->stack_a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	get_min(t_push_data *t_data)
{
	int	i;
	int	temp;
	int	index;

	temp = t_data->stack_a[0];
	i = 0;
	index = 0;
	while (i <= t_data->size_a - 1)
	{
		if (t_data->stack_a[i] < temp)
		{
			temp = t_data->stack_a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	current_p(t_push_data *t_data, t_indexing *t_dex)
{
	int	i;
	int	j;
	int	max;
	int	min;

	i = 0;
	max = get_max(t_data);
	min = get_min(t_data);
	t_dex->current_p = malloc(t_data->size_b - 1);
	while (i <= t_data->size_b)
	{
		if (t_data->stack_b[i] < min)
		{
			t_dex->current_p[i] = t_dex->stack_a[min];
		}
		else if (t_data->stack_b[i] > max)
		{
			t_dex->current_p[i] = t_dex->stack_a[max];
		}
		j = 0;
		while (j <= t_data->size_a - 1)
		{
			if (t_data->stack_b[i] > t_data->stack_a[j]
				&& t_data->stack_b[i] < t_data->stack_a[j + 1])
			{
				t_dex->current_p[i] = t_dex->stack_a[j];
				break ;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i <= t_data->size_b - 1)
	{
		printf("%d\n", t_dex->current_p[i]);
		i++;
	}
}

void	s_element_dex(t_push_data *t_data, t_indexing *t_dex)
{
	int	i;

	s_el_a_b(t_data, t_dex);
	current_p(t_data, t_dex);
	printf("indexing a: \n");
	i = 0;
	while (i < t_data->size_a)
	{
		printf("|%d - ", t_data->stack_a[i]);
		printf("%d|\n", t_dex->stack_a[i]);
		i++;
	}
	printf("\n");
	printf("indexing b: \n");
	i = 0;
	while (i < t_data->size_b)
	{
		printf("|%d - ", t_data->stack_b[i]);
		printf("%d|\n", t_dex->stack_b[i]);
		i++;
	}
	printf("\n");
}