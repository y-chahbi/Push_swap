/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:07:00 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/07 12:47:01 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	part_1(t_push_data *t_data)
{
	if (t_data->stack_a[0] < t_data->stack_a[1]
		&& t_data->stack_a[1] > t_data->stack_a[2]
		&& t_data->stack_a[0] < t_data->stack_a[2])
	{
		swap_a(t_data);
		rotate_a(t_data);
	}
	else if (t_data->stack_a[0] > t_data->stack_a[1]
		&& t_data->stack_a[1] < t_data->stack_a[2]
		&& t_data->stack_a[0] > t_data->stack_a[2])
		rotate_a(t_data);
	else if (t_data->stack_a[0] > t_data->stack_a[1]
		&& t_data->stack_a[2] > t_data->stack_a[1]
		&& t_data->stack_a[0] < t_data->stack_a[2])
		swap_a(t_data);
}

void	part_2(t_push_data *t_data)
{
	if (t_data->stack_a[1] > t_data->stack_a[0]
		&& t_data->stack_a[2] > t_data->stack_a[0]
		&& t_data->stack_a[0] > t_data->stack_a[2])
	{
		swap_a(t_data);
		rotate_a(t_data);
	}
	else if (t_data->stack_a[0] > t_data->stack_a[1]
		&& t_data->stack_a[1] > t_data->stack_a[2])
	{
		swap_a(t_data);
		rev_rot_a(t_data);
	}
	else if (t_data->stack_a[0] < t_data->stack_a[1]
		&& t_data->stack_a[1] > t_data->stack_a[2]
		&& t_data->stack_a[0] > t_data->stack_a[2])
	{
		rev_rot_a(t_data);
	}
}

void	sort_3(t_push_data *t_data)
{
	if (t_data->size_a == 2)
		swap_a(t_data);
	else
	{
		part_1(t_data);
		part_2(t_data);
	}	
}
