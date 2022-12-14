/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:15:32 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 18:10:46 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
