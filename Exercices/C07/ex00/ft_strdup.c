/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 13:16:01 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/25 18:47:34 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size_src;

	i = 0;
	size_src = 0;
	while (src[size_src])
	{
		size_src++;
	}
	if (!(new = malloc(sizeof(char) * (size_src))))
		return (0);
	while (i < size_src)
	{
		new[i] = src[i];
		i++;
	}
	new[size_src] = '\0';
	return (new);
}
