/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:49:26 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/10 15:49:30 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
/*
int main()
{
    printf("%d\n", ft_strcmp("abc", "abc"));  // 0  -> Strings iguais
    printf("%d\n", ft_strcmp("abc", "abd"));  // -1 -> 'c' (99) - 'd' (100) = -1
    printf("%d\n", ft_strcmp("abd", "abc"));  // 1  -> 'd' (100) - 'c' (99) = 1
    printf("%d\n", ft_strcmp("abc", "a"));    // 98 -> 'b' (98) - '\0' (0)
    printf("%d\n", ft_strcmp("a", "abc"));    // -98 -> '\0' (0) - 'b' (98)
    
    return 0;
}
*/