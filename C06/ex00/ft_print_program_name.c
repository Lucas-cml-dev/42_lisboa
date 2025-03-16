/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:25:02 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/13 12:07:37 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int index, char *istr[])
{
	int	count;

	(void) index;
	count = 0;
	while (istr[0][count] != '\0')
	{
		write(1, &istr[0][count], 1);
		count++;
	}
	write(1, "\n", 1);
	return (0);
}
