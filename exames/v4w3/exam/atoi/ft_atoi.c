/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:18:00 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/19 15:06:18 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi (const char *str)
{
	int	cd;
	int sig;
	int res;

	cd = 0;
	sig = 1;
	res = 0;
	while (str[cd] == ' ' || str[cd] >= 9 && str[cd] <= 13)
		cd++;
	if (str[cd] == '-')
	{
		sig = -sig;
		cd++;
	}
	if (str[cd] == '+')
		cd++;
	while (str[cd] >= '0' && str[cd] <= '9')
	{
		res *= 10;
		res += str[cd] - '0';
		cd++;
	}
	return(res * sig);
}
int main()
{
    char str1[] = "   12345";
    char str2[] = "   -6789";
    char str3[] = "42abc";
    char str4[] = "  +987";
    char str5[] = "  \t\n  100  ";

    // Teste com diferentes entradas
    printf("Test 1: \"%s\" -> %d\n", str1, ft_atoi(str1));
    printf("Test 2: \"%s\" -> %d\n", str2, ft_atoi(str2));
    printf("Test 3: \"%s\" -> %d\n", str3, ft_atoi(str3));
    printf("Test 4: \"%s\" -> %d\n", str4, ft_atoi(str4));
    printf("Test 5: \"%s\" -> %d\n", str5, ft_atoi(str5));

    return 0;
}