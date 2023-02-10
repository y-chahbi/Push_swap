/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_setnum(int *b, int c, size_t len)
{
	size_t	dex;

	dex = 0;
	while (dex <= len)
	{
		b[dex] = c;
		dex++;
	}
}

void	get_biggest_index(t_push_data *t_data)
{
	int	size;
	int	count;
	int	tmp;

	size = t_data->size_a - 1;
	count = 0;
	tmp = t_data->stack_a[0];
	while (count <= size)
	{
		if (t_data->stack_a[count] < tmp)
		{
			tmp = t_data->stack_a[count];
			t_data->ils = count;
		}
		count++;
	}
	incressing(t_data);
}

void	find_index_of_longest_sorted(t_push_data *t_data)
{
	t_data->ils = 0;
	get_biggest_index(t_data);
}
