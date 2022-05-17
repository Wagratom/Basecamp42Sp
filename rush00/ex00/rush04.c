/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas, antthoma, luisfeli 			    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:19:54 by rush-22-wwallas   #+#    #+#             */
/*   Updated: 2022/04/09 19:54:34 by rush-22-wwallas  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x > 0 && y > 0)
	{
		l = 0;
		c = 0;
		while (l++ < y)
		{
			while (c++ < x)
			{
				if ((c == 1 && l == 1) || (c == x && l == y))
					ft_putchar('A');
				else if ((c == x && l == 1) || (c == 1 && l == y))
					ft_putchar('C');
				else if ((c != 1 && c != x) && (l != 1 && l != y))
					ft_putchar(' ');
				else
					ft_putchar('B');
			}
			ft_putchar('\n');
			c = 0;
		}
	}
}
