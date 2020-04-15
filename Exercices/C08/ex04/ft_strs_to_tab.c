/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:32:52 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/26 21:31:04 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char					*ft_strdup(char *str)
{
	char		*dup;
	int			j;
	int			i;

	j = 0;
	i = ft_strlen(str);
	if (!(dup = malloc(sizeof(*dup) * i + 1)))
		return (NULL);
	while (j < i)
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			y;
	t_stock_str	*tab;

	if (!(tab = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	y = 0;
	while (y < ac)
	{
		tab[y].size = ft_strlen(av[y]);
		tab[y].str = av[y];
		tab[y].copy = ft_strdup(av[y]);
		y++;
	}
	tab[y].str = 0;
	return (tab);
}
