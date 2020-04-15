/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_logic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 19:29:53 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/16 19:29:55 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "edit_functions.h"
#include "special_case.h"
#define S 4

void	row_assign_all(int (*map)[S][S][S], int j)
{
	assign_and_remove(map, j, 0, 1);
	assign_and_remove(map, j, 1, 2);
	assign_and_remove(map, j, 2, 3);
	assign_and_remove(map, j, 3, 4);
}

void	row_view_1(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	assign_and_remove(map, j, 0, 4);
	if (data[i + 1][j] == 2)
	{
		assign_and_remove(map, j, 3, 3);
	}
	else if (data[i + 1][j] == 3)
	{
		(*map)[j][3][2] = 0;
		(*map)[j][0][2] = 0;
		if (check_if_one((*map)[j][0], 0, 0) == 4
			&& check_if_one((*map)[j][1], 0, 0) == 3)
			assign_and_remove(map, j, 3, 2);
	}
	else if (data[i + 1][j] == 4)
	{
		assign_and_remove(map, j, 1, 3);
		assign_and_remove(map, j, 2, 2);
		assign_and_remove(map, j, 3, 1);
	}
}

void	row_view_2(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	if (data[i + 1][j] == 2)
	{
		(*map)[j][0][3] = 0;
		(*map)[j][0][3] = 0;
		(*map)[j][1][2] = 0;
		(*map)[j][2][2] = 0;
		if (check_if_one((*map)[j][0], 0, 0) == 3
			&& check_if_one((*map)[j][1], 0, 0) == 4)
			assign_and_remove(map, j, 3, 2);
		if (check_if_one((*map)[j][3], 0, 0) == 3
			&& check_if_one((*map)[j][2], 0, 0) == 4)
			assign_and_remove(map, j, 0, 2);
	}
	else if (data[i + 1][j] == 3)
	{
		assign_and_remove(map, j, 1, 4);
		(*map)[j][1][0] = 0;
		(*map)[j][2][0] = 0;
	}
}

void	row_view_3(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	if (data[i + 1][j] == 2)
	{
		assign_and_remove(map, j, 2, 4);
		(*map)[j][1][0] = 0;
		(*map)[j][2][0] = 0;
	}
	else if (data[i + 1][j] == 1)
	{
		assign_and_remove(map, j, 3, 4);
		(*map)[j][3][2] = 0;
		(*map)[j][0][2] = 0;
		if (check_if_one((*map)[j][3], 0, 0) == 4
			&& check_if_one((*map)[j][2], 0, 0) == 3)
			assign_and_remove(map, j, 0, 2);
	}
}

void	pre_solve_row(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	while (j < S)
	{
		if (data[i][j] == S && data[i + 1][j] == 1)
			row_assign_all(map, j);
		else if (data[i][j] == 1)
			row_view_1(map, data, i, j);
		else if (data[i][j] == 2)
			row_view_2(map, data, i, j);
		else if (data[i][j] == 3)
			row_view_3(map, data, i, j);
		special_case_row(map, data, i, j);
		j++;
	}
}
