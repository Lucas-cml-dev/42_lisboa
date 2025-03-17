/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:34:58 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/17 11:37:00 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power > 0)
		res = nb * ft_recursive_power(nb, power -1);
	return (res);
}
/*
int main(void)
{
	// Testando a função
	printf("25! = %d\n", ft_interative_power(5, 2)); // Esperado: 120
	printf("1! = %d\n", ft_interative_power(0, 0)); // Esperado: 1
	printf("-243! = %d\n", ft_interative_power(-3, 5)); // Esperado: -243
	return (0);
}
*/
