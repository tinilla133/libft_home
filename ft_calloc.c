/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:22:18 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 17:47:49 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*buff;
	unsigned char	*ptrbuff;
	size_t			i;

	buff = (void *) malloc(count * size);
	if (buff == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptrbuff = (unsigned char *) buff;
	i = 0;
	while (i < (count * size))
	{
		ptrbuff[i] = 0;
		i++;
	}
	return (buff);	
}