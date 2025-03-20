/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:22:43 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/20 15:31:46 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	int	cd;

	cd = 0;
	if (argc == 2)
	{
		while (argv[1][cd])
		{
			if (argv[1][cd] >= 'a' && argv[1][cd] <= 'z')
				argv[1][cd] -= 32; 
			else if (argv[1][cd] >= 'A' && argv[1][cd] <= 'Z')
				argv[1][cd] += 32;
			write(1, &argv[1][cd], 1);
			cd++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
