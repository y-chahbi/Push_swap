/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:37:07 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/01 08:51:01 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_data	*t_data;

	if (argc > 1)
	{
		t_data = malloc(sizeof(t_push_data));
		if (check_errors(argc, argv, t_data) == 6)
			return (ft_putstr("Error\n"), 0);
		
	}
	exit(1);
}
