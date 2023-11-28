/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:44:52 by redrouic          #+#    #+#             */
/*   Updated: 2023/11/26 19:35:04 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;
	size_t	len;

	new = 0;
	i = 0;
	len = (size_t)ft_strlen(s) + 1;
	new = malloc(sizeof(char) * len);
	if (new == NULL || s == NULL || f == NULL)
		return (0);
	while (s[i])
	{
		new[i] = s[i];
		new[i] = (*f)(i, new[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
