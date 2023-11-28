/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:40:05 by redrouic          #+#    #+#             */
/*   Updated: 2023/11/22 20:14:43 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total;

	tab = NULL;
	total = (nmemb * size);
	if (nmemb != 0 && ((nmemb * size) / nmemb != size))
		return (NULL);
	tab = malloc(total);
	if (tab == NULL)
		return (NULL);
	ft_memset(tab, 0, total);
	return (tab);
}
