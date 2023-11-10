/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:37:27 by emehdaou          #+#    #+#             */
/*   Updated: 2023/11/10 04:02:11 by emehdaou         ###   ########.fr       */
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

int	count_words(char const *str, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] && str[i] == c)
	{
		i++;
	}
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

char	**ft_split(char const *str, char c)
{
	int i;
	int j;
	int k;
	char **res;

	i = 0;
	j = 0;
	k = 0;
	res = ft_calloc(sizeof(char *), count_words((char *)str, c) + 1);
	while (str[i])
	{
		if (str[i] != c)
		{
			res[j] = ft_calloc(sizeof(char), count_letter(&str[i], c) + 1);
			while (str[i] && str[i] != c)
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
			k = 0;
		}
		else
			i++;
	}
	return (res);
}