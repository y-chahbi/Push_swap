/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_pushed_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:37:31 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 09:11:55 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	cheak_if_exist_top(t_push_data *t_data)
{
	int	i;

	i = 0;
	while (i <= t_data->s_size - 1)
	{
		if (t_data->stack_a[0] == t_data->s_tab[i])
			return (1);
		i++;
	}
	return (0);
}

void	clear_pushed_top(t_push_data *t_data)
{
	while (1)
	{
		if (cheak_if_exist_top(t_data) == 1)
			break ;
		else
			push_b(t_data);
	}
}