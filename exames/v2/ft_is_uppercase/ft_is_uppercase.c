/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:40:21 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/06 13:44:58 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_uppercase(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (0);
	else
		return(1); 
}

int 	main(void)
{
	printf("%d\n", ft_is_uppercase('A'));  // Deve imprimir: 1
	printf("%d\n", ft_is_uppercase('z'));  // Deve imprimir: 0
	printf("%d\n", ft_is_uppercase('3'));  // Deve imprimir: 0

}
