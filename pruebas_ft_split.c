/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas_ft_split.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:39:46 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/18 14:22:34 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_trimdelims(char const *s, char c)
{
	unsigned int	len;
	char			*buff;
	unsigned int	i;

	len = (unsigned int) ft_strlen(buff);
	printf("=============> %d\n", len);
	i = len - 1;
	buff = (char *) malloc(len * sizeof (char));
	if (buff == NULL)
		return (NULL);
/* quitar los del principio */
	while (s && *s == c)
		s++;
	s--;
	while (*s)
	{
		*buff++ = *s++;
		printf("%c -- %c :: ", *buff, *s);
	}
	return (buff);
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

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("El resultado de ft_count_word() es (meter la cadena en argv[1]): %d\n", ft_count_words(argv[1], ':'));
	}

}