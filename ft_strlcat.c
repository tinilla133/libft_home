/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:03:47 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 13:56:16 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size > destlen)
		return (srclen + size);
	i = destlen;
	j = 0;
	while (src[i] && i < size)
		dest[++i] = src[++j];
	if (i < (dstsize - 1))
		dest[dstsize - 1] = '\0';
	return (srclen + destlen);
}