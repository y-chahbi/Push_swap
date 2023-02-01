/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:10:56 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/04 17:21:46 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_last_push(t_push_data *t_data)
{
	int	last_index;
	int	i;

	i = 0;
	last_index = 0;
	while (i <= t_data->size_a -1)
	{
		if (t_data->stack_a[last_index] >= t_data->stack_a[i])
			last_index = i;
		i++;
	}
	if (last_index == 0)
		push_b(t_data);
	else if (last_index == t_data->size_a - 1)
	{
		rev_rot_a(t_data);
		push_b(t_data);
	}
	else if (last_index == 1)
	{
		swap_a(t_data);
		push_b(t_data);
	}
	else if (last_index == t_data->size_a - 2)
	{
		rev_rot_a(t_data);
		rev_rot_a(t_data);
		push_b(t_data);
	}
	else if (last_index == 2)
	{
		rev_rot_a(t_data);
		rev_rot_a(t_data);
		rev_rot_a(t_data);
		push_b(t_data);
	}
}

void	sort_5(t_push_data *t_data)
{
	find_last_push(t_data);
	find_last_push(t_data);
	sort_3(t_data);
	push_a(t_data);
	push_a(t_data);
}
