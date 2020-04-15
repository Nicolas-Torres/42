/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 11:35:42 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/16 20:26:42 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_go(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int size_d;
	unsigned int size_s;
	unsigned int i;

	size_d = ft_go(dest);
	size_s = 0;
	i = 0;
	while (src[size_s] != '\0' && nb > i)
	{
		dest[size_d] = src[size_s];
		size_s++;
		size_d++;
		i++;
	}
	dest[size_d] = '\0';
	return (dest);
}
