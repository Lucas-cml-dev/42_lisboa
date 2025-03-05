/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:43:01 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/05 17:37:33 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	cd;

	cd = 0;
	if (str[cd] == '\0')
		return (1);
	while ((str[cd] >= 'A' && str[cd] <= 'Z')
		|| (str[cd] >= 'a' && str[cd] <= 'z'))
		cd++;
	if (str[cd] == '\0')
		return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("ABcdEfGdSKJSKJSNKJ"));
	printf("%d\n", ft_str_is_alpha("asdfqw4"));
	printf("%d\n", ft_str_is_alpha(""));
}
*/
