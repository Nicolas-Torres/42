/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_logic.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 19:14:32 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/16 19:34:12 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define S 4

int		check_if_one(int vals[4], int i, int count)
{
	int last;

	last = 0;
	while (i < 4)
	{
		if (vals[i] != 0)
		{
			last = vals[i];
			count++;
		}
		i++;
	}
	if (count <= 1)
		return (last);
	return (0);
}

void	remove_options(int (*map)[S][S][S], int x, int y, int val)
{
	int i;

	i = 0;
	if ((val = check_if_one((*map)[x][y], 0, 0)))
		while (i < S)
		{
			if (i != y)
				(*map)[x][i][val - 1] = 0;
			if (i != x)
				(*map)[i][y][val - 1] = 0;
			i++;
		}
}

void	assign_and_remove(int (*map)[S][S][S], int x, int y, int val)
{
	int i;

	i = 0;
	while (i < S)
	{
		if ((*map)[x][y][i] != val)
			(*map)[x][y][i] = 0;
		if (i != y)
			(*map)[x][i][val - 1] = 0;
		if (i != x)
			(*map)[i][y][val - 1] = 0;
		i++;
	}
}

void	remove_if_last(int (*map)[S][S][S], int x, int y, int k)
{
	int only_row;
	int only_col;
	int j;

	while (k < S)
	{
		only_row = 1;
		only_col = 1;
		j = -1;
		while (j++ < S - 1)
		{
			if (j != y && (*map)[x][y][k] == k + 1)
				if ((*map)[x][j][k] == k + 1)
					only_row = 0;
			if (j != x && (*map)[x][y][k] == k + 1)
				if ((*map)[j][y][k] == k + 1)
					only_col = 0;
		}
		if ((only_row || only_col) && (*map)[x][y][k] == k + 1)
		{
			assign_and_remove(map, x, y, k + 1);
			return ;
		}
		k++;
	}
}
