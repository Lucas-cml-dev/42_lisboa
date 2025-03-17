/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:28:46 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/17 13:10:54 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt_sq(int nb, int cd)
{
	if (cd * cd == nb)
		return (cd);
	if (cd * cd > nb)
		return (0);
	return (ft_sqrt_sq(nb, cd + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_sqrt_sq(nb, 1));
}
/*
int	main()
{
	int num = 16;
    printf("A raiz quadrada inteira de %d é %d\n", num, ft_sqrt(num));  // 4

    num = 20;
    printf("A raiz quadrada inteira de %d é %d\n", num, ft_sqrt(num));  //  0

	num = 100;
    printf("A raiz quadrada inteira de %d é %d\n", num, ft_sqrt(num));  //  10

	num = 5;
    printf("A raiz quadrada inteira de %d é %d\n", num, ft_sqrt(num));  //  0

	num = -100;
    printf("A raiz quadrada inteira de %d é %d\n", num, ft_sqrt(num));  //  0

    return 0;
}
	*/
