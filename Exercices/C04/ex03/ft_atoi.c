/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 15:41:35 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/21 15:56:45 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int signe;
	int resu;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == ' ' || str[i] == '\f')
	{
		i++;
	}
	signe = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	resu = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resu = 10 * resu + str[i] - '0';
		i++;
	}
	return (resu * signe);
}
