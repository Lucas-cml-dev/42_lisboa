/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:18:09 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/04 16:25:55 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int	counters(char str)
{
	write(1, &str, 1);
}
*/
int	ft_strlen(char *str)
{	
	int count;
	count = 0;
	while (str[count] != '\0')
	count++;
	return (count);
}
/*
int	main(void)
{
	char *str = "Hello, World!!!!";
	int len;
	len = ft_strlen(str);
	printf("Essa frase tem %d characters.\n", len);
	return (0);
}*/
