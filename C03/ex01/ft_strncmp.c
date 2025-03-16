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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cd;

	cd = 0;
	while (cd < n && s1[cd] && (s1[cd] == s2[cd]))
		cd++;
	if (cd == n)
	{
		return (0);
	}
	return ((unsigned char) s1[cd] - (unsigned char) s2[cd]);
}
/*
int main()
{
    printf("%d\n", ft_strncmp("abcde", "abcfg", 3)); // 0 (porque "abc" == "abc")
    printf("%d\n", ft_strncmp("abcde", "abcfg", 4)); // -2 (porque 'd' < 'f')
    printf("%d\n", ft_strncmp("hello", "hella", 5)); // 14 ('o' - 'a' = 111 - 97)
    printf("%d\n", ft_strncmp("test", "testing", 7)); // -105 ('\0' - 'i')
    
    return 0;
}
*/