/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:22:17 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/09 17:12:54 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (b < nb && src[b] != '\0')
	{
		dest[i + b] = src[b];
		b++;
	}
	dest[i + b] = '\0';
	return (dest);
}
/*
int	 main(void)
{
	char src[] = "Bruno";
	char dest[] = "98";
	printf("%s", ft_strncat(dest, src, 2));
	return (0);
}*/
