/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:31:04 by redrouic          #+#    #+#             */
/*   Updated: 2023/12/04 20:59:34 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) > size)
		return (ft_strlen(src) + size);
	i = ft_strlen(dst);
	y = 0;
	while (i + y + 1 < size && src[y])
	{
		dst[i + y] = src[y];
		y++;
	}
	dst[i + y] = '\0';
	return (ft_strlen(src) + i);
}
