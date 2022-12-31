/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:02:58 by ychahbi           #+#    #+#             */
/*   Updated: 2022/12/29 03:08:06 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(char *str)
{
	int	dex;
	int	sign;
	int	rslt;

	dex = 0;
	sign = 1;
	rslt = 0;
	while ((str[dex] >= 9 && str[dex] <= 13)
		|| str[dex] == 32)
		dex++;
	if (str[dex] == '-' || str[dex] == '+')
	{
		if (str[dex] == '-')
		{
			sign = sign * -1;
		}
		dex++;
	}
	if (ft_isdigit(str[dex]) == 0)
	{
		write (1, "Error\n", 6);
		exit(1);
	}
		rslt = (rslt * 10) + (str[dex] - 48);
		dex++;
	return (rslt * sign);
}