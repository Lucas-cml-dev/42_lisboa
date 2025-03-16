/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:19:01 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/13 11:22:39 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	cd;
	int	sinal;
	int	resultado;

	cd = 0;
	sinal = 1;
	resultado = 0;
	while (str[cd] == ' ' || (str[cd] >= 9 && str[cd] <= 13))
		cd++;
	while (str[cd] == '-' || str[cd] == '+')
	{
		if (str[cd] == '-')
			sinal = -sinal;
		cd++;
	}
	while (str[cd] >= '0' && str[cd] <= '9')
	{
		resultado = (resultado * 10) + (str[cd] - '0');
		cd++;
	}
	return (resultado * sinal);
}
/*
int main() {
    char str1[] = "  --123abc";  // Esperado: 123
    char str2[] = "++42";        // Esperado: 42
    char str3[] = "   +789";     // Esperado: 789
    char str4[] = "   \t\n 5678"; // Esperado: 5678
    char str5[] = "+-123";       // Esperado: -123
    char str6[] = "-+123";       // Esperado: -123
    char str7[] = "123abc";      // Esperado: 123
    char str8[] = "--0";         // Esperado: 0

    printf("Resultado 1: %d\n", ft_atoi(str1));  // Esperado: 123
    printf("Resultado 2: %d\n", ft_atoi(str2));  // Esperado: 42
    printf("Resultado 3: %d\n", ft_atoi(str3));  // Esperado: 789
    printf("Resultado 4: %d\n", ft_atoi(str4));  // Esperado: 5678
    printf("Resultado 5: %d\n", ft_atoi(str5));  // Esperado: -123
    printf("Resultado 6: %d\n", ft_atoi(str6));  // Esperado: -123
    printf("Resultado 7: %d\n", ft_atoi(str7));  // Esperado: 123
    printf("Resultado 8: %d\n", ft_atoi(str8));  // Esperado: 0

    return 0;
}*/