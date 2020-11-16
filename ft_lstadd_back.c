/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:04:26 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 17:44:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*begin;

	if (new)
	{
		if (!(*alst))
			*alst = new;
		else
		{
			begin = *alst;
			while (begin->next)
				begin = begin->next;
			begin->next = new;
		}
	}
}
