/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:37:07 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/20 14:29:42 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_data	*t_data;

	if (argc > 1)
	{
		t_data = malloc(sizeof(t_push_data));
		if (!t_data)
			return (0);
		check_errors(argc, argv, t_data);
		push_swap_u(t_data);
	}
	exit(1);
}
