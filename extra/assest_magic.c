/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assest_magic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:32:34 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/07 11:34:19 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int get_index(t_indexing *t_dex, t_push_data *t_data)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (i <= t_data->size_b - 1)
	{
		if (t_dex->long_way[i] < t_dex->long_way[index])
			index = i;
		i++;
	}
	return index;
}

void	do_some_magic(t_push_data *t_data, t_indexing *t_dex)
{
	int stka__cur;
	int stkb__dex;
	int index;

	index = get_index(t_dex, t_data);
	stka__cur = t_dex->current_p[index];
	stkb__dex = t_dex->stack_b[index];
		
	if(stka__cur != 0 && stkb__dex != 0)
		both_rout(stkb__dex, stka__cur, t_data);
	else
	{
		handle_stack_a(stka__cur, t_data);
		handle_stack_b(stkb__dex, t_data);
	}
}

int find_smal_dex(t_push_data *t_data)
{
	int i;
	int temp;
	int	index;

	i = 0;
	index = 0;
	temp = t_data->stack_a[0];
	while (i < t_data->size_a)
	{
		if (temp < t_data->stack_a[i])
		{
			temp = t_data->stack_a[i];
			index = i;
		}
		i++;
	}
	return index;
}
