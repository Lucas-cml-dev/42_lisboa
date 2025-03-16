/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:49:26 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/12 14:16:59 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cd;

	cd = 0;
	while (str[cd])
	{
		write(1, &str[cd], 1);
		cd++;
	}
}
/*
int	main(void)
{
	char	t1[] = "testando123";
	ft_putstr(t1);
}*/