/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:32:03 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 20:38:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*cpy;
	char	*zr;
	int		i;

	i = 0;
	str = (char *)s;
	if ((int)start > ft_strlen(s))
	{
		zr = malloc(1);
		zr[0] = '\0';
		return (zr);
	}
	if (!s)
		return (NULL);
	if ((cpy = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	while (str[start] && len > 0)
	{
		cpy[i] = str[start];
		start++;
		i++;
		len--;
	}
	cpy[i] = '\0';
	return (cpy);
}
