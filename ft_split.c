/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:12:18 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/26 19:17:08 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freemem(char **buff, unsigned int size)
{
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

void	ft_get_positions(const char *s, char c, \
						unsigned int *init, unsigned int *end)
{
	unsigned int	i;
	int				found;

	i = *end;
	found = 0;
	while (s[i] && !found)
	{
		if (s[i] == c && s[i + 1] != c)
			*init = i;
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
		{
			*end = i + 1;
			found = 1;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	n_subs;
	char			**buff;
	unsigned int	init;
	unsigned int	end;
	unsigned int	i;

	end = 0;
	i = 0;
	n_subs = ft_count_words(s, c);
	buff = (char **) malloc (n_subs * sizeof (char *));
	if (buff == NULL)
		return (NULL);
	while (i < n_subs)
	{
		ft_get_positions(s, c, &init, &end);
		buff[i++] = (char *) malloc((end - init) * sizeof (char));
		if (buff == NULL)
		{
			ft_freemem(buff, n_subs - 1);
			free(buff);
			return (NULL);
		}
		buff[i] = ft_substr(s, init, end - init);
	}
	return (buff);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char buff[] = "         Don hijo de            la puta Ginesillo del Paropillo";

	printf("Número de palabras de %s: %u\n", buff, ft_count_words(buff, ' '));
	printf("Número de caracteres de la cadena: %d\n", (int) ft_strlen(buff));
	ft_split(buff, ' ');
}
*/