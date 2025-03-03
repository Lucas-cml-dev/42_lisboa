/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 21:56:18 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/02 18:07:56 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char r);

void	rush(int x, int y, int l, int c)
{
	l = 1;
	c = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == x && y > 1 && c > 1))
				ft_putchar('/');
			else if ((l == 1 && c == x) || (l == y && c == 1 && y != 1))
				ft_putchar(92);
			else if (l == 1 || l == y || c == 1 || c == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		write(1, "\n", 1);
		l++;
	}
}
