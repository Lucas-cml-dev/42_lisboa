/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:45:46 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/17 18:04:05 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
int	main(int argc, char *argv[])
{
	int	cd;

	cd = 0;
	while (argc == 2)
	{
		while(argv[1][cd])
		{
			while (argv[1][cd] == 'z')
			{
				ft_putchar('a');
				cd++;
			}
			while (argv[1][cd] == 'Z')
			{
				ft_putchar('A');
				cd++;
			}
			if ((argv[1][cd] >= 'a' && argv[1][cd] <= 'y') || 
			argv[1][cd] >= 'A' && argv[1][cd] <= 'Y')
			{
				ft_putchar(argv[1][cd] + 1);
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
	

	write(1, "\n", 1);	
	return (0);
}
