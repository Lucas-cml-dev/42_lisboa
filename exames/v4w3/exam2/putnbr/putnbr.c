/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:28:05 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/20 16:34:24 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putnbr(int nb)
{
	long  nbl;
	char c;
	
	nbl = nb;
	while (nbl <0)
	{
		nbl = -nbl;
		write(1, "-", 1);
	}
	if(nbl > 10)
		ft_putnbr(nbl / 10);
	c = (nbl % 10) + '0';
	write(1, &c, 1);
}

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
