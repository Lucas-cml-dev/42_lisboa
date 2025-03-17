/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:28:00 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/09 12:58:39 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

// Função para imprimir uma string
void	ft_putstr(char *str)
{
	// Enquanto não chegar ao final da string
	while (*str)
	{
		// Imprime um caractere por vez
		write(1, str++, 1);
	}
}

// Função para imprimir a grade com as restrições nas bordas
void	print_grid(int grid[SIZE][SIZE], int *constraints)
{
	// Declara as variáveis para iteração
	int i, j;
	char c;

	// Imprime as restrições superiores (colunas de cima)
	write(1, "  ", 2); // Espaço à esquerda
	// Imprime os valores das restrições de cima (col1up, col2up, etc.)
	i = 0;
	while (i < SIZE)
	{
		// Converte o valor da restrição para caractere e imprime
		c = constraints[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);

	// Imprime a grade com as restrições laterais (à esquerda e à direita)
	i = 0;
	while (i < SIZE)
	{
		// Imprime a restrição lateral à esquerda (row1left, row2left, etc.)
		c = constraints[8 + i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);

		// Imprime os valores da grade
		j = 0;
		while (j < SIZE)
		{
			// Converte o número da grade para caractere e imprime
			c = grid[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}

		// Imprime a restrição lateral à direita (row1right, row2right, etc.)
		c = constraints[12 + i] + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}

	// Imprime as restrições inferiores (col1down, col2down, etc.)
	write(1, "  ", 2); // Espaço à esquerda
	i = 4;
	while (i < 8)
	{
		// Converte e imprime cada valor das restrições inferiores
		c = constraints[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

// Função para fazer o parse da entrada e armazenar as restrições
int	*parse_input(char *str)
{
	int	*constraints;
	int i, j;

	// Aloca memória para armazenar as 16 restrições
	constraints = (int *)malloc(16 * sizeof(int));
	if (!constraints)
		return (NULL);
	i = 0;
	j = 0;
	// Itera sobre a string de entrada
	while (str[i] && j < 16)
	{
		// Se o caractere for um número válido de 1 a 4, armazena na lista
		if (str[i] >= '1' && str[i] <= '4')
			constraints[j++] = str[i] - '0';
		// Se encontrar qualquer caractere inválido, libera memória e retorna NULL
		else if (str[i] != ' ')
		{
			free(constraints);
			return (NULL);
		}
		i++;
	}
	// Se houverem exatamente 16 números, retorna as restrições, senão retorna NULL
	return (j == 16 ? constraints : NULL);
}

// Função para verificar se um número pode ser colocado na posição
int	is_valid(int grid[SIZE][SIZE], int row, int col, int num)
{
	int	i;

	// Verifica se o número já está na linha ou coluna
	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1); // Se não houver conflito, é válido
}

// Função para contar quantas caixas são visíveis numa linha
int	count_visible(int *line)
{
	int	max_height = 0;
	int	visible_count = 0;
	int	i;

	// Itera sobre a linha
	i = 0;
	while (i < SIZE)
	{
		// Se encontrar uma caixa maior do que as anteriores, ela é visível
		if (line[i] > max_height)
		{
			max_height = line[i];
			visible_count++;
		}
		i++;
	}
	return (visible_count);
}

// Função para verificar se a grade atende às restrições de visibilidade
int	check_constraints(int grid[SIZE][SIZE], int *constraints)
{
	int i;
	int row[SIZE];
	int col[SIZE];

	// Verifica se cada linha e cada coluna atendem às restrições de visibilidade
	i = 0;
	while (i < SIZE)
	{
		// Copia a linha e a coluna para facilitar a verificação
		int j = 0;
		while (j < SIZE)
		{
			row[j] = grid[i][j];
			col[j] = grid[j][i];
			j++;
		}
		// Verifica visibilidade das linhas e colunas
		if (count_visible(row) != constraints[8 + i] || count_visible(col) != constraints[i])
			return (0);
		i++;
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
	num = 1;
	while (num <= SIZE)
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
		num++;
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
	// Tenta resolver a grade com as restrições fornecidas
	if (!solve(grid, 0, 0, constraints))
		ft_putstr("Error\n"); // Se não encontrar solução, imprime "Error"
	free(constraints); // Libera a memória alocada para as restrições
	return (0);
}

