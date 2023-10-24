#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    unsigned char *s1;
    
    s1 = (unsigned char *)s;
    i = ft_strlen(s1);
    while(i >= 0 )
    {
        if (s1[i] == c)
            return (s1 + i);
        i--;
    }
    return (NULL);
}

int    main(int argc, char **argv)
{
    printf("le vrai : %s\n", strrchr(argv[1], atoi(argv[2])));
    printf("le mien : %s\n", ft_strrchr(argv[1], atoi(argv[2])));
    return 1;
}