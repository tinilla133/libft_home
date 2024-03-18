/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:25:04 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/17 22:16:19 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*ptrs;
	size_t		len;

	len = ft_strlen(s) - 1;
	ptrs = (char *) s;
	while (len--)
		if (ptrs[len] == c)
			return (&ptrs[len]);
	return (NULL);
}