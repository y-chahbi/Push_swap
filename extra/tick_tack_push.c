/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tick_tack_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_some_sa(t_push_data *t_data, int i)
{
	int temp_i;

	temp_i = i;
	while (i > 0)
	{
		rev_rot_a(t_data);
		i--;
	}
	push_a(t_data);
	while (temp_i > 0)
	{
		rotate_a(t_data);
		temp_i--;
	}
}

void	tick_tack_push(t_push_data *t_data)
{
	int i;

	i = 0;
	while (i <= t_data->size_a - 1)
	{
		if (t_data->stack_a[i] < t_data->stack_b[0])
			i++;
		else
			do_some_sa(t_data, i);

	}
}