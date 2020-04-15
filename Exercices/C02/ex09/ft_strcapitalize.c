/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:55:40 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/13 19:40:04 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_min(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		ft_is_alphanumeric(char c)
{
	if (!(c >= '0' && c <= '9'))
	{
		if (!(c >= 'A' && c <= 'Z'))
		{
			if (!(c >= 'a' && c <= 'z'))
			{
				return (0);
			}
		}
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int	word;

	i = 0;
	word = 0;
	ft_min(str);
	while (str[i] != '\0')
	{
		while (ft_is_alphanumeric(str[i]) == 1)
		{
			if (word == 0 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			word++;
			i++;
		}
		word = 0;
		i++;
	}
	return (str);
}
