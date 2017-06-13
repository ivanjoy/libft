#include <stdlib.h>
#include <string.h>

static unsigned int ft_strlen(const char *s)
{
    unsigned int    i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char                *ft_strmap(char const *s, char (*f)(char))
{
    char            *str;
    unsigned int    i;
    unsigned int    j;

    i = ft_strlen(s);
    j = 0;
    str = (char *)malloc(i + 1);
    str[i] = '\0';
    while (j < i)
    {
        str[j] = f(s[j]);
        j++;
    }
    return (str);
}
