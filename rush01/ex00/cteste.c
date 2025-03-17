/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cteste.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:37:47 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/09 13:38:12 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

// Função para imprimir uma string
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

// Função para imprimir a grade com as restrições nas bordas
void	print_grid(int grid[SIZE][SIZE], int *constraints)
{
	int i, j;
	char c;

	// Imprime as restrições superiores
	write(1, "  ", 2);
	for (i = 0; i < SIZE; i++)
	{
		c = constraints[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
	}
	write(1, "\n", 1);

	// Imprime a grade com as restrições laterais
	for (i = 0; i < SIZE; i++)
	{
		// Imprime a restrição à esquerda
		c = constraints[8 + i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);

		// Imprime a linha da grade
		for (j = 0; j < SIZE; j++)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
		}

		// Imprime a restrição à direita
		c = constraints[12 + i] + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
	}

	// Imprime as restrições inferiores
	write(1, "  ", 2);
	for (i = 4; i < 8; i++)
	{
		c = constraints[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
	}
	write(1, "\n", 1);
}

// Função para fazer o parse da entrada e armazenar as restrições
int	*parse_input(char *str)
{
	int	*constraints;
	int i, j;

	constraints = (int *)malloc(16 * sizeof(int));
	if (!constraints)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
			constraints[j++] = str[i] - '0';
		else if (str[i] != ' ')
		{
			free(constraints);
			return (NULL);
		}
		i++;
	}

	return (j == 16 ? constraints : NULL);
}

// Função para verificar se um número pode ser colocado na posição
int	is_valid(int grid[SIZE][SIZE], int row, int col, int num)
{
	int	i;

	// Verifica se o número já está na linha ou coluna
	for (i = 0; i < SIZE; i++)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
	}
	return (1); // Se não houver conflito, é válido
}

// Função para contar quantas caixas são visíveis numa linha
int	count_visible(int *line)
{
	int	max_height = 0;
	int	visible_count = 0;
	int	i;

	for (i = 0; i < SIZE; i++)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			visible_count++;
		}
	}
	return (visible_count);
}

// Função para verificar se a grade atende às restrições de visibilidade
int	check_constraints(int grid[SIZE][SIZE], int *constraints)
{
	int i;
	int row[SIZE];
	int col[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		int j = 0;
		// Copia a linha e a coluna para facilitar a verificação
		while (j < SIZE)
		{
			row[j] = grid[i][j];
			col[j] = grid[j][i];
			j++;
		}
		// Verifica visibilidade das linhas e colunas
		if (count_visible(row) != constraints[8 + i] || count_visible(col) != constraints[i])
			return (0);
	}
	return (1); // Se passar nas verificações, retorna 1
}

// Função recursiva para resolver a grade com backtracking
int	solve(int grid[SIZE][SIZE], int row, int col, int *constraints)
{
	int num;

	// Se chegou no final da grade, verifica as restrições
	if (row == SIZE)
	{
		if (check_constraints(grid, constraints))
		{
			print_grid(grid, constraints);
			return (1); // Se encontrar uma solução, imprime e retorna
		}
		return (0); // Se não for solução, retorna
	}

	// Se a coluna acabou, vai para a próxima linha
	if (col == SIZE)
		return (solve(grid, row + 1, 0, constraints));

	// Tenta colocar números de 1 a 4 em cada posição
	for (num = 1; num <= SIZE; num++)
	{
		// Se o número for válido, coloca na posição
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			// Tenta resolver a próxima posição
			if (solve(grid, row, col + 1, constraints))
				return (1);
			// Se não for solução, desfaz a escolha
			grid[row][col] = 0;
		}
	}
	return (0); // Se não encontrar solução, retorna
}

// Função principal do programa
int	main(int argc, char **argv)
{
	int	*constraints;
	int	grid[SIZE][SIZE] = {{0}};

	// Verifica se a entrada está correta
	if (argc != 2 || !(constraints = parse_input(argv[1])))
	{
		ft_putstr("Error\n");
		return (1);
	}
	// Tenta resolver a grade com as restriç
}
