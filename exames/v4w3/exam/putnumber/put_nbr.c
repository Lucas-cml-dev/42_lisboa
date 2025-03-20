/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:49:23 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/19 14:55:41 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c;
	
	nbl = nb;
	c = '0';
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
int main()
{
    ft_putnbr(42);        // Teste com número positivo
    write(1, "\n", 1);    // Nova linha
    ft_putnbr(-42);       // Teste com número negativo
    write(1, "\n", 1);    // Nova linha
    ft_putnbr(0);         // Teste com zero
    write(1, "\n", 1);    // Nova linha
    ft_putnbr(-123456);    // Teste com número grande
    write(1, "\n", 1);    // Nova linha

    return 0;
}