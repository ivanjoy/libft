#include <string.h>
#include <stdlib.h>

char    *ft_strnew(size_t size)
{
    char    *string;
    size_t  i;

    i = 0;
    string = (char *)malloc(size);
    if(string == NULL)
        return (string);
    while (i < size)
    {
        string[i] = '\0';
        i++;
    }
    return (string);
}
