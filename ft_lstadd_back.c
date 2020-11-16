/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:04:26 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 12:04:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	new->next = NULL;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	while ((*alst)->next != NULL)
		*alst = (*alst)->next;
	(*alst)->next = new;
}
