#include <stdlib.h>
#include <string.h>

void    ft_strdel(void **as)
{
    free (*as);
    *as = NULL;
}
