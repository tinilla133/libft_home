/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:07:03 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/27 17:28:27 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	init;
	unsigned int	end;
	char			*ptrs1;
	char			*ptrset;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (!*set || !*s1)
		return ((char *) s1);
	ptrs1 = (char *) s1;
	ptrset = (char *) set;
	init = 0;
	while (!ft_strchr(ptrset, ptrs1[init]) && ptrs1[init])
		init++;
	end = ft_strlen(ptrs1) - 1;
	while (!ft_strrchr(ptrset, ptrs1[end]) && end)
		end--;
	return (ft_substr(ptrs1, init, end - init));
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "lorem ipsum dolor sit amet";
	char set[] = "tel";

	printf("Trim %s , %s: %s\n", s, set, ft_strtrim(s, set));
}
*/