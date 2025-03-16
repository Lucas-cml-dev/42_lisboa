/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:49:26 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/11 12:42:53 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*p1;
	unsigned int	cd;

	p1 = dest;
	cd = 0;
	while (*dest)
		dest++;
	while (cd < nb && *src)
	{
		*dest = *src;
		dest++;
		src++;
		cd++;
	}
	*dest = '\0';
	return (p1);
}
/*
int	main(void)
{
	char	s1[50] = "Olá, ";
	char 	s2[] = "mundo!";
	ft_strncat (s1, s2, 3);
	printf ("%s\n", s1);
	return (0);
}
*/
