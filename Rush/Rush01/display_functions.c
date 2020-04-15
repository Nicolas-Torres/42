/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_logic.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 19:34:12 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/16 10:53:23 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define S 4
#include "edit_functions.h"

int		view_row_left(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	int current_max;
	int view_count;

	while (j < S)
	{
		i = 0;
		current_max = check_if_one((*map)[j][i], 0, 0);
		view_count = 1;
		while (i < S - 1)
		{
			if (current_max < check_if_one((*map)[j][i + 1], 0, 0))
			{
				current_max = check_if_one((*map)[j][i + 1], 0, 0);
				view_count++;
			}
			i++;
		}
		if (view_count != data[2][j])
			return (0);
		j++;
	}
	return (1);
}

int		view_row_right(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	int current_max;
	int view_count;

	while (j < S)
	{
		i = S - 1;
		current_max = check_if_one((*map)[j][i], 0, 0);
		view_count = 1;
		while (i > 0)
		{
			if (current_max < check_if_one((*map)[j][i - 1], 0, 0))
			{
				current_max = check_if_one((*map)[j][i - 1], 0, 0);
				view_count++;
			}
			i--;
		}
		if (view_count != data[3][j])
			return (0);
		j++;
	}
	return (1);
}

int		view_col_up(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	int current_max;
	int view_count;

	while (j < S)
	{
		i = 0;
		current_max = check_if_one((*map)[i][j], 0, 0);
		view_count = 1;
		while (i < S - 1)
		{
			if (current_max < check_if_one((*map)[i + 1][j], 0, 0))
			{
				current_max = check_if_one((*map)[i + 1][j], 0, 0);
				view_count++;
			}
			i++;
		}
		if (view_count != data[0][j])
			return (0);
		j++;
	}
	return (1);
}

int		view_col_down(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	int current_max;
	int view_count;

	while (j < S)
	{
		i = S - 1;
		current_max = check_if_one((*map)[i][j], 0, 0);
		view_count = 1;
		while (i > 0)
		{
			if (current_max < check_if_one((*map)[i - 1][j], 0, 0))
			{
				current_max = check_if_one((*map)[i - 1][j], 0, 0);
				view_count++;
			}
			i--;
		}
		if (view_count != data[1][j])
			return (0);
		j++;
	}
	return (1);
}

int		check_view(int (*map)[S][S][S], int data[4][S])
{
	if (view_col_down(map, data, 0, 0) && view_col_up(map, data, 0, 0)
		&& view_row_right(map, data, 0, 0) && view_row_left(map, data, 0, 0))
		return (1);
	return (0);
}
