/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:05:25 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/20 09:05:44 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (-1);
	}
	if (0 == power)
	{
		return (1);
	}
	while (power > 0)
	{
		i *= nb;
		--power;
	}
	return (i);
}

int	main()
{
	int	a;
	int b;

	a = 3;
	b = 3;
	printf("%d\n",ft_iterative_power(a, b));
}
