/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_element_dex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:49:12 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/12 15:52:59 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free____(t_indexing *t_dex)
{
	free(t_dex->stack_a);
	free(t_dex->stack_b);
	free(t_dex->current_p);
	free(t_dex->long_way);
}

void	current_p(t_push_data *t_data, t_indexing *t_dex)
{
	cur__p(t_data, t_dex);
}

void	s_element_dex(t_push_data *t_data, t_indexing *t_dex)
{
	while (t_data->size_b - 1 != -1)
	{
		s_el_a_b(t_data, t_dex);
		current_p(t_data, t_dex);
		do_some_magic(t_data, t_dex);
		free____(t_dex);
		s_el_a_b(t_data, t_dex);
		current_p(t_data, t_dex);
		free____(t_dex);
	}
	last_sort(t_data);
	free_stacks(t_data);
}
