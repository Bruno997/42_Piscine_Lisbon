/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:26:26 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/14 12:03:00 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)

{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			a++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		b = b * 10;
		b = b + (*str - '0');
		str++;
	}
	if (!(a % 2))
		return (b);
	else
		return (-b);
}
/*
int	main(void)
{
	char	*str = "  ---+--+123ab567";

	printf("Resultado da conversao:%d\n", ft_atoi(str));
}*/
