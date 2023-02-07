/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:27:49 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/07 11:29:02 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(t_push_data *t_data)
{
	int	i;
	int	temp;
	int	index;

	temp = t_data->stack_a[0];
	i = 0;
	index = 0;
	while (i <= t_data->size_a - 1)
	{
		if (t_data->stack_a[i] > temp)
		{
			temp = t_data->stack_a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	get_min(t_push_data *t_data)
{
	int	i;
	int	temp;
	int	index;

	temp = t_data->stack_a[0];
	i = 0;
	index = 0;
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
