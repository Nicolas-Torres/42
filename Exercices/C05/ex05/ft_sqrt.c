/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 15:34:55 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/19 17:34:16 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int racine;

	racine = 1;
	if (nb < 0)
		return (0);
	while (racine <= nb / racine)
	{
		if (racine * racine == nb)
			return (racine);
		racine++;
	}
	return (0);
}
