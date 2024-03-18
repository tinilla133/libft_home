/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:07:03 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 16:16:50 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_first(char const *s1, char const *set)
{
	unsigned int	diff;
	unsigned int	i;
	unsigned int	j;

	diff = 0;
	i = 0;
	while (s1[i] && !diff)
	{
		j = 0;
		while (set[j] && s1[i] == set[j])
			j++;
		if (s1[i - 1] != set[j - 1])
		{
			diff = 1;
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_find_last(char const *s1, char const *set)
{
	unsigned int	diff;
	unsigned int	i;
	size_t			len;

	diff = 0;
	i = 0;
	len = ft_strlen((char *) s1);
	while (s1[len] && !diff)
	{
		while (set[i] && s1[len] == set[i])
			i++;
		if (s1[len - 1] != set[i - 1])
		{
			diff = 1;
			return ((int) len);
		}
		len--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				first;
	int				last;
	unsigned int	i;
	char			*buff;

	first = ft_find_first((char *) s1, (char *) set);
	last = ft_find_last((char *) s1, (char *) set);
	buff = (char *) malloc((last - first) * sizeof (char));
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (i < (unsigned int)(last - first))
		buff[++i] = s1[++first];
	return (buff);
}
