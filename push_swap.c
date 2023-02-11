/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:37:07 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/11 20:34:32 by ychahbi          ###   ########.fr       */
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
		if (check_errors(argc, argv, t_data) == 6)
			return (ft_putstr("Error\n"), 0);
		push_swap_u(t_data);
	}
	exit(1);
}
