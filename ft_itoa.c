/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:06:06 by user42            #+#    #+#             */
/*   Updated: 2020/11/16 15:49:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		cpy;

	cpy = n;
	if (n == -2147483648)
		return ("-2147483648");
	len = (cpy > 0) ? 0 : 1;
	cpy = (cpy > 0) ? cpy : -cpy;
	if (n == 0)
		return ("0");
	while (n != 0)
		n = (len++) ? n / 10 : n / 10;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[0] = '-';
	str[len] = '\0';
	while (cpy != 0)
	{
		str[--len] = (cpy % 10) + '0';
		cpy /= 10;
	}
	return (str);
}

/*
int main()
{
    printf("|%s|\n",ft_itoa(-2147483648));

    return 0;
}*/
