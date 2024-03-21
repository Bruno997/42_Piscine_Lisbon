/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:23:42 by mvidal-m          #+#    #+#             */
/*   Updated: 2024/03/07 13:59:33 by mvidal-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (!(str[i] >= 'A' && str[i] <= 'Z'))
                {
                        return (0);
                }
                i++;
        }
        return (1);

}

int     main()
{
        printf("%d", ft_str_is_uppercase("MIGUELMANUEL"));
        printf("\n%d", ft_str_is_uppercase("miguel_manuel837"));
        printf("\n%d", ft_str_is_uppercase(""));
}
