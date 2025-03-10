/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:35:12 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/19 09:35:15 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				num;

	i = 0;
	num = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		num = s1[i] - s2[i];
		if (num)
			return (num);
		i++;
	}
	return (num);
}
