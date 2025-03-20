/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:30:53 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/18 11:45:03 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	cd;

	cd = 0;
	while (argc >= 2)
	{
		while (argv[1][cd])
		{
			write(1, &argv[1][cd], 1);
			cd++;
		}
		
		write(1, "\n",1);
		return(0);
	}
	write(1, "\n",1);
	return(0);
}