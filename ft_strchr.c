#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
    size_t i;
    unsigned char *s1;
    
    i = 0;
    s1 = (unsigned char *)s;
    while(i <= ft_strlen(s1))
    {
        if (s1[i] == c)
            return (s1 + i);
        i++;
    }
    return (NULL);
}

int    main(int argc, char **argv)
{
    printf("le vrai : %s\n", strchr(argv[1], atoi(argv[2])));
    printf("le mien : %s\n", ft_strchr(argv[1], atoi(argv[2])));
    return 1;
}