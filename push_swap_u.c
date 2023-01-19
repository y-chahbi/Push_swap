/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 09:47:56 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/19 13:10:07 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_u(t_push_data *t_data)
{
	int	i;

	if (t_data->size_a <= 3)
		sort_3(t_data);
	if (t_data->size_a == 5 || t_data->size_a == 4)
		sort_5(t_data);
	if (t_data->size_a > 5)
		big_sort(t_data);
	i = 0;
	printf("stack a : ");
	while (i <= t_data->size_a - 1)
	{
		printf("%d ", t_data->stack_a[i]);
		i++;
	}
}