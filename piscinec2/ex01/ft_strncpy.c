/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ag2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:07:57 by jose-ag2          #+#    #+#             */
/*   Updated: 2025/02/17 15:08:00 by jose-ag2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i == n)
	{
		dest[i] = '\0';
	}
	else
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
