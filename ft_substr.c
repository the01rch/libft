/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:42:31 by redrouic          #+#    #+#             */
/*   Updated: 2023/11/22 16:24:49 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			size;
	size_t			y;

	if (s == NULL)
		return (0);
	size = ft_strlen(s);
	if (start >= size)
		len = 0;
	if (size - start > len)
		size = len;
	else
		size -= start;
	len = size;
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (0);
	y = 0;
	while (y < size && s[start])
		new[y++] = s[start++];
	new[y] = '\0';
	return (new);
}
