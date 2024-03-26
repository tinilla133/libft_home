/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:05:06 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/26 21:06:45 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*buff;

	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	buff = (char *) malloc (len * sizeof (char) + 1);
	if (buff == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (s[i] && len--)
		buff[i++] = s[j++];
	buff[i] = '\0';
	return (buff);
}
/*
int	main(void)
{
	printf("======> %s\n", ft_substr("Hola radiola tócame la cola", 6, 10));
}
*/