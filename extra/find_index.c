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

void	*stack_a_malloc(t_push_data *t_data)
{
	t_data->stack_a = malloc(sizeof(int) * t_data->size_a);
	if (!t_data->stack_a)
		return (NULL);
	t_data->stack_b = ft_calloc(sizeof(int), t_data->size_a);
	if (!t_data->stack_b)
		return (NULL);
	return (0);
}

void	*p_ml(t_push_data *t_data)
{
	t_data->a__stack = malloc(sizeof(int) * t_data->size_a);
	if (!t_data->a__stack)
		return (NULL);
	t_data->incr = malloc(sizeof(int) * t_data->size_a);
	if (!t_data->incr)
		return (NULL);
	t_data->save = malloc(sizeof(int) * t_data->size_a);
	if (!t_data->save)
		return (NULL);
	t_data->to_push = malloc(sizeof(int) * t_data->size_a);
	if (!t_data->to_push)
		return (NULL);
	return (0);
}

void	ft_setnum(int *b, int c, size_t len)
{
	size_t	dex;

	dex = 0;
	while (dex < len)
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

	size = t_data->size_a;
	count = 0;
	tmp = t_data->stack_a[0];
	while (count < size)
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
