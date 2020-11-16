/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:32:03 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 11:33:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*cpy;
	int		i;

	i = 0;
	str = (char *)s;
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
