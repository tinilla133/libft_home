/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:25:04 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 21:16:13 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*ptrs;
	size_t		len;

	len = ft_strlen(s) - 1;
	ptrs = (char *) s;
	while (len > 0)
	{
		if (ptrs[len] == c)
			return (&ptrs[len]);
		len--;
	}
	return (NULL);
}
