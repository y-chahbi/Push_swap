/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_element_dex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:49:12 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/06 18:03:56 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(t_push_data *t_data)
{
	int	i;
	int	temp;
	int	index;

	temp = t_data->stack_a[0];
	i = 0;
	index = 0;
	while (i <= t_data->size_a - 1)
	{
		if (t_data->stack_a[i] > temp)
		{
			temp = t_data->stack_a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	get_min(t_push_data *t_data)
{
	int	i;
	int	temp;
	int	index;

	temp = t_data->stack_a[0];
	i = 0;
	index = 0;
	while (i <= t_data->size_a - 1)
	{
		if (t_data->stack_a[i] < temp)
		{
			temp = t_data->stack_a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	ccplace(t_push_data *t_data, int i, int j)
{
	while (j <= t_data->size_a - 1)
	{
		if (t_data->stack_a[j] < t_data->stack_b[i] && t_data->stack_a[j + 1] > t_data->stack_b[i])
			return j + 1;
		j++;
	}
	return (-1);
}

void	current_p(t_push_data *t_data, t_indexing *t_dex)
{
	int	i;
	int	j;
	int	max;
	int	min;

	i = 0;
	max = get_max(t_data);
	min = get_min(t_data);
	t_dex->current_p = malloc(sizeof(int) * (t_data->size_b));
	while (i <= t_data->size_b - 1)
	{
		j = 0;
		if (t_data->stack_b[i] < t_data->stack_a[min])
		{
			t_dex->current_p[i] = t_dex->stack_a[min];
		}
		else if (t_data->stack_b[i] > t_data->stack_a[max])
		{
			t_dex->current_p[i] = t_dex->stack_a[max];
		}
		else
		{
			while (j <= t_data->size_a - 1)
			{
				if (ccplace(t_data, i, j) != -1)
				{
					t_dex->current_p[i] = t_dex->stack_a[ccplace(t_data, i, j)];
					break ;
				}
				else if (t_data->stack_a[j] > t_data->stack_a[t_data->size_a - 1]
					&& t_data->stack_a[t_data->size_a - 1] > t_data->stack_b[i]
					&& t_data->stack_a[j] < t_data->stack_b[i])
				{
					t_dex->current_p[i] = t_dex->stack_a[t_data->size_a - 1];
					break ;
				}
				else if (t_data->stack_b[i] < t_data->stack_a[j])
				{
					t_dex->current_p[i] = t_dex->stack_a[j];
					break ;
				}
				j++;
			}
		}
		i++;
	}
	i = 0;
	t_dex->long_way = malloc(sizeof(int) * (t_data->size_b));
	while (i <= t_data->size_b - 1)
	{
		if (t_dex->current_p[i] < 0 && t_dex->stack_b[i] > 0){
			t_dex->long_way[i] = (t_dex->current_p[i] * -1) + t_dex->stack_b[i];
		}
		else if (t_dex->current_p[i] > 0 && t_dex->stack_b[i] < 0){
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i] * -1);
		}
		else if (t_dex->current_p[i] == 0 && t_dex->stack_b[i] == 0){
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i]);
		}
		else if (t_dex->current_p[i] == 0 && t_dex->stack_b[i] < 0){
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i] * -1);
		}
		else if (t_dex->current_p[i] < 0 && t_dex->stack_b[i] == 0){
			t_dex->long_way[i] = (t_dex->current_p[i] * -1) + (t_dex->stack_b[i]);
		}
		else if (t_dex->current_p[i] == 0 && t_dex->stack_b[i] > 0){
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i]);
		}
		else if (t_dex->current_p[i] > 0 && t_dex->stack_b[i] == 0){
			t_dex->long_way[i] = (t_dex->current_p[i]) + (t_dex->stack_b[i]);
		}
		else if (t_dex->current_p[i] < 0 && t_dex->stack_b[i] < 0){
			t_dex->long_way[i] = (t_dex->current_p[i] * -1) + (t_dex->stack_b[i] * -1);
		}
		else if (t_dex->current_p[i] > 0 && t_dex->stack_b[i] > 0){
			t_dex->long_way[i] = t_dex->current_p[i] + t_dex->stack_b[i];
		}
		i++;
	}
	i = 0;
	while (i <= t_data->size_b - 1)
	{
		//printf("curr : %d | long : %d\n", t_dex->current_p[i], t_dex->long_way[i]);
		i++;
	}
}

int get_index(t_indexing *t_dex, t_push_data *t_data)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (i <= t_data->size_b - 1)
	{
		if (t_dex->long_way[i] < t_dex->long_way[index])
			index = i;
		i++;
	}
	return index;
}

void	handle_stack_a(int stka__cur, t_push_data *t_data)
{
	while (stka__cur > 0)
	{
		rotate_a(t_data);
		stka__cur--;
	}
	while (stka__cur <= -1)
	{
		stka__cur++;
		rev_rot_a(t_data);
	}
}

void	handle_stack_b(int stkb__dex, t_push_data *t_data)
{
	while (stkb__dex > 0)
	{
		stkb__dex--;
		rotate_b(t_data);
	}
	while (stkb__dex <= -1)
	{
		stkb__dex++;
		rev_rot_b(t_data);
	}
	push_a(t_data);
}

void	both_rout(int stkb__dex, int stka__cur, t_push_data *t_data)
{
	while (stkb__dex > 0 && stka__cur > 0)
	{
		rotate_a_b(t_data);
		stkb__dex--;
		stka__cur--;
	}
	while (stkb__dex <= -1 && stka__cur <= -1)
	{
		rev_rot_a_b(t_data);
		stkb__dex++;
		stka__cur++;
	}
	handle_stack_a(stka__cur, t_data);
	handle_stack_b(stkb__dex, t_data);
}
void	do_some_magic(t_push_data *t_data, t_indexing *t_dex)
{
	int stka__cur;
	int stkb__dex;
	int index;

	index = get_index(t_dex, t_data);
	stka__cur = t_dex->current_p[index];
	stkb__dex = t_dex->stack_b[index];

	if(stka__cur != 0 && stkb__dex != 0)
		both_rout(stkb__dex, stka__cur, t_data);
	else
	{
		handle_stack_a(stka__cur, t_data);
		handle_stack_b(stkb__dex, t_data);
	}
}

void	help(t_push_data *t_data, t_indexing *t_dex)
{
	int i;

	printf("indexing a: \n");
	i = 0;
	while (i < t_data->size_a)
	{
		printf("(%d ", t_dex->stack_a[i]);
		printf("%d)  ", t_data->stack_a[i]);
		i++;
	}
	printf("\n");
	printf("indexing b: \n");
	i = 0;
	while (i < t_data->size_b)
	{
		printf("(%d ", t_dex->stack_b[i]);
		printf("%d)  ", t_data->stack_b[i]);
		i++;
	}
	printf("\n");
}
void	s_element_dex(t_push_data *t_data, t_indexing *t_dex)
{
	/*int i;

	i = 0;
	printf("\nstack a : ");
	while (i <= t_data->size_a - 1)
	{
		printf("%d ", t_data->stack_a[i]);
		i++;
	}
	i = 0;
	printf("\nstack b : ");
	while (i <= t_data->size_b - 1)
	{
		printf("%d ", t_data->stack_b[i]);
		i++;
	}
	puts("");
	i = 0;*/
	(void)t_dex;
	while (t_data->size_b - 1 != -1)
	{
		s_el_a_b(t_data, t_dex);
		current_p(t_data, t_dex);
		do_some_magic(t_data, t_dex);
		s_el_a_b(t_data, t_dex);
		current_p(t_data, t_dex);
		//help(t_data, t_dex);
		//i++;
	}
	while (is_sorted_a(t_data) == 0)
	{
		rotate_a(t_data);
	}
}
