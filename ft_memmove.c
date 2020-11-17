/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:14:57 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/17 12:14:57 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*ptr_dst;
	const unsigned char		*ptr_src;

	if (!dst && !src)
		return (NULL);
	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	i = 0;
	if (ptr_dst > ptr_src)
		while (++i <= len)
		{
			ptr_dst[len - i] = ptr_src[len - i];
		}
	else
		while (len-- > 0)
			*(ptr_dst++) = *(ptr_src++);
	return (dst);
}
