/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:41:42 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/09 15:17:10 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_last_line(int x)
{
	int i;

	i = 0;
	ft_putchar('A');
	while (i < (x - 2))
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	write(1, "\n", 1);
}

void	print_line_middle(int x)
{
	int i;

	i = 0;
	ft_putchar('B');
	while (i < (x - 2))
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
		ft_putchar('B');
	write(1, "\n", 1);
}

int		rush(int x, int y)
{
	int i;

	if (x <= 0 || y <= 0)
		return (0);
	i = 0;
	print_first_last_line(x);
	while (i < (y - 2))
	{
		print_line_middle(x);
		i++;
	}
	if (y > 1)
		print_first_last_line(x);
	return (1);
}
