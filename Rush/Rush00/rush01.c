/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:41:42 by ntorres-          #+#    #+#             */
/*   Updated: 2019/06/09 15:36:45 by ntorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_line(int x)
{
	int i;

	i = 0;
	ft_putchar('/');
	while (i < (x - 2))
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
		ft_putchar('\\');
	write(1, "\n", 1);
}

void	print_line_middle(int x)
{
	int i;

	i = 0;
	ft_putchar('*');
	while (i < (x - 2))
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
		ft_putchar('*');
	write(1, "\n", 1);
}

void	print_last_line(int x)
{
	int i;

	i = 0;
	ft_putchar('\\');
	while (i++ < (x - 2))
		ft_putchar('*');
	if (x > 1)
		ft_putchar('/');
	write(1, "\n", 1);
}

int		rush(int x, int y)
{
	int i;

	if (x <= 0 || y <= 0)
		return (0);
	i = 0;
	print_first_line(x);
	while (i < (y - 2))
	{
		print_line_middle(x);
		i++;
	}
	if (y > 1)
		print_last_line(x);
	return (1);
}
