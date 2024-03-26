/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:22:31 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/26 19:48:43 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	int				nbr;

	sign = 1;
	nbr = 0;
	while (*str == ' '|| (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - 48;
		str++;
	}
	return (nbr * sign);
}

/* #include <stdio.h>

int	main(int argc, char *argv[])
{
	if(argc > 1)
	{
		printf("Prueba de atoi() Poner en argv[1]");
        printf("Salida atoi(\"%s\"): %d\n", argv[1], atoi(argv[1]));
        printf("Salida ft_atoi(\"%s\"): %d\n", argv[1], ft_atoi(argv[1]));
	}
}
 */