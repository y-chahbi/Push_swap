/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 01:03:45 by ychahbi           #+#    #+#             */
/*   Updated: 2022/12/29 16:04:26 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include<stdio.h>

int	check_errors(int ac, char **av)
{
	int		i;
	int		j;
	char	*s;

	j = 1;
	i = ac - 1;
	while (j <= i)
	{
	printf("%s\n", av[j]);
		puts("s");
		s = ft_strjoin(s, av[j]);
		j++;
	}
	// int	i;
	// int	*tab;

	// i = 0;
	// tab = malloc(sizeof(int) * (ac - 1));
	// while (i++ < ac - 1)
	// 	tab[i - 1] = ft_atoi(av[i]);
	// tab[i] = '\0';
	// printf("%d %d %d %d\n", tab[2],tab[0],tab[1],tab[3]);
	return (0);
}
