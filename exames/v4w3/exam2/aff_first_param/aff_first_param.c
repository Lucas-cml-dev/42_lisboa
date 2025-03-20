/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:15:58 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/20 10:29:37 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	cd;

	cd = 0;
	if (argc > 1)
	{
		while (argv[1][cd])
			write(1, &argv[1][cd++], 1);
		write (1, "\n", 1);
		return (0);
	}
	write (1, "\n", 1);
	return (0);
}
