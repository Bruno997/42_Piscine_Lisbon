/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:10:53 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/07 13:21:31 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);

}

int	main()
{
	printf("%d", ft_str_is_lowercase("gdjhsbkabh"));
	printf("\n%d", ft_str_is_lowercase("gdjhs>?784bMIGkabh"));
	printf("\n%d", ft_str_is_lowercase(""));
}
