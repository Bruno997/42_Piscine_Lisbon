/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:50:28 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/18 17:08:08 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv) 
{
	int i;

	// we only need three parameters
	if (argc != 4) {
		write(1, "\n", 1);
		return 0;
	}

	// the second and third arguments must be letters
	if (argv[2][1] != '\0' || argv[3][1] != '\0') {
		write(1, "\n", 1);
		return 0;
	}

	// find and replace
	i = 0;
	while (argv[1][i] != '\0') {
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		write(1, &argv[1][i], 1);
		i++;
	}

	write(1, "\n", 1);
	return 0;
}
