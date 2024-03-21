/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 08:58:03 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/20 08:59:50 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return -1;
	}
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

int	main()
{
	int	a;

	a = 2;

	printf("%d\n",ft_iterative_factorial(a));
}
