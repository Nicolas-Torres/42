/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:57:31 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/22 15:29:52 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	char	*swap;

	a = 1;
	while (a < argc - 1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			swap = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = swap;
			a = 0;
		}
		a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
}
