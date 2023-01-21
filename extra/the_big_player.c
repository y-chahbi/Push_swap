/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_big_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_el_b(t_push_data *t_data, t_indexing *t_dex)
{
	int	half;
	int	i;

	i = 0;
	half = (t_data->size_b - 1) / 2;
	t_dex->stack_b = malloc(sizeof(int) * (t_data->size_b - 1));
	while (i < t_data->size_b)
	{
		if (i > half)
			t_dex->stack_b[i] = -(t_data->size_b - i);
		else
			t_dex->stack_b[i] = i;
		i++;
	}
}

void	s_el_a(t_push_data *t_data, t_indexing *t_dex)
{
	int	half;
	int	i;

	i = 0;
	half = (t_data->size_a - 1) / 2;
	t_dex->stack_a = malloc(sizeof(int) * (t_data->size_a - 1));
	while (i < t_data->size_a)
	{
		if (i > half)
			t_dex->stack_a[i] = -(t_data->size_a - i);
		else
			t_dex->stack_a[i] = i;
		i++;
	}
}

void	current_p(t_push_data *t_data, t_indexing *t_dex)
{
	int	i;
	int	j;
	int	max;
	int	min;

	i = 0;
	// max = t_data->stack_a[t_data->size_a - 1];
	// min = t_data->stack_a[0];
	printf("max%d .....min%d", max , min);
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
		puts("Bfb");
		j = 0;
		while (j <= t_data->size_a - 1)
		{
			// puts("bb");
			// printf("....+++...++...%d",t_data->stack_b[i]);
			// printf("....+++...++...%d",t_data->stack_a[j]);			
			// printf("....+++...++...%d",t_data->stack_a[j+1]);			


			if (t_data->stack_b[i] > t_data->stack_a[j] && t_data->stack_b[i] < t_data->stack_a[j+1])
				{
					// puts("VVBVe");
					t_dex->current_p[i] = t_dex->stack_a[j];
					// printf("%d..+.+.+.*+******",t_dex->stack_a[j]);
					break ;
				}
			j++;
		}
		i++;
	}
	i = 0;
	while (i <= t_data->size_b - 1)
	{
		printf("%d...\n", t_dex->current_p[i]);
		i++;
	}
}

void	s_element_dex(t_push_data *t_data, t_indexing *t_dex)
{
	int	i;

	s_el_a(t_data, t_dex);
	s_el_b(t_data, t_dex);
	current_p(t_data, t_dex);
	printf("indexing a: \n");
	i = 0;
	while (i < t_data->size_a)
	{
		printf("%d\n", t_data->stack_a[i]);
		printf(">>>>%d\n", t_dex->stack_a[i]);

		i++;
	}
	printf("\n");
	printf("indexing b: \n");
	i = 0;
	while (i < t_data->size_b)
	{
		printf("					%d\n", t_data->stack_b[i]);
		printf("					>>>>>>>%d\n", t_dex->stack_b[i]);
		i++;
	}
	printf("\n");
}

void	find_best_move(t_push_data *t_data)
{
	t_indexing	*t_dex;

	t_dex = malloc(sizeof(t_indexing));
	s_element_dex(t_data, t_dex);
}

void	the_big_player(t_push_data *t_data)
{
	find_best_move(t_data);
}
