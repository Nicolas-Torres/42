/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 10:53:51 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/15 10:53:53 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "string_validation.h"
#include "map_logic.h"
#define S 4

void	instantiate_map(int (*map)[S][S][S], int i, int j, int k)
{
	while (i < S)
	{
		j = 0;
		while (j < S)
		{
			k = 0;
			while (k < S)
			{
				(*map)[i][j][k] = k + 1;
				k++;
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int data[4][S];
	int map[S][S][S];

	if (ac != 2 || !is_vld_str(av[1], 0, &data, 0)
		|| !chck_dups(data, 0, 0))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	instantiate_map(&map, 0, 0, 0);
	solve(&map, data);
}
