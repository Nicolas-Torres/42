/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_logic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 11:15:37 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/15 11:15:54 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "edit_functions.h"
#include "row_logic.h"
#include "column_logic.h"
#include "display_functions.h"
#define S 4

void	constraint_prop(int (*map)[S][S][S], int i, int j)
{
	while (i < S)
	{
		j = 0;
		while (j < S)
		{
			remove_options(map, i, j, 0);
			remove_if_last(map, i, j, 0);
			j++;
		}
		i++;
	}
}

int		is_map_complete(int map[S][S][S], int i, int j)
{
	while (i < S)
	{
		j = 0;
		while (j < S)
			if (!check_if_one(map[i][j++], 0, 0))
				return (0);
		i++;
	}
	return (1);
}

void	display_map(int map[S][S][S], int i, int j)
{
	char val;

	while (i < S)
	{
		j = 0;
		while (j < S)
		{
			val = check_if_one(map[i][j], 0, 0) + '0';
			write(1, &val, 1);
			if (j++ != 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

void	solve(int (*map)[S][S][S], int data[4][S])
{
	int i;

	i = 0;
	while (i < 10)
	{
		pre_solve_col(map, data, 0, 0);
		pre_solve_row(map, data, 2, 0);
		constraint_prop(map, 0, 0);
		if (is_map_complete(*map, 0, 0))
		{
			if (check_view(map, data))
				display_map(*map, 0, 0);
			else
				break ;
			return ;
		}
		i++;
	}
	write(1, "Error\n", 6);
}
