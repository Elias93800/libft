/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:29:11 by emehdaou          #+#    #+#             */
/*   Updated: 2023/11/11 03:51:12 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;

	src2 = (char *)src;
	dest2 = (char *)dest;
	while (n > 0)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
		n--;
	}
	return (dest);
}
