/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoujahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 18:46:21 by hmoujahe          #+#    #+#             */
/*   Updated: 2019/06/09 17:30:59 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_line(int x)
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

void	print_last_line(int x)
{
	int i;

	i = 0;
	ft_putchar('C');
	while (i++ < (x - 2))
		ft_putchar('B');
	if (x > 1)
		ft_putchar('A');
	write(1, "\n", 1);
}

int		rush(int x, int y)
{
	int i;

	if (x <= 0 || y <= 0)
		return (0);
	print_first_line(x);
	i = 0;
	while (i < (y - 2))
	{
		print_line_middle(x);
		i++;
	}
	if (y > 1)
		print_last_line(x);
	return (1);
}
