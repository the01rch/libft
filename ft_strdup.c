/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:40:15 by redrouic          #+#    #+#             */
/*   Updated: 2023/11/21 19:39:12 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	str[i] = '\0';
}

char	*ft_strdup(const char *s)
{
	char	*new;

	new = NULL;
	new = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new == 0)
		return (0);
	ft_strcpy((char *)s, new);
	return (new);
}
