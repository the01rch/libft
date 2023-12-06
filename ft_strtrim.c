/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:42:55 by redrouic          #+#    #+#             */
/*   Updated: 2023/12/04 20:48:16 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

int	is_cset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		y;
	int		u;
	int		t;

	new = NULL;
	y = ft_strlen(s1) - 1;
	i = 0;
	u = 0;
	while (is_cset(s1[i], set) && s1[i])
		i++;
	while (is_cset(s1[y], set) && y > 0)
		y--;
	t = y - i;
	if (t < 0)
		return (ft_strdup(""));
	new = malloc(sizeof(char) * (t + 2));
	if (new == NULL)
		return (NULL);
	while (i <= y)
		new[u++] = s1[i++];
	new[u] = '\0';
	return (new);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("trim :'%s'\n", ft_strtrim(av[1], av[2]));
	return (0);
}
*/
