/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:25:20 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/25 14:07:01 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptrlst;

	ptrlst = *lst;
	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	ft_lstclear(&ptrlst->next, del);
	del(ptrlst->content);
	free(*lst);
	*lst = NULL;
}