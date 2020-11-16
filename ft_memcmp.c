/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:04:34 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 11:05:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str1 && str2 && n > 0)
	{
		if (*str1 - *str2 < 0)
			return (-1);
		else if (*str1 - *str2 > 0)
			return (1);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
