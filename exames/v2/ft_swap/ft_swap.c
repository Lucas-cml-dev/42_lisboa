/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:08:49 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/06 14:13:21 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;
	t = *a;
	*a = *b;
	*b = t;
}

int 	main(void)
{
	int x = 5, y = 10;
	ft_swap(&x, &y);
	printf("%d %d\n", x, y); // Deve imprimir: 10 5
}
