/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:05:06 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 12:36:15 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*buff;

	buff = (char *) malloc (len * sizeof (char));
	if (buff == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (s[i] && len > 0)
	{
		buff[++i] = s[++j];
		len--;
	}
	return (buff);
}
