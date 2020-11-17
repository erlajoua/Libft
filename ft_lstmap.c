/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:15:40 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/17 14:19:05 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*begin;

	if (!lst || !f)
		return (NULL);
	begin = ft_lstnew(f(lst));
	element = begin;
	while (lst->next != NULL)
	{
		lst = lst->next;
		element->next = ft_lstnew(f(lst));
		if (!(element->next))
		{
			del(element->next);
			return (NULL);
		}
		element = element->next;
	}
	return (begin);
}
