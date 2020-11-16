/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:45:53 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 19:51:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*begin;

	if (!lst)
		return (NULL);
	begin = ft_lstnew(f(lst));
	elem = begin;
	while (lst->next != NULL)
	{
		lst = lst->next;
		elem->next = ft_lstnew(f(lst));
		if (!(elem->next))
		{
			del(elem->next);
			return (NULL);
		}
		elem = elem->next;
	}
	return (begin);
}
