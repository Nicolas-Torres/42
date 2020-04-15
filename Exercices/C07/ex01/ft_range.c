/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 13:30:37 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/25 18:47:01 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *size;

	i = 0;
	if (min >= max)
		return (0);
	if (!(size = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		size[i] = min;
		min++;
		i++;
	}
	return (size);
}
