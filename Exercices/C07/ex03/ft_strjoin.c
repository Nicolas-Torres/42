/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 13:14:22 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/25 19:10:35 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		l(char *str)
{
	int		l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

int		lg(int size, char **strs)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			k++;
			j++;
		}
		i++;
	}
	return (k);
}

int		separateur(char *tab, char *sep, int j, int k)
{
	while (sep[k] != '\0')
	{
		tab[j] = sep[k];
		j++;
		k++;
	}
	return (j);
}

char	*join(int size, char **strs, char *sep, char *tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
		{
			tab[j] = strs[i][k];
			j++;
			k++;
		}
		i++;
		k = 0;
		if (i < size)
		{
			j = separateur(tab, sep, j, k);
		}
	}
	tab[j] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;

	if (size == 0)
		return (malloc(sizeof(char)));
	tab = malloc((lg(size, strs) + (l(sep) * (size - 1)) + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	return (join(size, strs, sep, tab));
}
