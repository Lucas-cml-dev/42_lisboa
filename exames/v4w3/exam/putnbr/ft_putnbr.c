/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:49:16 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/19 14:54:32 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	long	nbn;
	char	c;

	nbn = nb;
	if (nbn < 0)
	{
		write(1, "-", 1);
		nbn = -nbn;
	}
	if (nbn >= 10)
		ft_putnbr(nbn / 10);
	c = (nbn % 10) + '0';
	write(1, &c, 1);
}
