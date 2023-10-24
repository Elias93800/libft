#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *res;

    res = malloc(sizeof(s1) + sizeof(s2));
    if (!res)
        return (NULL);
    i = 0;
    j = 0;
   	while (s1[i])
	{
		res[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		res[j] = s2[i];
		i++;
		j++;
	}
    res[j] = '\0';
    return res;
}
