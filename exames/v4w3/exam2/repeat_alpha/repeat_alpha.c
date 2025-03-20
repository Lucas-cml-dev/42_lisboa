/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:31:42 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/20 13:41:09 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int cd;
	int rep;

	cd = 0;
	if (argc == 2)
	{
		while (argv[1][cd])
		{
			if (argv[1][cd] >= 'a' && argv[1][cd] <= 'z')
				rep = argv[1][cd] - 'a' + 1;
			else if (argv[1][cd] >= 'A' && argv[1][cd] >= 'Z')
				rep = argv[1][cd] - 'A' + 1;
			else	
				rep = 1;
			while (rep > 0)
			{
				write(1, &argv[1][cd], 1);
				rep--;
			}
			cd++;
		}
	}
	write(1, "\n", 1);
	return (0);	
}