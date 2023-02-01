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

void	tick_tack_push(t_push_data *t_data)
{
	//int	i;
	//int	size;

	//i = 0;
	//size = 0;
	while (1)
	{
		if (t_data->stack_a[0] > t_data->stack_b[0])
			push_a(t_data);
		if (t_data->stack_a[0] < t_data->stack_b[0])
			rotate_a(t_data);
		if (t_data->size_b == 0)
			break ;
	}
	while (is_sorted_a(t_data) == 0)
		rotate_a(t_data);
}