/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_mandatory_rules.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:15:32 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 18:10:46 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	populate_if_n_in_str(char **matrix, char *str, int n);

void	add_str_rule(char **mat, char *str, int n)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (k < n)
	{
		mat[n][k] = str[i];
		mat[n + 1][k] = str[i + n * 2];
		k++;
		i += 2;
	}
	i += (n * 2);
	k = 0;
	while (k < n)
	{
		mat[k][n] = str[i];
		mat[k][n + 1] = str[i + n * 2];
		k++;
		i += 2;
	}
}

void	populate_2_n_3(char **matrix, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (matrix[n][i] == '2' && matrix[n + 1][i] == (n + 47))
			matrix[1][i] = (n + 48);
		if (matrix[n][i] == (n + 47) && matrix[n + 1][i] == '2')
			matrix[n - 2][i] = (n + 48);
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (matrix[i][n] == '2' && matrix[i][n + 1] == (n + 47))
			matrix[i][1] = (n + 48);
		if (matrix[i][n] == (n + 47) && matrix[i][n + 1] == '2')
			matrix[i][n - 2] = (n + 48);
		i++;
	}
}

void	populate_one_in_str(char **matrix, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (matrix[n][i] == '1')
			matrix[0][i] = (n + 48);
		if (matrix[n + 1][i] == '1')
			matrix[n - 1][i] = (n + 48);
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (matrix[i][n] == '1')
			matrix[i][0] = (n + 48);
		if (matrix[i][n + 1] == '1')
			matrix[i][n - 1] = (n + 48);
		i++;
	}
}

void	do_mandatory_rules(char **matrix, char *str, int n)
{
	add_str_rule(matrix, str, n);
	populate_if_n_in_str(matrix, str, n);
	populate_one_in_str(matrix, n);
	populate_2_n_3(matrix, n);
}
