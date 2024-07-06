/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskerja <gskerja@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:24:41 by gskerja           #+#    #+#             */
/*   Updated: 2024/07/06 20:24:44 by gskerja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character);

void	first_last_line(int x, char first, char middle, char last)
{
	if (x-- >= 1)
	{
		ft_putchar(first);
		while (x-- >= 2)
			ft_putchar(middle);
		if (x == 0)
			ft_putchar(last);
		ft_putchar('\n');
	}
}

void	middle_line(int x, int y, char edge)
{
	int	space;

	while (y-- > 2)
	{
		if (x > 1)
		{
			ft_putchar(edge);
			space = 2;
		}
		while (x > space++)
			ft_putchar(' ');
		ft_putchar(edge);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y <= 0 || x <= 0)
		write(1, "Buuuh!!, try again dummy.", 25);
	else if (y == 1)
	{
		first_last_line(x, 'A', 'B', 'A');
		middle_line(x, y, 'B');
	}
	else if (y >= 2)
	{
		first_last_line(x, 'A', 'B', 'A');
		middle_line(x, y, 'B');
		first_last_line(x, 'C', 'B', 'C');
	}
}
