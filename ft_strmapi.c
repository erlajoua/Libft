/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:38:52 by user42            #+#    #+#             */
/*   Updated: 2020/11/17 11:14:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = f(i, str[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
