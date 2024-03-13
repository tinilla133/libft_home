/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:40:31 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/12 21:25:57 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	
	if (!*needle)
		return ((char *) haystack);
	i = 0;
	while (*haystack && i < len)
	{
		if (*haystack == *needle)
		{
			if (!ft_strcmp((char *) haystack, (char *) needle))
				return ((char *) haystack);
		}
		i++;
		haystack++;
	}
	return (NULL);
}