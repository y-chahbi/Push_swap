/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_pushed_inside.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	not_in_tab(t_push_data *t_data, int i)
{
	int	dex;

	dex = 0;
	while (dex <= t_data->s_size - 1)
	{
		if (t_data->stack_a[i] == t_data->s_tab[dex])
			return (0);
		dex++;
	}
	return (1);

}

void	while_front(t_push_data *t_data, int i)
{
	while (i > 0)
	{
		rotate_a(t_data);
		i--;
	}
	push_b(t_data);

}

void	while_back(t_push_data *t_data, int i)
{
	while (i < t_data->size_a - 1)
	{
		rev_rot_a(t_data);
		i++;
	}
	push_b(t_data);
}

void	clear_pushed_inside(t_push_data *t_data)
{
	int	half;
	int	size;
	int	i;

	half = (t_data->size_a - 1) / 2;
	i = 0;
	size = t_data->size_a - 1;
	while (i <= size)
	{
		if (not_in_tab(t_data, i) == 1)
		{
			if (i <= half)
			{
				while_front(t_data, i);
				i = -1;
			}
			else
				while_back(t_data, i);
		}
		i++;
	}
}




