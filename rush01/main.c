/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:46:22 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/08 12:46:28 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>


int	main( int argc, char *argv[])
{
	/*col1up argv[1][0]
	col2up	argv[1][2]
	col3up	argv[1][4]
	col4up argv[1][6]
	
	col1down argv[1][8]
	col2down argv[1][10]
	col3down argv[1][12]
	col4down argv[1][14]
	
	row1left argv[1][16]
	row2left argv[1][18]
	row3left argv[1][20]
	row4left argv[1][22]
	
	row1right argv[1][24]
	row2right argv[1][26]
	row3right argv[1][28]
	row4right argv[1][30]
	
	col1uptodown argv[1][0] argv[1][8] // 1
	col1downtoup argv[1][8] argv[1][0] // 4
	col1 1_4 int col1[] = [1,2,3,4]
	
	row1uptodown argv[1][0] argv[1][8] // 4
	row1downtoup argv[1][8] argv[1][0] // 1
	row1 4_1 int col1[] = [4,3,2,1]
	
	col0 =1
	row0 = 4
	
	col00 != row00 
	wrong
	
	int opciones[][] = {
	{1, 2, 3, 4}, // 1 - 4
	{4, 3, 2, 1},// 4-1
	
	col0[0],row0[0] col0[0],row1[0]  col0[0],row2[0] col0[0],row3[0]
	
}
	*/
	//3421
	//2431
	
	
	if (argc == 2)
	{

		/*int	opciones[10][4] = {
			{1, 2, 3, 4},// 1 - 4
			{4, 3, 2, 1},// 4-1
			{1, 4, 3, 2},// 2 -3
			{2, 3, 4, 1},// 3 -2
			{1, 2, 4, 3}, // 2 -3
			{3, 4, 2, 1},// 3 -2
			{1, 3, 4, 2},// 2 -3
			{2, 4, 3, 1},// 3 -2
			{1, 4, 2, 3},// 2 -2
			{3, 2, 4, 1}// 2 -2
		};*/
		
		int	lineas[5][2] = {
			{1, 4},// 1 - 4
			{4, 1},// 4-1
			{2, 3},// 2 -3
			{3, 2},// 3 -2
			//{2, 3},// 2 -3
			//{3, 2},// 3 -2
			//{2, 3},// 2 -3
			//{3, 2},// 3 -2
			//{2, 2}, // 2 -2
			{2, 2}// 2 -2
		};
		
		//int **x;	
		
		//int i;	 // Recorre filas 
		//int j;	 // Recorre columnas 
		//printf("%i",sizeof(int*) ); //8
		// Reserva de Memoria 
		//x = (int **)malloc(filas*sizeof(int*)); 
		//x = (int **)malloc(1*8);
		
		//for (i=0;i<filas;i++) 
		//x[0] = (int*)malloc(1*4));
		int *pe;
		//int tam = 16;
		int f;
		int 	i;
		//int j;
		//printf("Cuantos elementos tendra el vector:");
		//scanf("%i",&tam);
		
		pe=malloc(16*4); // int 4
		//for(f=0;f<tam;f++)
		f = 0;
		i = 0;
		while (f < 16)
		{
			//printf("Ingrese elemento:");
			//scanf("%i",&pe[f]);
			pe[f] = argv[1][i] -48;
			
			f++;
			i+=2;
		}
		
		int **col0; //[1][2] = {{argv[1][0] + '0' , argv[1][8] + '0'}};
		int	**col1; //[1][2] = {{argv[1][2], argv[1][10]}};
		int	**col2; //[1][2] = {{argv[1][4], argv[1][12]}};
		int	**col3; //[1][2] = {{argv[1][6], argv[1][14]}};
		
		int **row0; //[1][2] = {{argv[1][16], argv[1][24]}};
		int **row1; //[1][2] = {{argv[1][18], argv[1][26]}};
		int **row2; //[1][2] = {{argv[1][20], argv[1][28]}};
		int **row3; //[1][2] = {{argv[1][16], argv[1][30]}};
		
		//int **x;	
		
		//int i;	 // Recorre filas 
		//int j;	 // Recorre columnas 
		//printf("%i",sizeof(int*) ); //8
		// Reserva de Memoria 
		//x = (int **)malloc(filas*sizeof(int*)); 
		col0 = (int **)malloc(1*8);
		//for (i=0;i<filas;i++) 
		col0[0] = (int*)malloc(1*4);
		col0[1] = (int*)malloc(1*4);
		
		col1 = (int **)malloc(1*8);
		//for (i=0;i<filas;i++) 
		col1[0] = (int*)malloc(1*4);
		col1[1] = (int*)malloc(1*4);
		
		col2 = (int **)malloc(1*8);
		//for (i=0;i<filas;i++) 
		col2[0] = (int*)malloc(1*4);
		col2[1] = (int*)malloc(1*4);
		
		col3 = (int **)malloc(1*8);
		//for (i=0;i<filas;i++) 
		col3[0] = (int*)malloc(1*4);
		col3[1] = (int*)malloc(1*4);
		
		
		
		row0 = (int **)malloc(1*8);
		//for (i=0;i<filas;i++) 
		row0[0] = (int*)malloc(1*4);
		row0[1] = (int*)malloc(1*4);
		
		row1 = (int **)malloc(1*8);
		//for (i=0;i<filas;i++) 
		row1[0] = (int*)malloc(1*4);
		row1[1] = (int*)malloc(1*4);
		
		row2 = (int **)malloc(1*8);
		//for (i=0;i<filas;i++) 
		row2[0] = (int*)malloc(1*4);
		row2[1] = (int*)malloc(1*4);
		
		row3 = (int **)malloc(1*8);
		//for (i=0;i<filas;i++) 
		row3[0] = (int*)malloc(1*4);
		row3[1] = (int*)malloc(1*4);
		
	
		
		col0[0][0] = pe[0];
		col0[0][1] = pe[4];
		col1[0][0] = pe[1];
		col1[0][1] = pe[5];
		col2[0][0] = pe[2];
		col2[0][1] = pe[6];
		col3[0][0] = pe[3];
		col3[0][1] = pe[7];
		
		row0[0][0] = pe[8];
		row0[0][1] = pe[12];
		row1[0][0] = pe[9];
		row1[0][1] = pe[13];
		row2[0][0] = pe[10];
		row2[0][1] = pe[14];
		row3[0][0] = pe[11];
		row3[0][1] = pe[15];
		
		
		
		
		
		
		
		printf("\nContenido del vector dinamico:\n");
		//for(f=0;f<tam;f++)
		f = 0;
		while (f<16)
		{
			printf("%i ",pe[f]);
			f++;
		}
		i = 0;
		while ( i < 16)
		{
			char a = pe[f];
			write(1, &a, 1);
			//printf("\n %c \n", argv[1][i]);
			i++;
		}
		printf("\n");
		
		//getch();
		//return 0;
		
		
		i = 0;
		//while (i <= 30)
		//{
		//	if ((argv[1][i] == ) && argv[1][i+8])
			
		//}
		
		//printf("%c %c \n", col0[0][1], col0[0][2]);
		
		/*int *col0uptodown; 
		
		col0uptodown = (int*)malloc(4*4);
		*/
		int colrow = 0;
		

		i = 0;
		while (i < 5)
		{
			if ((col0[0][0] == lineas[i][0]) && (col0[0][1] == lineas[i][1]))
			{
				colrow = 1;
				/*if (i == 0)
				{
					j = 0;
					while (j <  4)
					{
						col0uptodown[i] == opciones[0][i];
						j++;
					}
				}*/
				break;
			}
			i++;
		}
		i = 0;
		//while (i<4)
		//	char a = col0uptodown[i];
		//	write(1, &a, 1);
		//	printf("\n");
		//}
		if (colrow == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		i = 0;
		while (i < 5)
		{
			if ((col1[0][0] == lineas[i][0]) && (col1[0][1] == lineas[i][1]))
			{
				colrow = 1;
				break;
			}
			i++;
		}
		if (colrow == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		i = 0;
		while (i < 5)
		{
			if ((col2[0][0] == lineas[i][0]) && (col2[0][1] == lineas[i][1]))
			{
				colrow = 1;
				break;
			}
			i++;
		}
		if (colrow == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		i = 0;
		while (i < 5)
		{
			if ((col3[0][0] == lineas[i][0]) && (col3[0][1] == lineas[i][1]))
			{
				colrow = 1;
				break;
			}
			i++;
		}
		if (colrow == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		
		i = 0;
		while (i < 5)
		{
			if ((row0[0][0] == lineas[i][0]) && (row0[0][1] == lineas[i][1]))
			{
				colrow = 1;
				break;
			}
			i++;
		}
		if (colrow == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		i = 0;
		while (i < 5)
		{
			if ((row1[0][0] == lineas[i][0]) && (row1[0][1] == lineas[i][1]))
			{
				colrow = 1;
				break;
			}
			i++;
		}
		if (colrow == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		i = 0;
		while (i < 5)
		{
			if ((row2[0][0] == lineas[i][0]) && (row2[0][1] == lineas[i][1]))
			{
				colrow = 1;
				break;
			}
			i++;
		}
		if (colrow == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		i = 0;
		while (i < 5)
		{
			if ((row3[0][0] == lineas[i][0]) && (row3[0][1] == lineas[i][1]))
			{
				colrow = 1;
				break;
			}
			i++;
		}
		if (colrow == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		
		
		if (colrow)
		{		
	
			i = 0;
			printf("%s", argv[1]);
			printf("\n");
			while ( i < 32)
			{
				char a = argv[1][i];
				write(1, &a, 1);
				//printf("\n %c \n", argv[1][i]);
				i++;
			}
		}
		free(pe);
		free(col0);
		free(col1);
		free(col2);
		free(col3);
		
		free(row0);
		free(row1);
		free(row2);
		free(row3);
		
		return (0);
	}
	return (0);
}
