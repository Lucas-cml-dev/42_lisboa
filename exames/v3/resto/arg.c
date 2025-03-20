/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:50:24 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/07 12:24:56 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count;

	count = 0;
	while (argv[0][count] != '\0' && argc == 1)
	{
		write(1, &argv[0][count], 1);
		count++;
	}
	write(1, "\n", 1);
	return (0);
}
