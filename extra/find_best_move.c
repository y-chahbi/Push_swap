/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:47:22 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/15 08:44:19 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*find_best_move(t_push_data *t_data)
{
	t_indexing	*t_dex;

	t_dex = malloc(sizeof(t_indexing));
	if (!t_dex)
		return (NULL);
	t_dex->stack_a = NULL;
	t_dex->stack_b = NULL;
	t_dex->current_p = NULL;
	t_dex->long_way = NULL;
	s_element_dex(t_data, t_dex);
	free(t_dex);
	return (0);
}
