#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void	populate_if_n_in_str(char **matrix, char *str, int n);
void	populate_one_in_str(char **matrix, int n);

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

void	print_matrix(char **matrix, int n)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < n + 2)
	{	
		while (y < n + 2)
		{
			write(1, &matrix[x][y], 1);
			write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		y = 0;
		x++;
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
	return (mat);
}

int	main(int ac, char **av)
{
	int	n;
	int	is_ok;
	char	**matrix;

	if (ac != 2)
		return (1);
	is_ok = check_str_is_okay(av[1]);
	if (is_ok != 1)
		return (1);
	n = size_of_square(av[1]);
	if (n == -1)
		return (1);
	matrix = init_matrix(n);
    add_str_rule(matrix, av[1], n);
	populate_if_n_in_str(matrix, av[1], n);
    populate_one_in_str(matrix, n);
	print_matrix(matrix, n);
	free(matrix);
	return (0);
}
