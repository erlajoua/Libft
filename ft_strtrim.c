/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:33:55 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 16:02:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isset(char *str, char *wrong)
{
	while (*wrong)
	{
		if (*wrong == *str)
			return (1);
		wrong++;
	}
	return (0);
}

char	*count_malloc(char *str, char *wrong)
{
	int full_size;
	int i;

	i = 0;
	while (ft_isset(&str[i], wrong))
		i++;
	full_size = ft_strlen(str);
	while (ft_isset(&str[full_size - 1], wrong))
		full_size--;
	if (full_size < i)
		full_size = i;
	return (ft_substr(str, i, full_size - i));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	char *wrong;

	str = (char *)s1;
	wrong = (char *)set;
	return (count_malloc(str, wrong));
}
