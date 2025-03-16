/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:02:58 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/13 12:07:33 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	count;

	index = 1;
	while (index < argc)
	{
		count = 0;
		while (argv[index][count] != '\0')
		{
			write(1, &argv[index][count], 1);
			count++;
		}
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
