/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redrouic <redrouic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:43:04 by redrouic          #+#    #+#             */
/*   Updated: 2023/11/27 19:47:37 by redrouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	is_charset(char c, char charset)
{
	if (c == charset || c == '\0')
		return (1);
	return (0);
}

static int	count_rows(const char *s, char charset)
{
	int	rows;
	int	bol;

	rows = 0;
	bol = 0;
	while (*s)
	{
		if (*s != charset && !bol)
		{
			bol = 1;
			rows++;
		}
		else if (*s == charset)
			bol = 0;
		s++;
	}
	return (rows);
}

static char	**init_arr(char **arr, char const *s, char c)
{
	int	y;
	int	x;
	int	i;

	i = 0;
	y = 0;
	x = 0;
	arr = malloc(sizeof(char *) * (count_rows(s, c) + 1));
	if (arr == NULL)
		return (0);
	while (s[i])
	{
		if (!is_charset(s[i], c))
			x++;
		if (is_charset(s[i + 1], c) && x > 0)
		{
			arr[y] = malloc(sizeof(char) * x + 1);
			if (!arr[y++])
				return (0);
			x = 0;
		}
		i++;
	}
	arr[y] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		y;
	int		x;
	int		i;

	y = 0;
	x = 0;
	i = 0;
	arr = NULL;
	arr = init_arr(arr, s, c);
	if (arr == NULL)
		return (NULL);
	while (s[i])
	{
		if (!is_charset(s[i], c))
			arr[y][x++] = s[i];
		if (is_charset(s[i + 1], c) && x > 0)
		{
			arr[y++][x] = '\0';
			x = 0;
		}
		i++;
	}
	return (arr);
}

/*
#include <string.h>

int main(int ac, char **av)
{
	(void)ac;
	char *str = strdup("tripouille");
	char **arr = ft_split(str, av[1][0]);

	for (int i = 0; arr[i] != NULL; i++)
		printf("arr[%d] : %s\n", i, arr[i]);
	return (0);
}
*/
