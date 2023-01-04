/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:33:06 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/01 11:33:45 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	dex;

	dex = 0;
	while (dex < len)
	{
		((unsigned char *)b)[dex] = (unsigned char)c;
		dex++;
	}
	return (b);
}