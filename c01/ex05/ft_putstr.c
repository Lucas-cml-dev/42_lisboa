/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:18:09 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/04 15:32:00 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int	escrever(char str)
{
	write(1, &str, 1);
}
*/
void	ft_putstr(char *str)
{
	while (*str /*|| (*str != '\0')*/)
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main(void)
{
	ft_putstr("Hello, World!!!!");
	return (0);
}*/
