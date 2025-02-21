#include <stdio.h>
#include "ex03/ft_atoi.c"
#include "ex02/ft_putnbr.c"

int main(int argc, char *argv[]) {
	char *i = " ---+--+1234ab567";

	int b = ft_atoi(i);
	ft_putchar('\n');
	printf("%d",b);

	return 0;
}

