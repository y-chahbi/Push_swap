/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_not_sorted_b(t_push_data *t_data)
{
	clear_pushed_top(t_data);
	clear_pushed_buttom(t_data);
	puts("-------------------");
	int i = 0;
	while (i <= t_data->size_a - 1)
	{
		printf("%d\n", t_data->stack_a[i]);
		i++;
	}
	puts("-------------------");
	i = 0;
	while (i <= t_data->s_size - 1)
	{
		printf("%d\n", t_data->s_tab[i]);
		i++;
	}
	puts("-------------------");
	clear_pushed_inside(t_data);
}

void	big_sort(t_push_data *t_data)
{
	find_index_of_longest_sorted(t_data);
	//int i = 0;
	//while (i <= t_data->s_size -1)
	//{
	//	printf("..%d", t_data->s_tab[i]);
	//	printf("..%d\n", t_data->stack_a[i]);
	//	i++;
	//}
	push_not_sorted_b(t_data);
	//i = 0;
	//while (i <= t_data->s_size - 1)
	//{
	//	printf("..%d", t_data->s_tab[i]);
	//	printf("..%d\n", t_data->stack_a[i]);
	//	i++;
	//}
}