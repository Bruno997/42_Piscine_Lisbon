/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:07:51 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/20 09:32:43 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

int	main(void)
{	int	base;
	int	expoente;
	
	base = 3;
	expoente = 0;
	printf("Base:%d\nExpoente:%d\n", base, expoente);
	printf("Resultado:%d", ft_recursive_power(base, expoente));
	return (0);
}
