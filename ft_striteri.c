/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:50:20 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/17 23:34:45 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	slen;
	char			*buff;

	if (s == NULL || f == NULL)
		return ;
	slen = ft_strlen(s);
	while (slen--)
		f(slen, &s[slen]);
}