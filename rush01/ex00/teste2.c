/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:24:30 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/03/09 13:24:33 by lcarvalh         ###   ########.fr       */
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

	write(1, "  ", 2);  // Espaço à esquerda para as restrições superiores
	i = 0;
	while (i < SIZE)
	{
		c = constraints[i] + '0';
		write(1, &c, 1);  // Imprime as restrições superiores (col1up, col2up, etc.)
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);

	i = 0;
	while (i < SIZE)
	{
		c = constraints[8 + i] + '0';
		write(1, &c, 1);  // Imprime as restrições laterais à esquerda (row1left, row2left, etc.)
		write(1, " ", 1);

		j = 0;
		while (j < SIZE)
		{
			c = grid[i][j] + '0';  // Converte o número da grade para caractere e imprime
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}

		c = constraints[12 + i] + '0';
		write(1, &c, 1);  // Imprime as restrições laterais à direita (row1right, row2right, etc.)
		write(1, "\n", 1);
		i++;
	}

	write(1, "  ", 2);  // Espaço à esquerda para as restrições inferiores
	i = 4;
	while (i < 8)
	{
		c = constraints[i] + '0';
		write(1, &c, 1);  // Imprime as restrições inferiores (col1down, col2down, etc.)
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

// Função para verificar se a entrada está no formato correto
int	is_valid_input(char *str)
{
	int i = 0;
	int space_count = 0;

	while (str[i])
	{
		if ((str[i] >= '1' && str[i] <= '4')) // Checa se o caractere é um número entre 1 e 4
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				return (0);
			space_count++;
		}
		else if (str[i] != ' ')  // Verifica se é um caractere inválido
		{
			return (0);
		}
		i++;
	}

	return (space_count == 16);
}

// Função para fazer o parse da entrada e armazenar as restrições
int	*parse_input(char *str)
{
	int	*constraints;
	int i = 0, j = 0;

	if (!is_valid_input(str))
		return (NULL);

	constraints = (int *)malloc(16 * sizeof(int));
	if (!constraints)
		return (NULL);

	while (str[i] && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
			constraints[j++] = str[i] - '0';
		i++;
	}

	return (constraints);
}

// Função recursiva para verificar se as restrições são consistentes
int	is_consistent(int *constraints)
{
	int i = 0;

	// Verifica se todas as restrições são entre 1 e 4
	while (i < 16)
	{
		if (constraints[i] < 1 || constraints[i] > 4)
			return (0);
		i++;
	}

	// Aqui, a lógica de "impossibilidade" pode ser aprofundada
	// Por exemplo, se qualquer linha/coluna tiver valores incompatíveis entre si, o programa retorna 0
	// Exemplo: as restrições não podem exigir mais visibilidade do que a grid pode suportar
	// Este é um ponto de verificação adicional que você pode personalizar conforme as regras

	return (1); // Caso todas as restrições sejam consistentes
}

// Função para verificar se um número pode ser colocado na posição
int	is_valid(int grid[SIZE][SIZE], int row, int col, int num)
{
	int i;

	// Verifica se o número já está na linha ou coluna
	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);  // Se não houver conflito, é válido
}

// Função para contar quantas caixas são visíveis numa linha
int	count_visible(int *line)
{
	int max_height = 0;
	int visible_count = 0;
	int i = 0;

	while (i < SIZE)
	{
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

	i = 0;
	while (i < SIZE)
	{
		int j = 0;
		while (j < SIZE)
		{
			row[j] = grid[i][j];
			col[j] = grid[j][i];
			j++;
		}
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

	if (row == SIZE)
	{
		if (check_constraints(grid, constraints))
		{
			print_grid(grid, constraints);
			return (1);
		}
		return (0);
	}

	if (col == SIZE)
		return (solve(grid, row + 1, 0, constraints));

	num = 1;
	while (num <= SIZE)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, row, col + 1, constraints))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

// Função principal do programa
int	main(int argc, char **argv)
{
	int	*constraints;
	int	grid[SIZE][SIZE] = {{0}};

	// Verifica se a entrada está correta e se as restrições são consistentes
	if (argc != 2 || !(constraints = parse_input(argv[1])) || !is_consistent(constraints))
	{
		ft_putstr("Error\n");
		return (1);
	}

	// Tenta resolver a grade com as restrições fornecidas
	if (!solve(grid, 0, 0, constraints))
		ft_putstr("Error\n");

	free(constraints);
	return (0);
}

