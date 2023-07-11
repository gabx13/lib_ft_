/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabovs <vgabovs@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 23:54:39 by vgabovs           #+#    #+#             */
/*   Updated: 2023/07/11 23:28:41 by vgabovs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	conditions(t_list **temp, t_list **new_lst, t_list **nlst_begin)
{
	if (*temp == NULL)
	{
		*temp = *new_lst;
		*nlst_begin = *new_lst;
	}
	else
	{
		(*temp)-> next = *new_lst;
		*temp = (*temp)-> next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*nlst_begin;
	t_list	*temp;
	void	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	temp = NULL;
	nlst_begin = lst;
	while (lst != NULL)
	{
		tmp = (f)(lst->content);
		new_lst = ft_lstnew(tmp);
		if (new_lst == NULL)
		{
			ft_lstclear(&nlst_begin, del);
			del(tmp);
			return (NULL);
		}
		conditions(&temp, &new_lst, &nlst_begin);
		lst = lst -> next;
	}
	return (nlst_begin);
}
