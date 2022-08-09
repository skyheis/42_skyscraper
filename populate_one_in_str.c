/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_one_in_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:15:32 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 18:10:46 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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