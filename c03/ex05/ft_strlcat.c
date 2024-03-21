/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:44:01 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/09 17:39:10 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	dlen = b;
	slen = strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[b] = src[i];
		i++;
		b++;
	}
	dest[b] = '\0';
	return (dlen + slen);
}
/*
int	main()
{
	char	src[] = "Bruno";
	char	dest[] = "98";

	printf("Limite de caracteres: %i \n", ft_strlcat(dest, src, 220));
	printf("Concatenacao das duas strings: %s \n", dest);
}*/
