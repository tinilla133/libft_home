/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quadina <quadina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:36:26 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/17 00:11:11 by quadina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_aux_count_digits(long int n)
{
	int	count;

	count = 0;
	while (n > 10)
	{
		n = n / 10;
		count ++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	char		*buff;
	long int	nbr;
	int			len;

	nbr = (long int) n;
	printf("\nEl número después del cast ==========> %ld\n", nbr);
	if (nbr < 0)
		nbr = -nbr;
	len = ft_aux_count_digits(nbr);
	printf("\nlongitud del número ==========> %d\n", len);
	if (n < 0)
		len = len + 1;
	buff = malloc(len * sizeof (char));
	if (buff == NULL)
		return (NULL);
	while (len--)
	{
		buff[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	printf("El número al final: %d\n", n);
	printf("len al salir del bucle: %d", len);
	if (n < 0)
		buff[0] = '-';
	return (buff);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n_itoa;
	
	n_itoa = 0;
	printf("\nPrueba de ft_itoa():n");
	printf("Introducir un entero y pulsar retorno de carro:\n");
	scanf("%d", &n_itoa);
	printf("\nResultado: %s\n", ft_itoa(n_itoa));
}
*/
