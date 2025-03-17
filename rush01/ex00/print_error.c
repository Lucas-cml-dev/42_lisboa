/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:33:20 by mosilva-          #+#    #+#             */
/*   Updated: 2025/03/08 18:45:44 by mosilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_printerrorargc(int *argc)
{
	if (*argc != 2)
		write (1, "Error\n", 6);
}

void	ft_readstring(char *arg)
{
	int i; 
	
	i = 0;
	while (*arg != '\0')
	{
		i++;
		arg++;
	}
	if (i != 31)
		write (1, "Error\n", 6);
}

void ft_justnumb(char *arg)
{
	int	i;
	
	i = 0;
	while (*arg)
	{
		if (*arg >= 65 && *arg <= 90 || *arg >= 97 && *arg <= 122 || *arg >= '1' && *arg <= '4')
			i++;
		arg++;
	}
	if (i > 0)
		write (1, "Error caracter alfabetico detetado\n", 37); 
}

void	ft_par(char *arg)
{
	int	i;

	i = 0;

	while (*arg)
	{
		if ((i % 2) != 0)
			if (*arg != 20) 
				write(1, "Error\n", 6);
		i++;
		arg++;
	}
}
