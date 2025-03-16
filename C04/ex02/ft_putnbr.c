/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:09:41 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/12 14:05:03 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c;

	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = -nbl;
	}
	if (nbl >= 10)
		ft_putnbr(nbl / 10);
	c = (nbl % 10) + '0';
	write(1, &c, 1);
}
/*
int main()
{
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-1234);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    return 0;
}
*/