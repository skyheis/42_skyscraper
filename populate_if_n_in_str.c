/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_if_n_in_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:15:32 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 18:10:46 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
row = 0
col = 1
*/

void	write_1_to_n_one(char **matrix, int i, int n, int rule_pos)
{
	int		start;
	char	char_is;

	start = 0;
	if (rule_pos == 0)
	{
		char_is = '1';
		while (start < n)
		{
			matrix[i][start] = char_is;
			char_is++;
			start++;
		}
	}
	else
	{
		char_is = (n + 48);
		while (start < n)
		{
			matrix[i][start] = char_is;
			char_is--;
			start++;
		}		
	}
}

void	write_1_to_n_zero(char **matrix, int i, int n, int rule_pos)
{
	int		start;
	char	char_is;

	start = 0;
	if (rule_pos == 0)
	{
		char_is = '1';
		while (start < n)
		{
			matrix[start][i] = char_is;
			char_is++;
			start++;
		}
	}
	else
	{
		char_is = (n + 48);
		while (start < n)
		{
			matrix[start][i] = char_is;
			char_is--;
			start++;
		}		
	}
}

int	does_n_exist(char *str, int n)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (n + 48))
			return (1);
		i += 2;
	}
	return (0);
}


void	populate_if_n_in_str(char **matrix, char *str, int n)
{
	int	i;
	int	exist_n;

	exist_n = does_n_exist(str, n);
	if (exist_n)
	{
		i = 0;
		while (i < n)
		{
			if (matrix[n][i] == (n + 48))
				write_1_to_n_zero(matrix, i, n, 0);
			if (matrix[n + 1][i] == (n + 48))
				write_1_to_n_zero(matrix, i, n, 1);
			if (matrix[i][n] == (n + 48))
				write_1_to_n_one(matrix, i, n, 0);
			if (matrix[i][n + 1] == (n + 48))
				write_1_to_n_one(matrix, i, n, 1);			
			i++;
		}
	}
}