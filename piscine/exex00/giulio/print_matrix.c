#include <unistd.h>

void print_matrix(char * matrix,int n)
{
	int	k;
	int	x;
	int	y;

	k = 0;
	x = 0;
	y = 0;
	while (x < n)
	{	
		while(y < n)
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
		
