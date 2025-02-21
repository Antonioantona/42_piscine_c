#include <stdio.h>
#include "./ex02/ft_swap.c"


int main() {

	int i = 0;
	int j = 0;

	printf("i: %d, j: %d \n", i, j);
	ft_swap(&i, &j);
	printf("i: %d, j: %d \n", i, j);
	i = -42;
	j =	34;
	printf("i: %d, j: %d \n", i, j);
	ft_swap(&i, &j);
	printf("i: %d, j: %d \n", i, j);
	i = -567;
	j =	7628;
	printf("i: %d, j: %d \n", i, j);
	ft_swap(&i, &j);
	printf("i: %d, j: %d \n", i, j);
	i = -89;
	j =	-34;
	printf("i: %d, j: %d \n", i, j);
	ft_swap(&i, &j);
	printf("i: %d, j: %d \n", i, j);
	i = -0;
	j =	512;
	printf("i: %d, j: %d \n", i, j);
	ft_swap(&i, &j);
	printf("i: %d, j: %d \n", i, j);
	i = 87541654;
	j =	838;
	printf("i: %d, j: %d \n", i, j);
	ft_swap(&i, &j);
	printf("i: %d, j: %d \n", i, j);

	
	return (0);
}
