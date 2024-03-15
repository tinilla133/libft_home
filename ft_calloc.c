/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:22:18 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/14 18:42:22 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*buff;
	unsigned char		*ptrbuff;
	unsigned int		szmem;

	szmem = (unsigned int)count * size;
	buff = (void *) malloc(szmem);
	if (buff == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptrbuff = (unsigned char *) buff;
	while (szmem--)
		*ptrbuff++ = 0;
	return (buff);
}
