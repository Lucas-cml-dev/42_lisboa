/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:18:16 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/03 17:55:55 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	int	var;

	var = 42;
	*********nbr = var;
}
/*
int	main(void)
{
	int	d = 42;
	int	*nbr1 = &d;
        int     **nbr2 = &nbr1;
	int     ***nbr3 = &nbr2;
	int     ****nbr4 = &nbr3;
	int     *****nbr5 = &nbr4;
	int     ******nbr6 = &nbr5;
	int     *******nbr7 = &nbr6;
	int     ********nbr8 = &nbr7;
	int     *********nbr9 = &nbr8;
	
	ft_ultimate_ft(nbr9);
	printf("%d", d);
}*/
