/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:12:18 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/13 16:54:36 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_count_words(char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;
	
	i = 0;
	count = 0;
	while (s[i])
	{
		if (ft_strchr(s, c) != NULL)
			count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	n_subs;
	char	**buff;

	n_subs = ft_count_words(s, c);
	buff = (char **) malloc (n_subs * sizeof(char));
	if (buff == NULLL)
		return (NULL);
}