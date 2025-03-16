/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:18:20 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/16 15:33:10 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_params(int argc, char *argv[]);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int	cd;

	cd = 1;
	ft_sort_params(argc, argv);
	while (cd < argc)
	{
		ft_putstr(argv[cd]);
		write(1, "\n", 1);
		cd++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_sort_params(int argc, char *argv[])
{
	int		cdi;
	int		cdj;
	char	*temp;

	cdi = 1;
	while (cdi < argc)
	{
		cdj = cdi +1;
		while (cdj < argc)
		{
			if (ft_strcmp(argv[cdi], argv[cdj]) > 0)
			{
				temp = argv[cdi];
				argv[cdi] = argv[cdj];
				argv[cdj] = temp;
			}
			cdj++;
		}
		cdi++;
	}
}
