/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:15:58 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/20 13:43:40 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	cd;
	int	ind;

	ind = argc -1;
	cd = 0;
	if (argc > 1)
	{
		while (argv[ind][cd])
			write(1, &argv[ind][cd++], 1);
		write (1, "\n", 1);
		return (0);
	}
	write (1, "\n", 1);
	return (0);
}
