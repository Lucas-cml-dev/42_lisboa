/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:58:54 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/02/27 15:17:09 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	cba;

	cba = 'z';
	while (cba >= 'a')
	{
		write(1, &cba, 1);
		cba--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
