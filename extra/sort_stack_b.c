/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted_b(t_push_data *t_data)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = t_data->stack_b[0];
	while (i <= t_data->size_b - 1)
	{
		if (tmp < t_data->stack_b[i])
			tmp = t_data->stack_b[i];
		else
			return (0);
		i++;
	}
	return (1);
}

void	if_func_sort(t_push_data *t_data, int reuturn_el, int half)
{
	if (reuturn_el <= half)
	{
		while (reuturn_el > 0)
		{
			rotate_b(t_data);
			reuturn_el--;
		}
	}
	else
	{
		reuturn_el = (t_data->size_b - 1) - reuturn_el + 1;
		while (reuturn_el > 0)
		{
			rev_rot_b(t_data);
			reuturn_el--;
		}
	}
}

void	make_lost_elemment_infirst(t_push_data *t_data)
{
	int	i;
	int	j;
	int	reuturn_el;
	int	half;

	i = 0;
	j = t_data->stack_b[0];
	half = (t_data->size_b - 1)/2;
	reuturn_el = 0;
	while (t_data->size_b - 1 >= i)
	{
		if (t_data->stack_b[i] < j)
		{
			j = t_data->stack_b[i];
			reuturn_el = i;
		}
		i++;
	}
	if_func_sort(t_data, reuturn_el, half);
	push_a(t_data);
}

void	sort_stack_b(t_push_data *t_data)
{
	int	size;

	size = t_data->size_b - 1;
	while (t_data->size_b - 1)
	{
		make_lost_elemment_infirst(t_data);
	}
	while (size > 0)
	{
		push_b(t_data);
		size--;
	}
}