/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_pushed_buttom.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:37:31 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 09:11:55 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	cheak_if_exist_buttom(t_push_data *t_data)
{
	int	i;
	int	j;

	i = 0;
	j = t_data->size_a - 1;
	while (i <= t_data->s_size - 1)
	{
		if (t_data->stack_a[j] == t_data->s_tab[i])
			return (1);
		i++;
	}
	return (0);
}

void	clear_pushed_buttom(t_push_data *t_data)
{
	while (1)
	{
		if (cheak_if_exist_buttom(t_data) == 1)
			break ;
		else if (cheak_if_exist_buttom(t_data) == 0)
			break ;
		else
		{
			rev_rot_a(t_data);
			push_b(t_data);
		}
	}
}