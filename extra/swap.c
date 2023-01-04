/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 09:43:03 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/02 20:04:22 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_push_data *t_data)
{
	int	tmp;

	if (t_data->size_a >= 1)
	{
		tmp = t_data->stack_a[0];
		t_data->stack_a[0] = t_data->stack_a[1];
		t_data->stack_a[1] = tmp;
		write(1, "sa\n", 3);
	}
}

void	swap_b(t_push_data *t_data)
{
	int	tmp;

	if (t_data->size_b >= 1)
	{
		tmp = t_data->stack_b[0];
		t_data->stack_b[0] = t_data->stack_b[1];
		t_data->stack_b[1] = tmp;
		write(1, "sb\n", 3);
	}
}

void	swap_a_b(t_push_data *t_data)
{
	if (t_data->size_a >= 1 && t_data->size_b >= 1)
	{
		swap_a(t_data);
		swap_b(t_data);
		write(1, "ss\n", 3);
	}
}