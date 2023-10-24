#include "libft.h"

char    *ft_strdup(const char *str)
{
        int             i;
        int             size;
        char    *dest;

        i = 0;
        size = ft_strlen(str) + 1;
        dest = malloc(sizeof(char) * size);
        while (str[i])
        {
                dest[i] = str[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}