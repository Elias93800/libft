#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
    char    *src2;

	src2 = (char *)src;
    dest2 = (char *)dest;
	while (n > 0)
	{
		*dest2 = src2;
		src2++;
        dest2++;
		n--;
	}
	return (dest);
}