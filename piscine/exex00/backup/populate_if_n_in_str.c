/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   giulio.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:15:32 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/23 20:27:04 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void write_1_4_row_l(matrix, start, k)
{
	matrix[start][k] == '4';
	matrix[start - 1][k] == '3';
	matrix[start - 2][k] == '2';
	matrix[start - 3][k] == '1';
}

void write_1_4_row_r(matrix, start, k)
{
	matrix[k][start] == '1';
	matrix[k][start - 1] == '2';
	matrix[k][start - 2] == '3';
	matrix[k][start - 3] == '4';
}

void write_1_4_col_up(matrix, start, k)
{
	matrix[start][k] == '1';
	matrix[start - 1][k] == '2';
	matrix[start - 2][k] == '3';
	matrix[start - 3][k] == '4';
}

void write_1_4_col_do(matrix, start, k)
{
	matrix[start][k] == '4';
	matrix[start - 1][k] == '3';
	matrix[start - 2][k] == '2';
	matrix[start - 3][k] == '1';
}

int	populate_n_row_col(matrix, n)
{
	int	k;

	k = 0;
	while (matrix[n][k] != '\0')
	{
		if (matrix[n][k] == (n + 48))
			write_1_4_col_up(matrix, n - 1, k);
		if (matrix[n + 1][k] == (n + 48))
			write_1_4_col_do(matrix, n - 1, k);
		k++;
	}
}

int	populate_n_row(matrix, n)
{
	int	k;

	k = 0;
	while (matrix[k][n] != '\0')
	{
		if (matrix[k][n] == (n + 48))
			write_1_4_row_l(matrix, n - 1, k);
		if (matrix[k][n + 1] == (n + 48))
			write_1_4_row_r(matrix, n, k);
		k++;
	}
}

int	ft_check_n_in_str(int n, char *str)
{
	int	x;

	while (str[x] != \0)
	{
		if (str[x] == (n + 48))
			return (1);
		x++;
	}
	return (0);
}


void	ft_populate_if_n_in_str(int n, char *str)
{
	int check_n;

	check_n = count_x_in_str(n, str);
	if (check_n)
		polulate_n_col();	
		populate_n_raw();
	}
}
