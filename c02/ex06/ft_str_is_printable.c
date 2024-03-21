/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:31:04 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/07 13:59:27 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (!(str[i] >= '32' && str[i] <= '126'))
                {
                        return (0);
                }
                i++;
        }
        return (1);

}

int     main()
{
        printf("%d", ft_str_is_printable("MI??%%GUELMANUEL"));
        printf("\n%d", ft_str_is_printable("miguel_manuel837"));
        printf("\n%d", ft_str_is_printable(""));
}

