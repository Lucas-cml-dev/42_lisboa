/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:46:48 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/17 11:33:31 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
int main(void)
{
    // Testando a função
    printf("5! = %d\n", ft_iterative_factorial(5)); // Esperado: 120
    printf("0! = %d\n", ft_iterative_factorial(0)); // Esperado: 1
    printf("-3! = %d\n", ft_iterative_factorial(-3)); // Esperado: 0
    return (0);
}
*/
