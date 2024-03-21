/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:05:20 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/08 12:40:49 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	bm;

	bm = *a;
	*a = *b;
	*b = bm;
}

int	main(void)
{
	int	x;
	int	y;

	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("Conteudo de x: %d\n", x);
	printf("Conteudo de y: %d", y);
}
