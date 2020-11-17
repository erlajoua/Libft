/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:45:22 by user42            #+#    #+#             */
/*   Updated: 2020/11/17 10:08:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t len)
{
	int						i;
	unsigned char			*dest;
	const unsigned char		*source;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	while (len > 0)
	{
		dest[i] = source[i];
		i++;
		len--;
	}
	return (dest);
}
