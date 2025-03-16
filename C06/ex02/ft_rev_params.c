/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:20:22 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/13 12:07:34 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	count;

	index = argc - 1;
	while (index > 0)
	{
		count = 0;
		while (argv[index][count])
		{
			write (1, &argv[index][count], 1);
			count++;
		}
		write (1, "\n", 1);
		index --;
	}
}
