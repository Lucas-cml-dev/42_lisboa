/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:57:48 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/06 13:37:36 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int	count;

	count = 0;
	while(str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}
int main(void)
{
	char	*c;
	c = "42 Lisboa";
	ft_putstr(c);
	return (0);
}
