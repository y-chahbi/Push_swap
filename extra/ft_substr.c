/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:26:18 by ychahbi           #+#    #+#             */
/*   Updated: 2022/12/31 21:18:05 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	dee;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	dee = 0;
	while (dee < len)
	{
		ptr[dee] = s[start];
		dee++;
		start++;
	}
	ptr[len] = '\0';
	return (ptr);
}
