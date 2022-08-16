/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_bready.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:15:32 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 18:10:46 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_of_square(char *str)
{
	int	len_arg;

	len_arg = 0;
	while (str[len_arg] != '\0')
	{
		len_arg++;
	}
	if (len_arg == 31 || len_arg == 39 || len_arg == 47
		|| len_arg == 55 || len_arg == 63 || len_arg == 71)
	{
		len_arg = (len_arg + 1) / 8;
		return (len_arg);
	}
	return (-1);
}

int	check_str_is_okay(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > '0') && (str[i] <= '9'))
		{
			if (str[i + 1] == '\0')
				return (1);
			if (str[i + 1] == 32)
				i += 2;
			else
				return (-1);
		}
		else
			return (-1);
	}
	return (1);
}

void	while_init(char **mat, int n, int i, int j)
{
	while (i < n)
	{
		while (j < n)
		{
			mat[i][j] = '0';
			j++;
		}
		j = 0;
		i++;
	}
}

char	**init_matrix(int n)
{
	int		i;
	int		j;
	char	**mat;

	i = 0;
	j = 0;
	mat = (char **) malloc(sizeof(char *) * (n + 2));
	if (mat == NULL)
		return (NULL);
	while (i < (n +2))
	{
		mat[i] = (char *) malloc(sizeof(char) * (n + 2));
		i++;
	}
	i = 0;
	while_init(mat, n, i, j);
	return (mat);
}

int	check_and_bready(char *str)
{
	int	is_ok;

	is_ok = check_str_is_okay(str);
	if (is_ok != 1)
		return (-1);
	return (size_of_square(str));
}
