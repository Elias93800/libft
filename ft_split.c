/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:37:27 by emehdaou          #+#    #+#             */
/*   Updated: 2023/11/11 04:20:17 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_letter(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int	count_words(char const *str, char c, int *j)
{
	int	i;
	int	cnt;

	i = 0;
	*j = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			cnt++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

void	free_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	i = 0;
	res = ft_calloc(sizeof(char *), count_words((char *)str, c, &j) + 1);
	if (!res)
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			k = 0;
			res[j] = ft_calloc(sizeof(char), count_letter(&str[i], c) + 1);
			if (!res)
				return (free_tab(res), NULL);
			while (str[i] && str[i] != c)
				res[j][k++] = str[i++];
			j++;
		}
		else
			i++;
	}
	return (res);
}
