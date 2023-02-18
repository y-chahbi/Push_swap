/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:35:25 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/18 18:59:29 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	last_sort(t_push_data *t_data)
{
	int	min_idx;
	int	min_val;

	min_idx = find_smal_dex(t_data);
	min_val = t_data->stack_a[min_idx];
	while (t_data->stack_a[0] != min_val)
	{
		if (min_idx < t_data->size_a / 2)
			rotate_a(t_data);
		else
			rev_rot_a(t_data);
	}
}
