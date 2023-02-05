/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/05 18:35:57 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_not_sorted_b(t_push_data *t_data)
{
	clear_pushed_top(t_data);
	clear_pushed_buttom(t_data);
	clear_pushed_inside(t_data);
}

void	start_push_swap(t_push_data *t_data)
{
	sort_stack_a(t_data);
	the_big_player(t_data);
	//tick_tack_push(t_data);
}

void	big_sort(t_push_data *t_data)
{
	find_index_of_longest_sorted(t_data);
	push_not_sorted_b(t_data);
	start_push_swap(t_data);
}
