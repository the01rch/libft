/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:42:40 by redrouic          #+#    #+#             */
/*   Updated: 2023/11/22 20:23:54 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	ft_strcpy(char *src, char *str)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * len + 1);
	i = ft_strlen(s1);
	if (new == NULL)
		return (0);
	ft_strcpy((char *)s1, new);
	while (*s2)
		new[i++] = *s2++;
	new[i] = '\0';
	return (new);
}
