#include <stdio.h>
#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
int main(int argc, char *argv[]) {
	ft_putchar('c');
	printf("\n");
	ft_print_alphabet();
	printf("\n");
	ft_print_reverse_alphabet();
	printf("\n");
	ft_print_numbers();
	printf("\n");
	ft_is_negative(-1);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(42);
	printf("\n");
	ft_print_comb();
	printf("\n");
	return 0;
}

