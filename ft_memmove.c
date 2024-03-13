/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:14:35 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 19:55:50 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int		i;
	unsigned char		*ptrdst;
	const unsigned char	*ptrsrc;

	ptrdst = (unsigned char*) dst;
	ptrsrc = (const unsigned char*) src;
	if (dst == NULL || src == NULL || dst == src)
		return (dst);
	i = 0;
	while (i < len)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (ptrdst);
}