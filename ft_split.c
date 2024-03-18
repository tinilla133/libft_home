/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:12:18 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/18 00:58:19 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_count_words(char const *s, char c)
{
	unsigned int	count;
	count = 0;

	while (*s)
		if (*(s++) == c)
			count++;
	return (++count);
}

char	*ft_str_memalloc(char const *s, char c)
{
	unsigned int	count;
	char			*buff;

	count = 0;
	while (*s && *s != c)
		count++;
	buff = (char *) malloc (count * sizeof (char) + 1);
	if (buff == NULL)
		return (NULL);
}

void	ft_strcopy(char *dest, char const *src, char c)
{
	while(*s)
	{
		
	}
	
}

char	**ft_split(char const *s, char c)
{
	unsigned int	n_subs;
	char			**buff;
	unsigned int	init;
	unsigned int	cursor;
	unsigned int	i;

	cursor = 0;
	init = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	n_subs = ft_count_words(s, c);
	buff = (char **) malloc (n_subs * sizeof (char));
	if (buff == NULL)
		return (NULL);
	while (i < n_subs)
	{
		buff[i++] = ft_str_memalloc(s, c);
		if (buff == NULL)
			return (NULL);
		ft_strcopy(buff[i], s, cursor);
	}
}

#include <stdio.h>

int	main(void)
{
	char buff[] = "Don hijo de la puta Ginselillo del Paropillo";
	
	printf("La posición del separador es: %u\n", ft_separator_position((char **) &buff, ' '));
	printf("El puntero quedó en %s\n", buff);

}