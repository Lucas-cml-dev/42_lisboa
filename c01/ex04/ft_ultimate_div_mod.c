/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:48:39 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/03 19:09:13 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res;
	
	res = *a;
	*a = res / *b;
	*b = res % *b;
}

int main (void)
{
	int	a;
	int	b;
	a = 10;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
}
