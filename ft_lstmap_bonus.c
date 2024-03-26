/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:18:54 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/03/25 18:13:42 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*newcontent;

	if (lst == NULL || f == NULL || *f == NULL)
		return (NULL);
	newlst = NULL;
	newlst = ft_lstnew(f(lst->content));
	if (newlst == NULL)
		return (NULL);
	while (lst)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (newnode == NULL)
		{
			del(newnode);
			ft_lstclear(&newlst, del);
			return (newlst);
		}
		ft_lstadd_back(&newlst, f(lst->content));
		lst = lst->next;
	}
	return (newlst);
}