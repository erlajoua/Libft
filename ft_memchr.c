/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:02:28 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 12:16:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char i;

	if (!s)
		return (NULL);
	str = (unsigned char*)s;
	i = (unsigned char)c;
	while (n > 0)
	{
		if (*str == i)
			return (str);
		else
			str++;
		n--;
	}
	return (NULL);
}
