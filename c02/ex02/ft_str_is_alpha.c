/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:58:12 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/07 13:43:33 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z') || (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	printf("Albeticos: %d\n", ft_str_is_alpha("aasdasd"));
	printf("Outros caracteres: %d\n", ft_str_is_alpha("a.//a"));
	printf("String vazia: %d\n", ft_str_is_alpha(""));
	return (0);
}
