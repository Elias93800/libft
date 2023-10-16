#include "libft.h"

char    *ft_strdup(char *src)
{
        int             i;
        int             size;
        char    *dest;

        i = 0;
        size = ft_strlen(src) + 1;
        dest = malloc(sizeof(char) * size);
        while (src[i])
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}