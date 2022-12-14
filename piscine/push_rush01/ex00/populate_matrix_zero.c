/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_matrix_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:14:53 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 19:15:58 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_matrix(char **matrix, int n)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < n)
	{	
		while (y < n)
		{
			matrix[x][y] = 0;
			y++;
		}
		write(1, "\n", 1);
		y = 0;
		x++;
	}
}
