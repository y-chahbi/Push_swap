/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 09:45:23 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/19 18:18:49 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rot_aa(t_push_data *t_data)
{
	int	i;
	int	tmp;

	i = t_data->size_a - 1;
	tmp = t_data->stack_a[t_data->size_a - 1];
	if (t_data->size_a >= 1)
	{
		while (i > 0)
		{
			t_data->stack_a[i] = t_data->stack_a[i - 1];
			i--;
		}
		t_data->stack_a[0] = tmp;
	}
}

void	rev_rot_a(t_push_data *t_data)
{
	rev_rot_aa(t_data);
	write (1, "rra\n", 4);
}

void	rev_rot_bb(t_push_data *t_data)
{
	int	i;
	int	tmp;

	i = t_data->size_b - 1;
	tmp = t_data->stack_b[t_data->size_b - 1];
	if (t_data->size_b >= 1)
	{
		while (i > 0)
		{
			t_data->stack_b[i] = t_data->stack_b[i - 1];
			i--;
		}
		t_data->stack_b[0] = tmp;
	}
}

void	rev_rot_b(t_push_data *t_data)
{
	rev_rot_bb(t_data);
	write (1, "rrb\n", 4);
}

void	rev_rot_a_b(t_push_data *t_data)
{
	rev_rot_aa(t_data);
	rev_rot_bb(t_data);
	write (1, "rrr\n", 4);
}
