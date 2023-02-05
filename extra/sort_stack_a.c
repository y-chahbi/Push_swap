/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:18:50 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/05 15:49:28 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted_a(t_push_data *t_data)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = t_data->stack_a[0];
	while (i <= t_data->size_a - 1)
	{
		if (tmp < t_data->stack_a[i])
			tmp = t_data->stack_a[i];
		else
			return (0);
		i++;
	}
	return (1);
}

int	ret_small_index(t_push_data *t_data)
{
	int	index;
	int	i;
	int	temp;

	i = 0;
	index = 0;
	temp = t_data->stack_a[0];
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

void	sort_stack_a(t_push_data *t_data)
{
	int	half;
	int	index;

	index = ret_small_index(t_data);
	half = (t_data->size_a - 1) / 2;
	while (1)
	{
		if (is_sorted_a(t_data) == 0 && index <= half)
			rotate_a(t_data);
		else if (is_sorted_a(t_data) == 0 && index > half)
			rev_rot_a(t_data);
		else
			break ;
	}
}