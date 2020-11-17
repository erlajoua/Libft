/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:17:00 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/17 12:17:00 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = (void *)malloc(count * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, count * size);
	return (dest);
}
