/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:19:47 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/06 12:49:29 by lcarvalh         ###   ########.fr       */
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
	return (count);
	
}

int	main(void)
{
	char	*cd = "Testando9";
	ft_strlen(cd);
	printf("Tamanho: %d\n", ft_strlen(cd));
	return (0);
}
