/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:42:14 by erlajoua            #+#    #+#             */
/*   Updated: 2020/11/17 10:05:57 by erlajoua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;

	arr = (unsigned char*)s;
	if (n == 0)
		return ;
	while (n > 0)
	{
		*arr = 0;
		arr++;
		n--;
	}
}
