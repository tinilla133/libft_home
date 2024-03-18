/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:58:30 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/17 23:35:13 by fvizcaya         ###   ########.fr       */
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
		buff[slen] = f(slen, buff[slen]);
	return (buff);
}