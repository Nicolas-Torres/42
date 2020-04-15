/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 11:43:06 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/16 21:18:54 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int y;

	i = 0;
	y = 0;
	if (to_find[y] == 0)
		return (str);
	while (str[i] != '\0')
	{
		y = 0;
		while (str[i + y] == to_find[y])
		{
			y++;
			if (to_find[y] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
