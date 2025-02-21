#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_print_comb(void);

int main(int argc, char *argv[]) {
	
	ft_print_comb();
	system("read -p 'Press Enter to continue...' var");
	return 0;
}
void ft_print_comb(void){
	int i = 0; 
	int c;
	int d;
	int u;
	int f;
	while(i < 1000){
		c = i/100;
		d = i/10 - c * 10;
		u = i - c * 100 - d * 10;
		f = c * 100 + d * 10 + u;
		f += '0';
		if ((c != d) && (c != u) && (d != u)){
			write(1, &f, 3);
			write(1, ", ", 2);
		}
		//system("read -p 'Press Enter to continue...' var");
		i++;
	}
	
}
