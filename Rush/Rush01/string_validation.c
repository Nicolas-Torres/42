/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 19:12:50 by ntorres           #+#    #+#             */
/*   Updated: 2019/06/16 19:12:51 by ntorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_vld_str(char *data, int i, int (*input_data)[4][4], int j)
{
	while (*data)
	{
		if ((*data < '1' || *data > '0' + 4) && *data != ' ')
			return (0);
		else if ((*data >= '1' && *data <= '0' + 4))
		{
			if (i != 0 && i % 4 == 0)
			{
				i = 0;
				j++;
			}
			if (j < 4)
				(*input_data)[j][i] = *data - '0';
			i++;
		}
		data++;
	}
	if (j == 3 && i == 4)
		return (1);
	else
		return (0);
}

int	chck_dups(int input[4][4], int one, int max)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		one = 0;
		max = 0;
		while (j < 4)
		{
			if (input[i][j] == 1)
				one++;
			else if (input[i][j] == 4)
				max++;
			if (i % 2 == 0 && input[i][j] + input[i + 1][j] > 5)
				return (0);
			j++;
		}
		if (one > 1 || max > 1)
			return (0);
		i++;
	}
	return (1);
}
