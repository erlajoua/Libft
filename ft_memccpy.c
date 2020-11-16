/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:51:31 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 10:51:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
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
        if(source[i] == carac)
        {
            dst[i] = source[i];
            return (dst);
        }
        dst[i] = source[i];
        i++;
        n--;
    }
    return (dst);
}
