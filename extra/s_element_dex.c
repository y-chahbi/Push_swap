/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_element_dex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:49:12 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/21 12:02:44 by ychahbi          ###   ########.fr       */
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
		j = 1;
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
				if (t_data->stack_b[i] > t_data->stack_a[j] && t_data->stack_b[i] < t_data->stack_a[j + 1])
				{
					t_dex->current_p[i] = t_dex->stack_a[j];
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
		if (t_dex->current_p[i] < 0 && t_dex->stack_b[i] >= 0)
			t_dex->long_way[i] = (t_dex->current_p[i] * -1) + t_dex->stack_b[i];
		else if (t_dex->current_p[i] >= 0 && t_dex->stack_b[i] < 0)
			t_dex->long_way[i] = t_dex->current_p[i] + (t_dex->stack_b[i] * -1);
		else if (t_dex->current_p[i] < 0 && t_dex->stack_b[i] < 0)
			t_dex->long_way[i] = (t_dex->current_p[i] * -1) + (t_dex->stack_b[i] * -1);
		else if (t_dex->current_p[i] >= 0 && t_dex->stack_b[i] >= 0){
			t_dex->long_way[i] = t_dex->current_p[i] + t_dex->stack_b[i];
		}
		i++;
	}
	i = 0;
	while (i <= t_data->size_b - 1)
	{
		printf("curr : %d | long : %d\n", t_dex->current_p[i], t_dex->long_way[i]);
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
		if (t_dex->long_way[i] <= t_dex->long_way[index])
			index = i;
		i++;
	}
	return index;
}

void	do_some_magic(t_push_data *t_data, t_indexing *t_dex)
{
	int current_ppss_a;
	int posstion_in_b;
	int index;

	index = get_index(t_dex, t_data);
	posstion_in_b = t_dex->stack_b[index];
	current_ppss_a = t_dex->current_p[index];
	if (current_ppss_a > 0)
	{
		while (current_ppss_a > 0)
		{
			rotate_a(t_data);
			current_ppss_a--;
		}
		if (t_data->stack_b[0] > t_data->stack_a[0])
			rotate_a(t_data);

	}
	else if (current_ppss_a > 0)
	{
		while (current_ppss_a < 0)
		{
			rev_rot_a(t_data);
			current_ppss_a--;
		}
	}
	else if (current_ppss_a < 0)
	{
		while (current_ppss_a >= -1)
		{
			rev_rot_a(t_data);
			current_ppss_a++;
		}
	}
	else if (posstion_in_b > 0)
	{
		while (posstion_in_b > 0)
		{
			rotate_b(t_data);
			posstion_in_b--;
		}
	}
	else if (posstion_in_b < 0)
	{
		while (posstion_in_b >= 0)
		{
			rev_rot_b(t_data);
			posstion_in_b++;
		}
	}

	push_a(t_data);
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
	int i;

	i = 0;
	while (t_data->size_b - 1 != -1)
	{
		s_el_a_b(t_data, t_dex);
		current_p(t_data, t_dex);
		do_some_magic(t_data, t_dex);
		s_el_a_b(t_data, t_dex);
		current_p(t_data, t_dex);
		help(t_data, t_dex);
		i++;
	}
	/*while (is_sorted_a(t_data) == 0)
	{
		rotate_a(t_data);
	}*/
	//help(t_data, t_dex);
	//do_some_magic(t_data, t_dex);
	//s_el_a_b(t_data, t_dex);
	//current_p(t_data, t_dex);
	//help(t_data, t_dex);
	//do_some_magic(t_data, t_dex);
	//s_el_a_b(t_data, t_dex);
	//current_p(t_data, t_dex);
	//help(t_data, t_dex);
	//do_some_magic(t_data, t_dex);
	//s_el_a_b(t_data, t_dex);
	//current_p(t_data, t_dex);
	//help(t_data, t_dex);
	//do_some_magic(t_data, t_dex);
	//s_el_a_b(t_data, t_dex);
	//current_p(t_data, t_dex);
	//help(t_data, t_dex);

}
