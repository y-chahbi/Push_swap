/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handl_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:29:47 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/21 10:00:40 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
