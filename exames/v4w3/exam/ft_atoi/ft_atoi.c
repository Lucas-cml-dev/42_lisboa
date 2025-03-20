/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:13:28 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/18 17:41:06 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	cd;
	int sig;
	char res;

	cd = 0;
	sig = 1;
	res = 0;
	while (str[cd] == ' ' || str[cd] >= 9 && str[cd] <= 13)
		cd++;
	if(str[cd] == '-')
		{
			sig = -sig;
			cd++;
		}
	if(str[cd] == '+')
		cd++;
	while (str[cd] >= '0' && str[cd] <= '9')
	{
		res *= 10;
		res += str[cd] - '0';
		cd++;
	}
	return(res * sig);
}

int main() {
    char str1[] = "  -123abc";  // Esperado: 123
    char str2[] = "+42";        // Esperado: 42
    char str3[] = "   +789";     // Esperado: 789
    char str4[] = "   \t\n 5678"; // Esperado: 5678
    char str5[] = "-123";       // Esperado: -123
    char str6[] = "+123";       // Esperado: -123
    char str7[] = "123abc";      // Esperado: 123
    char str8[] = "-0";         // Esperado: 0

    printf("Resultado 1: %d\n", ft_atoi(str1));  // Esperado: 123
    printf("Resultado 2: %d\n", ft_atoi(str2));  // Esperado: 42
    printf("Resultado 3: %d\n", ft_atoi(str3));  // Esperado: 789
    printf("Resultado 4: %d\n", ft_atoi(str4));  // Esperado: 5678
    printf("Resultado 5: %d\n", ft_atoi(str5));  // Esperado: -123
    printf("Resultado 6: %d\n", ft_atoi(str6));  // Esperado: -123
    printf("Resultado 7: %d\n", ft_atoi(str7));  // Esperado: 123
    printf("Resultado 8: %d\n", ft_atoi(str8));  // Esperado: 0

    return 0;
}