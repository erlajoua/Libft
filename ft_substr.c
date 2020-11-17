/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:03:39 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/17 12:03:39 by erlajoua         ###   ########.fr       */
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
	if (!s)
		return (NULL);
	str = (char *)s;
	if ((int)start > ft_strlen(str))
	{
		zr = malloc(1);
		zr[0] = '\0';
		return (zr);
	}
	if ((cpy = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	while (str[start] && len-- > 0)
	{
		cpy[i] = str[start];
		start++;
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
