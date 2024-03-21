/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:39:48 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/07 11:48:12 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	ori[8];
	char	des[8];

	strcpy(ori, "Tired");
	strcpy(des, " ");
	printf("String de origem: %s\n", ori);
	ft_strcpy(des, ori);
	printf("Reproducao para string de destino: %s", des);
	return (0);
}
