/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:35:25 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/12 15:42:00 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	last_sort(t_push_data *t_data)
{
	while (is_sorted_a(t_data) == 0)
	{
		if (find_smal_dex(t_data) < t_data->size_a / 2)
			rotate_a(t_data);
		else
			rev_rot_a(t_data);
	}
}
