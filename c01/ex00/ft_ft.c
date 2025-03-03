/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:47:47 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/03 12:17:04 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	char	var;	

	var = 42;
	*nbr = var;
}
/*
int	main(void)
{
	int	x;

	ft_ft(&x);
	printf("%d", x);
	return (0);
}*/
