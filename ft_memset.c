#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	while (n)
	{
		*s2 = c;
		s2++;
		n--;
	}
	return (s);
}