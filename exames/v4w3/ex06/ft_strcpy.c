/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:04:45 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/17 18:14:48 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	cd;

	cd = 0;
	while(s2[cd]  != '\0')
	{
		s1[cd] = s2[cd];
		cd++;
	}
	s1[cd] = '\0';
	return(s2);
}

int	main(void)
{
	char	sr[] = "Hello World!!!!";
	char	de[] = "olleh dlrow????";
	
	printf("%s\n%s\n\n",sr ,de);
	ft_strcpy(de, sr);
	printf("%s\n%s\n",sr ,de);
	
	return (0);
}