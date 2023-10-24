#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    char *s;
    s = malloc(nmemb * size);
    if (!s)
        return (0);
    ft_bzero(s, nmemb * size);
    return (s);
}