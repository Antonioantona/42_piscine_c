/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:35:05 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/19 19:35:10 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	o;

	if (power == 0)
		o = 1;
	else if (power < 0 || nb == 0)
	{
		return (0);
	}
	else
	{
		if (power == 1)
			o = nb;
		else
			o = nb * ft_recursive_power(nb, power - 1);
	}
	return (o);
}
