/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:24:51 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/05 16:02:33 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted_a(t_push_data *t_data)
{
	int i;
	int tmp;

	i = 1;
	tmp = t_data->stack_a[0];
	while (i <= t_data->size_a - 1)
	{
		if (tmp < t_data->stack_a[i])
			tmp = t_data->stack_a[i];
		else
			return 0;
		i++;
	}
	return 1;
}

int	is_sorted_b(t_push_data *t_data)
{
	int i;
	int tmp;

	i = 1;
	tmp = t_data->stack_b[0];
	while (i <= t_data->size_b - 1)
	{
		if (tmp < t_data->stack_b[i])
			tmp = t_data->stack_b[i];
		else
			return 0;
		i++;
	}
	return 1;
}

void	sort_stack_a(t_push_data *t_data)
{
	while (1)
	{
		if (is_sorted_a(t_data) == 0)
			rev_rot_a(t_data);
		else
			break;
	}
}

void	sort_b_ok(t_push_data *t_data, int j, int i)
{
	int ii;

	ii = i;
	while (j != 0)
	{
		if (j == 1 && i == 0)
			swap_b(t_data);
		else if (ii >= 0)
		{
			rev_rot_b(t_data);
			ii--;
		}
		else
		{
			rev_rot_b(t_data);
			swap_b(t_data);	
		}
		j--;
	}
}
void	make_lost_elemment_infirst(t_push_data *t_data)
{
	int i;
	int j;
	int reuturn_el;


	i = 0;
	j = t_data->stack_b[0];
	reuturn_el = 0;
	while (i <= t_data->size_b - 1)
	{
			if (t_data->stack_b[i] < j)
			{
				j = t_data->stack_b[i];
				reuturn_el = i;
			}

		i++;
	}
	while (reuturn_el != 0)
	{
		rotate_b(t_data);
		reuturn_el--;
	}
}

void	sort_stack_b(t_push_data *t_data)
{
	//int i;
	//int j;
//
	//i = 0;
	//j = 0;
	make_lost_elemment_infirst(t_data);
	//while (i <= t_data->size_b - 1)
	//{
	//	j = 1;
	//	while (j <= t_data->size_b - 1)
	//	{
	//		if (t_data->stack_b[i] > t_data->stack_b[j])
	//		{
	//			sort_b_ok(t_data, j, i);
	//			break ;
	//		}
	//		j++;
	//	}
	//	i++;
	//}
	//while (is_sorted_b(t_data) == 0)
	//	rev_rot_b(t_data);
}