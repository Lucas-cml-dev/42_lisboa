/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:38:39 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/20 12:42:11 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	cd;

	cd = 0;
	if (argc == 2)
	{
		while (argv[1][cd])
		{
			if ((argv[1][cd]) >= 'a' && (argv[1][cd] <= 'z'))	
				(argv[1][cd]) = ('z' - (argv[1][cd]) + 'a');
			else if ((argv[1][cd]) >= 'A' && (argv[1][cd] <= 'Z'))	
				(argv[1][cd]) = ('Z' - (argv[1][cd]) + 'A');
			write(1, &argv[1][cd], 1);
			cd++;
		}
	}
	write(1, "\n", 1);
	return(0);
}