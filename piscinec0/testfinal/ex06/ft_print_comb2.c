/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <jose-ag2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:51:15 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/05 15:51:16 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(int i, int j)//, int k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	//write (1, &k, 1);
	//if (i != (7 + '0'))
	//{
		write (1, " ,", 2);
	//}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	//int	k;
	
	i = 0 + '0';
	j = 0 + '0';
	//k = 2 + '0';
	while (i < (10 + '0'))
	{
		while (j < (10 + '0'))
		{
			//while (k < (10 + '0'))
			//{
				ft_print(i, j);//, k);
				int	x;
				int	y;
				//int	k;
				write(1, "| ", 2);
				x = 0 + '0';
				y = 0 + '0';
				//k = 2 + '0';
				while (x < (10 + '0'))
				{
					while (y < (10 + '0'))
					{
						//while (k < (10 + '0'))
						//{
						ft_print(x, y);//, k);
						
						
						//k++;
						//}
						//k = ++j + 1;
						y++;
					}
					y = ++x ;
				}
				
				//k++;
			//}
			//k = ++j + 1;
			j++;
		}
		j = ++i ;
	}
}



int	main(){
	ft_print_comb2();
	return (0);
}
