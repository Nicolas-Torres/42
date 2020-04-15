/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:54:20 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/18 18:51:36 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
