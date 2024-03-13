/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:02:06 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 11:02:00 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptrb;

	ptrb = (unsigned char*) b;

	i = 0;
	while (i < len)
	{
		ptrb[i] = (unsigned char) c;
		i++;
	}
	return (ptrb);
}