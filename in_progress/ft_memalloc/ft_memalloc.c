#include <string.h>
#include <stdlib.h>

void    *ft_memalloc(size_t size)
{
    void    *container;

    container = malloc(size);
    return (container);
}
