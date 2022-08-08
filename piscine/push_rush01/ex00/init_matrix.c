/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:51:52 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/24 19:07:34 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**init_matrix(int n)
{
	int		i;
	int		j;
	char	**mat;

	i = 0;
	j = 0;
	mat = malloc(sizeof(char) * (n + 2));
	while (i < (n +2))
	{
		mat[i] = malloc(sizeof(char) * (n + 2));
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
