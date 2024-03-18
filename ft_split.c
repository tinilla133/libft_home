/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:12:18 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/18 19:23:56 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freemem(char **buff, unsigned int size)
{
	size--;
	while (size--)
		free(buff[size]);
}

unsigned int	ft_count_words(char const *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

char	*ft_str_memalloc(char const *s, char c, unsigned int *init)
{
	unsigned int	count;
	unsigned int	i;
	char			*buff;

	count = 0;
	i = *init;
	s = s + *init;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			count++;
		s++;
	}
	printf("=======> Count %d\n, count");
	buff = (char *) malloc (count * sizeof (char) + 1);
	if (buff == NULL)
		return (NULL);
	while (count--)
	{
		if (s[i] == c && s[i + 1] != c && !s[i + 1])
			*init += i;
		printf("Valor de i en el bucle de ft_str_memalloc(): %d\n", i);
		printf("Valor de init en el bucle de ft_str_memalloc(): %d\n", *init);
		printf("Valor de buff[i] en el bucle de ft_str_memalloc(): %c\n", s[i]);
		i++;
	}
	return (buff);
}

/*
void	ft_strcopy(char *dest, char const *src)
{
	while(*s)
	{
		
	}
	
}
*/

char	**ft_split(char const *s, char c)
{
	unsigned int	n_subs;
	char			**buff;
	unsigned int	cursor;
	unsigned int	i;

	cursor = 0;
	i = 0;
	n_subs = ft_count_words(s, c);
	buff = (char **) malloc (n_subs * sizeof (char));
	if (buff == NULL)
		return (NULL);
	while (i < n_subs)
	{
		buff[i++] = ft_str_memalloc(s, c, &cursor);
		if (buff == NULL)
		{
			ft_freemem(buff, n_subs);
			return (NULL);
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	unsigned int	init = 0;
	
	char buff[] = "Don hijo de la puta Ginselillo del Paropillo";
	
	printf("La subcadena %s\n", ft_str_memalloc(buff, ' ', &init));

}