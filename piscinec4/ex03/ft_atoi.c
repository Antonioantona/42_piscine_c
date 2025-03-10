/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:30:47 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/19 15:30:49 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	acum;

	acum = 0;
	signo = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-' )
	{
		if (*str == '-')
			signo *= -1;
		str++;
	}
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		acum = acum * 10 + str[i] - '0';
		i++;
	}
	return (acum * signo);
}
