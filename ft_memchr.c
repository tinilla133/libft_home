/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:30:44 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/14 20:53:54 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;

	ptrs = (unsigned char*) s;
	while (n--)
	{
		if (*ptrs == (unsigned char) c)
			return (ptrs);
		ptrs++;
	}
	return (NULL);
}

/* void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;

	ptrs = (unsigned char*) s;
	i = 0;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char) c)
			return (&ptrs[i]);
		i++;
	}
	return (NULL);
} */