/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:10:30 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/19 14:10:35 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	arr[11];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (nb > 0)
		{
			arr[i++] = (nb % 10) + '0';
			nb /= 10;
		}
		if (i == 0)
			arr[i++] = '0';
		while (i > 0)
			ft_putchar(arr[--i]);
	}
}
