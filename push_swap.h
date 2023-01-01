/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:37:31 by ychahbi           #+#    #+#             */
/*   Updated: 2023/01/01 08:48:43 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_data{
	int		*tab;
	int		size;
	int		status;
}	t_push_data;

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		check_errors(int ac, char **av, t_push_data *t_data);
size_t	ft_strlen(char *s);
char	**ft_split(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_isdigit(int c);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, size_t len);
#endif