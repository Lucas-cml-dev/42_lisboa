/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:49:26 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/11 15:26:47 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	cd;
	int	fim;

	fim = 0;
	cd = 0;
	while (dest[fim])
		fim++;
	while (src[cd])
	{
		dest[fim] = src[cd];
		cd++;
		fim++;
	}
	dest[fim] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[50] = "Olá, ";
	char 	s2[] = "mundo!";
	ft_strcat (s1, s2);
	printf ("%s\n", s1);
	return (0);
}
*/
