/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:54:39 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/19 17:54:42 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb == 0)
		return (1);
	else
	{
		a = 1;
		while (nb > 0)
		{
			a *= nb;
			nb--;
		}
		return (a);
	}
}
