#include <string.h>
#include <stdlib.h>

static unsigned int ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char                *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char         *result;
    unsigned int i;
    unsigned int j;

    i = ft_strlen(s);
    j = 0;
    result = (char *)malloc(i + 1);
    result[i] = '\0';
    while (j < i)
    {
        result[j] = f(j, s[j]);
        j++;
    }
    return (result);
}
