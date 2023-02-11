/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:45:05 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/11 14:26:56 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stacks(t_push_data *t_data)
{
	free(t_data->s_tab);
	free(t_data->incr);
	free(t_data->a__stack);
	free(t_data->save);
	free(t_data->to_push);
	free(t_data->stack_a);
	free(t_data->stack_b);
	free(t_data);
}
