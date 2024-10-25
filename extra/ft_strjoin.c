/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:04:32 by ychahbi           #+#    #+#             */
/*   Updated: 2023/02/11 14:28:11 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t		dex;
	size_t		dexx;
	char		*ptr;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2[0])
	{
		write (2, "Error\n", 6);
		exit(1);
	}
	dex = 0;
	dexx = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (dex < ft_strlen(s1))
	{
		ptr[dex] = s1[dex];
		dex++;
	}
	while (dexx < ft_strlen(s2))
		ptr[dex++] = s2[dexx++];
	ptr[dex] = '\0';
	return (free((void *)s1), ptr);
}
