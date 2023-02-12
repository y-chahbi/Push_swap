/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 09:44:35 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/12 15:56:16 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_aa(t_push_data *t_data)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = t_data->stack_a[0];
	if (t_data->size_a >= 1)
	{
		while (i < t_data->size_a - 1)
		{
			t_data->stack_a[i] = t_data->stack_a[i + 1];
			i++;
		}
		t_data->stack_a[t_data->size_a - 1] = tmp;
	}
}

void	rotate_a(t_push_data *t_data)
{
	rotate_aa(t_data);
	write (1, "ra\n", 3);
}

void	rotate_bb(t_push_data *t_data)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = t_data->stack_b[0];
	if (t_data->size_b >= 1)
	{
		while (i < t_data->size_b - 1)
		{
			t_data->stack_b[i] = t_data->stack_b[i + 1];
			i++;
		}
		t_data->stack_b[t_data->size_b - 1] = tmp;
	}
}

void	rotate_b(t_push_data *t_data)
{
	rotate_bb(t_data);
	write (1, "rb\n", 3);
}

void	rotate_a_b(t_push_data *t_data)
{
	rotate_aa(t_data);
	rotate_bb(t_data);
	write (1, "rr\n", 3);
}
