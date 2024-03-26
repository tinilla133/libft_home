/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:41:49 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/26 18:24:23 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*ptrs;

	ptrs = (char *) s;
	i = 0;
	while (*ptrs)
	{
		if (*ptrs == (char) c)
			return (ptrs);
		ptrs++;
	}
	if (*ptrs == (char) c)
		return (ptrs);
	return (NULL);
}
