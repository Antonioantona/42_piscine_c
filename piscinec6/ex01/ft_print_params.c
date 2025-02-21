/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 02:42:07 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/21 02:42:09 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 2)
	{
		i = 0;
		while (i < argc - 1)
		{
			ft_putstr(argv[i + 1]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
