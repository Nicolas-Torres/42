/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_logic.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 23:13:32 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/16 23:13:35 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "edit_functions.h"
#include "special_case.h"
#define S 4

void	col_assign_all(int (*map)[S][S][S], int j)
{
	assign_and_remove(map, 0, j, 1);
	assign_and_remove(map, 1, j, 2);
	assign_and_remove(map, 2, j, 3);
	assign_and_remove(map, 3, j, 4);
}

void	col_view_1(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	assign_and_remove(map, 0, j, 4);
	if (data[i + 1][j] == 2)
		assign_and_remove(map, 3, j, 3);
	else if (data[i + 1][j] == 3)
	{
		(*map)[3][j][2] = 0;
		(*map)[0][j][2] = 0;
		if (check_if_one((*map)[0][j], 0, 0) == 4
			&& check_if_one((*map)[1][j], 0, 0) == 3)
			assign_and_remove(map, j, 3, 2);
	}
	else if (data[i + 1][j] == 4)
	{
		assign_and_remove(map, 1, j, 3);
		assign_and_remove(map, 2, j, 2);
		assign_and_remove(map, 3, j, 1);
	}
}

void	col_view_2(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	if (data[i + 1][j] == 2)
	{
		(*map)[0][j][3] = 0;
		(*map)[3][j][3] = 0;
		(*map)[1][j][2] = 0;
		(*map)[2][j][2] = 0;
		if (check_if_one((*map)[0][j], 0, 0) == 3
			&& check_if_one((*map)[1][j], 0, 0) == 4)
			assign_and_remove(map, j, 3, 2);
		if (check_if_one((*map)[3][j], 0, 0) == 3
			&& check_if_one((*map)[2][j], 0, 0) == 4)
			assign_and_remove(map, j, 0, 2);
	}
	else if (data[i + 1][j] == 3)
	{
		assign_and_remove(map, 1, j, 4);
		(*map)[1][j][0] = 0;
		(*map)[2][j][0] = 0;
	}
}

void	col_view_3(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	if (data[i + 1][j] == 2)
	{
		assign_and_remove(map, 2, j, 4);
		(*map)[1][j][0] = 0;
		(*map)[2][j][0] = 0;
	}
	else if (data[i + 1][j] == 1)
	{
		assign_and_remove(map, 3, j, 4);
		(*map)[3][j][2] = 0;
		(*map)[0][j][2] = 0;
		if (check_if_one((*map)[3][j], 0, 0) == 4
			&& check_if_one((*map)[2][j], 0, 0) == 3)
			assign_and_remove(map, j, 0, 2);
	}
}

void	pre_solve_col(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	while (j < S)
	{
		if (data[i][j] == S)
			col_assign_all(map, j);
		else if (data[i][j] == 1)
			col_view_1(map, data, i, j);
		else if (data[i][j] == 2)
			col_view_2(map, data, i, j);
		else if (data[i][j] == 3)
			col_view_3(map, data, i, j);
		special_case_col(map, data, i, j);
		j++;
	}
}
