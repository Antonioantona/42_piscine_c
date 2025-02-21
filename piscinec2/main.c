#include <stdio.h>
#include "ex06/ft_str_is_printable.c"
#include <unistd.h>
int main(int argc, char *argv[]) {
	
	char a[] = "Ñ";
	char b[] = "ytt Hola -mundo hola";
	//int i;
	
	printf("%d",ft_str_is_printable(a));
	printf("\n");
	printf("%d",ft_str_is_printable(b));
	
	


	return 0;
}
