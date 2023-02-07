/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:03:15 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/23 13:24:14 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr__(const char *s, int c)
{
	int	dex;

	dex = 0;
	while (s[dex] != '\0')
	{
		if (s[dex] == (char)c)
			return (&((char *)s)[dex]);
		dex++;
	}
	if (s[dex] == c)
		return (&((char *)s)[dex]);
	return (NULL);
}

void	*ft_calloc__(size_t count, size_t size)
{
	void	*ptr;
	size_t	dex;
	size_t	len;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	len = count * size;
	dex = 0;
	while (dex < len)
	{
		((unsigned char *)ptr)[dex] = 0;
		dex++;
	}
	return (ptr);
}

char	*ft_strjoin__(char const *s1, char const *s2)
{
	size_t		dex;
	size_t		dexx;
	char		*ptr;

	dex = 0;
	dexx = 0;
	if (!s2 || !s1)
		return (NULL);
	ptr = (char *)malloc(ft_strlen__(s1) + ft_strlen__(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[dex] != '\0')
	{
		ptr[dex] = s1[dex];
		dex++;
	}
	while (s2[dexx])
	{
		ptr[dex++] = s2[dexx++];
	}
	ptr[dex] = '\0';
	return (ptr);
}

size_t	ft_strlen__(const char *s)
{
	int	dex;

	dex = 0;
	while (s[dex] != '\0')
	{
		dex++;
	}
	return (dex);
}

char	*ft_substr__(char const *s, unsigned int start, size_t len)
{
	size_t	dee;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen__(s))
		start = ft_strlen__(s);
	if (len > ft_strlen__(s + start))
		len = ft_strlen__(s + start);
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
