/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 03:00:24 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/21 03:00:27 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap_c(char *a, char *b)
{
	char	*c;

	c = a;
	a = b;
	b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n;
	
	i = 0;
	n = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		n = s1[i] - s2[i];
		if (n)
			return (n);
		i++;
	}
	return (n);
}

void	order_ascii(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	while (i < (argc - 1))
	{
		x = ft_strcmp(argv[i], argv[i + 1]);
		if ((x > 0) && (i + 1 <= argc))
		{
			ft_swap_c(argv[i], argv[i + 1]);
			i = 0;
		}
		i++;
	}
}
void	tri_a_bule(int ac, char **av)
{
	int i;
	
	i = 1;
	
	while (i != (ac - 1))
	{
		if (av[i][1] > av[i + 1][1] && i + 1 <= ac)
		{
			ft_swap_c(av[i], av[i + 1]);
			i = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	
	if (argc >= 2)
	{
		tri_a_bule(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}

	return (0);
}
