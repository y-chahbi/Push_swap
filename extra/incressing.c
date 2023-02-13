/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incressing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:07:37 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/13 08:20:57 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*mal___o(t_push_data *t_data)
{
	t_data->s_tab = malloc(sizeof(int) * t_data->s_size);
	if (!t_data->s_tab)
		return (NULL);
	return (0);
}

void	inc___p1(t_push_data *t_data, int i, int j)
{
	p_ml(t_data);
	ft_setnum(t_data->incr, 1, t_data->size_a);
	ft_setnum(t_data->save, 0, t_data->size_a);
	ft_setnum(t_data->to_push, 0, t_data->size_a);
	i = 0;
	j = t_data->ils;
	while (i < t_data->size_a)
	{
		t_data->a__stack[i] = t_data->stack_a[j];
		i++;
		j++;
		if (j >= t_data->size_a)
			j = 0;
		if (j == t_data->ils)
			break ;
	}
}

void	inc___p2(t_push_data *t_data, int i, int j)
{
	i = 1;
	while (i < t_data->size_a)
	{
		j = 0;
		while (j < i)
		{
			if (t_data->a__stack[i] > t_data->a__stack[j]
				&& t_data->incr[i] < t_data->incr[j] + 1)
			{
				t_data->incr[i] = t_data->incr[j] + 1;
				t_data->save[i] = j;
			}
			j++;
		}
		i++;
	}
}

void	inc___p3(t_push_data *t_data, int i, int j)
{
	while (i)
	{
		t_data->to_push[i] = 1;
		i = t_data->save[i];
	}
	t_data->to_push[0] = 1;
	i = 0;
	j = 0;
	while (i < t_data->size_a)
	{
		if (t_data->to_push[i] == 1)
		{
			t_data->s_tab[j] = t_data->a__stack[i];
			j++;
		}
		i++;
	}
}

void	incressing(t_push_data *t_data)
{
	int	i;
	int	j;
	int	dex;

	i = 0;
	j = 0;
	inc___p1(t_data, i, j);
	inc___p2(t_data, i, j);
	i = 0;
	j = t_data->incr[0];
	while (i < t_data->size_a)
	{
		if (t_data->incr[i] > j)
		{
			j = t_data->incr[i];
			dex = i;
		}
		i++;
	}
	i = dex;
	t_data->s_size = t_data->incr[dex];
	mal___o(t_data);
	inc___p3(t_data, i, j);
}
