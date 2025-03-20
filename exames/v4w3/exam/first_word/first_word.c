/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:55:31 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/18 14:01:38 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	cd;

	cd = 0;
	if (argc == 2)
	{
		while (argv[1][cd] == 32 || argv[1][cd] == 9)
				cd++;
		while (argv[01][cd] != '\0')
		{
			if (argv[1][cd] == 32 || argv[1][cd] == 9)
			{
				write(1, "\n",1);
				return (0);
			}
			else 
			{
				write(1, &argv[1][cd], 1);
				cd++;	
			}				
		}
		write(1, "\n",1);
		return(0);
	}
	write(1, "\n",1);
	return(0);
}