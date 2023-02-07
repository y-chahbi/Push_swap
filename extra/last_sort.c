/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:35:25 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/07 12:52:45 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	last_sort(t_push_data *t_data)
{
	int	half;
	int	smal;

	half = t_data->size_a / 2;
	smal = find_smal_dex(t_data);
	if (smal <= half)
	{
		while (is_sorted_a(t_data) == 0)
		{
			rotate_a(t_data);
		}
	}
	else
	{
		while (is_sorted_a(t_data) == 0)
		{
			rev_rot_a(t_data);
		}
	}
}
