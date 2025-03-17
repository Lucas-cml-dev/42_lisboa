/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:18:09 by mosilva-          #+#    #+#             */
/*   Updated: 2025/03/08 18:43:13 by mosilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 4

void ft_printerrorargc(int *argc);
void ft_readstring(char *arg);
void ft_justnumb(char *arg);
void ft_par(char *arg);
/*
void	criar_tab(int tab [SIZE][SIZE])
{
	int		lin;
	int		col;
	char	a;

	lin = 0;
	col = 0;
	a = '0';
	while (lin <= SIZE)
	{
		lin++;
		a = a + lin;
		write (1, &a, 1);
	}
}*/

int main(int argc, char *argv[])
{
	int		*i;
	char	*arg;

	i = &argc;
	arg = argv[1];
	ft_printerrorargc(i);
	ft_readstring(arg);
	ft_justnumb(arg);
	ft_par(arg);
}
