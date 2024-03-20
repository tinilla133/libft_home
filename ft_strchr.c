/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:41:49 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/21 00:00:05 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*ptrs;

	if (s == NULL)
		return (NULL);
	ptrs = (char *) s;
	i = 0;
	while (s[i])
	{
		if (ptrs[i] == c)
			return (&ptrs[i]);
		i++;
	}
	return (NULL);
}
