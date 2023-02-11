/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:10:22 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/11 20:44:16 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "get_next_line.h"

void	check__2(t_push_data *t_data, char *line)
{
	if (ft_strncmp(line, "sb\n", 3) == 0)
		swap_bb(t_data);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
	{
		swap_aa(t_data);
		swap_bb(t_data);
	}
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		push_aa(t_data);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		push_bb(t_data);
	else
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	check(t_push_data *t_data, char *line)
{
	if (ft_strncmp(line, "rra\n", 4) == 0)
		rev_rot_aa(t_data);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rev_rot_bb(t_data);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
	{
		rev_rot_aa(t_data);
		rev_rot_bb(t_data);
	}
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		rotate_aa(t_data);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rotate_bb(t_data);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
	{
		rotate_aa(t_data);
		rotate_bb(t_data);
	}
	else if (ft_strncmp(line, "sa\n", 3) == 0)
		swap_aa(t_data);
	else
		check__2(t_data, line);
}

void	checker_u(t_push_data	*t_data)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		check(t_data, line);
		free(line);
	}
	if (t_data->size_b == 0 && is_sorted_a(t_data) == 1)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}
