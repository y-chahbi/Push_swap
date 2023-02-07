/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:06:54 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/07 16:07:21 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			d;

	if (n == 0)
		return (0);
	d = 0;
	while (d < (n - 1) && s1[d] && s2[d]
		&& (unsigned char)s1[d] == (unsigned char)s2[d])
		d++;
	return ((unsigned char)s1[d] - (unsigned char)s2[d]);
}
