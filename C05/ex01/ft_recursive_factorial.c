/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:21:21 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/17 11:31:15 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
    // Testando a função
    printf("5! = %d\n", ft_recursive_factorial(5)); // Esperado: 120
    printf("0! = %d\n", ft_recursive_factorial(0)); // Esperado: 1
    printf("-3! = %d\n", ft_recursive_factorial(-3)); // Esperado: 0
    return (0);
}*/
