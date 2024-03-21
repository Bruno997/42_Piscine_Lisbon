/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:21:38 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/18 12:05:23 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	b;

	i = argc - 1;
	while (i > 0)
	{
		b = 0;
		while (argv[i][b])
		{
			ft_putchar(argv[i][b]);
			b++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
