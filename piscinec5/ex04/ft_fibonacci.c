/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:30:28 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/19 20:30:30 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	m;

	if (index < 0)
		return (-1);
	if (index < 1)
		m = 0;
	else if (index == 1)
		m = 1;
	else
		m = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (m);
}
