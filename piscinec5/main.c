#include <stdio.h>
#include "ex05/ft_sqrt.c"

int main() {
	int i;
	
	i = 1;
	while (i < 101)
	{
		printf("%d\n",ft_sqrt(i));
		i++;
	}
	return 0;
}

