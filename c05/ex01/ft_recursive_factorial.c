/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:02:35 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/20 09:04:15 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (0 == nb || 1 == nb)
	{
		return (1);
	}
	else
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}

int	main()
{
	int	a;

	a = 5;

	printf("%d\n",ft_recursive_factorial(a));
}
