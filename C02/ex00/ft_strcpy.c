/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:11:28 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/05 12:48:47 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
//	dest = src; transformar manualmente a funcao strcpy character b character
	int 	count;
	
	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
/*	Como seria usando a strcpy:
	strcpy(dest, src);
	return (dest);
*/
}
/*
int	main(void)
{
	char	sr[] = "Hello World!!!!";
	char	de[] = "olleh dlrow????";
	
	printf("%s\n%s\n\n",sr ,de);
	ft_strcpy(de, sr);
	printf("%s\n%s\n",sr ,de);
	
	return (0);
}
*/
