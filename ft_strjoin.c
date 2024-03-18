/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:02:37 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 12:37:23 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;
	char	*buff;

	s1len = ft_strlen((char *) s1);
	s2len = ft_strlen((char *) s2);
	buff = (char *) malloc((s1len + s2len) * sizeof (char));
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (s1)
	{
		buff[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2)
		buff[++i] = s2[++j];
	return (buff);
}
