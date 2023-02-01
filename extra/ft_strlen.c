/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:03:01 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/01 08:44:34 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(char *s)
{
	size_t	dex;

	if (!s)
		return (ft_putstr("Error in strlen"), 0);
	dex = 0;
	while (s[dex] != '\0')
	{
		dex++;
	}
	return (dex);
}
