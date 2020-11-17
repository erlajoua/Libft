/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:16:39 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/17 12:16:40 by erlajoua         ###   ########.fr       */
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
