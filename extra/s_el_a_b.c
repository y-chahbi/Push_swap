/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_el_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:55:25 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/12 15:14:24 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*s_el_b(t_push_data *t_data, t_indexing *t_dex)
{
	int	half;
	int	i;

	i = 0;
	half = (t_data->size_b) / 2;
	t_dex->stack_b = malloc(sizeof(int) * (t_data->size_b));
	if (!t_dex->stack_b)
		return (NULL);
	while (i < t_data->size_b)
	{
		if (i > half)
			t_dex->stack_b[i] = -(t_data->size_b - i);
		else
			t_dex->stack_b[i] = i;
		i++;
	}
	return (0);
}

void	*s_el_a(t_push_data *t_data, t_indexing *t_dex)
{
	int	half;
	int	i;

	i = 0;
	half = (t_data->size_a) / 2;
	t_dex->stack_a = malloc(sizeof(int) * (t_data->size_a));
	if (!t_dex->stack_a)
		return (NULL);
	while (i < t_data->size_a)
	{
		if (i > half)
			t_dex->stack_a[i] = -(t_data->size_a - i);
		else
			t_dex->stack_a[i] = i;
		i++;
	}
	return (0);
}

void	s_el_a_b(t_push_data *t_data, t_indexing *t_dex)
{
	s_el_a(t_data, t_dex);
	s_el_b(t_data, t_dex);
}
