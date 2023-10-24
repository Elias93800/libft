#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char	*s2;

	s2 = (char *)s;
	while (n > 0)
	{
		*s2 = "\0";
		s2++;
		n--;
	}
}