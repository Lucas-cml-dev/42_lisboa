/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:12:17 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/19 12:07:05 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_putchar(char c);
int	main(int argc, char *argv[])
{
	int	cd;
	
	cd = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	
	while (argv[1][cd] != '\0')
	{
		if ((argv[1][cd] >= 'a' && argv[1][cd] <= 'm')
		||	(argv[1][cd] >= 'A' && argv[1][cd] <= 'M'))
		{
			ft_putchar((argv[1][cd]) + 13);
			cd++;
		}
		else if ((argv[1][cd] >= 'n' && argv[1][cd] <= 'z') 
		||	(argv[1][cd] >= 'N' && argv[1][cd] <= 'Z'))
		{
			ft_putchar((argv[1][cd]) - 13);
			cd++;
		}
		else
		{
			ft_putchar(argv[1][cd]);
			cd++;
		}
	}
	write(1, "\n", 1);	
	return (0);
}
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}		