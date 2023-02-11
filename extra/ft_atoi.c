/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:02:58 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/11 14:22:05 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_puterror(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

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
		if (str[dex++] == '-')
			sign = sign * -1;
	}
	if (ft_isdigit(str[dex]) == 0)
		ft_puterror();
	while (ft_isdigit(str[dex]) == 1)
		rslt = (rslt * 10) + (str[dex++] - 48);
	if (rslt >= 2147483647 || rslt * sign <= -2147483648)
		ft_puterror();
	return (rslt * sign);
}
