/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/07 11:25:01 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	start_push_swap(t_push_data *t_data)
{
	the_big_player(t_data);
}

int	check_tops(t_push_data *t_data)
{
	int	i;

	i = 0;
	while (i <= t_data->s_size - 1)
	{
		if (t_data->stack_a[0] == t_data->s_tab[i])
			return 0;
		i++;
	}
	return 1;
}

void	push_to_b(t_push_data *t_data)
{
	while (t_data->size_a > t_data->s_size)
	{
		if (check_tops(t_data) == 1)
			push_b(t_data);
		else
			rotate_a(t_data);
	}
}
void	big_sort(t_push_data *t_data)
{
	find_index_of_longest_sorted(t_data);
	push_to_b(t_data);
	start_push_swap(t_data);
}
