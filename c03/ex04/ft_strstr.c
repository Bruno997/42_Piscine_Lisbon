/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:00:52 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/09 17:13:57 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + b] == to_find[b] && str[i + b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (str + i);
		i++;
		b = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Miguel Bruno Vidal Manuel";
	char	find[] = "Vidal";
	printf("%s", ft_strstr(str, find));
}*/
