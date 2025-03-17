/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:43:00 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/17 13:44:20 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb);
int	check(int nb, int cd);
int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

int	check(int nb, int cd)
{
	if (nb % cd == 0)
		return (0);
	if (cd * cd > nb)
		return (1);
	return (check(nb, cd + 1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	return (check(nb, 2));
}
/*
int	main(void)
{
	int	num;
	int	next_prime;

	next_prime = ft_find_next_prime(num);
	num = 14;
	printf("O próximo número primo a partir de %d é %d\n", num, next_prime);
	return (0);
}
*/
/*
int main()
{
    int num = 2;
    if (ft_is_next_prime(num))
        printf("%d é o proximo primo\n", num);
    else
        printf("%d não é primo\n", num);
    
    return 0;
}
*/
