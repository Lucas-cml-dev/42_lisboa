/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:47:35 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/06 13:50:54 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(str[count] != '\0')
		count++;
	return(count);
}

int main(void)
{
printf("%d\n", ft_strlen("42 Lisboa"));  // Deve imprimir: 9
printf("%d\n", ft_strlen("C"));         // Deve imprimir: 1
printf("%d\n", ft_strlen(""));          // Deve imprimir: 0
}
