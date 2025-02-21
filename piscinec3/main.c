#include <stdio.h>
#include "./ex04/ft_strstr.c"

int main(void) {
	char a[100] = "Hola, mundo mund o do";
	char b[] = "mundo";
	char *x = ft_strstr(a,b);
	printf("%s\n", x);
	
	return 0;
}
	
