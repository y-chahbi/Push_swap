/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:18:50 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/07 12:53:00 by ychahbi          ###   ########.fr       */
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