/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzawisto <bzawisto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:12:40 by bzawisto          #+#    #+#             */
/*   Updated: 2024/07/06 14:57:50 by bzawisto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	m;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;
	ft_putchar('A');
	if (x > 1)
	{
		while (i < (x - 2))
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	if (y > 1 && x > 1)
	{
		while (j < (y - 2))
		{
			ft_putchar('B');
			while (l < (x - 2))
			{
				ft_putchar(' ');
				l++;
			}
			ft_putchar('B');
			ft_putchar('\n');
			l = 0;
			j++;
		}
		ft_putchar('A');
		while (m < (x - 2))
		{
			ft_putchar('B');
			m++;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	else if (x == 1 && y > 1)
	{
		ft_putchar('\n');
		while (k < (y - 2))
		{
			ft_putchar('B');
			ft_putchar('\n');
			k++;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
}
