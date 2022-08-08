/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:47:46 by lfai              #+#    #+#             */
/*   Updated: 2022/07/24 04:20:46 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_check_opposites(char *str, int len);

int	ft_check_input(char *str)
{
	int	dim;
	int	index;
	char	c;

	index = 0;
	c = str[index];
	
	while (c != 0)
	{
		if (c < 49 || c > 57)
		{
			printf("1");
			return (-1);
		}
		c = str[++index];
		printf("c in %d\n", c);
		if (c != ' ')
		{
			printf("2\n");
			return (-1);
		}
		dim++;
		c = str[++index];
	}
	printf("dim in %d\n", dim);
	if (dim % 4 == 0)
		return ft_check_opposites(str, dim);
	else
		return (-1);
}

int	ft_check_opposites(char *str, int len)
{
	int	first;
	int	second;
	int	dim;
	int	index;
	//char	c;

	dim = len / 4;
	index = 0;
	//c = str[index];
	while(index < dim * 3)
	{
		first = str[index];
		second = str[index + dim];
		if (2 >= first + second || first + second > dim + 1)
			return -1;
		index++;
	}
	return (len / 4);
}

int	main(int ac, char **av)
{
	int n;

	(void)ac;
	n = ft_check_input(av[1]);
	printf("n in %d\n", n);
	return (0);
}
