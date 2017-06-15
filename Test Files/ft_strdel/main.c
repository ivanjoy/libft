#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_strdel(void **as);

int		main()
{
    printf("The function will take a String, free the memory, and set the pointer to NULL.\n");
    char *str = (char *)malloc(8);
    printf("The test string is: %s and the address is %p\n", str, str);
    ft_strdel((void **)(&str));
    printf("The test string is now: %s and the address is %p\n", str, str);
	return (0);
}
