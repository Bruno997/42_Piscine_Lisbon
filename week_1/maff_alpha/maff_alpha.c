/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:07:11 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/18 15:15:38 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
