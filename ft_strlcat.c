/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:03:47 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/14 16:53:05 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (src == NULL)
		return (destlen);
	if (dest == NULL)
		return (srclen);
	if (size > destlen)
		return (srclen + size);
	i = destlen;
	j = 0;
	while (src[i] && i < size)
		dest[++i] = src[++j];
	if (i < (destlen - 1))
		dest[destlen - 1] = '\0';
	return (srclen + destlen);
}
