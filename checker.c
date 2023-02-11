/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:16:57 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/11 20:44:00 by ychahbi          ###   ########.fr       */
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
		checker_u(t_data);
	}
	exit(1);
}
