/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:07:03 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/18 22:16:50 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (!ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1) - 1;
	while (!ft_strrchr(set, s1[i]) && i >= 0)
		i--;
	return (ft_substr(s1, 1, i - 1));
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char set[] = "abc";

	if (argc > 1)
		printf("Trim, poner cadena en argv[1] %s\n", ft_strtrim(argv[1], set));
}
*/