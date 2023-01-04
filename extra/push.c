/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 09:43:47 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/02 20:57:31 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_push_data *t_data)
{
	int	i;

	i = t_data->size_a;
	if (t_data->size_b >= 1)
	{
		while (i >= 0)
		{
			t_data->stack_a[i] = t_data->stack_a[i - 1];
			i--;
		}
		i = 0;
		t_data->stack_a[0] = t_data->stack_b[0];
		while (i < t_data->size_a - 1)
		{
			t_data->stack_b[i] = t_data->stack_b[i + 1];
			i++;
		}
		t_data->size_a++;
		t_data->size_b--;
		write (1, "pb\n", 3);
	}
}

void	push_b(t_push_data *t_data)
{
	int	i;

	i = t_data->size_b;
	if (t_data->size_a >= 1)
	{
		while (i >= 0)
		{
			t_data->stack_b[i] = t_data->stack_b[i - 1];
			i--;
		}
		i = 0;
		t_data->stack_b[0] = t_data->stack_a[0];
		while (i < t_data->size_a - 1)
		{
			t_data->stack_a[i] = t_data->stack_a[i + 1];
			i++;
		}
		t_data->size_a--;
		t_data->size_b++;
		write (1, "pb\n", 3);
	}
}