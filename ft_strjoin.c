/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:06:42 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/17 12:06:43 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*dest;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!(dest = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1)))
		return (NULL);
	while (str1[++i])
		dest[i] = str1[i];
	while (str2[j])
	{
		dest[i + j] = str2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
