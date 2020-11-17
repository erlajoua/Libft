/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:15:21 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/17 12:15:22 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char i;

	str = (unsigned char*)s;
	i = (unsigned char)c;
	while (n > 0)
	{
		if (*str == i)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
