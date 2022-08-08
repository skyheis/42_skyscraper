#include <stdlib.h>
#include <stdio.h>

char	**init_matrix(char *input)//argv[1]
{
	int	i;
	int	j;
	int	k;
	char	**mat;

	i = 0;
	j = 0;
	k = 0;
	printf("flag1\n");///
	mat = malloc(sizeof(char)*4);
	while (i < 4)
	{
		mat[i] = malloc(sizeof(char)*4);
		i++;
	}
	printf("flag3\n");///
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
                	mat[i][j] = '0';
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	j = 0;
	/*while (k < 16)
        {
		if (input[k] == '1')
		{
			if 
		}
		if (input[k] == '4')
		{

		}
		k++;
        }*/

	return mat;
}

int	main(void)
{
	int	x;
	char	**matrix;
	
	x = 4;
	matrix = init_matrix(&x);
}
