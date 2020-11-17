/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:27:21 by user42            #+#    #+#             */
/*   Updated: 2020/11/17 11:11:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lenght_src;
	char	*source;

	lenght_src = 0;
	source = (char *)src;
	if (!source)
		return (0);
	lenght_src = (size_t)ft_strlen(source);
	if (dstsize == 0)
		return (lenght_src);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (lenght_src);
}
