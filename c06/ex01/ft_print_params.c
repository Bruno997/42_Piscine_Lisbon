/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:46:08 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/18 12:01:27 by mvidal-m         ###   ########.fr       */
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

	b = 1;
	while (b < argc)
	{
		i = 0;
		while (argv[b][i])
		{
			ft_putchar(argv[b][i]);
			i++;
		}
		ft_putchar('\n');
		b++;
	}
	return (0);
}
