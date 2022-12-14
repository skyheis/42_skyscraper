/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:15:32 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 18:10:46 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_and_bready(char *str);
char	**init_matrix(int n);
void	do_mandatory_rules(char **matrix, char *str, int n);
void	print_matrix(char **matrix, int n);

int	main(int ac, char **av)
{
	int		n;
	char	**matrix;

	if (ac != 2)
		return (1);
	n = check_and_bready(av[1]);
	if (n == -1)
		return (1);
	matrix = init_matrix(n);
	do_mandatory_rules(matrix, av[1], n);
	print_matrix(matrix, n);
	free(matrix);
	return (0);
}
