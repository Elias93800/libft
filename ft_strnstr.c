#include "libft.h"

char *strnstr(const char *big,	const char *little, size_t len)
{
    size_t	i;
	size_t	j;

	if (!little)
		return (big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j]) && (big[i + j] == little[j]) && (i + j < len))
			j++;
		if (!little[j])
			return (big + i);
		i++;
	}
	return (NULL);
}