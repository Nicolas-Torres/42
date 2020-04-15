/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 20:51:55 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/16 20:51:57 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "edit_functions.h"
#define S 4

void	special_case_col(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	if (data[i][j] == data[i + 1][j])
	{
		if (check_if_one((*map)[2][j], 0, 0) == 4
			&& check_if_one((*map)[1][j], 0, 0) == 2)
			assign_and_remove(map, 0, j, 3);
		if (check_if_one((*map)[2][j], 0, 0) == 2
			&& check_if_one((*map)[1][j], 0, 0) == 4)
			assign_and_remove(map, 3, j, 3);
	}
	else if (data[i][j] == 3 && data[i + 1][j] == 2)
	{
		if (check_if_one((*map)[2][j], 0, 0) == 4
			&& check_if_one((*map)[1][j], 0, 0) == 2)
			assign_and_remove(map, 0, j, 1);
	}
	else if (data[i][j] == 2 && data[i + 1][j] == 3)
		if (check_if_one((*map)[2][j], 0, 0) == 2
			&& check_if_one((*map)[1][j], 0, 0) == 4)
			assign_and_remove(map, 3, j, 1);
}

void	special_case_row(int (*map)[S][S][S], int data[4][S], int i, int j)
{
	if (data[i][j] == data[i + 1][j])
	{
		if (check_if_one((*map)[j][2], 0, 0) == 4
			&& check_if_one((*map)[j][1], 0, 0) == 2)
			assign_and_remove(map, j, 0, 3);
		if (check_if_one((*map)[j][2], 0, 0) == 2
			&& check_if_one((*map)[j][1], 0, 0) == 4)
			assign_and_remove(map, j, 3, 3);
	}
	else if (data[i][j] == 3 && data[i + 1][j] == 2)
	{
		if (check_if_one((*map)[j][2], 0, 0) == 4
			&& check_if_one((*map)[j][1], 0, 0) == 2)
			assign_and_remove(map, j, 0, 1);
	}
	else if (data[i][j] == 2 && data[i + 1][j] == 3)
		if (check_if_one((*map)[j][2], 0, 0) == 2
			&& check_if_one((*map)[j][1], 0, 0) == 4)
			assign_and_remove(map, j, 3, 1);
}
