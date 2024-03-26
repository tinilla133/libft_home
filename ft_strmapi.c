/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:58:30 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/26 19:24:26 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	slen;
	char			*buff;

	if (s == NULL || f == NULL)
		return (NULL);
	slen = (unsigned int) ft_strlen(s);
	buff = (char *) malloc (slen * sizeof (char) + 1);
	if (buff == NULL)
		return (NULL);
	buff[slen--] = '\0';
	while (slen--)
		buff[slen] = f(slen, s[slen]);
	buff[slen] = f(slen, s[slen]);
	return (buff);
}