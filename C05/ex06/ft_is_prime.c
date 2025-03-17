/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:12:34 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/17 13:41:40 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check(int nb, int cd);

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	return (check(nb, 2));
}

int	check(int nb, int cd)
{
	if (nb % cd == 0)
		return (0);
	if (cd * cd > nb)
		return (1);
	return (check(nb, cd + 1));
}
/*
int main()
{
    int num = 2;
    if (ft_is_prime(num))
        printf("%d é primo\n", num);
    else
        printf("%d não é primo\n", num);
    
    return 0;
}
*/
