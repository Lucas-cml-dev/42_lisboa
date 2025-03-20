/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:15:58 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/20 13:28:47 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	cd;
	int j;
	int k;

	j = 0;
	cd = 0;
	k = 0;

	while (argv[2][j])
		j++;
	while (argv[3][k])
		k++;
	if (argc == 4)
	{	
		while (argv[2][j])
		j++;
		while (argv[3][k])
		k++;
		while (argv[1][cd] && j == 1 && k == 1)
		{
			if (argv[1][cd] == argv[2][0])
				argv[1][cd] = argv[3][0];
			write (1, &argv[1][cd], 1);
			cd++;
		}
	}
	write(1, "\n", 1);
	return(0);
}