/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:59:59 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/18 12:52:41 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
int	main(int argc, char *argv[])
{
	int	cd;

	cd = 0;
	while (argc == 2)
	{
		while (argv[1][cd])
		{
			while (argv[1][cd] >= 'a' && argv[1][cd] <= 'z')
			{
				ft_putchar((argv[1][cd])- 32);
				cd++;
			}
			while (argv[1][cd] >= 'A' && argv[1][cd] <= 'Z')
			{
				ft_putchar((argv[1][cd])+ 32);
				cd++;
			}
			while ((argv[1][cd] >= 32 && argv[1][cd] <= 64) || 
				(argv[1][cd] >= 91 && argv[1][cd] <= 96) ||
				(argv[1][cd] >= 123 && argv[1][cd] <= 126))
			{
				ft_putchar(argv[1][cd]);
				cd++;	
			}			
		}
		argv[1][cd] = '\0';
		write(1, "\n",1);
		return(0);
	}
	write(1, "\n",1);
	return(0);
}
void	ft_putchar(char c)
	{
		write(1, &c, 1);
	}