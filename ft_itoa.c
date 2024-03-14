/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:36:26 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/14 18:45:20 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_mem_alloc(char *buff, unsigned int size)
{
	buff = malloc(buff, size * sizeof (char));
	if (buff == NULL)
		return (NULL);
	return (buff);
}

char	*ft_itoa(int n)
{
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		ft_itoa(214748364);
		write(1, "8", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}