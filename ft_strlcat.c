/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:31:04 by redrouic          #+#    #+#             */
/*   Updated: 2023/11/26 19:26:02 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	len;

	i = (size_t)ft_strlen(dst);
	len = (size_t)ft_strlen(src);
	if (size == 0)
		return (len);
	else if (size < i)
		return (len + size);
	y = 0;
	while (i + y + 1 < size && src[y])
	{
		dst[i + y] = src[y];
		y++;
	}
	dst[i + y] = 0;
	return (len + i);
}
