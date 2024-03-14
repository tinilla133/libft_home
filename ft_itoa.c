/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:36:26 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/14 22:03:15 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*buff;
	long int	nbr;
	int			len;

	len = 11;
	buff = malloc(len * sizeof (char));
	if (buff == NULL)
		return (NULL);
	nbr = (long int) n;
	if (nbr < 0)
	{
		nbr = -nbr;
		buff[0] = '-';
	}
	while (len--)
	{
		buff[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (buff);
}