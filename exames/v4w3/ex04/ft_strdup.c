/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:49:26 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/13 16:51:49 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strdup(char s[])
{
	int	len;
	char *ptr;
	int	cd;

	len = 0;
	cd = 0;
	while (s[len])
		len++;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	
	if(!ptr)
		return (NULL);
	while (cd < len)
	{
		ptr[cd] = s[cd];
		cd++;
	}
	ptr[len] = '\0';
	return (ptr);
}