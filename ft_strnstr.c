/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:30:10 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 15:32:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*big;
	char	*little;
	size_t	i;
	size_t	j;

	big = (char *)haystack;
	little = (char *)needle;
	i = 0;
	j = 0;
	if (!little[0])
		return (big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return (&big[i]);
		}
		i++;
	}
	return (0);
}
