/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:49:26 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/11 11:51:43 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	cd;
	int	t;

	cd = 0;
	if (*to_find == '\0')
		return (str);
	while (str[cd] != '\0')
	{
		t = 0;
		while (str[cd + t] == to_find[t] && to_find[t] != '\0')
			t++;
		if (to_find[t] == '\0')
			return (&str[cd]);
		cd++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "Olá, mundo!";
    char to_find[] = "l";
    
    char *resultado = ft_strstr(str, to_find);
    
	printf("Substring encontrada: %s\n", resultado);
}
*/
