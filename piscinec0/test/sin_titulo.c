#include <unistd.h>

void	ft_print(int i, int j, int k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if ( i != (7 +'0')){
	write (1, " ,", 2);
	}
}


void	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	
	i = 0 + '0';
	j = 1 + '0';
	k = 2 + '0';
	
	while (i < (8 + '0'))
	{
		while (j < (9 + '0'))
		{
			while (k < (10 + '0'))
			{
				ft_print( i, j, k);
				k++;
			}
			k = ++j + 1;
		}
		j = ++i ;
	}
}

int main(int argc, const char *argv[])
{
	ft_print_comb();
	return 0;
}
