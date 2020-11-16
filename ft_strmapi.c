/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:38:52 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 11:39:36 by user42           ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	char			*str;
	unsigned int	i;

	i = 0;
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

char	ft_nextchar(unsigned int n, char c)
{
	char dest;

	dest = c + n;
	return (dest);
}
