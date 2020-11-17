/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:15:53 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/17 12:15:53 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	*dst;
	unsigned char	carac;
	int				i;

	i = 0;
	source = (unsigned char*)src;
	dst = (unsigned char*)dest;
	carac = (unsigned char)c;
	while (n > 0)
	{
		if (source[i] == carac)
		{
			dst[i] = source[i];
			return (&dst[i + 1]);
		}
		dst[i] = source[i];
		i++;
		n--;
	}
	return (NULL);
}
