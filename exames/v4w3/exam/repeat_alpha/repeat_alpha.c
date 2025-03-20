/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:08:45 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/19 17:54:58 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int countletter(char c);
int	main(int argc, char *argv[])
{
	int cd;
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			cd = countletter(argv[1][i]);
			while (cd--)
				write(1, &argv[1][i], 1);			
			i++;
		}
		write(1, "\n", 1);
		return(0);
	}
	write(1, "\n", 1);
	return(0);
}
int countletter(char c)
{
	int	cd;
	if (c >= 'A' && c <= 'z' )
		cd = c - 'A' + 1;
	if (c >= 'a' && c <= 'z' )
		cd = c - 'a' + 1;
	else
		cd = 1;
	return (cd);
}