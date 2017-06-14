#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_memdel(void **ap);

int		main()
{
    printf("The function is going to create a buffer and then erase it.\n");
    char    *str = (char *)malloc(5);
    printf("The address that the pointer str points to is: %p\n", str);
    ft_memdel((void **)&str);
    printf("The address that the pointer str points to is now: %p\n", str);
	return (0);
}
