/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:45:58 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/20 14:57:58 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str);
int main()
{
    char str[] = "Hello, world!";
    ft_strrev(str);  // Chama a função que imprime a string reversa
    write(1, "\n", 1);  // Imprime uma nova linha após a string reversa
    return 0;
}
char	*ft_strrev(char *str)
{
	int	cd;

	cd = 0;
	while (str[cd])
		cd++;

	while (cd > 0)
	{
		write(1, &str[cd - 1], 1);
		cd--;
	}
}
