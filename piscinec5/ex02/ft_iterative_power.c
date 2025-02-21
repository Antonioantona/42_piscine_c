/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:23:28 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/19 19:23:30 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	o;

	o = 1;
	if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	while (power > 0)
	{
		o *= nb;
		power--;
	}
	return (o);
}
