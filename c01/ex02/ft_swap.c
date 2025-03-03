/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:07:59 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/03 17:57:11 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	u;

	u = *a;
	*a = *b;
	*b = u;
}
/*int main(void)
{
	int	a;
	int	b;
	a = 5;
	b = 7;

	ft_swap(&a, &b);
	printf("%d, %d",a, b);
}*/
