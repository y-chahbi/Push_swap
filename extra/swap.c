/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 09:43:03 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/17 14:06:18 by ychahbi          ###   ########.fr       */
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
	int	tmpa;
	int	tmpb;

	if (t_data->size_a >= 1 && t_data->size_b >= 1)
	{
		tmpa = t_data->stack_a[0];
		t_data->stack_a[0] = t_data->stack_a[1];
		t_data->stack_a[1] = tmpa;
		tmpb = t_data->stack_b[0];
		t_data->stack_b[0] = t_data->stack_b[1];
		t_data->stack_b[1] = tmpb;
		write(1, "ss\n", 3);
	}
}